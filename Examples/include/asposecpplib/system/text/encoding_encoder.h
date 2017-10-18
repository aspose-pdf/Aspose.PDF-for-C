#ifndef __aspose_system_encoding_encoder_h__
#define __aspose_system_encoding_encoder_h__

#include <system/text/encoder.h>
#include <system/exceptions.h>

namespace System { namespace Text {

    class EncodingEncoder : public Encoder
    {
    public:
        virtual void Convert(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed);
        virtual void Convert(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed);

    protected:
        EncodingPtr encoding;
        EncodingEncoder(EncodingPtr encoding_);
    };

}}

#endif // __aspose_system_encoding_encoder_h__