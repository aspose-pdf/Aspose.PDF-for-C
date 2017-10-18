#ifndef __Encoder_h__
#define __Encoder_h__

#include "system/array.h"
#include "system/object.h"
#include "fwd.h"
#include "encoder_fallback_buffer.h"


namespace System { namespace Text {

    class Encoder: public Object
    {
    protected:
        Encoder();

    public:
        EncoderFallbackPtr get_Fallback() const { return m_fallback; }
        void set_Fallback(EncoderFallbackPtr value);

        const EncoderFallbackBufferPtr get_FallbackBuffer() const;

        // Get the number of bytes needed to encode a buffer.
        virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count, bool flush);
        virtual int GetByteCount(const char_t *chars, int count, bool flush);

        // Get the bytes that result from decoding a buffer.
        virtual int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, bool flush);
        virtual int GetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush);

        virtual void Reset();

        virtual void Convert(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed);
        virtual void Convert(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed);

    private:
        EncoderFallbackPtr         m_fallback;
        mutable EncoderFallbackBufferPtr   m_fallback_buffer;
    };

}}

#endif
