#ifndef __EncoderExceptionFallbackBuffer_h__
#define __EncoderExceptionFallbackBuffer_h__

#include "system/text/encoder_fallback_buffer.h"
#include "system/exceptions.h"

//std
#include <limits>

namespace System { namespace Text {

    class EncoderExceptionFallbackBuffer : public EncoderFallbackBuffer
    {
    public:
        EncoderExceptionFallbackBuffer();
        virtual int get_Remaining() ASPOSE_CONST override;
        virtual bool Fallback(char_t charUnknown, int index);
        virtual bool Fallback(char_t charUnknownHigh, char_t charUnknownLow, int index);
        virtual char_t GetNextChar();
        virtual bool MovePrevious();
    };

}}

#endif
