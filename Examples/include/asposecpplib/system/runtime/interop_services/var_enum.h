#ifndef _var_enum_h_
#define _var_enum_h_

namespace System { namespace Runtime { namespace InteropServices {

    enum VarEnum {
        //     Indicates that a value was not specified.
        VT_EMPTY = 0,
        //     Indicates a null value, similar to a null value in SQL.
        VT_NULL = 1,
        //     Indicates a short integer.
        VT_I2 = 2,
        //     Indicates a long integer.
        VT_I4 = 3,
        //     Indicates a float value.
        VT_R4 = 4,
        //     Indicates a double value.
        VT_R8 = 5,
        //     Indicates a currency value.
        VT_CY = 6,
        //     Indicates a DATE value.
        VT_DATE = 7,
        //     Indicates a BSTR string.
        VT_BSTR = 8,
        //     Indicates an IDispatch pointer.
        VT_DISPATCH = 9,
        //     Indicates an SCODE.
        VT_ERROR = 10,
        //     Indicates a Boolean value.
        VT_BOOL = 11,
        //     Indicates a VARIANT far pointer.
        VT_VARIANT = 12,
        //     Indicates an IUnknown pointer.
        VT_UNKNOWN = 13,
        //     Indicates a decimal value.
        VT_DECIMAL = 14,
        //     Indicates a char value.
        VT_I1 = 16,
        //     Indicates a byte.
        VT_UI1 = 17,
        //     Indicates an unsignedshort.
        VT_UI2 = 18,
        //     Indicates an unsignedlong.
        VT_UI4 = 19,
        //     Indicates a 64-bit integer.
        VT_I8 = 20,
        //     Indicates an 64-bit unsigned integer.
        VT_UI8 = 21,
        //     Indicates an integer value.
        VT_INT = 22,
        //     Indicates an unsigned integer value.
        VT_UINT = 23,
        //     Indicates a C style void.
        VT_VOID = 24,
        //     Indicates an HRESULT.
        VT_HRESULT = 25,
        //     Indicates a pointer type.
        VT_PTR = 26,
        //     Indicates a SAFEARRAY. Not valid in a VARIANT.
        VT_SAFEARRAY = 27,
        //     Indicates a C style array.
        VT_CARRAY = 28,
        //     Indicates a user defined type.
        VT_USERDEFINED = 29,
        //     Indicates a null-terminated string.
        VT_LPSTR = 30,
        //     Indicates a wide string terminated by null.
        VT_LPWSTR = 31,
        //     Indicates a user defined type.
        VT_RECORD = 36,
        //     Indicates a FILETIME value.
        VT_FILETIME = 64,
        //     Indicates length prefixed bytes.
        VT_BLOB = 65,
        //     Indicates that the name of a stream follows.
        VT_STREAM = 66,
        //     Indicates that the name of a storage follows.
        VT_STORAGE = 67,
        //     Indicates that a stream contains an object.
        VT_STREAMED_OBJECT = 68,
        //     Indicates that a storage contains an object.
        VT_STORED_OBJECT = 69,
        //     Indicates that a blob contains an object.
        VT_BLOB_OBJECT = 70,
        //     Indicates the clipboard format.
        VT_CF = 71,
        //     Indicates a class ID.
        VT_CLSID = 72,
        //     Indicates a simple, counted array.
        VT_VECTOR = 4096,
        //     Indicates a SAFEARRAY pointer.
        VT_ARRAY = 8192,
        //     Indicates that a value is a reference.
        VT_BYREF = 16384,
    };
}}}

#endif