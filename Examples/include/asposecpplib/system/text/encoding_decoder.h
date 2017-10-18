#ifndef __aspose_system_text_encoding_decoder_h__
#define __aspose_system_text_encoding_decoder_h__

#include <system/text/decoder.h>
#include <system/exceptions.h>

#include <fwd.h>

namespace System { namespace Text {

    class EncodingDecoder : public Decoder
    {
    public:

        void Convert(const uint8_t* bytes, int byteCount, char_t *chars, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed) override;
        void Convert(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed) override;

    protected:

        EncodingPtr encoding;

        EncodingDecoder(EncodingPtr encoding_);
    };

}}

#endif // __aspose_system_text_encoding_decoder_h__