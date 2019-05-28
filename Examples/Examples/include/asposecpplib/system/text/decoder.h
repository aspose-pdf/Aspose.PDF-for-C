/// @file system/text/decoder.h
#ifndef __Decoder_h__
#define __Decoder_h__

#include "system/text/decoder_fallback.h"
#include "system/text/decoder_fallback_buffer.h"

#include "system/array.h"
#include "system/object.h"
#include "fwd.h"

namespace System { namespace Text {

/// Encapsulates decoding byte sequence into character sequence.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Decoder: public Object
{
protected:
    /// Constructor.
    ASPOSECPP_SHARED_API Decoder();

public:
    /// Gets error handling fallback.
    /// @return Fallback object.
    DecoderFallbackPtr get_Fallback() const { return m_fallback; }
    /// Sets error handling fallback.
    /// @param value Fallback object.
    ASPOSECPP_SHARED_API void set_Fallback(DecoderFallbackPtr value);
    /// Gets fallback buffer.
    /// @return Fallback buffer object.
    ASPOSECPP_SHARED_API DecoderFallbackBufferPtr get_FallbackBuffer() const;

    /// Gets the number of characters needed to decode a buffer.
    /// @param bytes Bytes to decode.
    /// @param index Buffer offset.
    /// @param count Number of bytes to decode.
    /// @return Number of characters required to decode the buffer.
    virtual ASPOSECPP_SHARED_API int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count);
    /// Gets the number of characters needed to decode a buffer.
    /// @param bytes Bytes to decode.
    /// @param index Buffer offset.
    /// @param count Number of bytes to decode.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @return Number of characters required to decode the buffer.
    virtual ASPOSECPP_SHARED_API int GetCharCount(ArrayPtr<uint8_t> bytes, int index, int count, bool flush);
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
    virtual ASPOSECPP_SHARED_API int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex);
    /// Get the characters that result from decoding a buffer.
    /// @param bytes Bytes to decode.
    /// @param byteIndex Input buffer offset.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charIndex Destination array offset.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @return Number of characters written.
    virtual ASPOSECPP_SHARED_API int GetChars(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, bool flush);
    /// Get the characters that result from decoding a buffer.
    /// @param bytes Bytes to decode.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charCount Destination array size.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @return Number of characters written.
    virtual ASPOSECPP_SHARED_API int GetChars(const uint8_t *bytes, int byteCount, char_t *chars, int charCount, bool flush);

    /// Cleans decoder internal state.
    virtual ASPOSECPP_SHARED_API void Reset();
        
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
    virtual ASPOSECPP_SHARED_API void Convert(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed);
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
    /// Fallback object to be used for error handling.
    DecoderFallbackPtr m_fallback;
    /// Buffer to be used for error correction.
    mutable DecoderFallbackBufferPtr m_fallback_buffer;
};

}}

#endif
