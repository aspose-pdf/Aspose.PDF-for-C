/// @file system/text/icu_decoder.h
#ifndef _aspose_system_text_icu_decoder_h_
#define _aspose_system_text_icu_decoder_h_

#include "system/text/decoder.h"

struct UConverter;

namespace System {

namespace IO
{
    class BinaryReader;
}

namespace Text {

class ICUEncoding;
/// ICU encoding pointer.
typedef System::SharedPtr<ICUEncoding> ICUEncodingPtr;

/// Decoder that uses ICU for decoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ICUDecoder : public Decoder
{
public:
    /// @cond
    friend System::IO::BinaryReader;
    /// @endcond

    /// Base type.
    typedef Decoder Base;
    /// Constructor.
    /// @param encoding Encoding to copy parameters from.
    ASPOSECPP_SHARED_API ICUDecoder(ICUEncoding *encoding);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~ICUDecoder();

    /// Sets internal variables to initial state.
    virtual ASPOSECPP_SHARED_API void Reset();

    /// Gets the number of characters needed to decode a buffer.
    /// @param bytes Bytes to decode.
    /// @param index Buffer offset.
    /// @param count Number of bytes to decode.
    /// @return Number of characters required to decode the buffer.
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count)
    {
        return Base::GetCharCount(bytes, index, count);
    }
    /// Gets the number of characters needed to decode a buffer.
    /// @param bytes Bytes to decode.
    /// @param index Buffer offset.
    /// @param count Number of bytes to decode.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @return Number of characters required to decode the buffer.
    virtual int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count, bool flush)
    {
        return Base::GetCharCount(bytes, index, count, flush);
    }
    /// Gets the number of characters needed to decode a buffer.
    /// @param bytes Bytes to decode.
    /// @param count Number of bytes to decode.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @return Number of characters required to decode the buffer.
    virtual ASPOSECPP_SHARED_API int GetCharCount(const uint8_t *bytes, int count, bool flush);

    /// Get the characters that result from decoding a buffer.
    /// @param bytes Bytes to decode.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charIndex Destination array offset.
    /// @return Number of characters written.
    virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex)
    {
        return Base::GetChars(bytes, byteIndex, byteCount, chars, charIndex);
    }
    /// Get the characters that result from decoding a buffer.
    /// @param bytes Bytes to decode.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charIndex Destination array offset.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @return Number of characters written.
    virtual int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, bool flush)
    {
        return Base::GetChars(bytes, byteIndex, byteCount, chars, charIndex, flush);
    }
    /// Get the characters that result from decoding a buffer.
    /// @param bytes Bytes to decode.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charCount Destination array size.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @return Number of characters written.
    virtual ASPOSECPP_SHARED_API int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount, bool flush);

    /// Converts bytes to characters.
    /// @param bytes Bytes to decode.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charIndex Destination array offset.
    /// @param charCount Destination array size.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @param bytesUsed Reference to variable to store count of bytes read.
    /// @param charsUsed Reference to variable to store count of characters written.
    /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
    virtual void Convert(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed)
    {
        Base::Convert(bytes, byteIndex, byteCount, chars, charIndex, charCount, flush, bytesUsed, charsUsed, completed);
    }
    /// Converts bytes to characters.
    /// @param bytes Bytes to decode.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charCount Destination array size.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @param bytesUsed Reference to variable to store count of bytes read.
    /// @param charsUsed Reference to variable to store count of characters written.
    /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
    virtual ASPOSECPP_SHARED_API void Convert(const uint8_t* bytes, int byteCount, char_t *chars, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed);

private:
    /// Initializes ICU callbacks for internal algorithms consistency.
    void SetICUCallbacks();
    /// ICU converter to wrap.
    UConverter *m_icu_converter = 0;
};

}};


#endif
