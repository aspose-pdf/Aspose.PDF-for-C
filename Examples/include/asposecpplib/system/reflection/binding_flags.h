#ifndef _binding_flags_h_
#define _binding_flags_h_

namespace System { namespace Reflection {
    enum class BindingFlags {
        Default = 0x00,
        IgnoreCase = 0x01,        // Ignore the case of Names while searching
        DeclaredOnly = 0x02,        // Only look at the members declared on the Type
        Instance = 0x04,        // Include Instance members in search
        Static = 0x08,        // Include Static members in search
        Public = 0x10,        // Include Public members in search
        NonPublic = 0x20,        // Include Non-Public members in search
        FlattenHierarchy = 0x40,        // Rollup the statics into the class.
        InvokeMethod = 0x0100,
        CreateInstance = 0x0200,
        GetField = 0x0400,
        SetField = 0x0800,
        GetProperty = 0x1000,
        SetProperty = 0x2000,
        PutDispProperty = 0x4000,
        PutRefDispProperty = 0x8000,
        ExactBinding = 0x010000,        // Bind with Exact Type matching, No Change type
        SuppressChangeType = 0x020000,
        OptionalParamBinding = 0x040000,
        IgnoreReturn = 0x01000000    // This is used in COM Interop
    };
}}

#endif