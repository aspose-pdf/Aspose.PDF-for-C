/// @file system/text/encoding.h
#pragma once

#include <system/object.h>
#include <system/text/decoder_fallback.h>
#include <system/text/encoder_fallback.h>
#include <system/text/decoder.h>
#include <system/text/encoder.h>
#include <system/text/encoding_decoder.h>
#include <system/text/encoding_encoder.h>
#include <system/exceptions.h>
#include <fwd.h>

namespace System { namespace Text {

namespace Details {
    struct EncodingInfoInternal;
}

class Encoding;

/// Brief info on encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncodingInfo final : public Object
{
public:
    /// Constuctor.
    /// @param codepage Windows codepage id.
    /// @param name Encoding short name (web).
    /// @param display_name Full localized encoding name (only English supports).
    EncodingInfo(int codepage, const String& name, const String& display_name)
        : m_codepage(codepage)
        , m_name(name)
        , m_display_name(display_name)
    {}

    /// Gets codepage ID.
    /// @return Codepage ID.
    int get_CodePage() const { return m_codepage; }
    /// Gets encoding short name.
    /// @return Encoding name used by web.
    const String& get_Name() const { return m_name; }
    /// Gets full localized encoding name.
    /// @return Full localized encoding name.
    const String& get_DisplayName() const { return m_display_name; }

    /// Gets encoding described by info.
    /// @return Encoding object.
    ASPOSECPP_SHARED_API EncodingPtr GetEncoding();

private:
    /// Code page number.
    const int m_codepage;
    /// Short (web) name.
    const String m_name;
    /// Full localized name.
    const String m_display_name;
};

/// Encoding services.
class ASPOSECPP_SHARED_CLASS Encoding : public Object
{
    /// RTTI
    RTTI_INFO(System::Text::Encoding, ::System::BaseTypesInfo<System::Object>)
    
public:
    /// Pointer type.
    typedef System::SharedPtr<Encoding> Ptr;

    /// Default codepage value.
    static constexpr int DEFAULT_CODE_PAGE = 0;

    /// Compares encodings.
    /// @param obj Object to compare to.
    /// @return True if both objects are of same encoding type, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;
    /// Hashes encoding.
    /// @return Hash code.
    ASPOSECPP_SHARED_API int GetHashCode() const override;

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
    ASPOSECPP_SHARED_API bool get_IsReadOnly();

    /// Gets decoder fallback.
    /// @return Decoder fallback object.
    ASPOSECPP_SHARED_API DecoderFallbackPtr get_DecoderFallback() const;
    /// Sets decoder fallback.
    /// @param value Decoder fallback object.
    ASPOSECPP_SHARED_API void set_DecoderFallback(const DecoderFallbackPtr value);
    /// Gets encoder fallback.
    /// @return Encoder fallback object.
    ASPOSECPP_SHARED_API const EncoderFallbackPtr get_EncoderFallback() const;
    /// Sets encoder fallback.
    /// @param value Encoder fallback object.
    ASPOSECPP_SHARED_API void set_EncoderFallback(const EncoderFallbackPtr value);

    /// Converts bytes between two encodings.
    /// @param src_encoding Source encoding.
    /// @param dst_encoding Destination encoding.
    /// @param bytes Bytes to convert.
    /// @return Converted bytes.
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> Convert(const EncodingPtr& src_encoding, const EncodingPtr& dst_encoding, const ArrayPtr<uint8_t>& bytes);
    /// Converts bytes between two encodings.
    /// @param src_encoding Source encoding.
    /// @param dst_encoding Destination encoding.
    /// @param bytes Bytes to convert.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @return Converted bytes.
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> Convert(const EncodingPtr& src_encoding, const EncodingPtr& dst_encoding, const ArrayPtr<uint8_t>& bytes, int index, int count);

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
    /// @param char_index Character slice beginning.
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_index Output buffer offset.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(ArrayPtr<char_t> chars, int char_index, int char_count, ArrayPtr<uint8_t> bytes, int byte_index);
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @param char_index Character slice beginning.
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_index Output buffer offset.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(const String &s, int char_index, int char_count, ArrayPtr<uint8_t> bytes, int byte_index);
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
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_count Output buffer size.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(const char_t* chars, int char_count, uint8_t* bytes, int byte_count);

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
    /// @param byte_index Input buffer offset.
    /// @param byte_count Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param char_index Output buffer offset.
    /// @return Number of written characters.
    virtual ASPOSECPP_SHARED_API int GetChars(ArrayPtr<uint8_t> bytes, int byte_index, int byte_count, ArrayPtr<char_t> chars, int char_index);
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
    /// @param byte_count Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param char_count Output buffer size.
    /// @return Number of written characters.
    virtual ASPOSECPP_SHARED_API int GetChars(const uint8_t *bytes, int byte_count, char_t *chars, int char_count);

