#ifndef __DecoderReplacementFallbackBuffer_h__
#define __DecoderReplacementFallbackBuffer_h__

#include "system/text/decoder_fallback_buffer.h"
#include "system/text/decoder_replacement_fallback.h"
#include "system/string.h"
#include "system/exceptions.h"

#include "fwd.h"


namespace System { namespace Text {

    class DecoderReplacementFallbackBuffer : public DecoderFallbackBuffer
    {
    private:
        bool fallback_assigned;
        int current;
        String replacement;

    public:
        DecoderReplacementFallbackBuffer(DecoderReplacementFallbackPtr fallback);

        virtual int get_Remaining() ASPOSE_CONST override;

        virtual bool Fallback(ArrayPtr<uint8_t> bytesUnknown, int index);

        virtual char_t GetNextChar();

        virtual bool MovePrevious();

        virtual void Reset();
    };

}}

#endif
