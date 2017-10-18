#ifndef __DecoderExceptionFallback_h__
#define __DecoderExceptionFallback_h__

#include "system/text/decoder_fallback.h"
#include "system/text/decoder_exception_fallback_buffer.h"

#include "fwd.h"

namespace System { namespace Text {

    class DecoderExceptionFallback : public DecoderFallback
    {
    public:
        virtual int get_MaxCharCount() ASPOSE_CONST override { return 0; }

        virtual DecoderFallbackBufferPtr CreateFallbackBuffer() {
            return MakeObject<DecoderExceptionFallbackBuffer>();
        }
    };

}}

#endif
