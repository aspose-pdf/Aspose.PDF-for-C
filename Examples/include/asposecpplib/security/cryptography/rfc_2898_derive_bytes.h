/// @file security/cryptography/rfc_2898_derive_bytes.h
#pragma once

#include <security/cryptography/derive_bytes.h>


namespace Botan_1_11_34 {
/// PBKDF type forward declaration.
ASPOSECPP_3RD_PARTY_CLASS(PBKDF);
}

namespace System { namespace Security { namespace Cryptography {

/// Implements password-based key derivation, PBKDF2.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Rfc2898DeriveBytes : public DeriveBytes
{
    /// RTTI information.
    RTTI_INFO(System::Security::Cryptography::Rfc2898DeriveBytes, ::System::BaseTypesInfo<System::Security::Cryptography::DeriveBytes>)
public:
    /// Constructor.
    ASPOSECPP_SHARED_API Rfc2898DeriveBytes(ArrayPtr<uint8_t> password, ArrayPtr<uint8_t>salt, int32_t iterations);
    /// Fills existing array elements with pseudo-random key bytes.
    /// @param cb The number of key bytes to generate.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetBytes(int32_t cb) override;
    // Resets the state of the operation.
    virtual ASPOSECPP_SHARED_API void Reset() override;
private:
    ArrayPtr<uint8_t> m_password;
    ArrayPtr<uint8_t> m_salt;
    int32_t m_iterations;
    std::unique_ptr<Botan_1_11_34::PBKDF> m_pbkdf;
    std::size_t m_derived;
};

}}}
