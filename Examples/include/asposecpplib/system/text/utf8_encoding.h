/// @file system/text/utf8_encoding.h
#ifndef __aspose_system_utf8_ncoding_h__
#define __aspose_system_utf8_ncoding_h__

#include <system/text/encoding.h>
#include <system/text/icu_encoding.h>
#include <system/array.h>

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
    enum : int 
    { 
        /// Magic number used by Windows for UTF-8 codepage id.
        UTF8_CODE_PAGE = 65001
    };

    /// Constructor.
    ASPOSECPP_SHARED_API UTF8Encoding();
    /// Constructor.
    /// @param encoderShouldEmitUTF8Idetifier Whether to insert BOM.
    ASPOSECPP_SHARED_API UTF8Encoding(bool encoderShouldEmitUTF8Idetifier);
    /// Constructor.
    /// @param encoderShouldEmitUTF8Identifier Whether to insert BOM.
    /// @param throwOnInvalidBytes Whether to throw on invalid bytes as an opposite to replacing them.
    ASPOSECPP_SHARED_API UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool  throwOnInvalidBytes);

    /// Compares encodings' parameters.
    /// @param other Encoding to compare with.
    /// @return True if parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const UTF8Encoding& other) const;
    /// Compares with object.
    /// @param obj Object to compare with.
    /// @return True if @p obj is UTF8Encoding with same parameters, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(ptr obj) override;
    /// Gets encoding hash code.
    /// @return Hash code value.
    virtual ASPOSECPP_SHARED_API int GetHashCode() const override;

    /// Get codepage preamble.
    /// @return If UTF-8 identifier emitting is enabled, returns array with BOM characters, otherwise returns empty array.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> GetPreamble() override;
    /// Gets encoding name.
    /// @return Hardcoded encoding name not including parameters.
    String get_WebName() override { return u"utf-8"; }
    
    /// Clones encoding object.
    /// @return Encoding object clone.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Object> Clone() override;

private:
    /// Whether to insert BOM.
    bool m_encoderShouldEmitUTF8Identifier;
    /// Whether to throw on invalid bytes rather than replace them.
    bool m_throwOnInvalidBytes;
};

}}

#endif // __aspose_system_utf8_ncoding_h__
