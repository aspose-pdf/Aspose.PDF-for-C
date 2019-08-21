/// @file security/cryptography/pkcs/content_info.h
#ifndef content_info_h
#define content_info_h

#include "system/object.h"
#include "system/array.h"
#include "system/exceptions.h"

namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

/// Content info as defined by CMS/PKCS #7 standard.
/// Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ContentInfo FINAL : public System::Object
{
public:
    /// Constructor.
    /// @param content Data to sign.
    ASPOSECPP_SHARED_API ContentInfo(const System::ArrayPtr<uint8_t>& content);
};

}}}} // namespace System{ namespace Security{ namespace Cryptography{ namespace Pkcs{

#endif //content_info_h
