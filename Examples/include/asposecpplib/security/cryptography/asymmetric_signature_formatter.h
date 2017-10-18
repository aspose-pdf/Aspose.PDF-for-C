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

class ABSTRACT AsymmetricSignatureFormatter : public System::Object
{
    typedef AsymmetricSignatureFormatter ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();
    FRIEND_FUNCTION_System_MakeObject
public:

    virtual System::ArrayPtr<uint8_t> CreateSignature(System::ArrayPtr<uint8_t> rgbHash) = 0;
    virtual System::ArrayPtr<uint8_t> CreateSignature(System::SharedPtr<HashAlgorithm> hash);
    virtual void SetHashAlgorithm(System::String strName) = 0;
    virtual void SetKey(System::SharedPtr<AsymmetricAlgorithm> key) = 0;

protected:

    AsymmetricSignatureFormatter();

};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_asymmetric_signature_formatter_h_

