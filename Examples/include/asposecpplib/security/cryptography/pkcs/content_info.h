#ifndef content_info_h
#define content_info_h

#include "system/object.h"
#include "system/array.h"
#include "system/exceptions.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

class ContentInfo FINAL : public System::Object
{
public:
    ContentInfo(System::ArrayPtr<uint8_t> content);
};

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

#endif //content_info_h