/// @file security/cryptography/rsa.h
#ifndef _security_cryptography_rsa_h_
#define _security_cryptography_rsa_h_

#include <security/cryptography/asymmetric_algorithm.h>

namespace System { namespace Security { namespace Cryptography {

struct RSAParameters;

/// Base class for implementations of RSA algorithm.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT RSA : public AsymmetricAlgorithm
{
    /// This type.
    typedef RSA ThisType;
    /// Parent type.
    typedef AsymmetricAlgorithm BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Decrypts value using private key.
    /// @param rgb Byte array to decrypt.
    /// @return Decrypted data in byte array format.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> DecryptValue(ArrayPtr<uint8_t> rgb) = 0;
    /// Encrypts value using private key.
    /// @param rgb Byte array to encrypt.
    /// @return Encrypted data in byte array format.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> EncryptValue(ArrayPtr<uint8_t> rgb) = 0;
    /// Exports all parameters.
    /// @param includePrivateParameters True to export both private and public parameters, false to export public parameters only.
    /// @return Exported parameters structure.
    virtual ASPOSECPP_SHARED_API RSAParameters ExportParameters(bool includePrivateParameters) = 0;
    /// Imports all parameters from data structure.
    /// @param parameters Structure to import parameters from.
    virtual ASPOSECPP_SHARED_API void ImportParameters(RSAParameters parameters) = 0;

    /// Initializes object using XML-encoded parameters.
    /// @param xmlString Parameters in XML format.
    virtual ASPOSECPP_SHARED_API void FromXmlString(String xmlString) override;
    /// Exports all parameters in XML format.
    /// @param includePrivateParameters True to export both private and public parameters, false to export public parameters only.
    /// @return XML-encoded parameters.
    virtual ASPOSECPP_SHARED_API String ToXmlString(bool includePrivateParameters) override;

    /// Creates default RSA aglorithm implementation.
    static ASPOSECPP_SHARED_API SharedPtr<RSA> Create();
    /// Creates default RSA algorithm implementation.
    /// @param algName Must be "System.Security.Cryptography.RSACryptoServiceProvider".
    static ASPOSECPP_SHARED_API SharedPtr<RSA> Create(const String& algName);

protected:
    /// Constructor.
    ASPOSECPP_SHARED_API RSA();
};

}}}

#endif // _security_cryptography_rsa_h_

