/// @file system/text/utf7_encoding.h
#ifndef __UTF7Encoding_h__
#define __UTF7Encoding_h__

#include "system/text/encoding.h"

//#include "Decoder.h"

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
        int leftOver;

    public:
        /// Constructor.
        ASPOSECPP_SHARED_API UTF7Decoder();

        /// Gets the number of characters needed to decode a buffer.
        /// @param bytes Bytes to decode.
        /// @param count Number of bytes to decode.
        /// @param flush If true, cleans internal decoder state after calculation.
        /// @return Number of characters required to decode the buffer.
        virtual ASPOSECPP_SHARED_API int GetCharCount(const uint8_t *bytes, int count, bool flush) override;
        /// Converts bytes to characters. Not implemented.
        /// @param bytes Bytes to decode.
        /// @param byteCount Input buffer size.
        /// @param chars Destination character buffer.
        /// @param charCount Destination array size.
        /// @param flush If true, cleans internal decoder state after calculation.
        /// @param bytesUsed Reference to variable to store count of bytes read.
        /// @param charsUsed Reference to variable to store count of characters written.
        /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
        virtual ASPOSECPP_SHARED_API void Convert(const uint8_t* bytes, int byteCount, char_t *chars, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed)  override;
    }; // class UTF7Decoder

private:
    /// Encoder working with UTF-7 encoding.
    class UTF7Encoder : public Encoder
    {
    private:
        /// Whether to encode characters that are allowed to go unencoded.
        bool allowOptionals;
        /// Number of bits remaining from previous operation.
        int leftOver;
        /// Are we in shifted (encoded) state currently.
        bool isInShifted;

    public:
        /// Constructor.
        /// @param allowOptionals Whether to encode (false) characters that are allowed to go unencoded or leave them as-is (true).
        ASPOSECPP_SHARED_API UTF7Encoder(bool allowOptionals);

        /// Gets the number of bytes needed to encode a buffer.
        /// @param chars Characters to encode.
        /// @param count Number of characters to encode.
        /// @param flush If true, cleans internal encoder state after calculation.
        /// @return Number of bytes required to encode the buffer.
        virtual ASPOSECPP_SHARED_API int GetByteCount(const char_t *chars, int count, bool flush) override;
        /// Converts characters to bytes.
        /// @param chars Characters to encode.
        /// @param charCount Input buffer size.
        /// @param bytes Destination byte buffer.
        /// @param byteCount Destination array size.
        /// @param flush If true, cleans internal encoder state after calculation.
        /// @param charsUsed Reference to variable to store count of characters read.
        /// @param bytesUsed Reference to variable to store count of bytes written.
        /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
        virtual ASPOSECPP_SHARED_API void Convert(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed) override;
    }; // class UTF7Encoder

public:
    enum : int
    { 
        /// Magic number used by Windows for UTF-7 codepage id.
        UTF7_CODE_PAGE = 65000 
    };

private:
    /// Whether to encode characters that are allowed to go unencoded.
    bool allowOptionals;
    /// Encoding rule table for 0x00-0x7F.
    /// 0 - full encode, 1 - direct, 2 - optional, 3 - encode plus.
    static const ArrayPtr<uint8_t> encodingRules;
    /// Characters to use to encode 6-bit values in base64.
    static const String base64Chars;
    /// Map bytes in base64 to 6-bit values.
    static const ArrayPtr<char> base64Values;

public:
    /// Constructor.
    ASPOSECPP_SHARED_API UTF7Encoding();
    /// Constructor.
    /// @param allowOptionals Whether to encode (false) characters that are allowed to go unencoded or leave them as-is (true).
    ASPOSECPP_SHARED_API UTF7Encoding(bool allowOptionals);

    /// Compares encodings parameters.
    /// @param other Encoding to compare parameters with.
    /// @return True if parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UTF7Encoding& other) const;
    /// Compares with object.
    /// @param obj Object to compare with.
    /// @return True if @p obj is UTF7Encoding with same parameters, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(ptr obj) override;
    /// Gets encoding hash code.
    /// @return Hash code value.
    virtual ASPOSECPP_SHARED_API int GetHashCode() const override;

    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> Clone() override;

    /// Gets encoding name.
    /// @return Hardcoded encoding name not including parameters.
    virtual String get_EncodingName() override { return u"utf-7"; }
    /// Gets encoding codepage.
    /// @return Windows encoding codepage id.
    virtual int get_CodePage() override { return UTF7_CODE_PAGE; };
    /// Checks if encoding stores character in single byte.
    /// @return Always returns true.
    virtual bool get_IsSingleByte() override { return true;  };

    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @param index Slice begin.
    /// @param count Slice size.
    /// @return Required buffer size.
    virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count)  override { return Encoding::GetByteCount(chars, index, count); };
    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param charIndex Character slice beginning.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteIndex Output buffer offset.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex) override;
    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @return Number of characters.
    virtual ASPOSECPP_SHARED_API int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count) override;

