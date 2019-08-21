/// @file system/text/encoder.h
#ifndef __Encoder_h__
#define __Encoder_h__

#include "system/array.h"
#include "system/object.h"
#include "fwd.h"
#include "encoder_fallback_buffer.h"


namespace System { namespace Text {

/// Encapsulates encoding character sequence into byte sequence.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Encoder: public Object
{
protected:
    /// Constructor.
    ASPOSECPP_SHARED_API Encoder();

public:
    /// Gets error handling fallback.
    /// @return Fallback object.
    EncoderFallbackPtr get_Fallback() const { return m_fallback; }
    /// Sets error handling fallback.
    /// @param value Fallback object.
    ASPOSECPP_SHARED_API void set_Fallback(EncoderFallbackPtr value);
    /// Gets fallback buffer.
    /// @return Fallback buffer object.
    ASPOSECPP_SHARED_API const EncoderFallbackBufferPtr get_FallbackBuffer() const;

    /// Gets the number of bytes needed to encode a buffer.
    /// @param chars Characters to encode.
    /// @param index Buffer offset.
    /// @param count Number of characters to encode.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @return Number of bytes required to encode the buffer.
    virtual ASPOSECPP_SHARED_API int GetByteCount(ArrayPtr<char_t> chars, int index, int count, bool flush);
    /// Gets the number of bytes needed to encode a buffer.
    /// @param chars Characters to encode.
    /// @param count Number of characters to encode.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @return Number of bytes required to encode the buffer.
    virtual ASPOSECPP_SHARED_API int GetByteCount(const char_t *chars, int count, bool flush);

    /// Get the bytes that result from encoding a buffer.
    /// @param chars Characters to encode.
    /// @param charIndex Source array offset.
    /// @param charCount Source subarray length.
    /// @param bytes Destination byte buffer.
    /// @param byteIndex Destination buffer offset.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @return Number of bytes written.
    virtual ASPOSECPP_SHARED_API int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, bool flush);
    /// Get the bytes that result from encoding a buffer.
    /// @param chars Characters to encode.
    /// @param charCount Source array length.
    /// @param bytes Destination byte buffer.
    /// @param byteCount Destination buffer size.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @return Number of bytes written.
    virtual ASPOSECPP_SHARED_API int GetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush);

    /// Cleans encoder internal state.
    virtual ASPOSECPP_SHARED_API void Reset();

    /// Converts characters to bytes.
    /// @param chars Characters to encode.
    /// @param charIndex Input buffer offset.
    /// @param charCount Input buffer size.
    /// @param bytes Destination byte buffer.
    /// @param byteIndex Destination array offset.
    /// @param byteCount Destination array size.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param charsUsed Reference to variable to store count of characters read.
    /// @param bytesUsed Reference to variable to store count of bytes written.
    /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
    virtual ASPOSECPP_SHARED_API void Convert(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed);
    /// Converts characters to bytes.
    /// @param chars Characters to encode.
    /// @param charCount Input buffer size.
    /// @param bytes Destination byte buffer.
    /// @param byteCount Destination array size.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @param charsUsed Reference to variable to store count of characters read.
    /// @param bytesUsed Reference to variable to store count of bytes written.
    /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
    virtual ASPOSECPP_SHARED_API void Convert(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed);

private:
    /// Fallback object to be used for error handling.
    EncoderFallbackPtr m_fallback;
    /// Buffer to be used for error correction.
    mutable EncoderFallbackBufferPtr m_fallback_buffer;
};

}}

#endif
