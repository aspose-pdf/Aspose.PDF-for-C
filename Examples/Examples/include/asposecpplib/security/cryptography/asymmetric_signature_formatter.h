/// @file security/cryptography/asymmetric_signature_formatter.h
#ifndef _security_asymmetric_signature_formatter_h_
#define _security_asymmetric_signature_formatter_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <security/cryptography/hash_algorithm.h>
#include <security/cryptography/asymmetric_algorithm.h>

namespace System {
namespace Security {
namespace Cryptography {

/// Base class for assimetric signature formatters.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT AsymmetricSignatureFormatter : public System::Object
{
    /// This type.
    typedef AsymmetricSignatureFormatter ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();
    /// Unhides protected constructors.
    FRIEND_FUNCTION_System_MakeObject

public:
    /// Creates the siguature for the specified data.
    /// @param rgbHash Data to calculate hash for.
    /// @return Calculated signature in byte array form.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> CreateSignature(System::ArrayPtr<uint8_t> rgbHash) = 0;
    /// Creates the signature for the specified hash value.
    /// @param hash Hash algorithm to use when creating signature.
    /// @return Calculated signature in byte array form.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> CreateSignature(System::SharedPtr<HashAlgorithm> hash);
    /// Sets hash algorithm to use.
    /// @param strName Hash algorithm name.
    virtual ASPOSECPP_SHARED_API void SetHashAlgorithm(System::String strName) = 0;
    /// Sets asymmetric algorithm to use when calculating the signature.
    /// @param key Algorithm to use.
    virtual ASPOSECPP_SHARED_API void SetKey(System::SharedPtr<AsymmetricAlgorithm> key) = 0;

protected:
    /// Constructor.
    ASPOSECPP_SHARED_API AsymmetricSignatureFormatter();
};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_asymmetric_signature_formatter_h_

