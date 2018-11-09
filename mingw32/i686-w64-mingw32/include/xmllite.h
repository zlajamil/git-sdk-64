/*** Autogenerated by WIDL 3.19 from include/xmllite.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __xmllite_h__
#define __xmllite_h__

/* Forward declarations */

#ifndef __IXmlReader_FWD_DEFINED__
#define __IXmlReader_FWD_DEFINED__
typedef interface IXmlReader IXmlReader;
#ifdef __cplusplus
interface IXmlReader;
#endif /* __cplusplus */
#endif

#ifndef __IXmlResolver_FWD_DEFINED__
#define __IXmlResolver_FWD_DEFINED__
typedef interface IXmlResolver IXmlResolver;
#ifdef __cplusplus
interface IXmlResolver;
#endif /* __cplusplus */
#endif

#ifndef __IXmlWriter_FWD_DEFINED__
#define __IXmlWriter_FWD_DEFINED__
typedef interface IXmlWriter IXmlWriter;
#ifdef __cplusplus
interface IXmlWriter;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <objidl.h>
#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum XmlNodeType {
    XmlNodeType_None = 0,
    XmlNodeType_Element = 1,
    XmlNodeType_Attribute = 2,
    XmlNodeType_Text = 3,
    XmlNodeType_CDATA = 4,
    XmlNodeType_ProcessingInstruction = 7,
    XmlNodeType_Comment = 8,
    XmlNodeType_DocumentType = 10,
    XmlNodeType_Whitespace = 13,
    XmlNodeType_EndElement = 15,
    XmlNodeType_XmlDeclaration = 17,
    _XmlNodeType_Last = 17
} XmlNodeType;
/*****************************************************************************
 * IXmlReader interface
 */
