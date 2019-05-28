/// @file security/cryptography/asymmetric_algorithm.h
#ifndef _aspose_system_security_crypto_asymmetric_algorithm_h_
#define _aspose_system_security_crypto_asymmetric_algorithm_h_

#include <defines.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <security/cryptography/key_sizes.h>

namespace System { namespace Security { namespace Cryptography {

/// Abstract base class for asymmetric encryption algorithms.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT AsymmetricAlgorithm : virtual public Object
{
    /// This type.
    typedef AsymmetricAlgorithm ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Gets key size.
    /// @return Size of the key to use.
    virtual ASPOSECPP_SHARED_API int get_KeySize();
    /// Sets key size.
    /// @param value Size of the key to use.
    virtual ASPOSECPP_SHARED_API void set_KeySize(int value);
    /// Gets array of allowed key sizes.
    /// @return Array of allowed key sizes.
    virtual ASPOSECPP_SHARED_API ArrayPtr<SharedPtr<KeySizes> > get_LegalKeySizes();

    /// Releases all resources.
    ASPOSECPP_SHARED_API void Clear();

    /// Reads algorithm parameters from XML string.
    /// @param xmlString Parameters string in XML format.
    virtual ASPOSECPP_SHARED_API void FromXmlString(String xmlString) = 0;
    /// Writes algorithm parameters to XML string.
    /// @return Parameters string in XML format.
    virtual ASPOSECPP_SHARED_API String ToXmlString(bool includePrivateParameters) = 0;
    /// Gets signature algorithm to use.
    /// @return Algorithm name.
    virtual ASPOSECPP_SHARED_API String get_SignatureAlgorithm() = 0;
    /// Gets key exchange algorithm to use.
    /// @return Algorithm name.
    virtual ASPOSECPP_SHARED_API String get_KeyExchangeAlgorithm() = 0;

    /// Creates a default algorithm. Not implemented.
    /// @return Algorithm object.
    static ASPOSECPP_SHARED_API SharedPtr<AsymmetricAlgorithm> Create();
    /// Creates algorithm by name. Not implemented.
    /// @param algName Algorithm name.
    /// @return Algorithm object.
    static ASPOSECPP_SHARED_API SharedPtr<AsymmetricAlgorithm> Create(const String& algName);

protected:
    /// Constructor.
    ASPOSECPP_SHARED_API AsymmetricAlgorithm();

    /// Key size associated with algorithm.
    int                               m_key_size_value;
    /// Enabled key sizes.
    std::vector<SharedPtr<KeySizes>>  m_legal_key_sizes;
};

}}}

#endif // _aspose_system_security_crypto_asymmetric_algorithm_h_


