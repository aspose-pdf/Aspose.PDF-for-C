/// @file system/runtime/interop_services/file_time.h
#pragma once
namespace System { namespace Runtime { namespace InteropServices {

/// Holds file time components.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
struct FILETIME
{
    /// Low datetime dword.
    int32_t dwLowDateTime;
    /// High datetime dword.
    int32_t dwHighDateTime;
};

}}}
