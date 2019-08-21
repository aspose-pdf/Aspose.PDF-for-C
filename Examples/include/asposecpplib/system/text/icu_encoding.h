/// @file system/text/icu_encoding.h
#pragma once

#include <system/text/encoding.h>
#include <memory>
#include <mutex>

struct UConverter; // ICU converter

namespace System { namespace Text {

/// ICU-based encoding implementation. FOR INTERNAL USE.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ICUEncoding : public Encoding
{
    /// RTTI.
    RTTI_INFO(System::Text::ICUEncoding, ::System::BaseTypesInfo<System::Text::Encoding>)

public:
    using Encoding::GetByteCount;
    using Encoding::GetBytes;
    using Encoding::GetCharCount;
    using Encoding::GetChars;
    
    /// Associated encoder.
    friend class ICUEncoder;
    /// Associated decoder.
    friend class ICUDecoder;

    /// Constructor.
    /// @param encoding_info Encoding internal info.
    ICUEncoding(const Details::EncodingInfoInternal* encoding_info);

    /// Compares encodings using codepages.
    /// @param other Encoding to compare to.
    /// @return True if codepages match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const ICUEncoding& other) const;

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
    ASPOSECPP_SHARED_API int GetChars(const uint8_t *bytes, int byte_count, char_t *chars, int char_count) override;

    /// Get a decoder that forwards requests to this object.
    /// @return Newly created decoder.
    ASPOSECPP_SHARED_API DecoderPtr GetDecoder() override;

    /// Get an encoder that forwards requests to this object.
    /// @return Newly created encoder.
    ASPOSECPP_SHARED_API EncoderPtr GetEncoder() override;

    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param char_count Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxByteCount(int char_count) override;

    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byte_count Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxCharCount(int byte_count) override;

    /// Returns a sequence of bytes that denotes the encoding (e. g. BOM).
    /// @return Bytes sequence preamble.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;

private:
    /// Initializes ICU data structures.
    void SetICUCallbacks();

    /// Pointer implementation.
    std::shared_ptr<UConverter> m_icu_converter;

    /// Mutex for m_icu_converter.
    std::mutex m_mutex;
};

}} // namespace System::Text
