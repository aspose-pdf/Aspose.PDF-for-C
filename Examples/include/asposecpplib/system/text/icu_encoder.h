#ifndef _aspose_system_text_icu_encoder_h_
#define _aspose_system_text_icu_encoder_h_

#include "system/text/encoder.h"

struct UConverter;

namespace System {   namespace Text {

class ICUEncoding;
typedef System::SharedPtr<ICUEncoding> ICUEncodingPtr;

class ICUEncoder : public Encoder
{
public:
    typedef Encoder Base;
    ICUEncoder(ICUEncoding* encoding);
    ~ICUEncoder();

    virtual void Reset();

    // Get the number of bytes needed to encode a buffer.
    virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count, bool flush)
    {
        return Base::GetByteCount(chars, index, count, flush);
    }
    virtual int GetByteCount(const char_t *chars, int count, bool flush);

    // Get the bytes that result from decoding a buffer.
    virtual int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, bool flush)
    {
        return Base::GetBytes(chars, charIndex, charCount, bytes, byteIndex, flush);
    }
    virtual int GetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush);

    virtual void Convert(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed)
    {
        Base::Convert(chars, charIndex, charCount, bytes, byteIndex, byteCount, flush, charsUsed, bytesUsed, completed);
    }
    virtual void Convert(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed);

    void SetFromUnicodeContext(const UChar *context) const { m_fromUnicodeContext = context; };
    const UChar *GetFromUnicodeContext() const { return m_fromUnicodeContext; }

private:
    void SetICUCallbacks();

    UConverter *m_icu_converter;
    mutable const UChar *m_fromUnicodeContext = 0;

};

}};

#endif