/// @file system/text/utf8_encoding.h
#pragma once

#include <system/text/icu_encoding.h>

namespace System { namespace Text {

/// UTF-8 encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UTF8Encoding : public ICUEncoding
{
    /// RTTI information.
    RTTI_INFO(System::Text::UTF8Encoding, ::System::BaseTypesInfo<System::Text::ICUEncoding>)

public:
    /// Magic number used by Windows for UTF-8 codepage id.
    static constexpr int UTF8_CODE_PAGE = 65001;

    /// Constructor.
    ASPOSECPP_SHARED_API UTF8Encoding();
    /// Constructor.
    /// @param encoder_should_emit_utf8_idetifier Whether to insert BOM.
    ASPOSECPP_SHARED_API UTF8Encoding(bool encoder_should_emit_utf8_idetifier);
    /// Constructor.
    /// @param encoder_should_emit_utf8_identifier Whether to insert BOM.
    /// @param throw_on_invalid_bytes Whether to throw on invalid bytes as an opposite to replacing them.
    ASPOSECPP_SHARED_API UTF8Encoding(bool encoder_should_emit_utf8_identifier, bool throw_on_invalid_bytes);

    /// Compares encodings parameters.
    /// @param other Encoding to compare with.
    /// @return True if parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UTF8Encoding& other) const;
    /// Compares with object.
    /// @param obj Object to compare with.
    /// @return True if @p obj is UTF8Encoding with same parameters, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;
    /// Gets encoding hash code.
    /// @return Hash code value.
    ASPOSECPP_SHARED_API int GetHashCode() const override;

    /// Get codepage preamble.
    /// @return If UTF-8 identifier emitting is enabled, returns array with BOM characters, otherwise returns empty array.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;
    
    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param char_count Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxByteCount(int char_count) override;

private:
    /// Whether to insert BOM.
    const bool m_encoder_should_emit_utf8_identifier;
    /// Whether to throw on invalid bytes rather than replace them.
    const bool m_throw_on_invalid_bytes;
};

}} // namespace System::Text
