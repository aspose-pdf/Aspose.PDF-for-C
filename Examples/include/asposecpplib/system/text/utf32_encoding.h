/// @file system/text/utf32_encoding.h
#pragma once

#include <system/text/icu_encoding.h>

namespace System { namespace Text {

/// UTF-32 encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UTF32Encoding : public ICUEncoding
{
public:
    /// Magic number used by Windows for little endian UTF-32 codepage id.
    static constexpr int UTF32_CODE_PAGE = 12000;
    /// Magic number used by Windows for big endian UTF-32 codepage id.
    static constexpr int BIG_UTF32_CODE_PAGE = 12001;

    /// Constructor.
    ASPOSECPP_SHARED_API UTF32Encoding();
    /// Constructor.
    /// @param big_endian Whether codepage is big endian as opposite to little endian.
    /// @param byte_order_mark Whether to insert BOM.
    ASPOSECPP_SHARED_API UTF32Encoding(bool big_endian, bool byte_order_mark);
    /// Constructor.
    /// @param big_endian Whether codepage is big endian as opposite to little endian.
    /// @param byte_order_mark Whether to insert BOM.
    /// @param throw_on_invalid_characters Whether to throw on invalid bytes as an opposite to replacing them.
    ASPOSECPP_SHARED_API UTF32Encoding(bool big_endian, bool byte_order_mark, bool throw_on_invalid_characters);

    /// Compares encodings' parameters.
    /// @param other Encoding to compare with.
    /// @return True if parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UTF32Encoding& other) const;
    /// Gets encoding hash code.
    /// @return Hash code value.
    ASPOSECPP_SHARED_API int GetHashCode() const override;
    /// Compares with object.
    /// @param obj Object to compare with.
    /// @return True if @p obj is UTF32Encoding with same parameters, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;

    /// Get codepage preamble.
    /// @return If BOM emitting is enabled, returns array with BOM characters, otherwise returns empty array.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;

    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

private:
    /// Whether to insert BOM.
    const bool m_emit_utf32_byte_order_mark = false;
    /// Whether to throw on invalid bytes as an opposite to replacing them.
    const bool m_is_throw_exception = false;
    /// Whether codepage is big endian as opposite to little endian.
    const bool m_big_endian = false;
};

}} // namespace System::Text
