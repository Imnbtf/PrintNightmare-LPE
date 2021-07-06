

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for ms-par.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>
#include"ms-par.h"


#define TYPE_FORMAT_STRING_SIZE   3009                              
#define PROC_FORMAT_STRING_SIZE   4429                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Dpar_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Dpar_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dpar_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Dpar_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Dpar_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Dpar_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ms2Dpar_MIDL_TYPE_FORMAT_STRING ms2Dpar__MIDL_TypeFormatString;
extern const ms2Dpar_MIDL_PROC_FORMAT_STRING ms2Dpar__MIDL_ProcFormatString;
extern const ms2Dpar_MIDL_EXPR_FORMAT_STRING ms2Dpar__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: IRemoteWinspool, ver. 1.0,
   GUID={0x76F03F96,0xCDFD,0x44fc,{0xA2,0x2C,0x64,0x95,0x0A,0x00,0x12,0x09}} */



static const RPC_CLIENT_INTERFACE IRemoteWinspool___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x76F03F96,0xCDFD,0x44fc,{0xA2,0x2C,0x64,0x95,0x0A,0x00,0x12,0x09}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE IRemoteWinspool_v1_0_c_ifspec = (RPC_IF_HANDLE)& IRemoteWinspool___RpcClientInterface;

extern const MIDL_STUB_DESC IRemoteWinspool_StubDesc;

static RPC_BINDING_HANDLE IRemoteWinspool__MIDL_AutoBindHandle;


DWORD RpcAsyncOpenPrinter( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[0],
                  hRemoteBinding,
                  pPrinterName,
                  pHandle,
                  pDatatype,
                  pDevModeContainer,
                  AccessRequired,
                  pClientInfo);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPrinter( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo,
    /* [out] */ PRINTER_HANDLE *pHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[72],
                  hRemoteBinding,
                  pName,
                  pPrinterContainer,
                  pDevModeContainer,
                  pSecurityContainer,
                  pClientInfo,
                  pHandle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [unique][in] */ JOB_CONTAINER *pJobContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[144],
                  hPrinter,
                  JobId,
                  pJobContainer,
                  Command);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[206],
                  hPrinter,
                  JobId,
                  Level,
                  pJob,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumJobs( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD FirstJob,
    /* [in] */ DWORD NoJobs,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[280],
                  hPrinter,
                  FirstJob,
                  NoJobs,
                  Level,
                  pJob,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pAddJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[366],
                  hPrinter,
                  Level,
                  pAddJob,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncScheduleJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[434],
                  hPrinter,
                  JobId);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[484],
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[528],
                  hPrinter,
                  pPrinterContainer,
                  pDevModeContainer,
                  pSecurityContainer,
                  Command);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrinter,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[596],
                  hPrinter,
                  Level,
                  pPrinter,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[664],
                  hPrinter,
                  pDocInfoContainer,
                  pJobId);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncStartPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[720],
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ unsigned char *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[764],
                  hPrinter,
                  pBuf,
                  cbBuf,
                  pcWritten);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEndPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[826],
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[870],
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAbortPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[914],
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[958],
                  hPrinter,
                  pValueName,
                  pType,
                  pData,
                  nSize,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1032],
                  hPrinter,
                  pKeyName,
                  pValueName,
                  pType,
                  pData,
                  nSize,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ unsigned char *pData,
    /* [in] */ DWORD cbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1112],
                  hPrinter,
                  pValueName,
                  Type,
                  pData,
                  cbData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ unsigned char *pData,
    /* [in] */ DWORD cbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1180],
                  hPrinter,
                  pKeyName,
                  pValueName,
                  Type,
                  pData,
                  cbData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE *phPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1254],
                  phPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1298],
                  hPrinter,
                  pFormInfoContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeleteForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1348],
                  hPrinter,
                  pFormName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1398],
                  hPrinter,
                  pFormName,
                  Level,
                  pForm,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1472],
                  hPrinter,
                  pFormName,
                  pFormInfoContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumForms( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1528],
                  hPrinter,
                  Level,
                  pForm,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinterDriver( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [in] */ DWORD dwClientMajorVersion,
    /* [in] */ DWORD dwClientMinorVersion,
    /* [out] */ DWORD *pdwServerMaxVersion,
    /* [out] */ DWORD *pdwServerMinVersion)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1602],
                  hPrinter,
                  pEnvironment,
                  Level,
                  pDriver,
                  cbBuf,
                  pcbNeeded,
                  dwClientMajorVersion,
                  dwClientMinorVersion,
                  pdwServerMaxVersion,
                  pdwServerMinVersion);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwIndex,
    /* [size_is][out] */ wchar_t *pValueName,
    /* [in] */ DWORD cbValueName,
    /* [out] */ DWORD *pcbValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD cbData,
    /* [out] */ DWORD *pcbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1700],
                  hPrinter,
                  dwIndex,
                  pValueName,
                  cbValueName,
                  pcbValueName,
                  pType,
                  pData,
                  cbData,
                  pcbData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ unsigned char *pEnumValues,
    /* [in] */ DWORD cbEnumValues,
    /* [out] */ DWORD *pcbEnumValues,
    /* [out] */ DWORD *pnEnumValues)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1792],
                  hPrinter,
                  pKeyName,
                  pEnumValues,
                  cbEnumValues,
                  pcbEnumValues,
                  pnEnumValues);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ wchar_t *pSubkey,
    /* [in] */ DWORD cbSubkey,
    /* [out] */ DWORD *pcbSubkey)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1866],
                  hPrinter,
                  pKeyName,
                  pSubkey,
                  cbSubkey,
                  pcbSubkey);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1934],
                  hPrinter,
                  pValueName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[1984],
                  hPrinter,
                  pKeyName,
                  pValueName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2040],
                  hPrinter,
                  pKeyName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncXcvData( 
    /* [in] */ PRINTER_HANDLE hXcv,
    /* [string][in] */ const wchar_t *pszDataName,
    /* [size_is][in] */ unsigned char *pInputData,
    /* [in] */ DWORD cbInputData,
    /* [size_is][out] */ unsigned char *pOutputData,
    /* [in] */ DWORD cbOutputData,
    /* [out] */ DWORD *pcbOutputNeeded,
    /* [out][in] */ DWORD *pdwStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2090],
                  hXcv,
                  pszDataName,
                  pInputData,
                  cbInputData,
                  pOutputData,
                  cbOutputData,
                  pcbOutputNeeded,
                  pdwStatus);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSendRecvBidiData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ const wchar_t *pAction,
    /* [in] */ RPC_BIDI_REQUEST_CONTAINER *pReqData,
    /* [out] */ RPC_BIDI_RESPONSE_CONTAINER **ppRespData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2176],
                  hPrinter,
                  pAction,
                  pReqData,
                  ppRespData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncCreatePrinterIC( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [out] */ GDI_HANDLE *pHandle,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2238],
                  hPrinter,
                  pHandle,
                  pDevModeContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncPlayGdiScriptOnPrinterIC( 
    /* [in] */ GDI_HANDLE hPrinterIC,
    /* [size_is][in] */ unsigned char *pIn,
    /* [in] */ DWORD cIn,
    /* [size_is][out] */ unsigned char *pOut,
    /* [in] */ DWORD cOut,
    /* [in] */ DWORD ul)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2294],
                  hPrinterIC,
                  pIn,
                  cIn,
                  pOut,
                  cOut,
                  ul);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterIC( 
    /* [out][in] */ GDI_HANDLE *phPrinterIC)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2368],
                  phPrinterIC);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinters( 
    /* [in] */ handle_t hRemoteBinding,
    /* [in] */ DWORD Flags,
    /* [unique][string][in] */ wchar_t *Name,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2412],
                  hRemoteBinding,
                  Flags,
                  Name,
                  Level,
                  pPrinterEnum,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPrinterDriver( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2490],
                  hRemoteBinding,
                  pName,
                  pDriverContainer,
                  dwFileCopyFlags);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterDrivers( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2544],
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pDrivers,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinterDriverDirectory( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDriverDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2622],
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pDriverDirectory,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterDriver( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2694],
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  pDriverName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterDriverEx( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName,
    /* [in] */ DWORD dwDeleteFlag,
    /* [in] */ DWORD dwVersionNum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2748],
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  pDriverName,
                  dwDeleteFlag,
                  dwVersionNum);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPrintProcessor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPathName,
    /* [string][in] */ wchar_t *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2814],
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  pPathName,
                  pPrintProcessorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrintProcessors( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrintProcessorInfo,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2874],
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pPrintProcessorInfo,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrintProcessorDirectory( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrintProcessorDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[2952],
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pPrintProcessorDirectory,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPorts( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPort,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3024],
                  hRemoteBinding,
                  pName,
                  Level,
                  pPort,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumMonitors( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pMonitor,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3096],
                  hRemoteBinding,
                  pName,
                  Level,
                  pMonitor,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPort( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ PORT_CONTAINER *pPortContainer,
    /* [in] */ PORT_VAR_CONTAINER *pPortVarContainer,
    /* [string][in] */ wchar_t *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3168],
                  hRemoteBinding,
                  pName,
                  pPortContainer,
                  pPortVarContainer,
                  pMonitorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPort( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [unique][string][in] */ wchar_t *pPortName,
    /* [in] */ PORT_CONTAINER *pPortContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3228],
                  hRemoteBinding,
                  pName,
                  pPortName,
                  pPortContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddMonitor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [in] */ MONITOR_CONTAINER *pMonitorContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3282],
                  hRemoteBinding,
                  Name,
                  pMonitorContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeleteMonitor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3330],
                  hRemoteBinding,
                  Name,
                  pEnvironment,
                  pMonitorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrintProcessor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3384],
                  hRemoteBinding,
                  Name,
                  pEnvironment,
                  pPrintProcessorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrintProcessorDatatypes( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pPrintProcessorName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDatatypes,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3438],
                  hRemoteBinding,
                  pName,
                  pPrintProcessorName,
                  Level,
                  pDatatypes,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPerMachineConnection( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [string][in] */ const wchar_t *pPrinterName,
    /* [string][in] */ const wchar_t *pPrintServer,
    /* [string][in] */ const wchar_t *pProvider)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3516],
                  hRemoteBinding,
                  pServer,
                  pPrinterName,
                  pPrintServer,
                  pProvider);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePerMachineConnection( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [string][in] */ const wchar_t *pPrinterName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3576],
                  hRemoteBinding,
                  pServer,
                  pPrinterName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPerMachineConnections( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [size_is][unique][out][in] */ unsigned char *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3624],
                  hRemoteBinding,
                  pServer,
                  pPrinterEnum,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


