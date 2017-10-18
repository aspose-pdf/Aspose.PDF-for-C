#ifndef signed_cms_h
#define signed_cms_h

#include "system/object.h"
#include "content_info.h"
#include "cms_signer.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

class SignedCms FINAL: public System::Object
{
public:
    SignedCms(SharedPtr<ContentInfo>, bool detached);

    void ComputeSignature(SharedPtr<CmsSigner> signer, bool silent);

    System::ArrayPtr<uint8_t> Encode();
};

}}}}// namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

#endif // signed_cms_h