public:
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charIndex Output buffer offset.
    /// @return Number of written characters.
    virtual ASPOSECPP_SHARED_API int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex)  override;
    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param charCount Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxByteCount(int charCount)  override;
    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byteCount Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    virtual ASPOSECPP_SHARED_API int GetMaxCharCount(int byteCount)  override;
    /// Get a decoder that forwards requests to this object.
    /// @return Newly created decoder.
    virtual ASPOSECPP_SHARED_API DecoderPtr GetDecoder()  override;
    /// Get an encoder that forwards requests to this object.
    /// @return Newly created encoder.
    virtual ASPOSECPP_SHARED_API EncoderPtr GetEncoder()  override;

    /// Get the number of characters needed to encode a character buffer.
    /// @param chars Characters buffer.
    /// @param count Buffer size.
    /// @return Required buffer size.
    virtual ASPOSECPP_SHARED_API int GetByteCount(const char_t *chars, int count)  override;
    /// Get the number of characters needed to encode a string.
    /// @param s String to encode.
    /// @return Required buffer size.
    virtual int GetByteCount(const String &s)  override { return Encoding::GetByteCount(s);  };

    /// Get the bytes that result from encoding a character buffer.
    /// @param chars Characters to encode.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteCount Output buffer size.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount)  override;
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @param charIndex Character slice beginning.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteIndex Output buffer offset.
    /// @return Number of written bytes.
    virtual ASPOSECPP_SHARED_API int GetBytes(const String &s, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex)  override;
    /// Get the bytes that result from encoding a character buffer.
    /// @param s String to encode.
    /// @return Buffer that holds representation of characters being encoded.
    virtual ArrayPtr<uint8_t> GetBytes(const String &s)  override { return Encoding::GetBytes(s);  };

    /// Get the number of characters needed to decode a byte buffer.
    /// @param bytes Bytes to decode.
    /// @param count Bytes count.
    /// @return Number of characters.
    virtual ASPOSECPP_SHARED_API int GetCharCount(const uint8_t *bytes, int count)  override;
    /// Get the characters that result from decoding a byte buffer.
    /// @param bytes Buffer to read bytes from.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charCount Output buffer size.
    /// @return Number of written characters.
    virtual ASPOSECPP_SHARED_API int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount)  override;

    /// Decodes a buffer of bytes into a string.
    /// @param bytes Buffer to read bytes from.
    /// @param index Input buffer offset.
    /// @param count Input buffer size.
    /// @return String of decoded characters.
    virtual ASPOSECPP_SHARED_API String GetString(ArrayPtr<uint8_t> bytes, int index, int count)  override;

private:
    /// Initializes encoding fields to default state.
    void InitializeInstanceFields();

    /// Internal version of "GetByteCount" that can handle a rolling state between calls.
    /// @param chars Characters to encode.
    /// @param charsCount Number of characters in array.
    /// @param index Index of first character to encode.
    /// @param count Number of characters to encode.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param leftOver Number of bits currently in buffer.
    /// @param isInShifted Whether we're in shifted (encoding) state.
    /// @param allowOptional Whether to allow optionally encoded symbols to go unencoded.
    /// @return Number of bytes required to encode the buffer.
    static int InternalGetByteCount(const char_t* chars, int charsCount, int index, int count, bool flush, int leftOver, bool isInShifted, bool allowOptionals);
    /// Internal version of "GetBytes" that can handle a rolling state between calls.
    /// @param chars Characters to encode.
    /// @param charIndex Character slice beginning.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteIndex Output buffer offset.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param leftOver Number of bits currently in buffer.
    /// @param isInShifted Whether we're in shifted (encoding) state.
    /// @param allowOptional Whether to allow optionally encoded symbols to go unencoded.
    /// @return Number of written bytes.
    static int InternalGetBytes(const ArrayPtr<char_t>& chars, int charIndex, int charCount, const ArrayPtr<uint8_t>& bytes, int byteIndex, bool flush, int &leftOver, bool &isInShifted, bool allowOptionals);
    /// Internal version of "GetBytes" that can handle a rolling state between calls.
    /// @param chars Characters to encode.
    /// @param charCount Number of characters to convert.
    /// @param bytes Buffer to put characters to.
    /// @param byteCount Output buffer size.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param leftOver Number of bits currently in buffer.
    /// @param isInShifted Whether we're in shifted (encoding) state.
    /// @param allowOptional Whether to allow optionally encoded symbols to go unencoded.
    /// @return Number of written bytes.
    static int InternalGetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &leftOver, bool &isInShifted, bool allowOptionals);

    /// Internal version of "GetCharCount" that can handle a rolling state between call.s
    /// @param bytes Bytes to decode.
    /// @param bytesCount Number of bytes in array.
    /// @param index Slice beginning.
    /// @param count Slice size.
    /// @param leftOver Number of bits currently in buffer.
    /// @return Number of characters.
    static int InternalGetCharCount(const uint8_t *bytes, int bytesCount, int index, int count, int leftOver);
    /// Internal version of "GetChars" that can handle a rolling state between calls.
    /// @param bytes Buffer to read bytes from.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charIndex Output buffer offset.
    /// @param leftOver Number of bits currently in buffer.
    /// @return Number of written characters.
    static int InternalGetChars(const ArrayPtr<uint8_t>& bytes, int byteIndex, int byteCount, const ArrayPtr<char_t>& chars, int charIndex, int &leftOver);
    /// Internal version of "GetChars" that can handle a rolling state between calls.
    /// @param bytes Buffer to read bytes from.
    /// @param byteCount Input buffer size.
    /// @param chars Buffer to put characters to.
    /// @param charCount Output buffer size.
    /// @param leftOver Number of bits currently in buffer.
    /// @return Number of written characters.
    int InternalGetChars(const uint8_t* bytes, int byteCount, char_t* chars, int charCount, int &leftOver);
}; // class UTF7Encoding

}}


#endif
