#ifndef __EncoderReplacementFallbackBuffer_h__
#define __EncoderReplacementFallbackBuffer_h__

#include "system/string.h"
#include "system/text/encoder_fallback_buffer.h"
#include "system/text/encoder_replacement_fallback.h"

#include "system/exceptions.h"

#include "fwd.h"

//std
#include <limits>

namespace System { namespace Text {

    class EncoderReplacementFallbackBuffer : public EncoderFallbackBuffer
    {
    private:
        String replacement;
        int current;
        bool fallback_assigned;

    public:
        EncoderReplacementFallbackBuffer(EncoderReplacementFallbackPtr fallback);

        virtual int get_Remaining() ASPOSE_CONST override;

        virtual bool Fallback(char_t charUnknown, int index);

        virtual bool Fallback(char_t charUnknownHigh, char_t charUnknownLow, int index);

    private:
        // hmm, what is this index for???
        bool Fallback(int index);

    public:
        virtual char_t GetNextChar();

        virtual bool MovePrevious();

        virtual void Reset();
    };

}}

#endif
