#ifndef _aspose_system_text_icu_encoding_h_
#define _aspose_system_text_icu_encoding_h_

#include "system/text/encoding.h"

struct UConverter;

namespace System {
namespace Text {

class ICUEncoding : public Encoding
{
    RTTI_INFO(System::Text::ICUEncoding, ::System::BaseTypesInfo<System::Text::Encoding>)

public:
    typedef Encoding Base;

    friend class ICUEncoder;
    friend class ICUDecoder;

    ICUEncoding(const String& name, int codepage);
    virtual ~ICUEncoding();

    bool operator==(const ICUEncoding& other) const;
    virtual bool Equals(ptr obj);

    virtual int get_CodePage() override;

    virtual String get_EncodingName() override;
    virtual String get_HeaderName() override;
    virtual bool get_IsBrowserDisplay() override;
    virtual bool get_IsBrowserSave() override;
    virtual bool get_IsMailNewsDisplay() override;
    virtual bool get_IsMailNewsSave() override;
    virtual bool get_IsReadOnly() override;
    virtual bool get_IsSingleByte() override;

    virtual int get_WindowsCodePage() override;

    // Get the number of characters needed to encode a character buffer.
    virtual int GetByteCount(const char_t *chars, int count) override;
    virtual int GetByteCount(ArrayPtr<char_t> chars) override { return Base::GetByteCount(chars); };
    virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count) override { return Base::GetByteCount(chars, index, count); };
    virtual int GetByteCount(const String& s) override { return Base::GetByteCount(s); };

    // Get the bytes that result from encoding a character buffer.
    virtual int GetBytes(const char_t* chars, int charCount, uint8_t* bytes, int byteCount) override;
    virtual ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars) override { return Base::GetBytes(chars);  };
    virtual ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars, int index, int count) override { return Base::GetBytes(chars, index, count); };
    virtual int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex) override
    {
        return  Base::GetBytes(chars, charIndex, charCount, bytes, byteIndex);
    }
    virtual ArrayPtr<uint8_t> GetBytes(const String &s) override { return Base::GetBytes(s); };
    virtual int GetBytes(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex) override
    {
        return  Base::GetBytes(s, charIndex, charCount, bytes, byteIndex);
    }

    // Get the number of characters needed to decode a byte buffer.
    virtual int GetCharCount(const uint8_t* bytes, int count) override;
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes) override { return Base::GetCharCount(bytes); };
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count) override
    {
        return Base::GetCharCount(bytes, index, count);
    }

    // Get the characters that result from decoding a uint8_t buffer.
    virtual int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount) override;
    virtual ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes) override { return Base::GetChars(bytes); };
    virtual ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes, int index, int count) override { return Base::GetChars(bytes, index, count); };
    virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex) override
    {
        return Base::GetChars(bytes, byteIndex, byteCount, chars, charIndex);
    }

    // Get a decoder that forwards requests to this object.
    virtual DecoderPtr GetDecoder() override;
    // Get an encoder that forwards requests to this object.
    virtual EncoderPtr GetEncoder() override;

    // Get the maximum number of bytes needed to encode a
    // specified number of characters.
    virtual int GetMaxByteCount(int charCount) override;
    // Get the maximum number of characters needed to decode a
    // specified number of bytes.
    virtual int GetMaxCharCount(int byteCount) override;

    virtual ArrayPtr<uint8_t> GetPreamble() override;

    // Decode a buffer of bytes into a string.
    virtual String GetString(uint8_t* bytes, int byteCount) override { return Base::GetString(bytes, byteCount); };
    virtual String GetString(ArrayPtr<uint8_t> bytes) override { return Base::GetString(bytes); };
    virtual String GetString(ArrayPtr<uint8_t> bytes, int index, int count) override
    {
        return Base::GetString(bytes, index, count);
    }

    void SetFromUnicodeContext(const UChar *context) const { m_fromUnicodeContext = context;  };
    void SetToUnicodeContext(const uint8_t *context) const { m_toUnicodeContext = context;  };
    const UChar *GetFromUnicodeContext() const { return m_fromUnicodeContext; }
    const uint8_t *GetToUnicodeContext() const     { return m_toUnicodeContext; }


private:

    friend Encoding;

    void SetICUCallbacks();
    int codePage;
    String encodingName;


    UConverter *m_icu_converter = 0;
    mutable const UChar *m_fromUnicodeContext = 0;
    mutable const uint8_t *m_toUnicodeContext = 0;
};

}};

#endif