#ifndef __IXmlReader_INTERFACE_DEFINED__
#define __IXmlReader_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXmlReader, 0x7279fc81, 0x709d, 0x4095, 0xb6,0x3d, 0x69,0xfe,0x4b,0x0d,0x90,0x30);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7279fc81-709d-4095-b63d-69fe4b0d9030")
IXmlReader : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetInput(
        IUnknown *input) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        UINT property,
        LONG_PTR *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProperty(
        UINT property,
        LONG_PTR value) = 0;

    virtual HRESULT STDMETHODCALLTYPE Read(
        XmlNodeType *node_type) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNodeType(
        XmlNodeType *node_type) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveToFirstAttribute(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveToNextAttribute(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveToAttributeByName(
        LPCWSTR local_name,
        LPCWSTR namespaceUri) = 0;

    virtual HRESULT STDMETHODCALLTYPE MoveToElement(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetQualifiedName(
        LPCWSTR *qualifiedName,
        UINT *qualifiedName_length) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNamespaceUri(
        LPCWSTR *namespaceUri,
        UINT *nnamespaceUri_length) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLocalName(
        LPCWSTR *local_name,
        UINT *locale_name_length) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPrefix(
        LPCWSTR *prefix,
        UINT *prefix_length) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetValue(
        LPCWSTR *value,
        UINT *value_length) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReadValueChunk(
        WCHAR *buffer,
        UINT chunk_size,
        UINT *read) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBaseUri(
        LPCWSTR *baseUri,
        UINT *baseUri_length) = 0;

    virtual WINBOOL STDMETHODCALLTYPE IsDefault(
        ) = 0;

    virtual WINBOOL STDMETHODCALLTYPE IsEmptyElement(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLineNumber(
        UINT *lineNumber) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLinePosition(
        UINT *linePosition) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAttributeCount(
        UINT *attributeCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDepth(
        UINT *depth) = 0;

    virtual WINBOOL STDMETHODCALLTYPE IsEOF(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXmlReader, 0x7279fc81, 0x709d, 0x4095, 0xb6,0x3d, 0x69,0xfe,0x4b,0x0d,0x90,0x30)
#endif
#else
typedef struct IXmlReaderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXmlReader *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXmlReader *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXmlReader *This);

    /*** IXmlReader methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInput)(
        IXmlReader *This,
        IUnknown *input);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IXmlReader *This,
        UINT property,
        LONG_PTR *value);

    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IXmlReader *This,
        UINT property,
        LONG_PTR value);

    HRESULT (STDMETHODCALLTYPE *Read)(
        IXmlReader *This,
        XmlNodeType *node_type);

    HRESULT (STDMETHODCALLTYPE *GetNodeType)(
        IXmlReader *This,
        XmlNodeType *node_type);

    HRESULT (STDMETHODCALLTYPE *MoveToFirstAttribute)(
        IXmlReader *This);

    HRESULT (STDMETHODCALLTYPE *MoveToNextAttribute)(
        IXmlReader *This);

    HRESULT (STDMETHODCALLTYPE *MoveToAttributeByName)(
        IXmlReader *This,
        LPCWSTR local_name,
        LPCWSTR namespaceUri);

    HRESULT (STDMETHODCALLTYPE *MoveToElement)(
        IXmlReader *This);

    HRESULT (STDMETHODCALLTYPE *GetQualifiedName)(
        IXmlReader *This,
        LPCWSTR *qualifiedName,
        UINT *qualifiedName_length);

    HRESULT (STDMETHODCALLTYPE *GetNamespaceUri)(
        IXmlReader *This,
        LPCWSTR *namespaceUri,
        UINT *nnamespaceUri_length);

    HRESULT (STDMETHODCALLTYPE *GetLocalName)(
        IXmlReader *This,
        LPCWSTR *local_name,
        UINT *locale_name_length);

    HRESULT (STDMETHODCALLTYPE *GetPrefix)(
        IXmlReader *This,
        LPCWSTR *prefix,
        UINT *prefix_length);

    HRESULT (STDMETHODCALLTYPE *GetValue)(
        IXmlReader *This,
        LPCWSTR *value,
        UINT *value_length);

    HRESULT (STDMETHODCALLTYPE *ReadValueChunk)(
        IXmlReader *This,
        WCHAR *buffer,
        UINT chunk_size,
        UINT *read);

    HRESULT (STDMETHODCALLTYPE *GetBaseUri)(
        IXmlReader *This,
        LPCWSTR *baseUri,
        UINT *baseUri_length);

    WINBOOL (STDMETHODCALLTYPE *IsDefault)(
        IXmlReader *This);

    WINBOOL (STDMETHODCALLTYPE *IsEmptyElement)(
        IXmlReader *This);

    HRESULT (STDMETHODCALLTYPE *GetLineNumber)(
        IXmlReader *This,
        UINT *lineNumber);

    HRESULT (STDMETHODCALLTYPE *GetLinePosition)(
        IXmlReader *This,
        UINT *linePosition);

    HRESULT (STDMETHODCALLTYPE *GetAttributeCount)(
        IXmlReader *This,
        UINT *attributeCount);

    HRESULT (STDMETHODCALLTYPE *GetDepth)(
        IXmlReader *This,
        UINT *depth);

    WINBOOL (STDMETHODCALLTYPE *IsEOF)(
        IXmlReader *This);

    END_INTERFACE
} IXmlReaderVtbl;

interface IXmlReader {
    CONST_VTBL IXmlReaderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXmlReader_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXmlReader_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXmlReader_Release(This) (This)->lpVtbl->Release(This)
/*** IXmlReader methods ***/
#define IXmlReader_SetInput(This,input) (This)->lpVtbl->SetInput(This,input)
#define IXmlReader_GetProperty(This,property,value) (This)->lpVtbl->GetProperty(This,property,value)
#define IXmlReader_SetProperty(This,property,value) (This)->lpVtbl->SetProperty(This,property,value)
#define IXmlReader_Read(This,node_type) (This)->lpVtbl->Read(This,node_type)
#define IXmlReader_GetNodeType(This,node_type) (This)->lpVtbl->GetNodeType(This,node_type)
#define IXmlReader_MoveToFirstAttribute(This) (This)->lpVtbl->MoveToFirstAttribute(This)
#define IXmlReader_MoveToNextAttribute(This) (This)->lpVtbl->MoveToNextAttribute(This)
#define IXmlReader_MoveToAttributeByName(This,local_name,namespaceUri) (This)->lpVtbl->MoveToAttributeByName(This,local_name,namespaceUri)
#define IXmlReader_MoveToElement(This) (This)->lpVtbl->MoveToElement(This)
#define IXmlReader_GetQualifiedName(This,qualifiedName,qualifiedName_length) (This)->lpVtbl->GetQualifiedName(This,qualifiedName,qualifiedName_length)
#define IXmlReader_GetNamespaceUri(This,namespaceUri,nnamespaceUri_length) (This)->lpVtbl->GetNamespaceUri(This,namespaceUri,nnamespaceUri_length)
#define IXmlReader_GetLocalName(This,local_name,locale_name_length) (This)->lpVtbl->GetLocalName(This,local_name,locale_name_length)
#define IXmlReader_GetPrefix(This,prefix,prefix_length) (This)->lpVtbl->GetPrefix(This,prefix,prefix_length)
#define IXmlReader_GetValue(This,value,value_length) (This)->lpVtbl->GetValue(This,value,value_length)
#define IXmlReader_ReadValueChunk(This,buffer,chunk_size,read) (This)->lpVtbl->ReadValueChunk(This,buffer,chunk_size,read)
#define IXmlReader_GetBaseUri(This,baseUri,baseUri_length) (This)->lpVtbl->GetBaseUri(This,baseUri,baseUri_length)
#define IXmlReader_IsDefault(This) (This)->lpVtbl->IsDefault(This)
#define IXmlReader_IsEmptyElement(This) (This)->lpVtbl->IsEmptyElement(This)
#define IXmlReader_GetLineNumber(This,lineNumber) (This)->lpVtbl->GetLineNumber(This,lineNumber)
#define IXmlReader_GetLinePosition(This,linePosition) (This)->lpVtbl->GetLinePosition(This,linePosition)
#define IXmlReader_GetAttributeCount(This,attributeCount) (This)->lpVtbl->GetAttributeCount(This,attributeCount)
#define IXmlReader_GetDepth(This,depth) (This)->lpVtbl->GetDepth(This,depth)
#define IXmlReader_IsEOF(This) (This)->lpVtbl->IsEOF(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IXmlReader_QueryInterface(IXmlReader* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IXmlReader_AddRef(IXmlReader* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IXmlReader_Release(IXmlReader* This) {
    return This->lpVtbl->Release(This);
}
/*** IXmlReader methods ***/
static FORCEINLINE HRESULT IXmlReader_SetInput(IXmlReader* This,IUnknown *input) {
    return This->lpVtbl->SetInput(This,input);
}
static FORCEINLINE HRESULT IXmlReader_GetProperty(IXmlReader* This,UINT property,LONG_PTR *value) {
    return This->lpVtbl->GetProperty(This,property,value);
}
static FORCEINLINE HRESULT IXmlReader_SetProperty(IXmlReader* This,UINT property,LONG_PTR value) {
    return This->lpVtbl->SetProperty(This,property,value);
}
static FORCEINLINE HRESULT IXmlReader_Read(IXmlReader* This,XmlNodeType *node_type) {
    return This->lpVtbl->Read(This,node_type);
}
static FORCEINLINE HRESULT IXmlReader_GetNodeType(IXmlReader* This,XmlNodeType *node_type) {
    return This->lpVtbl->GetNodeType(This,node_type);
}
static FORCEINLINE HRESULT IXmlReader_MoveToFirstAttribute(IXmlReader* This) {
    return This->lpVtbl->MoveToFirstAttribute(This);
}
static FORCEINLINE HRESULT IXmlReader_MoveToNextAttribute(IXmlReader* This) {
    return This->lpVtbl->MoveToNextAttribute(This);
}
static FORCEINLINE HRESULT IXmlReader_MoveToAttributeByName(IXmlReader* This,LPCWSTR local_name,LPCWSTR namespaceUri) {
    return This->lpVtbl->MoveToAttributeByName(This,local_name,namespaceUri);
}
static FORCEINLINE HRESULT IXmlReader_MoveToElement(IXmlReader* This) {
    return This->lpVtbl->MoveToElement(This);
}
static FORCEINLINE HRESULT IXmlReader_GetQualifiedName(IXmlReader* This,LPCWSTR *qualifiedName,UINT *qualifiedName_length) {
    return This->lpVtbl->GetQualifiedName(This,qualifiedName,qualifiedName_length);
}
static FORCEINLINE HRESULT IXmlReader_GetNamespaceUri(IXmlReader* This,LPCWSTR *namespaceUri,UINT *nnamespaceUri_length) {
    return This->lpVtbl->GetNamespaceUri(This,namespaceUri,nnamespaceUri_length);
}
static FORCEINLINE HRESULT IXmlReader_GetLocalName(IXmlReader* This,LPCWSTR *local_name,UINT *locale_name_length) {
    return This->lpVtbl->GetLocalName(This,local_name,locale_name_length);
}
static FORCEINLINE HRESULT IXmlReader_GetPrefix(IXmlReader* This,LPCWSTR *prefix,UINT *prefix_length) {
    return This->lpVtbl->GetPrefix(This,prefix,prefix_length);
}
static FORCEINLINE HRESULT IXmlReader_GetValue(IXmlReader* This,LPCWSTR *value,UINT *value_length) {
    return This->lpVtbl->GetValue(This,value,value_length);
}
static FORCEINLINE HRESULT IXmlReader_ReadValueChunk(IXmlReader* This,WCHAR *buffer,UINT chunk_size,UINT *read) {
    return This->lpVtbl->ReadValueChunk(This,buffer,chunk_size,read);
}
static FORCEINLINE HRESULT IXmlReader_GetBaseUri(IXmlReader* This,LPCWSTR *baseUri,UINT *baseUri_length) {
    return This->lpVtbl->GetBaseUri(This,baseUri,baseUri_length);
}
static FORCEINLINE WINBOOL IXmlReader_IsDefault(IXmlReader* This) {
    return This->lpVtbl->IsDefault(This);
}
static FORCEINLINE WINBOOL IXmlReader_IsEmptyElement(IXmlReader* This) {
    return This->lpVtbl->IsEmptyElement(This);
}
static FORCEINLINE HRESULT IXmlReader_GetLineNumber(IXmlReader* This,UINT *lineNumber) {
    return This->lpVtbl->GetLineNumber(This,lineNumber);
}
static FORCEINLINE HRESULT IXmlReader_GetLinePosition(IXmlReader* This,UINT *linePosition) {
    return This->lpVtbl->GetLinePosition(This,linePosition);
}
static FORCEINLINE HRESULT IXmlReader_GetAttributeCount(IXmlReader* This,UINT *attributeCount) {
    return This->lpVtbl->GetAttributeCount(This,attributeCount);
}
static FORCEINLINE HRESULT IXmlReader_GetDepth(IXmlReader* This,UINT *depth) {
    return This->lpVtbl->GetDepth(This,depth);
}
static FORCEINLINE WINBOOL IXmlReader_IsEOF(IXmlReader* This) {
    return This->lpVtbl->IsEOF(This);
}
#endif
#endif

#endif


#endif  /* __IXmlReader_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXmlResolver interface
 */
#ifndef __IXmlResolver_INTERFACE_DEFINED__
#define __IXmlResolver_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXmlResolver, 0x7279fc82, 0x709d, 0x4095, 0xb6,0x3d, 0x69,0xfe,0x4b,0x0d,0x90,0x30);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7279fc82-709d-4095-b63d-69fe4b0d9030")
IXmlResolver : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ResolveUri(
        LPCWSTR base_uri,
        LPCWSTR public_id,
        LPCWSTR system_id,
        IUnknown **input) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXmlResolver, 0x7279fc82, 0x709d, 0x4095, 0xb6,0x3d, 0x69,0xfe,0x4b,0x0d,0x90,0x30)
#endif
#else
typedef struct IXmlResolverVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXmlResolver *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXmlResolver *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXmlResolver *This);

    /*** IXmlResolver methods ***/
    HRESULT (STDMETHODCALLTYPE *ResolveUri)(
        IXmlResolver *This,
        LPCWSTR base_uri,
        LPCWSTR public_id,
        LPCWSTR system_id,
        IUnknown **input);

    END_INTERFACE
} IXmlResolverVtbl;

