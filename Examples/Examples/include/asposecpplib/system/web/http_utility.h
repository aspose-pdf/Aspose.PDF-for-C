/// @file system/web/http_utility.h
#ifndef _aspose_system_http_utility_h_
#define _aspose_system_http_utility_h_

#include "fwd.h"
#include "system/array.h"
#include "system/text/encoding.h"
#include "system/exceptions.h"

namespace System {
namespace Web {

/// Stub class for ported code using HttpUtility calls to compile.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS HttpUtility : public Object
{
public:
    /// Decodes URL to bytes. Not implemented.
    static ArrayPtr<uint8_t> UrlDecodeToBytes(const String& str, const SharedPtr<Text::Encoding>& e = Text::Encoding::get_UTF8())
    {
        throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
    }

};

}
}

#endif