    /// Get a decoder that forwards requests to this object.
    /// @return Newly created decoder.
    virtual ASPOSECPP_SHARED_API DecoderPtr GetDecoder();
    /// Get an encoder that forwards requests to this object.
    /// @return Newly created encoder.
    virtual ASPOSECPP_SHARED_API EncoderPtr GetEncoder();

    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @param byte_count Input buffer size.
    /// @return String of decoded characters.
    virtual ASPOSECPP_SHARED_API String GetString(uint8_t* bytes, int byte_count);
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
    /// @param char_count Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxByteCount(int char_count) = 0;
    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byte_count Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxCharCount(int byte_count) = 0;

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
    /// Gets Latin1 encoding. FOR INTERNAL USE.
    static EncodingPtr get_Latin1();

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
    /// @param encoder_fallback Fallback to use for encoding.
    /// @param decoder_fallback Fallback to use for decoding.
    /// @return Encoding of specified codepage.
    static ASPOSECPP_SHARED_API EncodingPtr GetEncoding(int codepage, const EncoderFallbackPtr& encoder_fallback, const DecoderFallbackPtr& decoder_fallback);
    /// Gets encoding by name.
    /// @param name Encoding name.
    /// @param encoder_fallback Fallback to use for encoding.
    /// @param decoder_fallback Fallback to use for decoding.
    /// @return Encoding of specified name.
    static ASPOSECPP_SHARED_API EncodingPtr GetEncoding(const String& name, const EncoderFallbackPtr& encoder_fallback, const DecoderFallbackPtr& decoder_fallback);

    /// Gets default encoding.
    /// @return Encoding object.
    static ASPOSECPP_SHARED_API EncodingPtr get_Default();

    /// Gets list of known encodings.
    /// @return Array of encoding infos.
    static ASPOSECPP_SHARED_API ArrayPtr<EncodingInfoPtr> GetEncodings();

protected:
    /// Pointer to internal encoding info.
    const Details::EncodingInfoInternal* m_info;
    /// Code page identifier.
    const int m_codepage;
    /// Read-only flag.
    bool m_is_read_only = true;

    /// Default constructor.
    ASPOSECPP_SHARED_API Encoding();
    /// Constructor.
    /// @param The code page of the preferred encoding.
    ASPOSECPP_SHARED_API Encoding(int codepage);
    /// Constructor.
    /// @param The code page of the preferred encoding.
    /// @param encoder_fallback Fallback to use for encoding.
    /// @param decoder_fallback Fallback to use for decoding.
    ASPOSECPP_SHARED_API Encoding(int codepage, const EncoderFallbackPtr& encoder_fallback, const DecoderFallbackPtr& decoder_fallback);

    /// Internal constructor.
    /// @param info Encoding internal info.
    Encoding(const Details::EncodingInfoInternal* info);  

private:
    /// Sets encoding and decoding fallbacks to default.
    void SetDefaultFallbacks();
    /// Throws exception if m_info is nullptr.
    void VerifyInternalData();

    /// Decoding fallback.
    DecoderFallbackPtr m_decoder_fallback;
    /// Encoding fallback.
    EncoderFallbackPtr m_encoder_fallback;
};

}} // System::Text
