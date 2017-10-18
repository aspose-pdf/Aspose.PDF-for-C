#ifndef _aspose_system_text_encoding_h_
#define _aspose_system_text_encoding_h_

#include "system/object.h"

#include "system/text/decoder_fallback.h"
#include "system/text/encoder_fallback.h"
#include "system/text/decoder.h"
#include <system/text/encoder.h>
#include <system/text/encoding_decoder.h>
#include <system/text/encoding_encoder.h>

#include <system/exceptions.h>

#include <fwd.h>

#include <mutex>

namespace System { namespace Text {

class Encoding;
class EncodingInfo final : public Object
{
public:
    EncodingInfo(int codePage, String name, String displayName)
        : m_code_page(codePage)
        , m_name(name)
        , m_display_name(displayName)
    {}

    int get_CodePage() const { return m_code_page; }
    const String& get_Name() const { return m_name; }
    const String& get_DisplayName() const { return m_display_name; }

    System::SharedPtr<Encoding> GetEncoding();

private:
    int     m_code_page;    // Code Page #
    String  m_name;         // Short name (web name)
    String  m_display_name; // Full localized name
};

class Encoding : public Object
{
    RTTI_INFO(System::Text::Encoding, ::System::BaseTypesInfo<System::Object>)
    enum : int { DEFAILT_CODE_PAGE = 0 };


public:

    typedef System::SharedPtr<Encoding> Ptr;

    virtual bool Equals(ptr obj);
    virtual int GetHashCode() const override;

    virtual int get_CodePage();
    virtual int get_WindowsCodePage();

    virtual String get_WebName();
    virtual String get_BodyName();
    virtual String get_EncodingName();
    virtual String get_HeaderName();

    virtual bool get_IsSingleByte();
    virtual bool get_IsBrowserDisplay();
    virtual bool get_IsBrowserSave();

    virtual bool get_IsMailNewsDisplay();
    virtual bool get_IsMailNewsSave();
    virtual bool get_IsReadOnly();

    virtual DecoderFallbackPtr get_DecoderFallback() const;
    virtual void set_DecoderFallback(const DecoderFallbackPtr value);

    virtual const EncoderFallbackPtr get_EncoderFallback() const;
    virtual void set_EncoderFallback(const EncoderFallbackPtr value);


    // Convert between two encodings.
    static ArrayPtr<uint8_t> Convert(EncodingPtr srcEncoding, EncodingPtr dstEncoding, ArrayPtr<uint8_t> bytes);
    static ArrayPtr<uint8_t> Convert(EncodingPtr srcEncoding, EncodingPtr dstEncoding, ArrayPtr<uint8_t> bytes, int index, int count);

    // Get the number of characters needed to encode a character buffer.
    virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count);
    virtual int GetByteCount(const String& s);
    virtual int GetByteCount(ArrayPtr<char_t> chars);
    //virtual int GetByteCount(const String& chars, int count);
    virtual int GetByteCount(const char_t *chars, int count);


    // Get the bytes that result from encoding a character buffer.
    virtual int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex);

    // Convenience wrappers for "GetBytes".
    virtual int GetBytes(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex);
    virtual ArrayPtr<uint8_t> GetBytes(const String &s);

    virtual ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars, int index, int count);
    virtual ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars);

    virtual int GetBytes(const char_t* chars, int charCount, uint8_t* bytes, int byteCount);
    //virtual int GetBytes(const String& chars, int charCount, byte *bytes, int byteCount);


    // Get the number of characters needed to decode a byte buffer.
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count);

    // Convenience wrappers for "GetCharCount".
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes);

    virtual int GetCharCount(const uint8_t* bytes, int count);

    // Get the characters that result from decoding a byte buffer.
    virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex);

    // Convenience wrappers for "GetChars".
    virtual ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes, int index, int count);
    virtual ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes);

    virtual int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount);


    // Get a decoder that forwards requests to this object.
    virtual DecoderPtr GetDecoder();

    // Get an encoder that forwards requests to this object.
    virtual EncoderPtr GetEncoder();

    // Decode a buffer of bytes into a string.
    virtual String GetString(uint8_t* bytes, int byteCount);
    virtual String GetString(ArrayPtr<uint8_t> bytes);
    virtual String GetString(ArrayPtr<uint8_t> bytes, int index, int count);


    // Get the maximum number of bytes needed to encode a
    // specified number of characters.
    virtual int GetMaxByteCount(int charCount) = 0;

    // Get the maximum number of characters needed to decode a
    // specified number of bytes.
    virtual int GetMaxCharCount(int byteCount) = 0;

    virtual SharedPtr<Object> Clone();
    virtual ArrayPtr<uint8_t> GetPreamble();

    static EncodingPtr get_ASCII();

    // Get the standard big-endian Unicode encoding object.
    static EncodingPtr get_BigEndianUnicode();

    static EncodingPtr get_Unicode();

    // Get the standard UTF-8 encoding object.
    static EncodingPtr get_UTF8();

    // Only internal, to be used by the class libraries: Unmarked and non-input-validating
    static EncodingPtr get_UTF8Unmarked();

    // Get the standard big-endian UTF-32 encoding object.
    static EncodingPtr get_UTF32();

    // Get the standard big-endian UTF-32 encoding object.
    static EncodingPtr get_BigEndianUTF32();

    // Get the standard UTF-7 encoding object.
    static EncodingPtr get_UTF7();

    static EncodingPtr GetEncoding(const String& name);
    static EncodingPtr GetEncoding(int codepage);
    static EncodingPtr GetEncoding(int codepage, EncoderFallbackPtr encoderFallback, DecoderFallbackPtr decoderFallback);
    static EncodingPtr GetEncoding(const String& name, EncoderFallbackPtr encoderFallback, DecoderFallbackPtr decoderFallback);

    static EncodingPtr get_Default();

    static System::ArrayPtr<System::SharedPtr<EncodingInfo>> GetEncodings();

protected:

    Encoding(int codePage_);

    int codePage;

protected:

    void SetDefaultFallbacks();

private:
    void SetFallbackInternal(const EncoderFallbackPtr e, const DecoderFallbackPtr d);

    int GetByteCount_helper(const String &s, char_t *dummy);
    template <typename T> int GetByteCount_helper(const String &s, T *dummy);

    int GetBytes_helper(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, char_t *dummy);
    template <typename T> int GetBytes_helper(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, T *dummy);

    // Storage for standard encoding objects.
    static EncodingPtr asciiEncoding;
    static EncodingPtr bigEndianEncoding;
    static EncodingPtr unicodeEncoding;
    static EncodingPtr utf32Encoding;
    static EncodingPtr utf8EncodingWithMarkers;
    static EncodingPtr utf8EncodingWithoutMarkers;
    static EncodingPtr bigEndianUTF32Encoding;
    static EncodingPtr utf7Encoding;
    static EncodingPtr latin1Encoding;

    static std::mutex lockobj;

    static EncodingPtr get_Latin1();

    DecoderFallbackPtr decoder_fallback;
    EncoderFallbackPtr encoder_fallback;
};

}} // System::Text

#endif //_aspose_system_text_encoding_h_
