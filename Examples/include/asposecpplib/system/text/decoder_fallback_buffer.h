#ifndef __DecoderFallbackBuffer_h__
#define __DecoderFallbackBuffer_h__

#include "system/array.h"
#include "system/object.h"

namespace System { namespace Text {

    class DecoderFallbackBuffer: public Object
    {
    protected:
        DecoderFallbackBuffer() {}

    public:
        virtual int get_Remaining() ASPOSE_CONST = 0;
        virtual bool Fallback(ArrayPtr<uint8_t> bytesUnknown, int index) = 0;
        virtual char_t GetNextChar() = 0;
        virtual bool MovePrevious() = 0;
        virtual void Reset() {}
    };

}}

#endif
