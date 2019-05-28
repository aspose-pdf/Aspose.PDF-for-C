/// @file system/text/encoding_decoder.h
#ifndef __aspose_system_text_encoding_decoder_h__
#define __aspose_system_text_encoding_decoder_h__

#include <system/text/decoder.h>
#include <system/exceptions.h>

#include <fwd.h>

namespace System { namespace Text {

/// Decoder that uses encoding object for decoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncodingDecoder : public Decoder
{
public:
    /// Converts bytes to characters.
    /// @param bytes Bytes to decode.
    /// @param byteCount Input buffer size.
    /// @param chars Destination character buffer.
    /// @param charCount Destination array size.
    /// @param flush If true, cleans internal decoder state after calculation.
    /// @param bytesUsed Reference to variable to store count of bytes read.
    /// @param charsUsed Reference to variable to store count of characters written.
    /// @param completed Reference to variable to be set to true if input buffer was exhausted and to false otherwise.
    ASPOSECPP_SHARED_API void Convert(const uint8_t* bytes, int byteCount, char_t *chars, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed) override;
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
    ASPOSECPP_SHARED_API void Convert(ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, ArrayPtr<char_t> chars, int charIndex, int charCount, bool flush, int &bytesUsed, int &charsUsed, bool &completed) override;

protected:
    /// Encoding to use.
    EncodingPtr encoding;
    /// Constructor.
    /// @param encoding_ Encoding to wrap.
    ASPOSECPP_SHARED_API EncodingDecoder(EncodingPtr encoding_);
};

}}

#endif // __aspose_system_text_encoding_decoder_h__
