/// @file system/text/utf32_encoding.h
#ifndef __UTF32Encoding_h__
#define __UTF32Encoding_h__

#include "system/text/icu_encoding.h"
#include "system/string.h"

namespace System { namespace Text {

/// UTF-32 encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UTF32Encoding : public ICUEncoding
{
public:
    enum : int
    {
        /// Magic number used by Windows for little endian UTF-32 codepage id.
        UTF32_CODE_PAGE = 12000,
        /// Magic number used by Windows for big endian UTF-32 codepage id.
        BIG_UTF32_CODE_PAGE = 12001
    };

    /// Constructor.
    ASPOSECPP_SHARED_API UTF32Encoding();
    /// Constructor.
    /// @param bigEndian Whether codepage is big endian as opposite to little endian.
    /// @param byteOrderMark Whether to insert BOM.
    ASPOSECPP_SHARED_API UTF32Encoding(bool bigEndian, bool byteOrderMark);
    /// Constructor.
    /// @param bigEndian Whether codepage is big endian as opposite to little endian.
    /// @param byteOrderMark Whether to insert BOM.
    /// @param throwOnInvalidCharacters Whether to throw on invalid bytes as an opposite to replacing them.
    ASPOSECPP_SHARED_API UTF32Encoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters);

    /// Compares encodings' parameters.
    /// @param other Encoding to compare with.
    /// @return True if parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UTF32Encoding& other) const;
    /// Gets encoding hash code.
    /// @return Hash code value.
    virtual ASPOSECPP_SHARED_API int GetHashCode() const override;
    /// Compares with object.
    /// @param obj Object to compare with.
    /// @return True if @p obj is UTF32Encoding with same parameters, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(ptr obj) override;

    /// Get codepage preamble.
    /// @return If BOM emitting is enabled, returns array with BOM characters, otherwise returns empty array.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;
    /// Gets encoding codepage.
    /// @return Windows encoding codepage id.
    virtual int get_CodePage() override { return m_bigEndian ? BIG_UTF32_CODE_PAGE : UTF32_CODE_PAGE; };
    /// Gets encoding name.
    /// @return Hardcoded encoding name.
    virtual ASPOSECPP_SHARED_API String get_EncodingName() override;

    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> Clone() override;

private:
    /// Whether to insert BOM.
    bool m_emitUTF32ByteOrderMark = false;
    /// Whether to throw on invalid bytes as an opposite to replacing them.
    bool m_isThrowException = false;
    /// Whether codepage is big endian as opposite to little endian.
    bool m_bigEndian = false;
};

}}

#endif
