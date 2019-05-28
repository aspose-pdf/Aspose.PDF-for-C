/// @file system/runtime/interop_services/var_enum.h
#ifndef _var_enum_h_
#define _var_enum_h_

namespace System { namespace Runtime { namespace InteropServices {

/// Defines how array elements should be marshalled.
enum VarEnum {
    /// Value not speicified.
    VT_EMPTY = 0,
    /// Marshal as null.
    VT_NULL = 1,
    /// 2-bytes ingeger.
    VT_I2 = 2,
    /// 4-bytes integer.
    VT_I4 = 3,
    /// 4-bytes floating point.
    VT_R4 = 4,
    /// 8-bytes floating point.
    VT_R8 = 5,
    /// Use currency rules.
    VT_CY = 6,
    /// Date value.
    VT_DATE = 7,
    /// BSTR value.
    VT_BSTR = 8,
    /// IDispatch pointer.
    VT_DISPATCH = 9,
    /// Error code.
    VT_ERROR = 10,
    /// Boolean value.
    VT_BOOL = 11,
    /// Variant value.
    VT_VARIANT = 12,
    /// IUnknown pointer.
    VT_UNKNOWN = 13,
    /// Decimal value.
    VT_DECIMAL = 14,
    /// Byte value.
    VT_I1 = 16,
    /// Unsigned byte value.
    VT_UI1 = 17,
    /// Unsigned 2-bytes integer.
    VT_UI2 = 18,
    /// Unsigned 4-bytes integer.
    VT_UI4 = 19,
    /// 8-bytes integer.
    VT_I8 = 20,
    /// Unsigned 8-bytes integer.
    VT_UI8 = 21,
    /// Integer value.
    VT_INT = 22,
    /// Unsigned integer value.
    VT_UINT = 23,
    /// C-style void.
    VT_VOID = 24,
    /// HRESULT-compatible value.
    VT_HRESULT = 25,
    /// Pointer value.
    VT_PTR = 26,
    /// Safe array value.
    VT_SAFEARRAY = 27,
    /// C-style array.
    VT_CARRAY = 28,
    /// User-defined type.
    VT_USERDEFINED = 29,
    /// Null-terminated string of chars.
    VT_LPSTR = 30,
    /// Null-terminated string of wchar_ts.
    VT_LPWSTR = 31,
    /// User-defined type.
    VT_RECORD = 36,
    /// Filename.
    VT_FILETIME = 64,
    /// Lenght-prefixed array of bytes.
    VT_BLOB = 65,
    /// Stream name.
    VT_STREAM = 66,
    /// Storage name.
    VT_STORAGE = 67,
    /// Object serialized in stream.
    VT_STREAMED_OBJECT = 68,
    /// Object serialized in storage.
    VT_STORED_OBJECT = 69,
    /// Object serialized in blob.
    VT_BLOB_OBJECT = 70,
    /// Clipboard format.
    VT_CF = 71,
    /// Class ID.
    VT_CLSID = 72,
    /// Vector.
    VT_VECTOR = 4096,
    /// Safe array.
    VT_ARRAY = 8192,
    /// Reference.
    VT_BYREF = 16384,
};

}}}

#endif