HRESULT RpcSyncRegisterForRemoteNotifications( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ RpcPrintPropertiesCollection *pNotifyFilter,
    /* [out] */ RMTNTFY_HANDLE *phRpcHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3690],
                  hPrinter,
                  pNotifyFilter,
                  phRpcHandle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcSyncUnRegisterForRemoteNotifications( 
    /* [out][in] */ RMTNTFY_HANDLE *phRpcHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3746],
                  phRpcHandle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcSyncRefreshRemoteNotifications( 
    /* [in] */ RMTNTFY_HANDLE hRpcHandle,
    /* [in] */ RpcPrintPropertiesCollection *pNotifyFilter,
    /* [out] */ RpcPrintPropertiesCollection **ppNotifyData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3790],
                  hRpcHandle,
                  pNotifyFilter,
                  ppNotifyData);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncGetRemoteNotifications( 
    /* [in] */ RMTNTFY_HANDLE hRpcHandle,
    /* [out] */ RpcPrintPropertiesCollection **ppNotifyData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3846],
                  hRpcHandle,
                  ppNotifyData);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncInstallPrinterDriverFromPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [unique][string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszDriverName,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD dwFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3896],
                  hRemoteBinding,
                  pszServer,
                  pszInfPath,
                  pszDriverName,
                  pszEnvironment,
                  dwFlags);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncUploadPrinterDriverPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD dwFlags,
    /* [size_is][unique][out][in] */ wchar_t *pszDestInfPath,
    /* [out][in] */ DWORD *pcchDestInfPath)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[3962],
                  hRemoteBinding,
                  pszServer,
                  pszInfPath,
                  pszEnvironment,
                  dwFlags,
                  pszDestInfPath,
                  pcchDestInfPath);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncGetCorePrinterDrivers( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD cchCoreDrivers,
    /* [size_is][in] */ const wchar_t *pszzCoreDriverDependencies,
    /* [in] */ DWORD cCorePrinterDrivers,
    /* [size_is][out] */ CORE_PRINTER_DRIVER *pCorePrinterDrivers)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[4034],
                  hRemoteBinding,
                  pszServer,
                  pszEnvironment,
                  cchCoreDrivers,
                  pszzCoreDriverDependencies,
                  cCorePrinterDrivers,
                  pCorePrinterDrivers);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncCorePrinterDriverInstalled( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ GUID CoreDriverGUID,
    /* [in] */ FILETIME ftDriverDate,
    /* [in] */ DWORDLONG dwlDriverVersion,
    /* [out] */ int *pbDriverInstalled)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[4106],
                  hRemoteBinding,
                  pszServer,
                  pszEnvironment,
                  CoreDriverGUID,
                  ftDriverDate,
                  dwlDriverVersion,
                  pbDriverInstalled);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncGetPrinterDriverPackagePath( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [unique][string][in] */ const wchar_t *pszLanguage,
    /* [string][in] */ const wchar_t *pszPackageID,
    /* [size_is][unique][out][in] */ wchar_t *pszDriverPackageCab,
    /* [in] */ DWORD cchDriverPackageCab,
    /* [out] */ DWORD *pcchRequiredSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[4178],
                  hRemoteBinding,
                  pszServer,
                  pszEnvironment,
                  pszLanguage,
                  pszPackageID,
                  pszDriverPackageCab,
                  cchDriverPackageCab,
                  pcchRequiredSize);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncDeletePrinterDriverPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszEnvironment)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[4256],
                  hRemoteBinding,
                  pszServer,
                  pszInfPath,
                  pszEnvironment);
    return ( HRESULT  )_RetVal.Simple;
    
}


DWORD RpcAsyncReadPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][out] */ unsigned char *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcNoBytesRead)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[4310],
                  hPrinter,
                  pBuf,
                  cbBuf,
                  pcNoBytesRead);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncResetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IRemoteWinspool_StubDesc,
                  (PFORMAT_STRING) &ms2Dpar__MIDL_ProcFormatString.Format[4372],
                  hPrinter,
                  pDatatype,
                  pDevModeContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


/* Standard interface: __MIDL_itf_ms2Dpar_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

extern const EXPR_EVAL ExprEvalRoutines[];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ms2Dpar_MIDL_PROC_FORMAT_STRING ms2Dpar__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcAsyncOpenPrinter */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 20 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 30 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 36 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 38 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pDatatype */

/* 42 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 44 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 48 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 50 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 52 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter AccessRequired */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pClientInfo */

/* 60 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 62 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 64 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPrinter */

/* 72 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x1 ),	/* 1 */
/* 80 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 82 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x40 ),	/* 64 */
/* 90 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 92 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterContainer */

/* 108 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x2ce ),	/* Type Offset=718 */

	/* Parameter pDevModeContainer */

/* 114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 116 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter pSecurityContainer */

/* 120 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 122 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 124 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Parameter pClientInfo */

/* 126 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 128 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 130 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter pHandle */

/* 132 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 134 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 136 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetJob */

/* 144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x2 ),	/* 2 */
/* 152 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 154 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 156 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x34 ),	/* 52 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 166 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 176 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 178 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 180 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter JobId */

/* 182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 184 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJobContainer */

/* 188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 192 */	NdrFcShort( 0x2f6 ),	/* Type Offset=758 */

	/* Parameter Command */

/* 194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 196 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 202 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetJob */

/* 206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x3 ),	/* 3 */
/* 214 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 216 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 218 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 220 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x3c ),	/* 60 */
/* 224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 226 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 228 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 238 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 242 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter JobId */

/* 244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 252 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 256 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 258 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 260 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Parameter cbBuf */

/* 262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 264 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 270 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 276 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumJobs */

/* 280 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x4 ),	/* 4 */
/* 288 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 290 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 292 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 294 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 296 */	NdrFcShort( 0x44 ),	/* 68 */
/* 298 */	NdrFcShort( 0x40 ),	/* 64 */
/* 300 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 302 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 312 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 314 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 316 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter FirstJob */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NoJobs */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 336 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 338 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 340 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Parameter cbBuf */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 350 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 356 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddJob */

/* 366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x5 ),	/* 5 */
/* 374 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 376 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 378 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0x34 ),	/* 52 */
/* 384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 386 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 388 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 398 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 400 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 402 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter Level */

/* 404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 406 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddJob */

/* 410 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 412 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 414 */	NdrFcShort( 0x44e ),	/* Type Offset=1102 */

	/* Parameter cbBuf */

/* 416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 418 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 424 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 430 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncScheduleJob */

/* 434 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x6 ),	/* 6 */
/* 442 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 444 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 446 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 448 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 450 */	NdrFcShort( 0x2c ),	/* 44 */
/* 452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 456 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 466 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 468 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 470 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter JobId */

/* 472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 474 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 480 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinter */

/* 484 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x7 ),	/* 7 */
/* 492 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 494 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 496 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 498 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 500 */	NdrFcShort( 0x24 ),	/* 36 */
/* 502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 506 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 516 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 518 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 520 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPrinter */

/* 528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 538 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 540 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 542 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 544 */	NdrFcShort( 0x2c ),	/* 44 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 550 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 560 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 562 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 564 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pPrinterContainer */

/* 566 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 570 */	NdrFcShort( 0x2ce ),	/* Type Offset=718 */

	/* Parameter pDevModeContainer */

/* 572 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 574 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 576 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter pSecurityContainer */

/* 578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 580 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 582 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Parameter Command */

/* 584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 586 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 592 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinter */

/* 596 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x9 ),	/* 9 */
/* 604 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 606 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 608 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 610 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 612 */	NdrFcShort( 0x34 ),	/* 52 */
/* 614 */	NdrFcShort( 0x24 ),	/* 36 */
/* 616 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 618 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 628 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 630 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 632 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter Level */

/* 634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 636 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinter */

/* 640 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 642 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 644 */	NdrFcShort( 0x44e ),	/* Type Offset=1102 */

	/* Parameter cbBuf */

/* 646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 648 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 654 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 660 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncStartDocPrinter */

/* 664 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0xa ),	/* 10 */
/* 672 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 674 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 676 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 682 */	NdrFcShort( 0x24 ),	/* 36 */
/* 684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 686 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 696 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 698 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 700 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pDocInfoContainer */

/* 702 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 704 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 706 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter pJobId */

/* 708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncStartPagePrinter */

/* 720 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xb ),	/* 11 */
/* 728 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 730 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 732 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 734 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0x24 ),	/* 36 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 742 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 752 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 754 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 756 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Return value */

/* 758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncWritePrinter */

/* 764 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0xc ),	/* 12 */
/* 772 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 774 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 776 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 778 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 780 */	NdrFcShort( 0x2c ),	/* 44 */
/* 782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 786 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 796 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 798 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 800 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pBuf */

/* 802 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 804 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 806 */	NdrFcShort( 0x4a8 ),	/* Type Offset=1192 */

	/* Parameter cbBuf */

