/// @file system/text/utf7_encoding.h
#pragma once

#include <system/text/encoding.h>

namespace System { namespace Text {

/// UTF-7 encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UTF7Encoding : public Encoding
{
private:
    /// Decoder working with UTF-7 encoding.
    class UTF7Decoder : public Decoder
    {
    private:
        /// Number of bits remaining from previous operation.
        int m_left_over;

    public:
        using Decoder::GetCharCount;
        using Decoder::Convert;

        /// Constructor.
        ASPOSECPP_SHARED_API UTF7Decoder();

        /// Gets the number of characters needed to decode a buffer.
        /// @param bytes Bytes to decode.
        /// @param count Number of bytes to decode.
        /// @param flush If true, cleans internal decoder state after calculation.
        /// @return Number of characters required to decode the buffer.
        ASPOSECPP_SHARED_API int GetCharCount(const uint8_t* bytes, int count, bool flush) override;
        /// Converts bytes to characters. Not implemented.
        /// @param bytes Bytes to decode.
        /// @param byte_count Input buffer size.
        /// @param chars Destination character buffer.
        /// @param char_count Destination array size.
        /// @param flush If true, cleans internal decoder state after calculation.
        /// @param bytes_used Reference to variable to store count of bytes read.
        /// @param chars_used Reference to variable to store count of characters written.
        /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
        ASPOSECPP_SHARED_API void Convert(const uint8_t* bytes, int byte_count, char_t* chars, int char_count, bool flush, int& bytes_used, int& chars_used, bool& completed) override;
    }; // class UTF7Decoder

private:
    /// Encoder working with UTF-7 encoding.
    class UTF7Encoder : public Encoder
    {
    private:
        /// Whether to encode characters that are allowed to go unencoded.
        bool m_allow_optionals;
        /// Number of bits remaining from previous operation.
        int m_left_over;
        /// Are we in shifted (encoded) state currently.
        bool m_is_in_shifted;

    public:
        using Encoder::GetByteCount;
        using Encoder::Convert;

        /// Constructor.
        /// @param allow_optionals Whether to encode (false) characters that are allowed to go unencoded or leave them as-is (true).
        ASPOSECPP_SHARED_API UTF7Encoder(bool allow_optionals);

        /// Gets the number of bytes needed to encode a buffer.
        /// @param chars Characters to encode.
        /// @param count Number of characters to encode.
        /// @param flush If true, cleans internal encoder state after calculation.
        /// @return Number of bytes required to encode the buffer.
        ASPOSECPP_SHARED_API int GetByteCount(const char_t* chars, int count, bool flush) override;
        /// Converts characters to bytes.
        /// @param chars Characters to encode.
        /// @param char_count Input buffer size.
        /// @param bytes Destination byte buffer.
        /// @param byte_count Destination array size.
        /// @param flush If true, cleans internal encoder state after calculation.
        /// @param chars_used Reference to variable to store count of characters read.
        /// @param bytes_used Reference to variable to store count of bytes written.
        /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
        ASPOSECPP_SHARED_API void Convert(const char_t* chars, int char_count, uint8_t* bytes, int byte_count, bool flush, int& chars_used, int& bytes_used, bool& completed) override;
    }; // class UTF7Encoder

public:
    /// Magic number used by Windows for UTF-7 codepage id.
    static constexpr int UTF7_CODE_PAGE = 65000;

private:
    /// Whether to encode characters that are allowed to go unencoded.
    bool m_allow_optionals;

    /// Encoding rule table for 0x00-0x7F.
    /// 0 - full encode, 1 - direct, 2 - optional, 3 - encode plus.
    static const ArrayPtr<uint8_t> encoding_rules;
    /// Characters to use to encode 6-bit values in base64.
    static const String base64_chars;
    /// Map bytes in base64 to 6-bit values.
    static const ArrayPtr<char> base64_values;

public:
    using Encoding::GetByteCount;
    using Encoding::GetBytes;
    using Encoding::GetCharCount;
    using Encoding::GetChars;
    using Encoding::GetString;

    /// Constructor.
    ASPOSECPP_SHARED_API UTF7Encoding();
    /// Constructor.
    /// @param allow_optionals Whether to encode (false) characters that are allowed to go unencoded or leave them as-is (true).
    ASPOSECPP_SHARED_API UTF7Encoding(bool allow_optionals);

    /// Compares encodings parameters.
    /// @param other Encoding to compare parameters with.
    /// @return True if parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UTF7Encoding& other) const;
    /// Compares with object.
    /// @param obj Object to compare with.
    /// @return True if @p obj is UTF7Encoding with same parameters, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;
    /// Gets encoding hash code.
    /// @return Hash code value.
    ASPOSECPP_SHARED_API int GetHashCode() const override;

    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param char_index Character slice beginning.
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_index Output buffer offset.
    /// @return Number of written bytes.
    ASPOSECPP_SHARED_API int GetBytes(ArrayPtr<char_t> chars, int char_index, int char_count, ArrayPtr<uint8_t> bytes, int byte_index) override;
    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @return Number of characters.
    ASPOSECPP_SHARED_API int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count) override;

public:
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byte_index Input buffer offset.
    /// @param byte_count Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param char_index Output buffer offset.
    /// @return Number of written characters.
    ASPOSECPP_SHARED_API int GetChars(ArrayPtr<uint8_t> bytes, int byte_index, int byte_count, ArrayPtr<char_t> chars, int char_index) override;
    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param char_count Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxByteCount(int char_count) override;
    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byte_count Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxCharCount(int byte_count) override;
    /// Get a decoder that forwards requests to this object.
    /// @return Newly created decoder.
    ASPOSECPP_SHARED_API DecoderPtr GetDecoder() override;
    /// Get an encoder that forwards requests to this object.
    /// @return Newly created encoder.
    ASPOSECPP_SHARED_API EncoderPtr GetEncoder() override;

    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @param count Buffer size.
    /// @return Required buffer size.
    ASPOSECPP_SHARED_API int GetByteCount(const char_t* chars, int count) override;

    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_count Output buffer size.
    /// @return Number of written bytes.
    ASPOSECPP_SHARED_API int GetBytes(const char_t* chars, int char_count, uint8_t* bytes, int byte_count) override;
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @param char_index Character slice beginning.
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_index Output buffer offset.
    /// @return Number of written bytes.
    ASPOSECPP_SHARED_API int GetBytes(const String& s, int char_index, int char_count, ArrayPtr<uint8_t> bytes, int byte_index) override;

    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param count Bytes count.
    /// @return Number of characters.
    ASPOSECPP_SHARED_API int GetCharCount(const uint8_t* bytes, int count) override;
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byte_count Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param char_count Output buffer size.
    /// @return Number of written characters.
    ASPOSECPP_SHARED_API int GetChars(const uint8_t* bytes, int byte_count, char_t* chars, int char_count) override;

    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @param index Input buffer offset.
    /// @param count Input buffer size.
    /// @return String of decoded characters.
    ASPOSECPP_SHARED_API String GetString(ArrayPtr<uint8_t> bytes, int index, int count) override;

private:
    /// Initializes encoding fields to default state.
    void InitializeInstanceFields();

