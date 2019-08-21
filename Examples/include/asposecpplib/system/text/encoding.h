/// @file system/text/encoding.h
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

/// Brief info on encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncodingInfo final : public Object
{
public:
    /// Constuctor.
    /// @param codePage Windows codepage id.
    /// @param name Encoding short name (web).
    /// @param displayName Full localized encoding name.
    EncodingInfo(int codePage, const String& name, const String& displayName)
        : m_code_page(codePage)
        , m_name(name)
        , m_display_name(displayName)
    {}

    /// Gets Windows codepage ID.
    /// @return Codepage ID.
    int get_CodePage() const { return m_code_page; }
    /// Gets encoding short name.
    /// @return Encoding name used by web.
    const String& get_Name() const { return m_name; }
    /// Gets full localized encoding name.
    /// @return Full localized encoding name.
    const String& get_DisplayName() const { return m_display_name; }

    /// Gets encoding described by info.
    /// @return Encoding object.
    ASPOSECPP_SHARED_API System::SharedPtr<Encoding> GetEncoding();

private:
    /// Code page number.
    int     m_code_page;
    /// Short (web) name.
    String  m_name;
    /// Full localized name.
    String  m_display_name;
};

/// Encoding services.
class ASPOSECPP_SHARED_CLASS Encoding : public Object
{
    /// RTTI
    RTTI_INFO(System::Text::Encoding, ::System::BaseTypesInfo<System::Object>)
    /// Default codepage value.
    enum : int { DEFAILT_CODE_PAGE = 0 };

public:
    /// Pointer type.
    typedef System::SharedPtr<Encoding> Ptr;

    /// Compares encodings.
    /// @param obj Object to compare to.
    /// @return True if both objects are of same encoding type, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(ptr obj) override;
    /// Hashes encoding.
    /// @return Hash code.
    virtual ASPOSECPP_SHARED_API int GetHashCode() const override;

    /// Gets Windows codepage ID.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_CodePage();
    /// Gets Windows codepage ID.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_WindowsCodePage();

    /// Gets IANA-compatible encoding name.
    /// @return Name of encoding.
    virtual ASPOSECPP_SHARED_API String get_WebName();
    /// Gets mail agent body compatible encoding name.
    /// @return Name of encoding.
    virtual ASPOSECPP_SHARED_API String get_BodyName();
    /// Gets human-readable encoding name.
    /// @return Name of encoding.
    virtual ASPOSECPP_SHARED_API String get_EncodingName();
    /// Gets mail agent header compatible encoding name.
    /// @return Name of encoding.
    virtual ASPOSECPP_SHARED_API String get_HeaderName();

    /// Checks whether encoding is single byte.
    /// @return True if single character encodes into single byte, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsSingleByte();
    /// Checks whether encoding can be used in browser to display content.
    /// @return True if encoding can be used in browser to display content, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsBrowserDisplay();
    /// Checks whether encoding can be used in browser to save content.
    /// @return True if encoding can be used in browser to save content, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsBrowserSave();
    /// Checks whether encoding can be used in mail client to display content.
    /// @return True if encoding can be used in mail client to display content, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsMailNewsDisplay();
    /// Checks whether encoding can be used in mail client to save content.
    /// @return True if encoding can be used in mail client to save content, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsMailNewsSave();
    /// Checks whether encoding is read-only.
    /// @return True if encoding is read-only, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsReadOnly();

    /// Gets decoder fallback.
    /// @return Decoder fallback object.
    virtual ASPOSECPP_SHARED_API DecoderFallbackPtr get_DecoderFallback() const;
    /// Sets decoder fallback.
    /// @param value Decoder fallback object.
    virtual ASPOSECPP_SHARED_API void set_DecoderFallback(const DecoderFallbackPtr value);
    /// Gets encoder fallback.
    /// @return Encoder fallback object.
    virtual ASPOSECPP_SHARED_API const EncoderFallbackPtr get_EncoderFallback() const;
    /// Sets encoder fallback.
    /// @param value Encoder fallback object.
    virtual ASPOSECPP_SHARED_API void set_EncoderFallback(const EncoderFallbackPtr value);