/* 808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 810 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 816 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 822 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEndPagePrinter */

/* 826 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0xd ),	/* 13 */
/* 834 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 836 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 838 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 840 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 842 */	NdrFcShort( 0x24 ),	/* 36 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 848 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 858 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 860 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 862 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEndDocPrinter */

/* 870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xe ),	/* 14 */
/* 878 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 880 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 882 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 884 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 886 */	NdrFcShort( 0x24 ),	/* 36 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 892 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 902 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 904 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 906 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Return value */

/* 908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 910 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAbortPrinter */

/* 914 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0xf ),	/* 15 */
/* 922 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 924 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 926 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 928 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 930 */	NdrFcShort( 0x24 ),	/* 36 */
/* 932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 936 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 946 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 948 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 950 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterData */

/* 958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x10 ),	/* 16 */
/* 966 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 968 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 970 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 972 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 974 */	NdrFcShort( 0x2c ),	/* 44 */
/* 976 */	NdrFcShort( 0x40 ),	/* 64 */
/* 978 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 980 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 990 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 992 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 994 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pValueName */

/* 996 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pType */

/* 1002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1004 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1008 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1010 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1012 */	NdrFcShort( 0x42e ),	/* Type Offset=1070 */

	/* Parameter nSize */

/* 1014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1016 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1022 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDataEx */

/* 1032 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1040 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1042 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1044 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1046 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1048 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1050 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1054 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1064 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1066 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1068 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pKeyName */

/* 1070 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1074 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pValueName */

/* 1076 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1078 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1080 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pType */

/* 1082 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1084 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1088 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1090 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1092 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter nSize */

/* 1094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1096 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1102 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1108 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPrinterData */

/* 1112 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1120 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1122 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1124 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1126 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1128 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1134 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1144 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1148 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pValueName */

/* 1150 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1152 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1154 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter Type */

/* 1156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1158 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1162 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1164 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1166 */	NdrFcShort( 0x42e ),	/* Type Offset=1070 */

	/* Parameter cbData */

/* 1168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1170 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1176 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPrinterDataEx */

/* 1180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1188 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1190 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1192 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1194 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1196 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1202 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1212 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1214 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1216 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pKeyName */

/* 1218 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1222 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pValueName */

/* 1224 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1228 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter Type */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1236 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1238 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1240 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter cbData */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncClosePrinter */

/* 1254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1262 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1264 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1266 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1268 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1270 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1272 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1276 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinter */

/* 1286 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1288 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1290 */	NdrFcShort( 0x4c4 ),	/* Type Offset=1220 */

	/* Return value */

/* 1292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1294 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddForm */

/* 1298 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1306 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1308 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1310 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1312 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1318 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1320 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1330 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1332 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1334 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pFormInfoContainer */

/* 1336 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1338 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1340 */	NdrFcShort( 0x548 ),	/* Type Offset=1352 */

	/* Return value */

/* 1342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1344 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeleteForm */

/* 1348 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1356 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1358 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1360 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1364 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1380 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1382 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1384 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pFormName */

/* 1386 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1390 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetForm */

/* 1398 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1406 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1408 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1410 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1412 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1414 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1416 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1418 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1420 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1430 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1432 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1434 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pFormName */

/* 1436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1440 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter Level */

/* 1442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1444 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 1448 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1450 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1452 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Parameter cbBuf */

/* 1454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1456 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1460 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1462 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1468 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetForm */

/* 1472 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1480 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1482 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1484 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1486 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1492 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1494 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1504 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1506 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1508 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pFormName */

/* 1510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1514 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pFormInfoContainer */

/* 1516 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1518 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1520 */	NdrFcShort( 0x548 ),	/* Type Offset=1352 */

	/* Return value */

/* 1522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1524 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumForms */

/* 1528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1536 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1538 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1540 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1542 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1544 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1546 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1548 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1550 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1560 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1562 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1564 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter Level */

/* 1566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1568 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 1572 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1574 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1576 */	NdrFcShort( 0x44e ),	/* Type Offset=1102 */

	/* Parameter cbBuf */

/* 1578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1580 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1586 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 1590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1592 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1598 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDriver */

/* 1602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1610 */	NdrFcShort( 0x58 ),	/* x86 Stack size/offset = 88 */
/* 1612 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1614 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1618 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1620 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1622 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 1624 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1634 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1636 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1638 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pEnvironment */

/* 1640 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1642 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1644 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1648 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 1652 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1654 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1656 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Parameter cbBuf */

/* 1658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1660 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1664 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1666 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMajorVersion */

/* 1670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1672 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMinorVersion */

/* 1676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1678 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMaxVersion */

/* 1682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1684 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMinVersion */

/* 1688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1690 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 1692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1696 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 1698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterData */

/* 1700 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1708 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 1710 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1712 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1714 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1716 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1718 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1720 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 1722 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1732 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1734 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1736 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter dwIndex */

/* 1738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1740 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValueName */

/* 1744 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1746 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1748 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter cbValueName */

/* 1750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1752 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbValueName */

/* 1756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1758 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 1762 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1764 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1768 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1770 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1772 */	NdrFcShort( 0x56c ),	/* Type Offset=1388 */

	/* Parameter cbData */

/* 1774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1776 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbData */

/* 1780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1782 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1788 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 1790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterDataEx */

/* 1792 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1800 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1802 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1804 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1806 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1808 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1810 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1812 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1814 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1824 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1826 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1828 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pKeyName */

/* 1830 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1832 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1834 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pEnumValues */

/* 1836 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1838 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1840 */	NdrFcShort( 0x452 ),	/* Type Offset=1106 */

	/* Parameter cbEnumValues */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbEnumValues */

/* 1848 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1850 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnEnumValues */

/* 1854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1856 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterKey */

/* 1866 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1874 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 1876 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1878 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1880 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1882 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1888 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1898 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1900 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1902 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pKeyName */

/* 1904 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1908 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pSubkey */

/* 1910 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1914 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter cbSubkey */

/* 1916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1918 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbSubkey */

/* 1922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1924 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1930 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterData */

/* 1934 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1942 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1944 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1946 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1948 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1956 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1966 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1968 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1970 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pValueName */

/* 1972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1976 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 1978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDataEx */

/* 1984 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1992 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1994 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1996 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 1998 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2000 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2006 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2016 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2018 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2020 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pKeyName */

/* 2022 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pValueName */

/* 2028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2030 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2032 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 2034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2036 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterKey */

/* 2040 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2048 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2050 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2052 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2054 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2056 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2062 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2072 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2074 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2076 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pKeyName */

/* 2078 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2080 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2082 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 2084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2086 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncXcvData */

/* 2090 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2098 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 2100 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2102 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2104 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2106 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2108 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2110 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2112 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hXcv */

/* 2122 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2124 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2126 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pszDataName */

/* 2128 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2130 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2132 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pInputData */

/* 2134 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2136 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2138 */	NdrFcShort( 0x452 ),	/* Type Offset=1106 */

	/* Parameter cbInputData */

/* 2140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2142 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOutputData */

/* 2146 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2148 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2150 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter cbOutputData */

/* 2152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2154 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbOutputNeeded */

/* 2158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2160 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwStatus */

/* 2164 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2166 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2172 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSendRecvBidiData */

/* 2176 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2182 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2184 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2186 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2188 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2190 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2192 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2198 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2208 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2210 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2212 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pAction */

/* 2214 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2216 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2218 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pReqData */

/* 2220 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2222 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2224 */	NdrFcShort( 0x60e ),	/* Type Offset=1550 */

	/* Parameter ppRespData */

/* 2226 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2228 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2230 */	NdrFcShort( 0x61c ),	/* Type Offset=1564 */

	/* Return value */

/* 2232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2234 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncCreatePrinterIC */

/* 2238 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2246 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2248 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2250 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2254 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2256 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2258 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2260 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2270 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2272 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2274 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pHandle */

/* 2276 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2278 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2280 */	NdrFcShort( 0x660 ),	/* Type Offset=1632 */

	/* Parameter pDevModeContainer */

/* 2282 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2284 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2286 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 2288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2290 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncPlayGdiScriptOnPrinterIC */

/* 2294 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2302 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2304 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2306 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2308 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2310 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2314 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2316 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinterIC */

/* 2326 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2328 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2330 */	NdrFcShort( 0x664 ),	/* Type Offset=1636 */

	/* Parameter pIn */

/* 2332 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2336 */	NdrFcShort( 0x4a8 ),	/* Type Offset=1192 */

	/* Parameter cIn */

/* 2338 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2340 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOut */

/* 2344 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2346 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2348 */	NdrFcShort( 0x42e ),	/* Type Offset=1070 */

	/* Parameter cOut */

/* 2350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2352 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ul */

/* 2356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2358 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2364 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterIC */

/* 2368 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2376 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2378 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2380 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2382 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2384 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2386 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2390 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinterIC */

/* 2400 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2402 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2404 */	NdrFcShort( 0x66c ),	/* Type Offset=1644 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinters */

/* 2412 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2420 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 2422 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2424 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2426 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2428 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2430 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2432 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 2442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2444 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Name */

/* 2448 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2450 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2452 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2456 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinterEnum */

/* 2460 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2462 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2464 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Parameter cbBuf */

/* 2466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2468 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2474 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2480 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPrinterDriver */

/* 2490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2498 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2500 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2508 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2510 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2520 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2524 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 2526 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2528 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2530 */	NdrFcShort( 0x874 ),	/* Type Offset=2164 */

	/* Parameter dwFileCopyFlags */

/* 2532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2534 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2540 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterDrivers */

/* 2544 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2552 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 2554 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2556 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2558 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2560 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2562 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2564 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2574 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2576 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2578 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2580 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2584 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2588 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDrivers */

/* 2592 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2594 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2596 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Parameter cbBuf */

/* 2598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2600 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2606 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2610 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2612 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2618 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDriverDirectory */

/* 2622 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2630 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2632 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2634 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2636 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2638 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2640 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2642 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2652 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2654 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2656 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2658 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2660 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2662 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2666 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriverDirectory */

/* 2670 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2672 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2674 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Parameter cbBuf */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2684 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDriver */

/* 2694 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2702 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2704 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2706 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2714 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2724 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2726 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2728 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2730 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2732 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2734 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pDriverName */

/* 2736 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2738 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2740 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 2742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2744 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDriverEx */

/* 2748 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2756 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2758 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2760 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2762 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2766 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2768 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2778 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2782 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2784 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2786 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2788 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pDriverName */

/* 2790 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2792 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2794 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter dwDeleteFlag */

/* 2796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2798 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwVersionNum */

/* 2802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2804 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPrintProcessor */

/* 2814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2822 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2824 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2826 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2834 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2844 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2846 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2848 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2850 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2852 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2854 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pPathName */

/* 2856 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2858 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2860 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pPrintProcessorName */

/* 2862 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2864 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2866 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrintProcessors */

/* 2874 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2882 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 2884 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2886 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2888 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2890 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2892 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2894 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2904 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2906 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2908 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2910 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2912 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2914 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2918 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorInfo */

/* 2922 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2924 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 2926 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Parameter cbBuf */

/* 2928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2930 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2936 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2940 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2942 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2948 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrintProcessorDirectory */

/* 2952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2960 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 2962 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2964 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 2966 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2970 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2972 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 2974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2982 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2984 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2986 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2988 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2990 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2992 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2996 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorDirectory */

/* 3000 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3002 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3004 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Parameter cbBuf */

/* 3006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3008 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3014 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3020 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPorts */

/* 3024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3032 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 3034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3036 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3040 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3042 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3044 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3054 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3056 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3058 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3062 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPort */

/* 3066 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3068 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3070 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Parameter cbBuf */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3080 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumMonitors */

/* 3096 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3104 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 3106 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3108 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3112 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3114 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3116 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3130 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMonitor */

/* 3138 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3140 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3142 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Parameter cbBuf */

/* 3144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3146 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3152 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3158 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3164 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPort */

/* 3168 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3176 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3178 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3180 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3186 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3188 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3198 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3202 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 3204 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3208 */	NdrFcShort( 0x910 ),	/* Type Offset=2320 */

	/* Parameter pPortVarContainer */

/* 3210 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3212 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3214 */	NdrFcShort( 0x924 ),	/* Type Offset=2340 */

	/* Parameter pMonitorName */

/* 3216 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3218 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3220 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 3222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3224 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPort */

/* 3228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3236 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3238 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3240 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3246 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3248 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3262 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortName */

/* 3264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3266 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3268 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 3270 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3272 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3274 */	NdrFcShort( 0x910 ),	/* Type Offset=2320 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddMonitor */

/* 3282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3290 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3294 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3300 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3302 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3312 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3314 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3316 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorContainer */

/* 3318 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3322 */	NdrFcShort( 0x982 ),	/* Type Offset=2434 */

	/* Return value */

/* 3324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3326 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeleteMonitor */

/* 3330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3338 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3342 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3350 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3360 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3364 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 3366 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3368 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3370 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorName */

/* 3372 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3374 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3376 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrintProcessor */

/* 3384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3392 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3394 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3402 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3404 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3418 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 3420 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3422 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3424 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 3426 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3428 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3430 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 3432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3434 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrintProcessorDatatypes */

/* 3438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3446 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 3448 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3450 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3454 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3456 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3458 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3460 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3472 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 3474 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3476 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3478 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3482 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDatatypes */

/* 3486 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3488 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3490 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */

	/* Parameter cbBuf */

/* 3492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3494 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3500 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3506 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3512 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPerMachineConnection */

/* 3516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3524 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3526 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3528 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3536 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 3546 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3550 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 3552 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3554 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3556 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pPrintServer */

/* 3558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3560 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3562 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pProvider */

/* 3564 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3566 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3568 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 3570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3572 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePerMachineConnection */

/* 3576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3584 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3586 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3594 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3596 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 3606 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3610 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 3612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3616 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 3618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPerMachineConnections */

/* 3624 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3632 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3634 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3636 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3640 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3642 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3644 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 3654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3658 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterEnum */

/* 3660 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3662 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3664 */	NdrFcShort( 0x44e ),	/* Type Offset=1102 */

	/* Parameter cbBuf */

/* 3666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3668 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3674 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3680 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSyncRegisterForRemoteNotifications */

/* 3690 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3698 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3700 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3702 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3704 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3706 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3708 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3712 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3724 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3726 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pNotifyFilter */

/* 3728 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3730 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3732 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Parameter phRpcHandle */

/* 3734 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3736 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3738 */	NdrFcShort( 0xb30 ),	/* Type Offset=2864 */

	/* Return value */

/* 3740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3742 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSyncUnRegisterForRemoteNotifications */

/* 3746 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3754 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3756 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 3758 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3760 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3762 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3764 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3766 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3768 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phRpcHandle */

/* 3778 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 3780 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3782 */	NdrFcShort( 0xb38 ),	/* Type Offset=2872 */

	/* Return value */

/* 3784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3786 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSyncRefreshRemoteNotifications */

/* 3790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3798 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3800 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3802 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3804 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3806 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3810 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3812 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hRpcHandle */

/* 3822 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3824 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3826 */	NdrFcShort( 0xb3c ),	/* Type Offset=2876 */

	/* Parameter pNotifyFilter */

/* 3828 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3832 */	NdrFcShort( 0xb18 ),	/* Type Offset=2840 */

	/* Parameter ppNotifyData */

/* 3834 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3836 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3838 */	NdrFcShort( 0xb40 ),	/* Type Offset=2880 */

	/* Return value */

/* 3840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3842 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetRemoteNotifications */

/* 3846 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3854 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3856 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3858 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3860 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3862 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3866 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3868 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hRpcHandle */

/* 3878 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3880 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3882 */	NdrFcShort( 0xb3c ),	/* Type Offset=2876 */

	/* Parameter ppNotifyData */

/* 3884 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3888 */	NdrFcShort( 0xb40 ),	/* Type Offset=2880 */

	/* Return value */

/* 3890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3892 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncInstallPrinterDriverFromPackage */

/* 3896 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3902 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3904 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 3906 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3908 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3914 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3916 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 3926 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3928 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3930 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszInfPath */

/* 3932 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3934 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3936 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszDriverName */

/* 3938 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3940 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 3942 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pszEnvironment */

/* 3944 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3946 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 3948 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter dwFlags */

/* 3950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3952 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 3954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3958 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncUploadPrinterDriverPackage */

/* 3962 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3970 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 3972 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3974 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 3976 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3978 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3980 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3982 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 3992 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3994 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3996 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszInfPath */

/* 3998 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4000 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4002 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pszEnvironment */

/* 4004 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4006 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4008 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter dwFlags */

/* 4010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4012 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszDestInfPath */

/* 4016 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4018 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4020 */	NdrFcShort( 0xb48 ),	/* Type Offset=2888 */

	/* Parameter pcchDestInfPath */

/* 4022 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4024 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4030 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetCorePrinterDrivers */

/* 4034 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4040 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4042 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4044 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4054 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4064 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4068 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 4070 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4072 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4074 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter cchCoreDrivers */

/* 4076 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4078 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszzCoreDriverDependencies */

/* 4082 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4084 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4086 */	NdrFcShort( 0xb5c ),	/* Type Offset=2908 */

	/* Parameter cCorePrinterDrivers */

/* 4088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4090 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCorePrinterDrivers */

/* 4094 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4096 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4098 */	NdrFcShort( 0xb96 ),	/* Type Offset=2966 */

	/* Return value */

/* 4100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4102 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncCorePrinterDriverInstalled */

/* 4106 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x41 ),	/* 65 */
/* 4114 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4116 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4120 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4122 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4126 */	0xa,		/* 10 */
			0x81,		/* Ext Flags:  new corr desc, has big byval param */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4136 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4140 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 4142 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4144 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4146 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter CoreDriverGUID */

/* 4148 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4150 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4152 */	NdrFcShort( 0xb72 ),	/* Type Offset=2930 */

	/* Parameter ftDriverDate */

/* 4154 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 4156 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4158 */	NdrFcShort( 0x4ec ),	/* Type Offset=1260 */

	/* Parameter dwlDriverVersion */

/* 4160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4162 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4164 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pbDriverInstalled */

/* 4166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4168 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4174 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDriverPackagePath */

/* 4178 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4184 */	NdrFcShort( 0x42 ),	/* 66 */
/* 4186 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 4188 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4190 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4194 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4198 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4210 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4212 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 4214 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4216 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4218 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pszLanguage */

/* 4220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4222 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4224 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszPackageID */

/* 4226 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4228 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4230 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pszDriverPackageCab */

/* 4232 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4234 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4236 */	NdrFcShort( 0xbb0 ),	/* Type Offset=2992 */

	/* Parameter cchDriverPackageCab */

/* 4238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4240 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 4242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchRequiredSize */

/* 4244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4246 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 4248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4252 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 4254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDriverPackage */

/* 4256 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x43 ),	/* 67 */
/* 4264 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4266 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4276 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4286 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4288 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4290 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszInfPath */

/* 4292 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4294 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4296 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Parameter pszEnvironment */

/* 4298 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4300 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4302 */	NdrFcShort( 0x4b6 ),	/* Type Offset=1206 */

	/* Return value */

/* 4304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4306 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncReadPrinter */

/* 4310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4318 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 4320 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4322 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4324 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4326 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4330 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 4332 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4342 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4344 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4346 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pBuf */

/* 4348 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4350 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4352 */	NdrFcShort( 0x4a8 ),	/* Type Offset=1192 */

	/* Parameter cbBuf */

/* 4354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNoBytesRead */

/* 4360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4362 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4368 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncResetPrinter */

/* 4372 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4378 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4380 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4382 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4384 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4386 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4392 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4394 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4404 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4406 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 4408 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pDatatype */

/* 4410 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4414 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 4416 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4418 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4420 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 4422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4424 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Dpar_MIDL_TYPE_FORMAT_STRING ms2Dpar__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x0,	/* FC_RP */
/* 16 */	NdrFcShort( 0xe ),	/* Offset= 14 (30) */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 30 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 32 */	NdrFcShort( 0x10 ),	/* 16 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x6 ),	/* Offset= 6 (42) */
/* 38 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 40 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 42 */	
			0x12, 0x0,	/* FC_UP */
/* 44 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (18) */
/* 46 */	
			0x11, 0x0,	/* FC_RP */
/* 48 */	NdrFcShort( 0x72 ),	/* Offset= 114 (162) */
/* 50 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 52 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 54 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 56 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 64 */	NdrFcLong( 0x1 ),	/* 1 */
/* 68 */	NdrFcShort( 0x10 ),	/* Offset= 16 (84) */
/* 70 */	NdrFcLong( 0x2 ),	/* 2 */
/* 74 */	NdrFcShort( 0x28 ),	/* Offset= 40 (114) */
/* 76 */	NdrFcLong( 0x3 ),	/* 3 */
/* 80 */	NdrFcShort( 0x30 ),	/* Offset= 48 (128) */
/* 82 */	NdrFcShort( 0xffff ),	/* Offset= -1 (81) */
/* 84 */	
			0x12, 0x0,	/* FC_UP */
/* 86 */	NdrFcShort( 0x2 ),	/* Offset= 2 (88) */
/* 88 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x28 ),	/* 40 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0xc ),	/* Offset= 12 (106) */
/* 96 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 98 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 100 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 102 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 104 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 106 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 108 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 110 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 112 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x12, 0x0,	/* FC_UP */
/* 116 */	NdrFcShort( 0x2 ),	/* Offset= 2 (118) */
/* 118 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* Offset= 0 (124) */
/* 126 */	0xb8,		/* FC_INT3264 */
			0x5b,		/* FC_END */
/* 128 */	
			0x12, 0x0,	/* FC_UP */
/* 130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (132) */
/* 132 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 134 */	NdrFcShort( 0x38 ),	/* 56 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x10 ),	/* Offset= 16 (154) */
/* 140 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 142 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 144 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 146 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 148 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 150 */	0x3e,		/* FC_STRUCTPAD2 */
			0xb,		/* FC_HYPER */
/* 152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 154 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 156 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 160 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 164 */	NdrFcShort( 0x10 ),	/* 16 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* Offset= 0 (168) */
/* 170 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0xff84 ),	/* Offset= -124 (50) */
/* 176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 178 */	
			0x11, 0x0,	/* FC_RP */
/* 180 */	NdrFcShort( 0x21a ),	/* Offset= 538 (718) */
/* 182 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 184 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 186 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 188 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 190 */	NdrFcShort( 0x2 ),	/* Offset= 2 (192) */
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	NdrFcShort( 0x300a ),	/* 12298 */
/* 196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x3a ),	/* Offset= 58 (258) */
/* 202 */	NdrFcLong( 0x1 ),	/* 1 */
/* 206 */	NdrFcShort( 0x78 ),	/* Offset= 120 (326) */
/* 208 */	NdrFcLong( 0x2 ),	/* 2 */
/* 212 */	NdrFcShort( 0x90 ),	/* Offset= 144 (356) */
/* 214 */	NdrFcLong( 0x3 ),	/* 3 */
/* 218 */	NdrFcShort( 0x16a ),	/* Offset= 362 (580) */
/* 220 */	NdrFcLong( 0x4 ),	/* 4 */
/* 224 */	NdrFcShort( 0x176 ),	/* Offset= 374 (598) */
/* 226 */	NdrFcLong( 0x5 ),	/* 5 */
/* 230 */	NdrFcShort( 0x18a ),	/* Offset= 394 (624) */
/* 232 */	NdrFcLong( 0x6 ),	/* 6 */
/* 236 */	NdrFcShort( 0x1a0 ),	/* Offset= 416 (652) */
/* 238 */	NdrFcLong( 0x7 ),	/* 7 */
/* 242 */	NdrFcShort( 0x1a4 ),	/* Offset= 420 (662) */
/* 244 */	NdrFcLong( 0x8 ),	/* 8 */
/* 248 */	NdrFcShort( 0x1b2 ),	/* Offset= 434 (682) */
/* 250 */	NdrFcLong( 0x9 ),	/* 9 */
/* 254 */	NdrFcShort( 0x1be ),	/* Offset= 446 (700) */
/* 256 */	NdrFcShort( 0xffff ),	/* Offset= -1 (255) */
/* 258 */	
			0x12, 0x0,	/* FC_UP */
/* 260 */	NdrFcShort( 0x10 ),	/* Offset= 16 (276) */
/* 262 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 264 */	NdrFcShort( 0x10 ),	/* 16 */
/* 266 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 268 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 270 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 272 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 274 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 276 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 278 */	NdrFcShort( 0x88 ),	/* 136 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x24 ),	/* Offset= 36 (318) */
/* 284 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 286 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 288 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 290 */	0x0,		/* 0 */
			NdrFcShort( 0xffe3 ),	/* Offset= -29 (262) */
			0x8,		/* FC_LONG */
/* 294 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 296 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 298 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 300 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 302 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 304 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 306 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 308 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 310 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 312 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 314 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 316 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 318 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 320 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 322 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 324 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 326 */	
			0x12, 0x0,	/* FC_UP */
/* 328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (330) */
/* 330 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 332 */	NdrFcShort( 0x20 ),	/* 32 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x8 ),	/* Offset= 8 (344) */
/* 338 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 340 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 342 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 344 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 346 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 348 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 350 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 352 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 354 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 356 */	
			0x12, 0x0,	/* FC_UP */
/* 358 */	NdrFcShort( 0x8c ),	/* Offset= 140 (498) */
/* 360 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 362 */	NdrFcShort( 0x40 ),	/* 64 */
/* 364 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 366 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 368 */	NdrFcShort( 0xdc ),	/* 220 */
/* 370 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 372 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (360) */
/* 374 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 376 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 378 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 380 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 382 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 384 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 386 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 388 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 390 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 392 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 394 */	NdrFcShort( 0xffde ),	/* Offset= -34 (360) */
/* 396 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 398 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 404 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 406 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 410 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 412 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 414 */	NdrFcShort( 0x6 ),	/* 6 */
/* 416 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 418 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 420 */	NdrFcShort( 0x6 ),	/* 6 */
/* 422 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (412) */
/* 426 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 428 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 430 */	NdrFcShort( 0x4 ),	/* 4 */
/* 432 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 434 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 436 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 438 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 440 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 444 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (428) */
/* 446 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 448 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 450 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (418) */
/* 452 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 454 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 460 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 462 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 464 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 466 */	NdrFcShort( 0x28 ),	/* 40 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0xc ),	/* Offset= 12 (482) */
/* 472 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 474 */	0x6,		/* FC_SHORT */
			0x40,		/* FC_STRUCTPAD4 */
/* 476 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 478 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 480 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 482 */	
			0x12, 0x0,	/* FC_UP */
/* 484 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (440) */
/* 486 */	
			0x12, 0x0,	/* FC_UP */
/* 488 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (440) */
/* 490 */	
			0x12, 0x0,	/* FC_UP */
/* 492 */	NdrFcShort( 0xffda ),	/* Offset= -38 (454) */
/* 494 */	
			0x12, 0x0,	/* FC_UP */
/* 496 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (454) */
/* 498 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 500 */	NdrFcShort( 0x88 ),	/* 136 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x18 ),	/* Offset= 24 (528) */
/* 506 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 508 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 510 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 512 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 514 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 516 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 518 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 520 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 526 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 528 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 530 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 532 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 534 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 536 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 538 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 540 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 542 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 544 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 546 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 548 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 550 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 552 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 554 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 556 */	
			0x12, 0x0,	/* FC_UP */
/* 558 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (366) */
/* 560 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 562 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 564 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 566 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 568 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 570 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 572 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 574 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 576 */	
			0x12, 0x0,	/* FC_UP */
/* 578 */	NdrFcShort( 0xff8e ),	/* Offset= -114 (464) */
/* 580 */	
			0x12, 0x0,	/* FC_UP */
/* 582 */	NdrFcShort( 0x2 ),	/* Offset= 2 (584) */
/* 584 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x4 ),	/* Offset= 4 (594) */
/* 592 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 594 */	
			0x12, 0x0,	/* FC_UP */
/* 596 */	NdrFcShort( 0xff7c ),	/* Offset= -132 (464) */
/* 598 */	
			0x12, 0x0,	/* FC_UP */
/* 600 */	NdrFcShort( 0x2 ),	/* Offset= 2 (602) */
/* 602 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 604 */	NdrFcShort( 0x18 ),	/* 24 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	NdrFcShort( 0x8 ),	/* Offset= 8 (616) */
/* 610 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 612 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 616 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 618 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 620 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 622 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 624 */	
			0x12, 0x0,	/* FC_UP */
/* 626 */	NdrFcShort( 0x2 ),	/* Offset= 2 (628) */
/* 628 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 630 */	NdrFcShort( 0x20 ),	/* 32 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0xa ),	/* Offset= 10 (644) */
/* 636 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 638 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 640 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 642 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 644 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 646 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 648 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 650 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 652 */	
			0x12, 0x0,	/* FC_UP */