interface IXmlResolver {
    CONST_VTBL IXmlResolverVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXmlResolver_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXmlResolver_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXmlResolver_Release(This) (This)->lpVtbl->Release(This)
/*** IXmlResolver methods ***/
#define IXmlResolver_ResolveUri(This,base_uri,public_id,system_id,input) (This)->lpVtbl->ResolveUri(This,base_uri,public_id,system_id,input)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IXmlResolver_QueryInterface(IXmlResolver* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IXmlResolver_AddRef(IXmlResolver* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IXmlResolver_Release(IXmlResolver* This) {
    return This->lpVtbl->Release(This);
}
/*** IXmlResolver methods ***/
static FORCEINLINE HRESULT IXmlResolver_ResolveUri(IXmlResolver* This,LPCWSTR base_uri,LPCWSTR public_id,LPCWSTR system_id,IUnknown **input) {
    return This->lpVtbl->ResolveUri(This,base_uri,public_id,system_id,input);
}
#endif
#endif

#endif


#endif  /* __IXmlResolver_INTERFACE_DEFINED__ */

typedef enum XmlReadState {
    XmlReadState_Initial = 0,
    XmlReadState_Interactive = 1,
    XmlReadState_Error = 2,
    XmlReadState_EndOfFile = 3,
    XmlReadState_Closed = 4
} XmlReadState;
typedef enum XmlConformanceLevel {
    XmlConformanceLevel_Auto = 0,
    XmlConformanceLevel_Fragment = 1,
    XmlConformanceLevel_Document = 2,
    _XmlConformanceLevel_Last = XmlConformanceLevel_Document
} XmlConformanceLevel;
typedef enum DtdProcessing {
    DtdProcessing_Prohibit = 0,
    DtdProcessing_Parse = 1,
    _DtdProcessing_Last = DtdProcessing_Parse
} DtdProcessing;
typedef enum XmlReaderProperty {
    XmlReaderProperty_MultiLanguage = 0,
    XmlReaderProperty_ConformanceLevel = 1,
    XmlReaderProperty_RandomAccess = 2,
    XmlReaderProperty_XmlResolver = 3,
    XmlReaderProperty_DtdProcessing = 4,
    XmlReaderProperty_ReadState = 5,
    XmlReaderProperty_MaxElementDepth = 6,
    XmlReaderProperty_MaxEntityExpansion = 7,
    _XmlReaderProperty_Last = XmlReaderProperty_MaxEntityExpansion
} XmlReaderProperty;
typedef enum XmlError {
    MX_E_MX = 0xc00cee00,
    MX_E_INPUTEND = 0xc00cee01,
    MX_E_ENCODING = 0xc00cee02,
    MX_E_ENCODINGSWITCH = 0xc00cee03,
    MX_E_ENCODINGSIGNATURE = 0xc00cee04,
    WC_E_WC = 0xc00cee20,
    WC_E_WHITESPACE = 0xc00cee21,
    WC_E_SEMICOLON = 0xc00cee22,
    WC_E_GREATERTHAN = 0xc00cee23,
    WC_E_QUOTE = 0xc00cee24,
    WC_E_EQUAL = 0xc00cee25,
    WC_E_LESSTHAN = 0xc00cee26,
    WC_E_HEXDIGIT = 0xc00cee27,
    WC_E_DIGIT = 0xc00cee28,
    WC_E_LEFTBRACKET = 0xc00cee29,
    WC_E_LEFTPAREN = 0xc00cee2a,
    WC_E_XMLCHARACTER = 0xc00cee2b,
    WC_E_NAMECHARACTER = 0xc00cee2c,
    WC_E_SYNTAX = 0xc00cee2d,
    WC_E_CDSECT = 0xc00cee2e,
    WC_E_COMMENT = 0xc00cee2f,
    WC_E_CONDSECT = 0xc00cee30,
    WC_E_DECLATTLIST = 0xc00cee31,
    WC_E_DECLDOCTYPE = 0xc00cee32,
    WC_E_DECLELEMENT = 0xc00cee33,
    WC_E_DECLENTITY = 0xc00cee34,
    WC_E_DECLNOTATION = 0xc00cee35,
    WC_E_NDATA = 0xc00cee36,
    WC_E_PUBLIC = 0xc00cee37,
    WC_E_SYSTEM = 0xc00cee38,
    WC_E_NAME = 0xc00cee39,
    WC_E_ROOTELEMENT = 0xc00cee3a,
    WC_E_ELEMENTMATCH = 0xc00cee3b,
    WC_E_UNIQUEATTRIBUTE = 0xc00cee3c,
    WC_E_TEXTXMLDECL = 0xc00cee3d,
    WC_E_LEADINGXML = 0xc00cee3e,
    WC_E_TEXTDECL = 0xc00cee3f,
    WC_E_XMLDECL = 0xc00cee40,
    WC_E_ENCNAME = 0xc00cee41,
    WC_E_PUBLICID = 0xc00cee42,
    WC_E_PESINTERNALSUBSET = 0xc00cee43,
    WC_E_PESBETWEENDECLS = 0xc00cee44,
    WC_E_NORECURSION = 0xc00cee45,
    WC_E_ENTITYCONTENT = 0xc00cee46,
    WC_E_UNDECLAREDENTITY = 0xc00cee47,
    WC_E_PARSEDENTITY = 0xc00cee48,
    WC_E_NOEXTERNALENTITYREF = 0xc00cee49,
    WC_E_PI = 0xc00cee4a,
    WC_E_SYSTEMID = 0xc00cee4b,
    WC_E_QUESTIONMARK = 0xc00cee4c,
    WC_E_CDSECTEND = 0xc00cee4d,
    WC_E_MOREDATA = 0xc00cee4e,
    WC_E_DTDPROHIBITED = 0xc00cee4f,
    WC_E_INVALIDXMLSPACE = 0xc00cee50,
    NC_E_NC = 0xc00cee60,
    NC_E_QNAMECHARACTER = 0xc00cee61,
    NC_E_QNAMECOLON = 0xc00cee62,
    NC_E_NAMECOLON = 0xc00cee63,
    NC_E_DECLAREDPREFIX = 0xc00cee64,
    NC_E_UNDECLAREDPREFIX = 0xc00cee65,
    NC_E_EMPTYURI = 0xc00cee66,
    NC_E_XMLPREFIXRESERVED = 0xc00cee67,
    NC_E_XMLNSPREFIXRESERVED = 0xc00cee68,
    NC_E_XMLURIRESERVED = 0xc00cee69,
    NC_E_XMLNSURIRESERVED = 0xc00cee6a,
    SC_E_SC = 0xc00cee80,
    SC_E_MAXELEMENTDEPTH = 0xc00cee81,
    SC_E_MAXENTITYEXPANSION = 0xc00cee82,
    WR_E_WR = 0xc00cef00,
    WR_E_NONWHITESPACE = 0xc00cef01,
    WR_E_NSPREFIXDECLARED = 0xc00cef02,
    WR_E_NSPREFIXWITHEMPTYNSURI = 0xc00cef03,
    WR_E_DUPLICATEATTRIBUTE = 0xc00cef04,
    WR_E_XMLNSPREFIXDECLARATION = 0xc00cef05,
    WR_E_XMLPREFIXDECLARATION = 0xc00cef06,
    WR_E_XMLURIDECLARATION = 0xc00cef07,
    WR_E_XMLNSURIDECLARATION = 0xc00cef08,
    WR_E_NAMESPACEUNDECLARED = 0xc00cef09,
    WR_E_INVALIDXMLSPACE = 0xc00cef0a,
    WR_E_INVALIDACTION = 0xc00cef0b,
    WR_E_INVALIDSURROGATEPAIR = 0xc00cef0c,
    XML_E_INVALID_DECIMAL = 0xc00ce01d,
    XML_E_INVALID_HEXIDECIMAL = 0xc00ce01e,
    XML_E_INVALID_UNICODE = 0xc00ce01f,
    XML_E_INVALIDENCODING = 0xc00ce06e
} XmlError;
STDAPI CreateXmlReader(REFIID riid, void **ppvObject, IMalloc *pMalloc);
typedef IUnknown IXmlReaderInput;
STDAPI CreateXmlReaderInputWithEncodingName(IUnknown *stream, IMalloc *pMalloc,
                                            LPCWSTR encoding, WINBOOL hint,
                                            LPCWSTR base_uri, IXmlReaderInput **ppInput);
