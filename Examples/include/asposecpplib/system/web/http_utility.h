#ifndef _aspose_system_http_utility_h_
#define _aspose_system_http_utility_h_

#include "fwd.h"
#include "system/array.h"
#include "system/text/encoding.h"
#include "system/exceptions.h"

namespace System {
    namespace Web {

        class HttpUtility : public Object
        {
        public:
            static ArrayPtr<uint8_t> UrlDecodeToBytes(String str, SharedPtr<Text::Encoding> e = Text::Encoding::get_UTF8())
            {
                throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
            }

        };

    }
}

#endif
