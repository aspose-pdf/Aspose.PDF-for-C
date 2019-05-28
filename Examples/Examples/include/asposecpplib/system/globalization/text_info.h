/// @file system/globalization/text_info.h
#ifndef _aspose_system_globalization_text_info_h_
#define _aspose_system_globalization_text_info_h_

#include <system/object.h>
#include <system/string.h>
#include <system/exceptions.h>
#include <system/details/culture_data_ptr.h>

namespace System { namespace Globalization {

/// Defines locale-specific text properties.
/// Setter operations are only enabled on non-read-only objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TextInfo : public System::Object
{
    /// Unhiding constructors.
    FRIEND_FUNCTION_System_MakeObject;
    /// RTTI information.
    RTTI_INFO(System::Globalization::TextInfo, ::System::BaseTypesInfo<System::Object>)

public:
    /// Converts string to title case (except for acronyms that are in upper case already).
    /// @param str String to convert case of.
    /// @return Case conversion result.
    ASPOSECPP_SHARED_API String ToTitleCase(const String& str) const;
    /// Gets list separator.
    /// @return List separator.
    virtual ASPOSECPP_SHARED_API String get_ListSeparator() const;
    /// Sets list separator.
    /// @param value List separator.
    virtual ASPOSECPP_SHARED_API void set_ListSeparator(String value);

    /// Gets ANSI codepage.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_ANSICodePage() const;
    /// Gets Windows codepage.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_WindowsCodePage() const;

    /// Gets locale ID.
    /// @return Locale ID.
    ASPOSECPP_SHARED_API int get_LCID() const;
    /// Gets cluture name.
    /// @return Culture name.
    ASPOSECPP_SHARED_API String get_CultureName() const;
    /// Checks if format is read-only.
    /// @return True if format is read-only, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsReadOnly() const;
    /// Checks if text is written left to right.
    /// @return True if text direction is LTR, false if it is RTL.
    ASPOSECPP_SHARED_API bool get_IsRightToLeft() const;
    /// Converts character to lower case.
    /// @param c Character to convert.
    /// @return Converted character.
    virtual ASPOSECPP_SHARED_API char_t ToLower(char_t c);
    /// Converts string to lower case.
    /// @param str String to convert.
    /// @return Converted string.
    virtual ASPOSECPP_SHARED_API String ToLower(String str);
    /// Converts character to upper case.
    /// @param c Character to convert.
    /// @return Converted character.
    virtual ASPOSECPP_SHARED_API char_t ToUpper(char_t c);
    /// Converts string to upper case.
    /// @param str String to convert.
    /// @return Converted string.
    virtual ASPOSECPP_SHARED_API String ToUpper(String str);
    /// Converts string to title case.
    /// @param str String to convert.
    /// @return Converted string.
    ASPOSECPP_SHARED_API String ToTitleCase(const String& str);

    /// Compares objects.
    /// @param obj Object to compare to.
    /// @return True if @p obj is TextInfo and has same parameters as this object, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> obj) override;
    /// Gets hash code of object.
    /// @return Calcualted hash code.
    virtual ASPOSECPP_SHARED_API int GetHashCode() const override;
    /// Gets string representation of object.
    /// @return String representation of TextInfo object.
    virtual ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

    /// Gets a read only version of culture.
    /// @param textInfo Info to wrap as read-only.
    /// @return If @p textInfo is read-only, returns same object, otherwise creates a read-only copy.
    static ASPOSECPP_SHARED_API System::SharedPtr<TextInfo> ReadOnly(const System::SharedPtr<TextInfo>& textInfo);

protected:
    /// Toggles read-only sign.
    /// @param readOnly True to make object read-only, false otherwise.
    ASPOSECPP_SHARED_API void SetReadOnlyState(bool readOnly);

private:
    /// Friendship for implementation optimization.
    friend class CultureInfo;
    /// Constructor.
    /// @param cultureData Culture to get data from.
    TextInfo(Details::CultureDataPtr cultureData);
    /// Gets list separator from ICU.
    void CalculateListSeparator();
    /// Checks if instance is not read-only.
    /// @throw InvalidOperationException If instance is read-only.
    void VerifyWritable();

    /// Culture to get data from.
    Details::CultureDataPtr m_cultureData;
    /// List separator.
    String m_listSeparator;
    /// Read only flag.
    bool m_isReadOnly;
    /// Culture name.
    String m_cultureName;
    /// Culture name.
    String m_textInfoName;
    /// Custom culture name.
    String customCultureName;
};

}} // namespace System::Globalization

#endif // _aspose_system_globalization_text_info_h_
