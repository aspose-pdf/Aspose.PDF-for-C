/// @file system/text/unicode_encoding.h
#pragma once

#include <system/string.h>
#include <system/text/icu_encoding.h>

namespace System { namespace Text {

/// Unicode encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UnicodeEncoding : public ICUEncoding
{
public:
    /// Little endian codepage number.
    static constexpr int UNICODE_CODE_PAGE = 1200;
    /// Big endian codepage number.
    static constexpr int BIG_UNICODE_CODE_PAGE = 1201;

    /// Constructor.
    ASPOSECPP_SHARED_API UnicodeEncoding();
    /// Constructor.
    /// @param big_endian If true, use big endian, otherwise use little endian.
    /// @param byte_order_mark If true, provide BOM.
    ASPOSECPP_SHARED_API UnicodeEncoding(bool big_endian, bool byte_order_mark);
    /// Constructor.
    /// @param big_endian If true, use big endian, otherwise use little endian.
    /// @param byte_order_mark If true, provide BOM.
    /// @param throw_on_invalid_bytes If true, throw on invalid bytes, otherwise skip them.
    ASPOSECPP_SHARED_API UnicodeEncoding(bool big_endian, bool byte_order_mark, bool throw_on_invalid_bytes);

    /// Hashes encoding.
    /// @return Hash code.
    ASPOSECPP_SHARED_API int GetHashCode() const override;
    /// Compares encodings.
    /// @param obj Object to compare to.
    /// @return True if both objects are of same encoding, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;

    /// Returns a sequence of bytes that denotes the encoding (e. g. BOM).
    /// @return Bytes sequence preamble.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;
    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byte_count Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxCharCount(int byte_count) override;
    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param char_count Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxByteCount(int char_count) override;

    /// Compares encodings by codepages and flags.
    /// @return True if codepages and flags match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UnicodeEncoding&) const;

    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

private:
    /// Whether to throw on unexpected byte; doesn't actually control throwing, but gets comared when flags are compared.
    const bool m_is_throw_exception = false;
    /// Whether to use big endian as an opposite to little endian.
    const bool m_big_endian = false;
    /// Whether to use BOM.
    const bool m_byte_order_mark = true;
};

}} // namespace System::Text
