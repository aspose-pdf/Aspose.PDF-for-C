#ifndef __Decoder_h__
#define __Decoder_h__

#include "system/text/decoder_fallback.h"
#include "system/text/decoder_fallback_buffer.h"

#include "system/array.h"
#include "system/object.h"
#include "fwd.h"

namespace System { namespace Text {

    class Decoder: public Object
    {
    protected:
        Decoder();

    public:
        DecoderFallbackPtr get_Fallback() const { return m_fallback; }
        void set_Fallback(DecoderFallbackPtr value);

        DecoderFallbackBufferPtr get_FallbackBuffer() const;

        // Get the number of characters needed to decode a buffer.
        virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count);
        virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count, bool flush);
        virtual int GetCharCount(const uint8_t *bytes, int count, bool flush);

        // Get the characters that result from decoding a buffer.
        virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex);
        virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, bool flush);
        virtual int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount, bool flush);

        virtual void Reset();

        virtual void Convert(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed);
        virtual void Convert(const uint8_t* bytes, int byteCount, char_t *chars, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed);

    private:
        DecoderFallbackPtr         m_fallback;
        mutable DecoderFallbackBufferPtr   m_fallback_buffer;
    };

}}

#endif
