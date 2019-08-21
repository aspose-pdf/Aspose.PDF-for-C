/// @file system/globalization/text_info.h
#pragma once

#include <system/string.h>
#include <system/icloneable.h>
#include <system/globalization/details/culture_data_ptr.h>
#include <system/details/lazy.h>
#include <system/details/spin_lock.h>
#include <system/details/synchronized_value.h>

namespace System { namespace Globalization {

class TextInfo;
/// TextInfo pointer type.
typedef SharedPtr<TextInfo> TextInfoPtr;

/// Defines locale-specific text properties.
/// Setter operations are only enabled on non-read-only objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS TextInfo : public ICloneable
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::TextInfo, ::System::BaseTypesInfo<System::Object>)

public:
    TextInfo(const TextInfo&) = delete;
    TextInfo& operator=(const TextInfo&) = delete;

    /// Gets list separator.
    /// @return List separator.
    virtual ASPOSECPP_SHARED_API String get_ListSeparator() const;
    /// Sets list separator.
    /// @param value List separator.
    virtual ASPOSECPP_SHARED_API void set_ListSeparator(String value);
    /// Gets ANSI codepage.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_ANSICodePage() const;
    /// Gets EBCDIC codepage.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_EBCDICCodePage() const;
    /// Gets Macintosh codepage.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_MacCodePage() const;
    /// Gets OEM codepage.
    /// @return Codepage ID.
    virtual ASPOSECPP_SHARED_API int get_OEMCodePage() const;
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
    virtual ASPOSECPP_SHARED_API char_t ToLower(char_t c) const;
    /// Converts string to lower case.
    /// @param str String to convert.
    /// @return Converted string.
    virtual ASPOSECPP_SHARED_API String ToLower(String str) const;
    /// Converts character to upper case.
    /// @param c Character to convert.
    /// @return Converted character.
    virtual ASPOSECPP_SHARED_API char_t ToUpper(char_t c) const;
    /// Converts string to upper case.
    /// @param str String to convert.
    /// @return Converted string.
    virtual ASPOSECPP_SHARED_API String ToUpper(String str) const;
    /// Converts string to title case (except for acronyms that are in upper case already).
    /// @param str String to convert case of.
    /// @return Case conversion result.
    ASPOSECPP_SHARED_API String ToTitleCase(String str) const;

    // Object interface
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;
    ASPOSECPP_SHARED_API int GetHashCode() const override;
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

    // ICloneable interface
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

    /// Gets a read only version of culture.
    /// @param text_info TextInfo to wrap as read-only.
    /// @return If @p text_info is read-only, returns same object, otherwise creates a read-only copy.
    static ASPOSECPP_SHARED_API TextInfoPtr ReadOnly(const TextInfoPtr& text_info);

private:
    template <typename T>
    using Lazy = System::Details::ThreadSafeLazy<T>;

    template <typename T>
    using SynchronizedValue = System::Details::SynchronizedValue<T, System::Details::SpinLock>;

    /// Culture to get data from.
    const Details::CultureDataPtr m_culture_data;
    /// Read-only flag.
    const bool m_is_read_only;
    /// List separator.
    mutable Lazy<SynchronizedValue<String>> m_list_separator;

    /// Checks that instance is not read-only.
    /// @throw InvalidOperationException If instance is read-only.
    void VerifyWritable();

private:
    /// Unhiding constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    /// @param culture_data Culture to get data from.
    /// @param is_read_only Read-only flag.
    TextInfo(const Details::CultureDataPtr& culture_data, bool is_read_only = false);
};

}} // namespace System::Globalization
