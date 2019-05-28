/// @file system/text/encoding_encoder.h
#ifndef __aspose_system_encoding_encoder_h__
#define __aspose_system_encoding_encoder_h__

#include <system/text/encoder.h>
#include <system/exceptions.h>

namespace System { namespace Text {

/// Encoder that uses encoding object for encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncodingEncoder : public Encoder
{
public:
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

protected:
    /// Encoding to use.
    EncodingPtr encoding;
    /// Constructor.
    /// @param encoding_ Encoding to wrap.
    ASPOSECPP_SHARED_API EncodingEncoder(EncodingPtr encoding_);
};

}}

#endif // __aspose_system_encoding_encoder_h__