/* 654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (656) */
/* 656 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 658 */	NdrFcShort( 0x4 ),	/* 4 */
/* 660 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 662 */	
			0x12, 0x0,	/* FC_UP */
/* 664 */	NdrFcShort( 0x2 ),	/* Offset= 2 (666) */
/* 666 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 668 */	NdrFcShort( 0x10 ),	/* 16 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x6 ),	/* Offset= 6 (678) */
/* 674 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 676 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 678 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 680 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 682 */	
			0x12, 0x0,	/* FC_UP */
/* 684 */	NdrFcShort( 0x2 ),	/* Offset= 2 (686) */
/* 686 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x4 ),	/* Offset= 4 (696) */
/* 694 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 696 */	
			0x12, 0x0,	/* FC_UP */
/* 698 */	NdrFcShort( 0xfeb4 ),	/* Offset= -332 (366) */
/* 700 */	
			0x12, 0x0,	/* FC_UP */
/* 702 */	NdrFcShort( 0x2 ),	/* Offset= 2 (704) */
/* 704 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x4 ),	/* Offset= 4 (714) */
/* 712 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 714 */	
			0x12, 0x0,	/* FC_UP */
/* 716 */	NdrFcShort( 0xfea2 ),	/* Offset= -350 (366) */
/* 718 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x10 ),	/* 16 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* Offset= 0 (724) */
/* 726 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 728 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 730 */	NdrFcShort( 0xfddc ),	/* Offset= -548 (182) */
/* 732 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 734 */	
			0x11, 0x0,	/* FC_RP */
/* 736 */	NdrFcShort( 0x2 ),	/* Offset= 2 (738) */
/* 738 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x6 ),	/* Offset= 6 (750) */
/* 746 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 748 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 750 */	
			0x12, 0x0,	/* FC_UP */
/* 752 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (18) */
/* 754 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 756 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 758 */	
			0x12, 0x0,	/* FC_UP */
/* 760 */	NdrFcShort( 0x122 ),	/* Offset= 290 (1050) */
/* 762 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 764 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 766 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 768 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 770 */	NdrFcShort( 0x2 ),	/* Offset= 2 (772) */
/* 772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 774 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 776 */	NdrFcLong( 0x1 ),	/* 1 */
/* 780 */	NdrFcShort( 0x16 ),	/* Offset= 22 (802) */
/* 782 */	NdrFcLong( 0x2 ),	/* 2 */
/* 786 */	NdrFcShort( 0x48 ),	/* Offset= 72 (858) */
/* 788 */	NdrFcLong( 0x3 ),	/* 3 */
/* 792 */	NdrFcShort( 0x9c ),	/* Offset= 156 (948) */
/* 794 */	NdrFcLong( 0x4 ),	/* 4 */
/* 798 */	NdrFcShort( 0xa2 ),	/* Offset= 162 (960) */
/* 800 */	NdrFcShort( 0xffff ),	/* Offset= -1 (799) */
/* 802 */	
			0x12, 0x0,	/* FC_UP */
/* 804 */	NdrFcShort( 0x2 ),	/* Offset= 2 (806) */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 808 */	NdrFcShort( 0x60 ),	/* 96 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x16 ),	/* Offset= 22 (834) */
/* 814 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 816 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 818 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 820 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 822 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 824 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 826 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 828 */	0x0,		/* 0 */
			NdrFcShort( 0xfdc9 ),	/* Offset= -567 (262) */
			0x40,		/* FC_STRUCTPAD4 */
/* 832 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 834 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 836 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 838 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 840 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 842 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 844 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 846 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 848 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 850 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 852 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 854 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 856 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 858 */	
			0x12, 0x0,	/* FC_UP */
/* 860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (862) */
/* 862 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 864 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x20 ),	/* Offset= 32 (900) */
/* 870 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 872 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 874 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 876 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 878 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 880 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 882 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 884 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 886 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 888 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 890 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 892 */	0x0,		/* 0 */
			NdrFcShort( 0xfd89 ),	/* Offset= -631 (262) */
			0x8,		/* FC_LONG */
/* 896 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 898 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 900 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 902 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 904 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 906 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 908 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 910 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 912 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 914 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 916 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 918 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 920 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 922 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 926 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 930 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 932 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 934 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 936 */	
			0x12, 0x0,	/* FC_UP */
/* 938 */	NdrFcShort( 0xfdc4 ),	/* Offset= -572 (366) */
/* 940 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 942 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 944 */	
			0x12, 0x0,	/* FC_UP */
/* 946 */	NdrFcShort( 0xfe1e ),	/* Offset= -482 (464) */
/* 948 */	
			0x12, 0x0,	/* FC_UP */
/* 950 */	NdrFcShort( 0x2 ),	/* Offset= 2 (952) */
/* 952 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 954 */	NdrFcShort( 0xc ),	/* 12 */
/* 956 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 958 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 960 */	
			0x12, 0x0,	/* FC_UP */
/* 962 */	NdrFcShort( 0x2 ),	/* Offset= 2 (964) */
/* 964 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 966 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1002) */
/* 972 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 974 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 976 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 978 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 980 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 982 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 984 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 986 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 988 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 990 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 992 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 994 */	0x0,		/* 0 */
			NdrFcShort( 0xfd23 ),	/* Offset= -733 (262) */
			0x8,		/* FC_LONG */
/* 998 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1000 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1002 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1004 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1006 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1008 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1010 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1012 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1014 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1016 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1018 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1020 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1022 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1024 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1026 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1028 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1030 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1032 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1034 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1036 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1038 */	
			0x12, 0x0,	/* FC_UP */
/* 1040 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (366) */
/* 1042 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1044 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1046 */	
			0x12, 0x0,	/* FC_UP */
/* 1048 */	NdrFcShort( 0xfdb8 ),	/* Offset= -584 (464) */
/* 1050 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1052 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1056 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1056) */
/* 1058 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1060 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1062 */	NdrFcShort( 0xfed4 ),	/* Offset= -300 (762) */
/* 1064 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1066 */	
			0x12, 0x0,	/* FC_UP */
/* 1068 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1070) */
/* 1070 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1072 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1074 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1076 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1078 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1080 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1082 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1084 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1086 */	
			0x12, 0x0,	/* FC_UP */
/* 1088 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1090) */
/* 1090 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1094 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1096 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 1098 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1100 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1102 */	
			0x12, 0x0,	/* FC_UP */
/* 1104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1106) */
/* 1106 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1110 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1112 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1114 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1116 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1118 */	
			0x11, 0x0,	/* FC_RP */
/* 1120 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1172) */
/* 1122 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1124 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1126 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1128 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1132) */
/* 1132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1134 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1136 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1140 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1144) */
/* 1142 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1141) */
/* 1144 */	
			0x12, 0x0,	/* FC_UP */
/* 1146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1148) */
/* 1148 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1150 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1160) */
/* 1156 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1158 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1160 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1162 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1164 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1166 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1168 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1170 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1172 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1174 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1178) */
/* 1180 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1182 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1184 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (1122) */
/* 1186 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1188 */	
			0x11, 0x0,	/* FC_RP */
/* 1190 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1192) */
/* 1192 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1196 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1198 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1200 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1202 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1204 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1206 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1208 */	
			0x11, 0x0,	/* FC_RP */
/* 1210 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (1070) */
/* 1212 */	
			0x11, 0x0,	/* FC_RP */
/* 1214 */	NdrFcShort( 0xff84 ),	/* Offset= -124 (1090) */
/* 1216 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1220) */
/* 1220 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 1222 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1224 */	
			0x11, 0x0,	/* FC_RP */
/* 1226 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1352) */
/* 1228 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1230 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1232 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1234 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1238) */
/* 1238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1240 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 1242 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1246 */	NdrFcShort( 0xa ),	/* Offset= 10 (1256) */
/* 1248 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1252 */	NdrFcShort( 0x32 ),	/* Offset= 50 (1302) */
/* 1254 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1253) */
/* 1256 */	
			0x12, 0x0,	/* FC_UP */
/* 1258 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1278) */
/* 1260 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1264 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1266 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1268 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1270 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1272 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1274 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1276 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1278 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1280 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0xe ),	/* Offset= 14 (1298) */
/* 1286 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1288 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1290 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (1260) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1294 */	0x0,		/* 0 */
			NdrFcShort( 0xffe5 ),	/* Offset= -27 (1268) */
			0x5b,		/* FC_END */
/* 1298 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1300 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1302 */	
			0x12, 0x0,	/* FC_UP */
/* 1304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1306) */
/* 1306 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1308 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1336) */
/* 1314 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1316 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1318 */	0x0,		/* 0 */
			NdrFcShort( 0xffc5 ),	/* Offset= -59 (1260) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1322 */	0x0,		/* 0 */
			NdrFcShort( 0xffc9 ),	/* Offset= -55 (1268) */
			0x36,		/* FC_POINTER */
/* 1326 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1328 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1330 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1332 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 1334 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1336 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1338 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1340 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1342 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1344 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1346 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1348 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1350 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1352 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1358) */
/* 1360 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1362 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1364 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (1228) */
/* 1366 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1368 */	
			0x11, 0x0,	/* FC_RP */
/* 1370 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1372) */
/* 1372 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1374 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1376 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x55,		/* FC_DIV_2 */
/* 1378 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1380 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1382 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1384 */	
			0x11, 0x0,	/* FC_RP */
/* 1386 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1388) */
/* 1388 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1392 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1394 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 1396 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1398 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1400 */	
			0x11, 0x0,	/* FC_RP */
/* 1402 */	NdrFcShort( 0xfed8 ),	/* Offset= -296 (1106) */
/* 1404 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1406 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1408 */	
			0x11, 0x0,	/* FC_RP */
