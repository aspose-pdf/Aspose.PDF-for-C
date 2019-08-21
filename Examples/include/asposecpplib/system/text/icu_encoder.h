/// @file system/text/icu_encoder.h
#ifndef _aspose_system_text_icu_encoder_h_
#define _aspose_system_text_icu_encoder_h_

#include "system/text/encoder.h"

struct UConverter;

namespace System {   namespace Text {

class ICUEncoding;
/// ICU encoding pointer.
typedef System::SharedPtr<ICUEncoding> ICUEncodingPtr;

/// Encoder that uses ICU for encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ICUEncoder : public Encoder
{
public:
    /// Base type.
    typedef Encoder Base;
    /// Constructor.
    /// @param encoding Encoding to copy parameters from.
    ASPOSECPP_SHARED_API ICUEncoder(ICUEncoding* encoding);
    /// Destructor.
    ASPOSECPP_SHARED_API ~ICUEncoder();

    /// Sets internal variables to initial state.
    virtual ASPOSECPP_SHARED_API void Reset();

    /// Gets the number of bytes needed to encode a buffer.
    /// @param chars Characters to encode.
    /// @param index Buffer offset.
    /// @param count Number of characters to encode.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @return Number of bytes required to encode the buffer.
    virtual int GetByteCount(ArrayPtr<char_t> chars, int index, int count, bool flush)
    {
        return Base::GetByteCount(chars, index, count, flush);
    }
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
    virtual int GetBytes(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, bool flush)
    {
        return Base::GetBytes(chars, charIndex, charCount, bytes, byteIndex, flush);
    }
    /// Get the bytes that result from encoding a buffer.
    /// @param chars Characters to encode.
    /// @param charCount Source array length.
    /// @param bytes Destination byte buffer.
    /// @param byteCount Destination buffer size.
    /// @param flush If true, cleans internal encoder state after calculation.
    /// @return Number of bytes written.
    virtual ASPOSECPP_SHARED_API int GetBytes(const char_t *chars, int charCount, uint8_t *bytes, int byteCount, bool flush);

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
    virtual void Convert(ArrayPtr<char_t> chars, int charIndex, int charCount, ArrayPtr<uint8_t> bytes, int byteIndex, int byteCount, bool flush, int &charsUsed, int &bytesUsed, bool &completed)
    {
        Base::Convert(chars, charIndex, charCount, bytes, byteIndex, byteCount, flush, charsUsed, bytesUsed, completed);
    }
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
    /// Initializes ICU callbacks for internal algorithms consistency.
    void SetICUCallbacks();
    /// ICU converter to wrap.
    UConverter *m_icu_converter;
};

}};

#endif