    /// Converts bytes between two encodings.
    /// @param srcEncoding Source encoding.
    /// @param dstEncoding Destination encoding.
    /// @param bytes Bytes to convert.
    /// @return Converted bytes.
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> Convert(const EncodingPtr& srcEncoding, const EncodingPtr& dstEncoding, const ArrayPtr<uint8_t>& bytes);
    /// Converts bytes between two encodings.
    /// @param srcEncoding Source encoding.
    /// @param dstEncoding Destination encoding.
    /// @param bytes Bytes to convert.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @return Converted bytes.
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> Convert(const EncodingPtr& srcEncoding, const EncodingPtr& dstEncoding, const ArrayPtr<uint8_t>& bytes, int index, int count);

    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @param index Slice begin.
    /// @param count Slice size.
    /// @return Required buffer size.
    virtual ASPOSECPP_SHARED_API int GetByteCount(ArrayPtr<char_t> chars, int index, int count);
    /// Get the number of characters needed to encode a string.
    /// @param s String to encode.
    /// @return Required buffer size.
    virtual ASPOSECPP_SHARED_API int GetByteCount(const String& s);
    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @return Required buffer size.
    virtual ASPOSECPP_SHARED_API int GetByteCount(ArrayPtr<char_t> chars);
    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @param count Buffer size.
    /// @return Required buffer size.
    virtual ASPOSECPP_SHARED_API int GetByteCount(const char_t *chars, int count);

    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param charIndex Character slice beginning.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteIndex Output buffer offset.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex);
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @param charIndex Character slice beginning.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteIndex Output buffer offset.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex);
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @return Buffer that holds representation of characters being encoded.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetBytes(const String &s);
    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param index Character slice beginning.
    /// @param count Number of characters to convert.
    /// @return Buffer that holds representation of characters being encoded.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars, int index, int count);
    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @return Buffer that holds representation of characters being encoded.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetBytes(ArrayPtr<char_t> chars);
    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteCount Output buffer size.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(const char_t* chars, int charCount, uint8_t* bytes, int byteCount);

    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @return Number of characters.
    virtual ASPOSECPP_SHARED_API int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count);
    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @return Number of characters.
    virtual ASPOSECPP_SHARED_API int GetCharCount(ArrayPtr<uint8_t> bytes);
    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param count Bytes count.
    /// @return Number of characters.
    virtual ASPOSECPP_SHARED_API int GetCharCount(const uint8_t* bytes, int count);

    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charIndex Output buffer offset.
    /// @return Number of written characters.
    virtual ASPOSECPP_SHARED_API int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex);
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param index Input buffer offset.
    /// @param count Input buffer size.
    /// @return Buffer of decoded characters.
    virtual ASPOSECPP_SHARED_API ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes, int index, int count);
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @return Buffer of decoded characters.
    virtual ASPOSECPP_SHARED_API ArrayPtr<char_t> GetChars(ArrayPtr<uint8_t> bytes);
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charCount Output buffer size.
    /// @return Number of written characters.
    virtual ASPOSECPP_SHARED_API int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount);

    /// Get a decoder that forwards requests to this object.
    /// @return Newly created decoder.
    virtual ASPOSECPP_SHARED_API DecoderPtr GetDecoder();
    /// Get an encoder that forwards requests to this object.
    /// @return Newly created encoder.
    virtual ASPOSECPP_SHARED_API EncoderPtr GetEncoder();

    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @param byteCount Input buffer size.
    /// @return String of decoded characters.
    virtual ASPOSECPP_SHARED_API String GetString(uint8_t* bytes, int byteCount);
    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @return String of decoded characters.
    virtual ASPOSECPP_SHARED_API String GetString(ArrayPtr<uint8_t> bytes);
    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @param index Input buffer offset.
    /// @param count Input buffer size.
    /// @return String of decoded characters.
    virtual ASPOSECPP_SHARED_API String GetString(ArrayPtr<uint8_t> bytes, int index, int count);

    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param charCount Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxByteCount(int charCount) = 0;
    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byteCount Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxCharCount(int byteCount) = 0;

    /// Clones encoding object.
    /// @return Encoding object clone.
    virtual ASPOSECPP_SHARED_API SharedPtr<Object> Clone();
    /// Returns a sequence of bytes that denotes the encoding (e. g. BOM).
    /// @return Bytes sequence preamble.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble();

    /// Gets ASCII encoding.
    /// @return ASCII encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_ASCII();
    /// Gets the standard big-endian Unicode encoding object.
    /// @return Big endian unicode encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_BigEndianUnicode();
    /// Gets the standard Unicode encoding object.
    /// @return Unicode encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_Unicode();
    /// Gets the standard UTF-8 encoding object.
    /// @return UTF-8 encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_UTF8();
    /// Only internal, to be used by the class libraries: Unmarked and non-input-validating
    /// @return Optimized UTF-8 encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_UTF8Unmarked();
    // Gets the standard UTF-32 encoding object.
    /// @return UTF-32 encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_UTF32();
    /// Gets the standard big-endian UTF-32 encoding object.
    /// @return Big-endian UTF-32 encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_BigEndianUTF32();
    /// Gets the standard UTF-7 encoding object.
    /// @return UTF-7 encoding.
    static ASPOSECPP_SHARED_API EncodingPtr get_UTF7();

    /// Gets encoding by name.
    /// @param name Encoding name.
    /// @return Encoding of specified name.
    static ASPOSECPP_SHARED_API EncodingPtr GetEncoding(const String& name);
    /// Gets encoding by codepage.
    /// @param codepage Codepage number.
    /// @return Encoding of specified codepage.
    static ASPOSECPP_SHARED_API EncodingPtr GetEncoding(int codepage);
    /// Gets encoding by codepage.
    /// @param codepage Codepage number.
    /// @param encoderFallback Fallback to use for encoding.
    /// @param decoderFallback Fallback to use for decoding.
    /// @return Encoding of specified codepage.
    static ASPOSECPP_SHARED_API EncodingPtr GetEncoding(int codepage, const EncoderFallbackPtr& encoderFallback, const DecoderFallbackPtr& decoderFallback);
    /// Gets encoding by name.
    /// @param name Encoding name.
    /// @param encoderFallback Fallback to use for encoding.
    /// @param decoderFallback Fallback to use for decoding.
    /// @return Encoding of specified name.
    static ASPOSECPP_SHARED_API EncodingPtr GetEncoding(const String& name, const EncoderFallbackPtr& encoderFallback, const DecoderFallbackPtr& decoderFallback);

    /// Gets default encoding.
    /// @return Encoding object.
    static ASPOSECPP_SHARED_API EncodingPtr get_Default();

    /// Gets list of known encodings.
    /// @return Array of encoding infos.
    static ASPOSECPP_SHARED_API System::ArrayPtr<System::SharedPtr<EncodingInfo>> GetEncodings();

