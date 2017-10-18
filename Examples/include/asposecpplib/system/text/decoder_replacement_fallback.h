#ifndef __DecoderReplacementFallback_h__
#define __DecoderReplacementFallback_h__

#include "system/string.h"
#include "system/text/decoder_fallback.h"
#include "system/exceptions.h"

#include "fwd.h"

namespace System { namespace Text {

    class DecoderReplacementFallback
        : public DecoderFallback
    {
    public:
        DecoderReplacementFallback() : replacement(L"?") {}
        DecoderReplacementFallback(const String &replacement_) : replacement(replacement_) {
            /* ORIG: replacement == null
            if(replacement.IsEmpty()) {
                throw ArgumentNullException();
            }
            */
        }

    public:
        const String& get_DefaultString() const { return replacement; }

        virtual int get_MaxCharCount() ASPOSE_CONST override { return replacement.get_Length(); }

        virtual DecoderFallbackBufferPtr CreateFallbackBuffer();

    private:
        String replacement;
    };

}}

#endif
