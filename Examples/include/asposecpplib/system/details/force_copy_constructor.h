/// @file system/details/force_copy_constructor.h
#pragma once


namespace System { namespace Details {


/// Disables calling moving constructor for the value passed, forces using copy constructor instead
/// @tparam T Type of object.
/// @param value Object to disable moving for
template <typename T>
const T& ForceCopyConstructor(const T &value)
{
    return value;
}


} } // namespace System::Details
