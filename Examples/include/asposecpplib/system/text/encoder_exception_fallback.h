#ifndef __EncoderExceptionFallback_h__
#define __EncoderExceptionFallback_h__

#include "system/text/encoder_exception_fallback_buffer.h"
#include "system/text/encoder_fallback.h"

#include "fwd.h"

namespace System { namespace Text {

    class EncoderExceptionFallback : public EncoderFallback
    {
    public:
        EncoderExceptionFallback() {}
        virtual int get_MaxCharCount() ASPOSE_CONST override { return 0; }
        virtual EncoderFallbackBufferPtr CreateFallbackBuffer() {
            return MakeObject<EncoderExceptionFallbackBuffer>();
        }
    };

}}

#endif
