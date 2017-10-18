#ifndef _aspose_system_text_icu_decoder_h_
#define _aspose_system_text_icu_decoder_h_

#include "system/text/decoder.h"

struct UConverter;

namespace System {
namespace Text {

class ICUEncoding;
typedef System::SharedPtr<ICUEncoding> ICUEncodingPtr;

class ICUDecoder : public Decoder
{
public:
    typedef Decoder Base;
    ICUDecoder(ICUEncoding *encoding);
    virtual ~ICUDecoder();

    virtual void Reset();

    // Get the number of characters needed to decode a buffer.
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count)
    {
        return Base::GetCharCount(bytes, index, count);
    }
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count, bool flush)
    {
        return Base::GetCharCount(bytes, index, count, flush);
    }

    virtual int GetCharCount(const uint8_t *bytes, int count, bool flush);

    // Get the characters that result from decoding a buffer.
    virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex)
    {
        return Base::GetChars(bytes, byteIndex, byteCount, chars, charIndex);
    }
    virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, bool flush)
    {
        return Base::GetChars(bytes, byteIndex, byteCount, chars, charIndex, flush);
    }

    virtual int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount, bool flush);

    virtual void Convert(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed)
    {
        Base::Convert(bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
    }

    virtual void Convert(const uint8_t* bytes, int byteCount, char_t *chars, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed);

    void SetToUnicodeContext(const uint8_t *context) const { m_toUnicodeContext = context; };
    const uint8_t *GetToUnicodeContext() const { return m_toUnicodeContext; }

private:

    void SetICUCallbacks();

    UConverter *m_icu_converter = 0;

    mutable const uint8_t *m_toUnicodeContext = 0;
};

}};


#endif