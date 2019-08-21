/// @file system/text/icu_encoding.h
#ifndef _aspose_system_text_icu_encoding_h_
#define _aspose_system_text_icu_encoding_h_

#include "system/text/encoding.h"

struct UConverter;

namespace System {
namespace Text {

/// ICU-based encoding implementation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ICUEncoding : public Encoding
{
    /// RTTI.
    RTTI_INFO(System::Text::ICUEncoding, ::System::BaseTypesInfo<System::Text::Encoding>)

public:
    /// Base class.
    typedef Encoding Base;

    /// Associated encoder.
    friend class ICUEncoder;
    /// Associated decoder.
    friend class ICUDecoder;

    /// Constructor.
    /// @param name Encoding name.
    /// @param codepage Codepage.
    ASPOSECPP_SHARED_API ICUEncoding(const String& name, int codepage);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~ICUEncoding();

    /// Compares encodings using codepages.
    /// @param other Encoding to compare to.
    /// @return True if codepages match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const ICUEncoding& other) const;
    /// Compares objects.
    /// @param obj Object to compare to.
    /// @return True if obj is ICUEncoding and codepages match, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(ptr obj) override;

    /// Gets codepage number.
    /// @return Windows codepage.
    virtual ASPOSECPP_SHARED_API int get_CodePage() override;

    /// Gets human-readable encoding name.
    /// @return Name of encoding.
    virtual ASPOSECPP_SHARED_API String get_EncodingName() override;
    /// Gets mail agent header compatible encoding name.
    /// @return Name of encoding.
    virtual ASPOSECPP_SHARED_API String get_HeaderName() override;
    /// Checks whether encoding can be used in browser to display content. Not implemented.
    virtual ASPOSECPP_SHARED_API bool get_IsBrowserDisplay() override;
    /// Checks whether encoding can be used in browser to save content. Not implemented.
    virtual ASPOSECPP_SHARED_API bool get_IsBrowserSave() override;
    /// Checks whether encoding can be used in mail client to display content. Not implemented.
    virtual ASPOSECPP_SHARED_API bool get_IsMailNewsDisplay() override;
    /// Checks whether encoding can be used in mail client to save content. Not implemented.
    virtual ASPOSECPP_SHARED_API bool get_IsMailNewsSave() override;
    /// Checks whether encoding is read-only.
    /// @return Always returns true.
    virtual ASPOSECPP_SHARED_API bool get_IsReadOnly() override;
    /// Checks whether encoding is single byte.
    /// @return True if single character encodes into single byte, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsSingleByte() override;

    /// Gets codepage number.
    /// @return Windows codepage.
    virtual ASPOSECPP_SHARED_API int get_WindowsCodePage() override;

    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @param count Buffer size.
    /// @return Required buffer size.
    virtual int GetByteCount(const char_t *chars, int count) override;
    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @return Required buffer size.
    virtual int GetByteCount(ArrayPtr<char_t> chars) override { return Base::GetByteCount(chars); };
    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @param index Slice begin.
    /// @param count Slice size.
    /// @return Required buffer size.
    virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count) override { return Base::GetByteCount(chars, index, count); };
    /// Get the number of characters needed to encode a string.
    /// @param s String to encode.
    /// @return Required buffer size.
    virtual int GetByteCount(const String& s) override { return Base::GetByteCount(s); };

    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteCount Output buffer size.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(const char_t* chars, int charCount, uint8_t* bytes, int byteCount) override;
    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @return Buffer that holds representation of characters being encoded.
    virtual ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars) override { return Base::GetBytes(chars);  };
    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param index Character slice beginning.
    /// @param count Number of characters to convert.
    /// @return Buffer that holds representation of characters being encoded.
    virtual ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars, int index, int count) override { return Base::GetBytes(chars, index, count); };
    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param charIndex Character slice beginning.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteIndex Output buffer offset.
    /// @return Number of written bytes.
    virtual int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex) override
    {
        return  Base::GetBytes(chars, charIndex, charCount, bytes, byteIndex);
    }
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @return Buffer that holds representation of characters being encoded.
    virtual ArrayPtr<uint8_t> GetBytes(const String &s) override { return Base::GetBytes(s); };
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @param charIndex Character slice beginning.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteIndex Output buffer offset.
    /// @return Number of written bytes.
    virtual int GetBytes(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex) override
    {
        return  Base::GetBytes(s, charIndex, charCount, bytes, byteIndex);
    }

    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param count Bytes count.
    /// @return Number of characters.
    virtual ASPOSECPP_SHARED_API int GetCharCount(const uint8_t* bytes, int count) override;
    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @return Number of characters.
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes) override { return Base::GetCharCount(bytes); };
    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @return Number of characters.
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count) override
    {
        return Base::GetCharCount(bytes, index, count);
    }

    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charCount Output buffer size.
    /// @return Number of written characters.
    virtual ASPOSECPP_SHARED_API int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount) override;
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @return Buffer of decoded characters.
    virtual ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes) override { return Base::GetChars(bytes); };
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param index Input buffer offset.
    /// @param count Input buffer size.
    /// @return Buffer of decoded characters.
    virtual ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes, int index, int count) override { return Base::GetChars(bytes, index, count); };
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charIndex Output buffer offset.
    /// @return Number of written characters.
    virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex) override
    {
        return Base::GetChars(bytes, byteIndex, byteCount, chars, charIndex);
    }

    /// Get a decoder that forwards requests to this object.
    /// @return Newly created decoder.
    virtual ASPOSECPP_SHARED_API DecoderPtr GetDecoder() override;
    /// Get an encoder that forwards requests to this object.
    /// @return Newly created encoder.
    virtual ASPOSECPP_SHARED_API EncoderPtr GetEncoder() override;

    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param charCount Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxByteCount(int charCount) override;
    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byteCount Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxCharCount(int byteCount) override;

    /// Returns a sequence of bytes that denotes the encoding (e. g. BOM).
    /// @return Bytes sequence preamble.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;

    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @param byteCount Input buffer size.
    /// @return String of decoded characters.
    virtual String GetString(uint8_t* bytes, int byteCount) override { return Base::GetString(bytes, byteCount); };
    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @return String of decoded characters.
    virtual String GetString(ArrayPtr<uint8_t> bytes) override { return Base::GetString(bytes); };
    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @param index Input buffer offset.
    /// @param count Input buffer size.
    /// @return String of decoded characters.
    virtual String GetString(ArrayPtr<uint8_t> bytes, int index, int count) override
    {
        return Base::GetString(bytes, index, count);
    }

    /// Sets context to enable inter-byte recovery.
    /// @param context Pointer to first character not consumed.
    void SetFromUnicodeContext(const UChar *context) const { m_fromUnicodeContext = context;  };
    /// Sets context to enable inter-byte recovery.
    /// @param context Pointer to first byte not consumed.
    void SetToUnicodeContext(const uint8_t *context) const { m_toUnicodeContext = context;  };
    /// Gets context to enable inter-byte recovery.
    /// @return Pointer to first character not consumed.
    const UChar *GetFromUnicodeContext() const { return m_fromUnicodeContext; }
    /// Gets context to enable inter-byte recovery.
    /// @return Pointer to first byte not consumed.
    const uint8_t *GetToUnicodeContext() const     { return m_toUnicodeContext; }

private:
    friend Encoding;

    /// Initializes ICU data structures.
    void SetICUCallbacks();
    /// Codepage number.
    int codePage;
    /// Encoding name.
    String encodingName;

    /// Pointer implementation.
    UConverter *m_icu_converter = 0;
    /// Buffer position where we stopped reading unicode characters.
    /// We keep in-buffer position to recover ICU functions that failed to decode/encode something due to buffer underflow with parts of character bytes in them.
    mutable const UChar *m_fromUnicodeContext = 0;
    /// Buffer position where we stopped reading unicode bytes.
    /// We keep in-buffer position to recover ICU functions that failed to decode/encode something due to buffer underflow with parts of character bytes in them.
    mutable const uint8_t *m_toUnicodeContext = 0;
};

}};

#endif