typedef enum XmlStandalone {
    XmlStandalone_Omit = 0,
    XmlStandalone_Yes = 1,
    XmlStandalone_No = 2,
    _XmlStandalone_Last = XmlStandalone_No
} XmlStandalone;
typedef enum XmlWriterProperty {
    XmlWriterProperty_MultiLanguage = 0,
    XmlWriterProperty_Indent = 1,
    XmlWriterProperty_ByteOrderMark = 2,
    XmlWriterProperty_OmitXmlDeclaration = 3,
    XmlWriterProperty_ConformanceLevel = 4,
    _XmlWriterProperty_Last = XmlWriterProperty_OmitXmlDeclaration
} XmlWriterProperty;
/*****************************************************************************
 * IXmlWriter interface
 */
#ifndef __IXmlWriter_INTERFACE_DEFINED__
#define __IXmlWriter_INTERFACE_DEFINED__

DEFINE_GUID(IID_IXmlWriter, 0x7279fc88, 0x709d, 0x4095, 0xb6,0x3d, 0x69,0xfe,0x4b,0x0d,0x90,0x30);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7279fc88-709d-4095-b63d-69fe4b0d9030")
IXmlWriter : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetOutput(
        IUnknown *pOutput) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetProperty(
        UINT nProperty,
        LONG_PTR *ppValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetProperty(
        UINT nProperty,
        LONG_PTR pValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteAttributes(
        IXmlReader *pReader,
        WINBOOL fWriteDefaultAttributes) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteAttributeString(
        LPCWSTR pwszPrefix,
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri,
        LPCWSTR pwszValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteCData(
        LPCWSTR pwszText) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteCharEntity(
        WCHAR wch) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteChars(
        const WCHAR *pwch,
        UINT cwch) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteComment(
        LPCWSTR pwszComment) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteDocType(
        LPCWSTR pwszName,
        LPCWSTR pwszPublicId,
        LPCWSTR pwszSystemId,
        LPCWSTR pwszSubset) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteElementString(
        LPCWSTR pwszPrefix,
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri,
        LPCWSTR pwszValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteEndDocument(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteEndElement(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteEntityRef(
        LPCWSTR pwszName) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteFullEndElement(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteName(
        LPCWSTR pwszName) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteNmToken(
        LPCWSTR pwszNmToken) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteNode(
        IXmlReader *pReader,
        WINBOOL fWriteDefaultAttributes) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteNodeShallow(
        IXmlReader *pReader,
        WINBOOL fWriteDefaultAttributes) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteProcessingInstruction(
        LPCWSTR pwszName,
        LPCWSTR pwszText) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteQualifiedName(
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteRaw(
        LPCWSTR pwszData) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteRawChars(
        const WCHAR *pwch,
        UINT cwch) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteStartDocument(
        XmlStandalone standalone) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteStartElement(
        LPCWSTR pwszPrefix,
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteString(
        LPCWSTR pwszText) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteSurrogateCharEntity(
        WCHAR wchLow,
        WCHAR wchHigh) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteWhitespace(
        LPCWSTR pwszWhitespace) = 0;

    virtual HRESULT STDMETHODCALLTYPE Flush(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IXmlWriter, 0x7279fc88, 0x709d, 0x4095, 0xb6,0x3d, 0x69,0xfe,0x4b,0x0d,0x90,0x30)
#endif
#else
typedef struct IXmlWriterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXmlWriter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXmlWriter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXmlWriter *This);

    /*** IXmlWriter methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOutput)(
        IXmlWriter *This,
        IUnknown *pOutput);

    HRESULT (STDMETHODCALLTYPE *GetProperty)(
        IXmlWriter *This,
        UINT nProperty,
        LONG_PTR *ppValue);

    HRESULT (STDMETHODCALLTYPE *SetProperty)(
        IXmlWriter *This,
        UINT nProperty,
        LONG_PTR pValue);

    HRESULT (STDMETHODCALLTYPE *WriteAttributes)(
        IXmlWriter *This,
        IXmlReader *pReader,
        WINBOOL fWriteDefaultAttributes);

    HRESULT (STDMETHODCALLTYPE *WriteAttributeString)(
        IXmlWriter *This,
        LPCWSTR pwszPrefix,
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri,
        LPCWSTR pwszValue);

    HRESULT (STDMETHODCALLTYPE *WriteCData)(
        IXmlWriter *This,
        LPCWSTR pwszText);

    HRESULT (STDMETHODCALLTYPE *WriteCharEntity)(
        IXmlWriter *This,
        WCHAR wch);

    HRESULT (STDMETHODCALLTYPE *WriteChars)(
        IXmlWriter *This,
        const WCHAR *pwch,
        UINT cwch);

    HRESULT (STDMETHODCALLTYPE *WriteComment)(
        IXmlWriter *This,
        LPCWSTR pwszComment);

    HRESULT (STDMETHODCALLTYPE *WriteDocType)(
        IXmlWriter *This,
        LPCWSTR pwszName,
        LPCWSTR pwszPublicId,
        LPCWSTR pwszSystemId,
        LPCWSTR pwszSubset);

    HRESULT (STDMETHODCALLTYPE *WriteElementString)(
        IXmlWriter *This,
        LPCWSTR pwszPrefix,
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri,
        LPCWSTR pwszValue);

    HRESULT (STDMETHODCALLTYPE *WriteEndDocument)(
        IXmlWriter *This);

    HRESULT (STDMETHODCALLTYPE *WriteEndElement)(
        IXmlWriter *This);

    HRESULT (STDMETHODCALLTYPE *WriteEntityRef)(
        IXmlWriter *This,
        LPCWSTR pwszName);

    HRESULT (STDMETHODCALLTYPE *WriteFullEndElement)(
        IXmlWriter *This);

    HRESULT (STDMETHODCALLTYPE *WriteName)(
        IXmlWriter *This,
        LPCWSTR pwszName);

    HRESULT (STDMETHODCALLTYPE *WriteNmToken)(
        IXmlWriter *This,
        LPCWSTR pwszNmToken);

    HRESULT (STDMETHODCALLTYPE *WriteNode)(
        IXmlWriter *This,
        IXmlReader *pReader,
        WINBOOL fWriteDefaultAttributes);

    HRESULT (STDMETHODCALLTYPE *WriteNodeShallow)(
        IXmlWriter *This,
        IXmlReader *pReader,
        WINBOOL fWriteDefaultAttributes);

    HRESULT (STDMETHODCALLTYPE *WriteProcessingInstruction)(
        IXmlWriter *This,
        LPCWSTR pwszName,
        LPCWSTR pwszText);

    HRESULT (STDMETHODCALLTYPE *WriteQualifiedName)(
        IXmlWriter *This,
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri);

    HRESULT (STDMETHODCALLTYPE *WriteRaw)(
        IXmlWriter *This,
        LPCWSTR pwszData);

    HRESULT (STDMETHODCALLTYPE *WriteRawChars)(
        IXmlWriter *This,
        const WCHAR *pwch,
        UINT cwch);

    HRESULT (STDMETHODCALLTYPE *WriteStartDocument)(
        IXmlWriter *This,
        XmlStandalone standalone);

    HRESULT (STDMETHODCALLTYPE *WriteStartElement)(
        IXmlWriter *This,
        LPCWSTR pwszPrefix,
        LPCWSTR pwszLocalName,
        LPCWSTR pwszNamespaceUri);

    HRESULT (STDMETHODCALLTYPE *WriteString)(
        IXmlWriter *This,
        LPCWSTR pwszText);

    HRESULT (STDMETHODCALLTYPE *WriteSurrogateCharEntity)(
        IXmlWriter *This,
        WCHAR wchLow,
        WCHAR wchHigh);

    HRESULT (STDMETHODCALLTYPE *WriteWhitespace)(
        IXmlWriter *This,
        LPCWSTR pwszWhitespace);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        IXmlWriter *This);

    END_INTERFACE
} IXmlWriterVtbl;

interface IXmlWriter {
    CONST_VTBL IXmlWriterVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IXmlWriter_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IXmlWriter_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IXmlWriter_Release(This) (This)->lpVtbl->Release(This)
/*** IXmlWriter methods ***/
#define IXmlWriter_SetOutput(This,pOutput) (This)->lpVtbl->SetOutput(This,pOutput)
#define IXmlWriter_GetProperty(This,nProperty,ppValue) (This)->lpVtbl->GetProperty(This,nProperty,ppValue)
#define IXmlWriter_SetProperty(This,nProperty,pValue) (This)->lpVtbl->SetProperty(This,nProperty,pValue)
#define IXmlWriter_WriteAttributes(This,pReader,fWriteDefaultAttributes) (This)->lpVtbl->WriteAttributes(This,pReader,fWriteDefaultAttributes)
#define IXmlWriter_WriteAttributeString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue) (This)->lpVtbl->WriteAttributeString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue)
#define IXmlWriter_WriteCData(This,pwszText) (This)->lpVtbl->WriteCData(This,pwszText)
#define IXmlWriter_WriteCharEntity(This,wch) (This)->lpVtbl->WriteCharEntity(This,wch)
#define IXmlWriter_WriteChars(This,pwch,cwch) (This)->lpVtbl->WriteChars(This,pwch,cwch)
#define IXmlWriter_WriteComment(This,pwszComment) (This)->lpVtbl->WriteComment(This,pwszComment)
#define IXmlWriter_WriteDocType(This,pwszName,pwszPublicId,pwszSystemId,pwszSubset) (This)->lpVtbl->WriteDocType(This,pwszName,pwszPublicId,pwszSystemId,pwszSubset)
#define IXmlWriter_WriteElementString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue) (This)->lpVtbl->WriteElementString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue)
#define IXmlWriter_WriteEndDocument(This) (This)->lpVtbl->WriteEndDocument(This)
#define IXmlWriter_WriteEndElement(This) (This)->lpVtbl->WriteEndElement(This)
#define IXmlWriter_WriteEntityRef(This,pwszName) (This)->lpVtbl->WriteEntityRef(This,pwszName)
#define IXmlWriter_WriteFullEndElement(This) (This)->lpVtbl->WriteFullEndElement(This)
#define IXmlWriter_WriteName(This,pwszName) (This)->lpVtbl->WriteName(This,pwszName)
#define IXmlWriter_WriteNmToken(This,pwszNmToken) (This)->lpVtbl->WriteNmToken(This,pwszNmToken)
#define IXmlWriter_WriteNode(This,pReader,fWriteDefaultAttributes) (This)->lpVtbl->WriteNode(This,pReader,fWriteDefaultAttributes)
#define IXmlWriter_WriteNodeShallow(This,pReader,fWriteDefaultAttributes) (This)->lpVtbl->WriteNodeShallow(This,pReader,fWriteDefaultAttributes)
#define IXmlWriter_WriteProcessingInstruction(This,pwszName,pwszText) (This)->lpVtbl->WriteProcessingInstruction(This,pwszName,pwszText)
#define IXmlWriter_WriteQualifiedName(This,pwszLocalName,pwszNamespaceUri) (This)->lpVtbl->WriteQualifiedName(This,pwszLocalName,pwszNamespaceUri)
#define IXmlWriter_WriteRaw(This,pwszData) (This)->lpVtbl->WriteRaw(This,pwszData)
#define IXmlWriter_WriteRawChars(This,pwch,cwch) (This)->lpVtbl->WriteRawChars(This,pwch,cwch)
#define IXmlWriter_WriteStartDocument(This,standalone) (This)->lpVtbl->WriteStartDocument(This,standalone)
#define IXmlWriter_WriteStartElement(This,pwszPrefix,pwszLocalName,pwszNamespaceUri) (This)->lpVtbl->WriteStartElement(This,pwszPrefix,pwszLocalName,pwszNamespaceUri)
#define IXmlWriter_WriteString(This,pwszText) (This)->lpVtbl->WriteString(This,pwszText)
#define IXmlWriter_WriteSurrogateCharEntity(This,wchLow,wchHigh) (This)->lpVtbl->WriteSurrogateCharEntity(This,wchLow,wchHigh)
#define IXmlWriter_WriteWhitespace(This,pwszWhitespace) (This)->lpVtbl->WriteWhitespace(This,pwszWhitespace)
#define IXmlWriter_Flush(This) (This)->lpVtbl->Flush(This)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IXmlWriter_QueryInterface(IXmlWriter* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IXmlWriter_AddRef(IXmlWriter* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IXmlWriter_Release(IXmlWriter* This) {
    return This->lpVtbl->Release(This);
}
/*** IXmlWriter methods ***/
static FORCEINLINE HRESULT IXmlWriter_SetOutput(IXmlWriter* This,IUnknown *pOutput) {
    return This->lpVtbl->SetOutput(This,pOutput);
}
static FORCEINLINE HRESULT IXmlWriter_GetProperty(IXmlWriter* This,UINT nProperty,LONG_PTR *ppValue) {
    return This->lpVtbl->GetProperty(This,nProperty,ppValue);
}
static FORCEINLINE HRESULT IXmlWriter_SetProperty(IXmlWriter* This,UINT nProperty,LONG_PTR pValue) {
    return This->lpVtbl->SetProperty(This,nProperty,pValue);
}
static FORCEINLINE HRESULT IXmlWriter_WriteAttributes(IXmlWriter* This,IXmlReader *pReader,WINBOOL fWriteDefaultAttributes) {
    return This->lpVtbl->WriteAttributes(This,pReader,fWriteDefaultAttributes);
}
static FORCEINLINE HRESULT IXmlWriter_WriteAttributeString(IXmlWriter* This,LPCWSTR pwszPrefix,LPCWSTR pwszLocalName,LPCWSTR pwszNamespaceUri,LPCWSTR pwszValue) {
    return This->lpVtbl->WriteAttributeString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue);
}
static FORCEINLINE HRESULT IXmlWriter_WriteCData(IXmlWriter* This,LPCWSTR pwszText) {
    return This->lpVtbl->WriteCData(This,pwszText);
}
static FORCEINLINE HRESULT IXmlWriter_WriteCharEntity(IXmlWriter* This,WCHAR wch) {
    return This->lpVtbl->WriteCharEntity(This,wch);
}
static FORCEINLINE HRESULT IXmlWriter_WriteChars(IXmlWriter* This,const WCHAR *pwch,UINT cwch) {
    return This->lpVtbl->WriteChars(This,pwch,cwch);
}
static FORCEINLINE HRESULT IXmlWriter_WriteComment(IXmlWriter* This,LPCWSTR pwszComment) {
    return This->lpVtbl->WriteComment(This,pwszComment);
}
static FORCEINLINE HRESULT IXmlWriter_WriteDocType(IXmlWriter* This,LPCWSTR pwszName,LPCWSTR pwszPublicId,LPCWSTR pwszSystemId,LPCWSTR pwszSubset) {
    return This->lpVtbl->WriteDocType(This,pwszName,pwszPublicId,pwszSystemId,pwszSubset);
}
static FORCEINLINE HRESULT IXmlWriter_WriteElementString(IXmlWriter* This,LPCWSTR pwszPrefix,LPCWSTR pwszLocalName,LPCWSTR pwszNamespaceUri,LPCWSTR pwszValue) {
    return This->lpVtbl->WriteElementString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue);
}
static FORCEINLINE HRESULT IXmlWriter_WriteEndDocument(IXmlWriter* This) {
    return This->lpVtbl->WriteEndDocument(This);
}
static FORCEINLINE HRESULT IXmlWriter_WriteEndElement(IXmlWriter* This) {
    return This->lpVtbl->WriteEndElement(This);
}
static FORCEINLINE HRESULT IXmlWriter_WriteEntityRef(IXmlWriter* This,LPCWSTR pwszName) {
    return This->lpVtbl->WriteEntityRef(This,pwszName);
}
static FORCEINLINE HRESULT IXmlWriter_WriteFullEndElement(IXmlWriter* This) {
    return This->lpVtbl->WriteFullEndElement(This);
}
static FORCEINLINE HRESULT IXmlWriter_WriteName(IXmlWriter* This,LPCWSTR pwszName) {
    return This->lpVtbl->WriteName(This,pwszName);
}
static FORCEINLINE HRESULT IXmlWriter_WriteNmToken(IXmlWriter* This,LPCWSTR pwszNmToken) {
    return This->lpVtbl->WriteNmToken(This,pwszNmToken);
}
static FORCEINLINE HRESULT IXmlWriter_WriteNode(IXmlWriter* This,IXmlReader *pReader,WINBOOL fWriteDefaultAttributes) {
    return This->lpVtbl->WriteNode(This,pReader,fWriteDefaultAttributes);
}
static FORCEINLINE HRESULT IXmlWriter_WriteNodeShallow(IXmlWriter* This,IXmlReader *pReader,WINBOOL fWriteDefaultAttributes) {
    return This->lpVtbl->WriteNodeShallow(This,pReader,fWriteDefaultAttributes);
}
static FORCEINLINE HRESULT IXmlWriter_WriteProcessingInstruction(IXmlWriter* This,LPCWSTR pwszName,LPCWSTR pwszText) {
    return This->lpVtbl->WriteProcessingInstruction(This,pwszName,pwszText);
}
static FORCEINLINE HRESULT IXmlWriter_WriteQualifiedName(IXmlWriter* This,LPCWSTR pwszLocalName,LPCWSTR pwszNamespaceUri) {
    return This->lpVtbl->WriteQualifiedName(This,pwszLocalName,pwszNamespaceUri);
}
static FORCEINLINE HRESULT IXmlWriter_WriteRaw(IXmlWriter* This,LPCWSTR pwszData) {
    return This->lpVtbl->WriteRaw(This,pwszData);
}
static FORCEINLINE HRESULT IXmlWriter_WriteRawChars(IXmlWriter* This,const WCHAR *pwch,UINT cwch) {
    return This->lpVtbl->WriteRawChars(This,pwch,cwch);
}
static FORCEINLINE HRESULT IXmlWriter_WriteStartDocument(IXmlWriter* This,XmlStandalone standalone) {
    return This->lpVtbl->WriteStartDocument(This,standalone);
}
static FORCEINLINE HRESULT IXmlWriter_WriteStartElement(IXmlWriter* This,LPCWSTR pwszPrefix,LPCWSTR pwszLocalName,LPCWSTR pwszNamespaceUri) {
    return This->lpVtbl->WriteStartElement(This,pwszPrefix,pwszLocalName,pwszNamespaceUri);
}
static FORCEINLINE HRESULT IXmlWriter_WriteString(IXmlWriter* This,LPCWSTR pwszText) {
    return This->lpVtbl->WriteString(This,pwszText);
}
static FORCEINLINE HRESULT IXmlWriter_WriteSurrogateCharEntity(IXmlWriter* This,WCHAR wchLow,WCHAR wchHigh) {
    return This->lpVtbl->WriteSurrogateCharEntity(This,wchLow,wchHigh);
}
static FORCEINLINE HRESULT IXmlWriter_WriteWhitespace(IXmlWriter* This,LPCWSTR pwszWhitespace) {
    return This->lpVtbl->WriteWhitespace(This,pwszWhitespace);
}
static FORCEINLINE HRESULT IXmlWriter_Flush(IXmlWriter* This) {
    return This->lpVtbl->Flush(This);
}
#endif
#endif

#endif


#endif  /* __IXmlWriter_INTERFACE_DEFINED__ */

STDAPI CreateXmlWriter(REFIID riid, void **ppvObject, IMalloc *pMalloc);
typedef IUnknown IXmlWriterOutput;
STDAPI CreateXmlWriterOutputWithEncodingName(IUnknown *stream, IMalloc *pMalloc,
                                             LPCWSTR encoding, IXmlWriterOutput **output);
STDAPI CreateXmlWriterOutputWithEncodingCodePage(IUnknown *stream, IMalloc *pMalloc,
    UINT codepage, IXmlWriterOutput **output);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __xmllite_h__ */