/* 1410 */	NdrFcShort( 0x8c ),	/* Offset= 140 (1550) */
/* 1412 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1414 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1416 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1418 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1422) */
/* 1422 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1424 */	NdrFcShort( 0x3008 ),	/* 12296 */
/* 1426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1432 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1436 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1438 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1442 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1444 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1448 */	NdrFcShort( 0xfa5a ),	/* Offset= -1446 (2) */
/* 1450 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1454 */	NdrFcShort( 0xfa54 ),	/* Offset= -1452 (2) */
/* 1456 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1460 */	NdrFcShort( 0xfa4e ),	/* Offset= -1458 (2) */
/* 1462 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1466 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 1468 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1472 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1476) */
/* 1474 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1473) */
/* 1476 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1478 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1488) */
/* 1484 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1486 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1488 */	
			0x12, 0x0,	/* FC_UP */
/* 1490 */	NdrFcShort( 0xfa40 ),	/* Offset= -1472 (18) */
/* 1492 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1494 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1498) */
/* 1500 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1502 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1504 */	NdrFcShort( 0xffa4 ),	/* Offset= -92 (1412) */
/* 1506 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1508 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1510 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0xa ),	/* Offset= 10 (1524) */
/* 1516 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1518 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1520 */	0x0,		/* 0 */
			NdrFcShort( 0xffe3 ),	/* Offset= -29 (1492) */
			0x5b,		/* FC_END */
/* 1524 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1526 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1528 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1534 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1536 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1538 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1542 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1544 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1546 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1508) */
/* 1548 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1550 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1552 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1554 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1528) */
/* 1556 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1556) */
/* 1558 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1560 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1562 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1564 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1568) */
/* 1568 */	
			0x12, 0x0,	/* FC_UP */
/* 1570 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1614) */
/* 1572 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1574 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0xa ),	/* Offset= 10 (1588) */
/* 1580 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1582 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1584 */	0x0,		/* 0 */
			NdrFcShort( 0xffa3 ),	/* Offset= -93 (1492) */
			0x5b,		/* FC_END */
/* 1588 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1590 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1592 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1598 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1600 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1602 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1606 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1608 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1610 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1572) */
/* 1612 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1614 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1616 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1618 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1592) */
/* 1620 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1620) */
/* 1622 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1624 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1626 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1628 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1630 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1632) */
/* 1632 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 1634 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1636 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 1638 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1640 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1642 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1644) */
/* 1644 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 1646 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1648 */	
			0x11, 0x0,	/* FC_RP */
/* 1650 */	NdrFcShort( 0x202 ),	/* Offset= 514 (2164) */
/* 1652 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1654 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1656 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1658 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1660 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1662) */
/* 1662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1664 */	NdrFcShort( 0x3006 ),	/* 12294 */
/* 1666 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1670 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1704) */
/* 1672 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1676 */	NdrFcShort( 0x2e ),	/* Offset= 46 (1722) */
/* 1678 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1682 */	NdrFcShort( 0x50 ),	/* Offset= 80 (1762) */
/* 1684 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1688 */	NdrFcShort( 0x94 ),	/* Offset= 148 (1836) */
/* 1690 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1694 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (1918) */
/* 1696 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1700 */	NdrFcShort( 0x138 ),	/* Offset= 312 (2012) */
/* 1702 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1701) */
/* 1704 */	
			0x12, 0x0,	/* FC_UP */
/* 1706 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1708) */
/* 1708 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1718) */
/* 1716 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1718 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1720 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1722 */	
			0x12, 0x0,	/* FC_UP */
/* 1724 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1726) */
/* 1726 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1728 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0xa ),	/* Offset= 10 (1742) */
/* 1734 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1736 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1738 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1740 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1742 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1744 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1746 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1748 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1750 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1752 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1754 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1756 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1758 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1760 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1762 */	
			0x12, 0x0,	/* FC_UP */
/* 1764 */	NdrFcShort( 0xe ),	/* Offset= 14 (1778) */
/* 1766 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1768 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1770 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1772 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1776 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1778 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1780 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1800) */
/* 1786 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1788 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1790 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1792 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1794 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1796 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1798 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1800 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1802 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1804 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1806 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1808 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1810 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1812 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1814 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1816 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1818 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1820 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1822 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1824 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1826 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1828 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1830 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1832 */	
			0x12, 0x0,	/* FC_UP */
/* 1834 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (1766) */
/* 1836 */	
			0x12, 0x0,	/* FC_UP */
/* 1838 */	NdrFcShort( 0xe ),	/* Offset= 14 (1852) */
/* 1840 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1842 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1844 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1846 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1848 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1850 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1852 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1854 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1878) */
/* 1860 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1862 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1864 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1866 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1868 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1870 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1872 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1874 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1876 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1878 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1880 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1882 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1884 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1886 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1888 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1890 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1892 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1894 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1896 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1898 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1900 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1902 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1904 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1906 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1908 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1910 */	
			0x12, 0x0,	/* FC_UP */
/* 1912 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (1766) */
/* 1914 */	
			0x12, 0x0,	/* FC_UP */
/* 1916 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (1840) */
/* 1918 */	
			0x12, 0x0,	/* FC_UP */
/* 1920 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1922) */
/* 1922 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1924 */	NdrFcShort( 0x98 ),	/* 152 */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x1c ),	/* Offset= 28 (1956) */
/* 1930 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1932 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1934 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1936 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1938 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1940 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1942 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1944 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1946 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1948 */	NdrFcShort( 0xfd50 ),	/* Offset= -688 (1260) */
/* 1950 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1952 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1954 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1956 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1958 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1960 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1962 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1964 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1966 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1968 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1970 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1972 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1974 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1976 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1978 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1980 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1982 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1984 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1986 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1988 */	
			0x12, 0x0,	/* FC_UP */
/* 1990 */	NdrFcShort( 0xff20 ),	/* Offset= -224 (1766) */
/* 1992 */	
			0x12, 0x0,	/* FC_UP */
/* 1994 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (1840) */
/* 1996 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1998 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2000 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2002 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2004 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2006 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2008 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2010 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2012 */	
			0x12, 0x0,	/* FC_UP */
/* 2014 */	NdrFcShort( 0x1a ),	/* Offset= 26 (2040) */
/* 2016 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2018 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2020 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2022 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 2024 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2026 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2028 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2030 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2032 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2034 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 2036 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2038 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2040 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2042 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x2a ),	/* Offset= 42 (2088) */
/* 2048 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2050 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2052 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2054 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2056 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2058 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2060 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2062 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2064 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2066 */	NdrFcShort( 0xfcda ),	/* Offset= -806 (1260) */
/* 2068 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 2070 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2072 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2074 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2076 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2078 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2080 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2082 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2084 */	NdrFcShort( 0xfcc8 ),	/* Offset= -824 (1260) */
/* 2086 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2090 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2094 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2096 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2098 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2100 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2102 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2106 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2108 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2110 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2112 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2114 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2116 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2120 */	
			0x12, 0x0,	/* FC_UP */
/* 2122 */	NdrFcShort( 0xfe9c ),	/* Offset= -356 (1766) */
/* 2124 */	
			0x12, 0x0,	/* FC_UP */
/* 2126 */	NdrFcShort( 0xfee2 ),	/* Offset= -286 (1840) */
/* 2128 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2130 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2132 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2136 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2138 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2140 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2142 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2144 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2146 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2148 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2150 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2152 */	
			0x12, 0x0,	/* FC_UP */
/* 2154 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (2016) */
/* 2156 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2158 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2160 */	
			0x12, 0x0,	/* FC_UP */
/* 2162 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (2028) */
/* 2164 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2170) */
/* 2172 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2176 */	NdrFcShort( 0xfdf4 ),	/* Offset= -524 (1652) */
/* 2178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2180 */	
			0x11, 0x0,	/* FC_RP */
/* 2182 */	NdrFcShort( 0x8a ),	/* Offset= 138 (2320) */
/* 2184 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2186 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2192 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2194) */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 2198 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2202 */	NdrFcShort( 0x16 ),	/* Offset= 22 (2224) */
/* 2204 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2208 */	NdrFcShort( 0x22 ),	/* Offset= 34 (2242) */
/* 2210 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2214 */	NdrFcShort( 0x3a ),	/* Offset= 58 (2272) */
/* 2216 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 2220 */	NdrFcShort( 0x4a ),	/* Offset= 74 (2294) */
/* 2222 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2221) */
/* 2224 */	
			0x12, 0x0,	/* FC_UP */
/* 2226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2228) */
/* 2228 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2238) */
/* 2236 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2238 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2242 */	
			0x12, 0x0,	/* FC_UP */
/* 2244 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2246) */
/* 2246 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2248 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2260) */
/* 2254 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2256 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2258 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2260 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2262 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2264 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2266 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2268 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2270 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2272 */	
			0x12, 0x0,	/* FC_UP */
/* 2274 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2276) */
/* 2276 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2278 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2290) */
/* 2284 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2286 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2288 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2290 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2292 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2294 */	
			0x12, 0x0,	/* FC_UP */
/* 2296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2298) */
/* 2298 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2300 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2312) */
/* 2306 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2308 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2310 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2312 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2314 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2316 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2318 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2320 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2322 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2326) */
/* 2328 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2330 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2332 */	NdrFcShort( 0xff6c ),	/* Offset= -148 (2184) */
/* 2334 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2336 */	
			0x11, 0x0,	/* FC_RP */
/* 2338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2340) */
/* 2340 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2342 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2352) */
/* 2348 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2350 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2352 */	
			0x12, 0x0,	/* FC_UP */
/* 2354 */	NdrFcShort( 0xf6e0 ),	/* Offset= -2336 (18) */
/* 2356 */	
			0x11, 0x0,	/* FC_RP */