protected:
    /// Constructor.
    /// @param codePage_ Codepage number.
    ASPOSECPP_SHARED_API Encoding(int codePage_);

    /// Codepage number.
    int codePage;

protected:
    /// Sets encoding and decoding fallbacks to default.
    ASPOSECPP_SHARED_API void SetDefaultFallbacks();

private:
    /// Sets fallback objects.
    /// @param e Encoding fallback.
    /// @param d Decoding fallback.
    void SetFallbackInternal(const EncoderFallbackPtr& e, const DecoderFallbackPtr& d);

    // Storage for standard encoding objects.
    /// ASCII encoding.
    static EncodingPtr asciiEncoding;
    /// Big endian encoding.
    static EncodingPtr bigEndianEncoding;
    /// Unicode encoding.
    static EncodingPtr unicodeEncoding;
    /// UTF-32 encoding.
    static EncodingPtr utf32Encoding;
    /// UTF-8 encoding with markers (not optmized but strict).
    static EncodingPtr utf8EncodingWithMarkers;
    /// UTF-8 encoding without markers (optimized but not strict).
    static EncodingPtr utf8EncodingWithoutMarkers;
    /// Big endian UTF-32 encoding.
    static EncodingPtr bigEndianUTF32Encoding;
    /// UTF-7 encoding.
    static EncodingPtr utf7Encoding;
    /// Latin1 encoding.
    static EncodingPtr latin1Encoding;

    /// Lock to use on encodings.
    static std::mutex lockobj;

    /// Gets Latin1 encodinf.
    static EncodingPtr get_Latin1();

    /// Decoding fallback.
    DecoderFallbackPtr decoder_fallback;
    /// Encoding fallback.
    EncoderFallbackPtr encoder_fallback;
};

}} // System::Text

#endif //_aspose_system_text_encoding_h_
