#ifndef __EncoderReplacementFallback_h__
#define __EncoderReplacementFallback_h__

#include "system/string.h"
#include "system/text/encoder_fallback.h"

#include "fwd.h"

namespace System { namespace Text {

    class EncoderReplacementFallback
        : public EncoderFallback
    {
    public:
        EncoderReplacementFallback();
        EncoderReplacementFallback(const String &replacement_);

    private:
        String replacement;

    public:
        const String &get_DefaultString() const { return replacement; }

        virtual int get_MaxCharCount() ASPOSE_CONST override { return replacement.get_Length(); }

        virtual EncoderFallbackBufferPtr CreateFallbackBuffer();
    };

}}

#endif