/* 2358 */	NdrFcShort( 0x4c ),	/* Offset= 76 (2434) */
/* 2360 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2362 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2364 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2366 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2368 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2370) */
/* 2370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2372 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 2374 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2378 */	NdrFcShort( 0xa ),	/* Offset= 10 (2388) */
/* 2380 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2384 */	NdrFcShort( 0x16 ),	/* Offset= 22 (2406) */
/* 2386 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2385) */
/* 2388 */	
			0x12, 0x0,	/* FC_UP */
/* 2390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2392) */
/* 2392 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2394 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2402) */
/* 2400 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2402 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2404 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2406 */	
			0x12, 0x0,	/* FC_UP */
/* 2408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2410) */
/* 2410 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2412 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2422) */
/* 2418 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2420 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2422 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2424 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2426 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2428 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2430 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2432 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2434 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2436 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2440) */
/* 2442 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2444 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2446 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (2360) */
/* 2448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2450 */	
			0x11, 0x0,	/* FC_RP */
/* 2452 */	NdrFcShort( 0x184 ),	/* Offset= 388 (2840) */
/* 2454 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	NdrFcLong( 0x32 ),	/* 50 */
/* 2464 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2466 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 2468 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2470 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2472 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2474) */
/* 2474 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2476 */	NdrFcShort( 0x7009 ),	/* 28681 */
/* 2478 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2482 */	NdrFcShort( 0xf650 ),	/* Offset= -2480 (2) */
/* 2484 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2488 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2490 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2494 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 2496 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2500 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 2502 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2506 */	NdrFcShort( 0x1c ),	/* Offset= 28 (2534) */
/* 2508 */	NdrFcLong( 0x6 ),	/* 6 */
/* 2512 */	NdrFcShort( 0xf64e ),	/* Offset= -2482 (30) */
/* 2514 */	NdrFcLong( 0x7 ),	/* 7 */
/* 2518 */	NdrFcShort( 0xf90c ),	/* Offset= -1780 (738) */
/* 2520 */	NdrFcLong( 0x8 ),	/* 8 */
/* 2524 */	NdrFcShort( 0xa0 ),	/* Offset= 160 (2684) */
/* 2526 */	NdrFcLong( 0x9 ),	/* 9 */
/* 2530 */	NdrFcShort( 0xf0 ),	/* Offset= 240 (2770) */
/* 2532 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2531) */
/* 2534 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2536 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2546) */
/* 2542 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2544 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2546 */	
			0x12, 0x0,	/* FC_UP */
/* 2548 */	NdrFcShort( 0xf712 ),	/* Offset= -2286 (262) */
/* 2550 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2552 */	0x0,		/* Corr desc:  field,  */
			0x59,		/* FC_CALLBACK */
/* 2554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2556 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2558 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2560) */
/* 2560 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2562 */	NdrFcShort( 0x3005 ),	/* 12293 */
/* 2564 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2568 */	NdrFcShort( 0x28 ),	/* Offset= 40 (2608) */
/* 2570 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2574 */	NdrFcShort( 0x32 ),	/* Offset= 50 (2624) */
/* 2576 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2580 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2534) */
/* 2582 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2586 */	NdrFcShort( 0xf604 ),	/* Offset= -2556 (30) */
/* 2588 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2592 */	NdrFcShort( 0xf8c2 ),	/* Offset= -1854 (738) */
/* 2594 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2593) */
/* 2596 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2598 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2600 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x55,		/* FC_DIV_2 */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2606 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2608 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2610 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2620) */
/* 2616 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2618 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2620 */	
			0x12, 0x0,	/* FC_UP */
/* 2622 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2596) */
/* 2624 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 2626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2628 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2630 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2632 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2636) */
/* 2638 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2640 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2642 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2644 */	0x0,		/* 0 */
			NdrFcShort( 0xffa1 ),	/* Offset= -95 (2550) */
			0x5b,		/* FC_END */
/* 2648 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2654 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2656 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2658 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2662 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2664 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2666 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2630) */
/* 2668 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2670 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2672 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2674 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2648) */
/* 2676 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2676) */
/* 2678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2680 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2684 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2694) */
/* 2692 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2694 */	
			0x12, 0x0,	/* FC_UP */
/* 2696 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2670) */
/* 2698 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2700 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2702 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2704 */	NdrFcShort( 0xc ),	/* 12 */
/* 2706 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2708 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2710 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2712 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2716 */	NdrFcShort( 0xa ),	/* Offset= 10 (2726) */
/* 2718 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2720 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2722 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2724 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2726 */	
			0x12, 0x0,	/* FC_UP */
/* 2728 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2698) */
/* 2730 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2738 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2740 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2744 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2746 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2748 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2710) */
/* 2750 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2752 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2754 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2766) */
/* 2760 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2762 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2764 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2766 */	
			0x12, 0x0,	/* FC_UP */
/* 2768 */	NdrFcShort( 0xffda ),	/* Offset= -38 (2730) */
/* 2770 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2780) */
/* 2778 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2780 */	
			0x12, 0x0,	/* FC_UP */
/* 2782 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (2752) */
/* 2784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2786 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2790 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2790) */
/* 2792 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 2794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2796 */	NdrFcShort( 0xfeb4 ),	/* Offset= -332 (2464) */
/* 2798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2800 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2802 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2814) */
/* 2808 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2810 */	0x0,		/* 0 */
			NdrFcShort( 0xffe5 ),	/* Offset= -27 (2784) */
			0x5b,		/* FC_END */
/* 2814 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2816 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2818 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2822 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2828 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2832 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2834 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2836 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2800) */
/* 2838 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2840 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0xa ),	/* Offset= 10 (2856) */
/* 2848 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2850 */	NdrFcShort( 0xfe74 ),	/* Offset= -396 (2454) */
/* 2852 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2854 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2856 */	
			0x12, 0x0,	/* FC_UP */
/* 2858 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2818) */
/* 2860 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2862 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2864) */
/* 2864 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 2866 */	0x2,		/* 2 */
			0x1,		/* 1 */
/* 2868 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2870 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2872) */
/* 2872 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 2874 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 2876 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 2878 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 2880 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2884) */
/* 2884 */	
			0x12, 0x0,	/* FC_UP */
/* 2886 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2840) */
/* 2888 */	
			0x12, 0x0,	/* FC_UP */
/* 2890 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2892) */
/* 2892 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2894 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2896 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 2898 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 2900 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2902 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2904 */	
			0x11, 0x0,	/* FC_RP */
/* 2906 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2908) */
/* 2908 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2910 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2912 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2914 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2916 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2918 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2920 */	
			0x11, 0x0,	/* FC_RP */
/* 2922 */	NdrFcShort( 0x2c ),	/* Offset= 44 (2966) */
/* 2924 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 2926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2928 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2930 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 2932 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2934 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2936 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2938 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (2924) */
			0x5b,		/* FC_END */
/* 2942 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 2944 */	NdrFcShort( 0x208 ),	/* 520 */
/* 2946 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2948 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2950 */	NdrFcShort( 0x228 ),	/* 552 */
/* 2952 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2954 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (2930) */
/* 2956 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2958 */	NdrFcShort( 0xf95e ),	/* Offset= -1698 (1260) */
/* 2960 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2962 */	0x0,		/* 0 */
			NdrFcShort( 0xffeb ),	/* Offset= -21 (2942) */
			0x5b,		/* FC_END */
/* 2966 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2970 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2972 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 2974 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2976 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2980 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2982 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2984 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2948) */
/* 2986 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2988 */	
			0x11, 0x0,	/* FC_RP */
/* 2990 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (2930) */
/* 2992 */	
			0x12, 0x0,	/* FC_UP */
/* 2994 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2996) */
/* 2996 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2998 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3000 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3002 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 3004 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3006 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };

static void __RPC_USER IRemoteWinspool_PORT_CONTAINERExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    PORT_CONTAINER *pS	=	( PORT_CONTAINER * )(( pStubMsg->StackTop - 8 ) );
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (ULONG_PTR) ( ( 0xffffff & pS->Level )  );
}

static void __RPC_USER IRemoteWinspool_RPC_V2_NOTIFY_INFO_DATAExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    RPC_V2_NOTIFY_INFO_DATA *pS	=	( RPC_V2_NOTIFY_INFO_DATA * )(( pStubMsg->StackTop - 16 ) );
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (ULONG_PTR) ( ( pS->Reserved & 0xffff )  );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IRemoteWinspool_PORT_CONTAINERExprEval_0000
    ,IRemoteWinspool_RPC_V2_NOTIFY_INFO_DATAExprEval_0001
    };


static const unsigned short IRemoteWinspool_FormatStringOffsetTable[] =
    {
    0,
    72,
    144,
    206,
    280,
    366,
    434,
    484,
    528,
    596,
    664,
    720,
    764,
    826,
    870,
    914,
    958,
    1032,
    1112,
    1180,
    1254,
    1298,
    1348,
    1398,
    1472,
    1528,
    1602,
    1700,
    1792,
    1866,
    1934,
    1984,
    2040,
    2090,
    2176,
    2238,
    2294,
    2368,
    2412,
    2490,
    2544,
    2622,
    2694,
    2748,
    2814,
    2874,
    2952,
    3024,
    3096,
    3168,
    3228,
    3282,
    3330,
    3384,
    3438,
    3516,
    3576,
    3624,
    3690,
    3746,
    3790,
    3846,
    3896,
    3962,
    4034,
    4106,
    4178,
    4256,
    4310,
    4372
    };


static const MIDL_STUB_DESC IRemoteWinspool_StubDesc = 
    {
    (void *)& IRemoteWinspool___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &IRemoteWinspool__MIDL_AutoBindHandle,
    0,
    0,
    ExprEvalRoutines,
    0,
    ms2Dpar__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

