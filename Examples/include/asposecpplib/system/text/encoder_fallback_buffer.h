#ifndef __EncoderFallbackBuffer_h__
#define __EncoderFallbackBuffer_h__

#include "system/object.h"

namespace System { namespace Text {

    class EncoderFallbackBuffer: public Object
    {
    protected:
        EncoderFallbackBuffer() {}

    public:
        virtual int get_Remaining() ASPOSE_CONST = 0;
        virtual bool Fallback(char_t charUnknown, int index) = 0;
        virtual bool Fallback(char_t charUnknownHigh, char_t charUnknownLow, int index) = 0;
        virtual char_t GetNextChar() = 0;
        virtual bool MovePrevious() = 0;
        virtual void Reset() {
            while (GetNextChar() != L'\0') ;
        }
    };

}}

#endif
