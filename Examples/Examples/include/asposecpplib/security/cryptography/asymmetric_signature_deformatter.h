/// @file security/cryptography/asymmetric_signature_deformatter.h
#ifndef _security_AsymmetricSignatureDeformatter_h_
#define _security_AsymmetricSignatureDeformatter_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <security/cryptography/hash_algorithm.h>
#include <security/cryptography/asymmetric_algorithm.h>

namespace System {
namespace Security {
namespace Cryptography {

/// Base class for assimetric signature deformatters.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT AsymmetricSignatureDeformatter : public System::Object
{
    /// This type.
    typedef AsymmetricSignatureDeformatter ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();
    /// Unhides protected constructors.
    FRIEND_FUNCTION_System_MakeObject

public:
    /// Sets hash algorithm associated with deformatter.
    /// @param strName Name of hasing algorithm.
    virtual ASPOSECPP_SHARED_API void SetHashAlgorithm(System::String strName) = 0;
    /// Sets key to use with algorithm.
    /// @param key Asymmetric algorithm that holds a key to use.
    virtual ASPOSECPP_SHARED_API void SetKey(System::SharedPtr<AsymmetricAlgorithm> key) = 0;
    /// Verifies signature on data.
    /// @param rgbHash Data signed with @p rgbSignature.
    /// @param rgbSignature Signature to be verified for data.
    /// @return True if signature check succeeds, false otherwise.
    virtual ASPOSECPP_SHARED_API bool VerifySignature(System::ArrayPtr<uint8_t> rgbHash, System::ArrayPtr<uint8_t> rgbSignature) = 0;
    /// Verifies signature on data. Not implemented.
    /// @param hash Algorithm to use for hashing.
    /// @param rgbSignature Signature to be verified for data.
    /// @return True if signature check succeeds, false otherwise.
    virtual ASPOSECPP_SHARED_API bool VerifySignature(System::SharedPtr<HashAlgorithm> hash, System::ArrayPtr<uint8_t> rgbSignature);

protected:
    /// Constructor.
    ASPOSECPP_SHARED_API AsymmetricSignatureDeformatter();
};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_AsymmetricSignatureDeformatter_h_

