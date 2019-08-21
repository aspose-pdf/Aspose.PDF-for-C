/// @file security/cryptography/derive_bytes.h
#pragma once

#include <system/object.h>
#include <system/array.h>

namespace System { namespace Security { namespace Cryptography {

/// Abstract class from which all classes that derive byte sequences of a specified length inherit.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT DeriveBytes : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Security::Cryptography::DeriveBytes, ::System::BaseTypesInfo<System::Object>)
public:
    /// Fills existing array elements with pseudo-random key bytes.
    /// @param cb The number of key bytes to generate.
    virtual ArrayPtr<uint8_t> GetBytes(int32_t cb) = 0;
    // Resets the state of the operation.
    virtual void Reset() = 0;
};

}}}
