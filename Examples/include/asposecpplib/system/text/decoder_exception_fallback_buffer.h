#ifndef __DecoderExceptionFallbackBuffer_h__
#define __DecoderExceptionFallbackBuffer_h__

#include "system/array.h"
#include "system/text/decoder_fallback_buffer.h"
#include "system/exceptions.h"
#include "system/text/decoder_fallback_exception.h"

//std
#include <limits>


namespace System { namespace Text {

    class DecoderExceptionFallbackBuffer : public DecoderFallbackBuffer
    {
    public:
        DecoderExceptionFallbackBuffer() {}
        virtual int get_Remaining() ASPOSE_CONST override { return 0; }
        virtual bool Fallback(ArrayPtr<uint8_t> bytesUnknown, int index) { throw DecoderFallbackException(); }
        virtual char_t GetNextChar() { return std::numeric_limits<char_t>::min(); }
        virtual bool MovePrevious() { return false; }
    };

}}

#endif
