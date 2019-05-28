/// @file system/text/unicode_encoding.h
#ifndef __UnicodeEncoding_h__
#define __UnicodeEncoding_h__

#include "system/string.h"
#include "system/text/icu_encoding.h"

namespace System { namespace Text {

/// Unicode encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UnicodeEncoding : public ICUEncoding
{
public:
    enum : int
    {
        /// Little endian codepage number.
        UNICODE_CODE_PAGE = 1200,
        /// Big endian codepage number.
        BIG_UNICODE_CODE_PAGE = 1201
    };

    /// Constructor.
    ASPOSECPP_SHARED_API UnicodeEncoding();
    /// Constructor.
    /// @param bigEndian If true, use big endian, otherwise use little endian.
    /// @param byteOrderMark If true, provide BOM.
    ASPOSECPP_SHARED_API UnicodeEncoding(bool bigEndian, bool byteOrderMark);
    /// Constructor.
    /// @param bigEndian If true, use big endian, otherwise use little endian.
    /// @param byteOrderMark If true, provide BOM.
    /// @param throwOnInvalidBytes If true, throw on invalid bytes, otherwise skip them.
    ASPOSECPP_SHARED_API UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

    /// Hashes encoding.
    /// @return Hash code.
    virtual ASPOSECPP_SHARED_API int GetHashCode() const override;
    /// Compares encodings.
    /// @param obj Object to compare to.
    /// @return True if both objects are of same encoding, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(ptr obj) override;

    /// Returns a sequence of bytes that denotes the encoding (e. g. BOM).
    /// @return Bytes sequence preamble.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;
    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byteCount Number of bytes to decode.
    /// @return Number of bytes sufficient to decode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxCharCount(int byteCount) override;
    /// Get the maximum number of bytes needed to encode a specified number of characters.
    /// @param charCount Number of characters to encode.
    /// @return Number of bytes sufficient to encode any string of given character length.
    ASPOSECPP_SHARED_API int GetMaxByteCount(int charCount) override;

    /// Compares encodings by codepages and flags.
    /// @return True if codepages and flags match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UnicodeEncoding&) const;

    /// Gets Windows codepage ID.
    /// @return Codepage ID.
    virtual int get_CodePage()  override { return m_bigEndian ? BIG_UNICODE_CODE_PAGE: UNICODE_CODE_PAGE;  };
    /// Gets IANA-compatible encoding name.
    /// @return Name of encoding.
    virtual ASPOSECPP_SHARED_API String get_WebName()  override;

    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> Clone() override;

private:
    /// Whether to throw on unexpected byte; doesn't actually control throwing, but gets comared when flags are compared.
    bool m_isThrowException = false;
    /// Whether to use big endian as an opposite to little endian.
    bool m_bigEndian = false;
    /// Whether to use BOM.
    bool m_byteOrderMark = true;

};

}}

#endif
