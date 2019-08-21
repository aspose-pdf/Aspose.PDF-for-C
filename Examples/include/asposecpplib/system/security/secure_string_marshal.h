/// @file security/secure_string_marshal.h
#pragma once

#include <system/security/secure_string.h>
#include <system/runtime/interop_services/marshal.h>

namespace System { namespace Security {

/// Collection of methods for allocating and copying unmanaged memory blocks.
class ASPOSECPP_SHARED_CLASS SecureStringMarshal
{
public:
    /// Copies contents of specified secure string into unmanaged memory, converting into ANSI format.
    /// @param s Secure string.
    /// @return The address in unmanaged memory.
    static IntPtr SecureStringToGlobalAllocAnsi(const SharedPtr<Security::SecureString>& s)
    {
        return System::Runtime::InteropServices::Marshal::SecureStringToGlobalAllocAnsi(s);
    }

    /// Copies contents of specified secure string into unmanaged memory.
    /// @param s Secure string.
    /// @return The address in unmanaged memory.
    static IntPtr SecureStringToGlobalAllocUnicode(const SharedPtr<Security::SecureString>& s)
    {
        return System::Runtime::InteropServices::Marshal::SecureStringToGlobalAllocUnicode(s);
    }
};

}} // namespace System::Security
