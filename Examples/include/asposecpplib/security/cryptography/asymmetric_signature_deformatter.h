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

class ABSTRACT AsymmetricSignatureDeformatter : public System::Object
{
    typedef AsymmetricSignatureDeformatter ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();
    FRIEND_FUNCTION_System_MakeObject
public:

    virtual void SetHashAlgorithm(System::String strName) = 0;
    virtual void SetKey(System::SharedPtr<AsymmetricAlgorithm> key) = 0;
    virtual bool VerifySignature(System::ArrayPtr<uint8_t> rgbHash, System::ArrayPtr<uint8_t> rgbSignature) = 0;
    virtual bool VerifySignature(System::SharedPtr<HashAlgorithm> hash, System::ArrayPtr<uint8_t> rgbSignature);

protected:

    AsymmetricSignatureDeformatter();

};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_AsymmetricSignatureDeformatter_h_