    /// Internal version of "GetByteCount" that can handle a rolling state between calls.
    /// @param chars Characters to encode.
    /// @param chars_count Number of characters in array.
    /// @param index Index of first character to encode.
    /// @param count Number of characters to encode.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param left_over Number of bits currently in buffer.
    /// @param is_in_shifted Whether we're in shifted (encoding) state.
    /// @param allowOptional Whether to allow optionally encoded symbols to go unencoded.
    /// @return Number of bytes required to encode the buffer.
    static int InternalGetByteCount(const char_t* chars, int chars_count, int index, int count, bool flush, int left_over, bool is_in_shifted, bool allow_optionals);
    /// Internal version of "GetBytes" that can handle a rolling state between calls.
    /// @param chars Characters to encode.
    /// @param char_index Character slice beginning.
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_index Output buffer offset.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param left_over Number of bits currently in buffer.
    /// @param is_in_shifted Whether we're in shifted (encoding) state.
    /// @param allowOptional Whether to allow optionally encoded symbols to go unencoded.
    /// @return Number of written bytes.
    static int InternalGetBytes(const ArrayPtr<char_t>& chars, int char_index, int char_count, const ArrayPtr<uint8_t>& bytes, int byte_index, bool flush, int& left_over, bool& is_in_shifted, bool allow_optionals);
    /// Internal version of "GetBytes" that can handle a rolling state between calls.
    /// @param chars Characters to encode.
    /// @param char_count Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byte_count Output buffer size.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param left_over Number of bits currently in buffer.
    /// @param is_in_shifted Whether we're in shifted (encoding) state.
    /// @param allowOptional Whether to allow optionally encoded symbols to go unencoded.
    /// @return Number of written bytes.
    static int InternalGetBytes(const char_t* chars, int char_count, uint8_t* bytes, int byte_count, bool flush, int& left_over, bool& is_in_shifted, bool allow_optionals);

    /// Internal version of "GetCharCount" that can handle a rolling state between calls.
    /// @param bytes Bytes to decode.
    /// @param bytes_count Number of bytes in array.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @param left_over Number of bits currently in buffer.
    /// @return Number of characters.
    static int InternalGetCharCount(const uint8_t* bytes, int bytes_count, int index, int count, int left_over);
    /// Internal version of "GetChars" that can handle a rolling state between calls.
    /// @param bytes Buffer to read bytes from.
    /// @param byte_index Input buffer offset.
    /// @param byte_count Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param char_index Output buffer offset.
    /// @param left_over Number of bits currently in buffer.
    /// @return Number of written characters.
    static int InternalGetChars(const ArrayPtr<uint8_t>& bytes, int byte_index, int byte_count, const ArrayPtr<char_t>& chars, int char_index, int& left_over);
    /// Internal version of "GetChars" that can handle a rolling state between calls.
    /// @param bytes Buffer to read bytes from.
    /// @param byte_count Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param char_count Output buffer size.
    /// @param left_over Number of bits currently in buffer.
    /// @return Number of written characters.
    static int InternalGetChars(const uint8_t* bytes, int byte_count, char_t* chars, int char_count, int& left_over);
}; // class UTF7Encoding

}} // namespace System::Text
