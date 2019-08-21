/// @file system/globalization/culture_info.h
#pragma once

#include <system/globalization/number_format_info.h>
#include <system/globalization/date_time_format_info.h>
#include <system/globalization/calendar.h>
#include <system/globalization/culture_types.h>
#include <system/globalization/compare_info.h>
#include <system/globalization/text_info.h>
#include <system/icloneable.h>
#include <system/iformatprovider.h>
#include <system/nullable.h>
#include <system/globalization/details/culture_data_ptr.h>
#include <system/details/lazy.h>
#include <system/details/spin_lock.h>

namespace System { namespace Globalization {

class CultureInfo;
/// CultureInfo pointer type.
typedef SharedPtr<CultureInfo> CultureInfoPtr;

/// Collection of culture-specific values and algorithms.
/// Setter operations are only enabled on non-read-only objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CultureInfo
    : virtual public Object
    , public IFormatProvider
    , public ICloneable
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::CultureInfo, ::System::BaseTypesInfo<System::IFormatProvider>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

public:
    /// Constructor.
    /// @param culture Culture identifier.
    ASPOSECPP_SHARED_API explicit CultureInfo(int culture);
    /// Constructor.
    /// @param culture Culture identifier.
    /// @param use_user_override If true, use user-defined values instead of systems; PARAMETER IGNORED.
    ASPOSECPP_SHARED_API CultureInfo(int culture, bool use_user_override);
    /// Constructor.
    /// @param name Culture name.
    ASPOSECPP_SHARED_API explicit CultureInfo(const String& name);
    /// Constructor.
    /// @param name Culture name.
    /// @param use_user_override If true, use user-defined values instead of systems; PARAMETER IGNORED.
    ASPOSECPP_SHARED_API CultureInfo(const String& name, bool use_user_override);
    /// Always throws ArgumentNullException.
    ASPOSECPP_SHARED_API CultureInfo(std::nullptr_t);

public:
    /// Gets invariant culture.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API const CultureInfoPtr& get_InvariantCulture();
    /// Gets default culture in the current application domain.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API CultureInfoPtr get_DefaultThreadCurrentCulture();
    /// Sets default culture in the current application domain.
    /// @param value Culture object.
    static ASPOSECPP_SHARED_API void set_DefaultThreadCurrentCulture(const CultureInfoPtr& value);
    /// Gets culture installed with the operating system.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API const CultureInfoPtr& get_InstalledUICulture();
    /// Gets current thread's UI culture.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API const CultureInfoPtr& get_CurrentUICulture();
    /// Sets current thread's UI culture.
    /// @param value Culture object.
    static ASPOSECPP_SHARED_API void set_CurrentUICulture(const CultureInfoPtr& value);
    /// Gets culture set for current thread.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API const CultureInfoPtr& get_CurrentCulture();
    /// Sets culture for current thread.
    /// @param value Culture to set.
    static ASPOSECPP_SHARED_API void set_CurrentCulture(const CultureInfoPtr& value);
    /// Gets default UI culture in the current application domain.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API CultureInfoPtr get_DefaultThreadCurrentUICulture();
    /// Sets default UI culture in the current application domain.
    /// @param value Culture to set.
    static ASPOSECPP_SHARED_API void set_DefaultThreadCurrentUICulture(const CultureInfoPtr& value);

    /// Gets culture name.
    /// @return Culture name.
    virtual ASPOSECPP_SHARED_API String get_Name() const;
    /// Gets culture English name.
    /// @return Culture English name.
    virtual ASPOSECPP_SHARED_API String get_EnglishName() const;
    /// Gets culture native name.
    /// @return Culture native name.
    virtual ASPOSECPP_SHARED_API String get_NativeName() const;
    /// Gets culture display name.
    /// @return Culture display name.
    virtual ASPOSECPP_SHARED_API String get_DisplayName() const;
    /// Gets culture identifier.
    /// @return Culture identifier.
    virtual ASPOSECPP_SHARED_API int get_LCID() const;
    /// Gets the RFC 4646 name for a language.
    /// @return Language tag.
    ASPOSECPP_SHARED_API String get_IetfLanguageTag() const;
    /// Checks whether the culture is neutral.
    /// @return False if culture is associated with language but not with country or region, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsNeutralCulture() const;
    /// Gets three-letter code for language as defined in Windows API.
    /// @return Three-letter code.
    virtual ASPOSECPP_SHARED_API String get_ThreeLetterWindowsLanguageName() const;
    /// Gets three-letter ISO 639-2 language code.
    /// @return Three-letter code.
    virtual ASPOSECPP_SHARED_API String get_ThreeLetterISOLanguageName() const;
    /// Gets two letters ISO language name associated with culture.
    /// @return Two-letter ISO language name.
    virtual ASPOSECPP_SHARED_API String get_TwoLetterISOLanguageName() const;
    /// Gets a flag indicating whether the CultureInfo uses user-selected culture settings.
    /// @return True if CultureInfo uses user-selected culture settings, false otherwise
    ASPOSECPP_SHARED_API bool get_UseUserOverride() const;
    /// Checks if culture object is read-only.
    /// @return True if culture is read-only, false otherwise.
    ASPOSECPP_SHARED_API bool get_IsReadOnly() const;
    /// Gets bitwise joint of culture types that describe the current culture.
    /// @return Culture types bitwise joint.
    ASPOSECPP_SHARED_API CultureTypes get_CultureTypes() const;
    /// Gets active input locale identifier.
    /// @return Input locale identifier.
    virtual ASPOSECPP_SHARED_API int get_KeyboardLayoutId() const;
    /// Gets parent culture.
    /// @return Parent culture object.
    virtual ASPOSECPP_SHARED_API CultureInfoPtr get_Parent() const;
    /// Gets text parameters used by the culture.
    /// @return Text information object.
    virtual ASPOSECPP_SHARED_API TextInfoPtr get_TextInfo() const;
    /// Gets string comparer that adheres to culture rules.
    /// @return String comparer object.
    virtual ASPOSECPP_SHARED_API CompareInfoPtr get_CompareInfo() const;
    /// Gets calendar used by the culture.
    /// @return Calendar object.
    virtual ASPOSECPP_SHARED_API CalendarPtr get_Calendar() const;
    /// List of calendars that can be used with the culture.
    /// @return Calendar array.
    virtual ASPOSECPP_SHARED_API ArrayPtr<CalendarPtr> get_OptionalCalendars() const;
    /// Gets number format information.
    /// @return Number format info structure associated with culture.
    virtual ASPOSECPP_SHARED_API NumberFormatInfoPtr get_NumberFormat() const;
    /// Gets number format information.
    /// @param value Number format information.
    /// @throw InvalidOperationException If culture is read-only.
    virtual ASPOSECPP_SHARED_API void set_NumberFormat(const NumberFormatInfoPtr& value);
    /// Gets date format information.
    /// @return Date format info structure associated with culture.
    virtual ASPOSECPP_SHARED_API DateTimeFormatInfoPtr get_DateTimeFormat() const;
    /// Sets date format information.
    /// @param value Date time format information.
    /// @throw InvalidOperationException If culture is read-only.
    virtual ASPOSECPP_SHARED_API void set_DateTimeFormat(const DateTimeFormatInfoPtr& value);

    /// Creates culture by name.
    /// @param name Predefined culture name or existing culture object's name.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API CultureInfoPtr CreateSpecificCulture(const String& name);
    /// Gets culture by its name. Same as CreateSpecificCulture.
    /// @param name Predefined culture name or existing culture object's name.
    /// @return Newly created culture object.
    static ASPOSECPP_SHARED_API CultureInfoPtr GetCultureInfo(const String& name);
    /// Gets culture by its name.
    /// @param name Culture name.
    /// @param text_and_compare_culture_name Culture name used for TextInfo and CompareInfo objects.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API CultureInfoPtr GetCultureInfo(const String& name, const String& text_and_compare_culture_name);
    /// Gets culture by id.
    /// @param culture Culture identifier.
    /// @return Newly created culture object.
    static ASPOSECPP_SHARED_API CultureInfoPtr GetCultureInfo(int32_t culture);
    /// Deprecated. Gets a read-only CultureInfo object by the specified RFC 4646 language tag.
    /// @param name Name of a language.
    /// @return A read-only CultureInfo object.
    static ASPOSECPP_SHARED_API CultureInfoPtr GetCultureInfoByIetfLanguageTag(const String& name);
    /// Gets cultures that fall into specified types.
    /// @param types Limits what cultures are fetched.
    /// @return Array of cultures selected.
    static ASPOSECPP_SHARED_API ArrayPtr<CultureInfoPtr> GetCultures(CultureTypes types);
    /// Gets a read only version of culture.
    /// @param culture_info Culture to wrap as read-only.
    /// @return If @p culture_info is read-only, returns same object, otherwise creates a read-only copy.
    static ASPOSECPP_SHARED_API CultureInfoPtr ReadOnly(const CultureInfoPtr& culture_info);

    /// Refreshes cached culture information.
    ASPOSECPP_SHARED_API void ClearCachedData();

    /// Gets alternate culture suitable for console applications.
    /// @return Culture object.
    ASPOSECPP_SHARED_API CultureInfoPtr GetConsoleFallbackUICulture() const;

    /// Compares culture parameters.
    /// @param other Culture to compare to.
    /// @return True if culture parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const CultureInfo& other) const;
    
    // Object methods override

    /// Compares objects.
    /// @param obj Object to compare to.
    /// @return True if @p obj is CultureInfo and has same parameters as this object, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;
    /// Converts culture to string.
    /// @return The name of the CultureInfo, eg. "de-DE_phoneb", "en-US", or "fj-FJ".
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
    /// Returns object hash code.
    ASPOSECPP_SHARED_API int GetHashCode() const override;

    // ICloneable interface implementation

    /// Clones culture info.
    /// @return Newly created culture info object with same data as current one.
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

    // IFormatProvider interface implementation
    
    /// Gets format object for specific type.
    /// @param format_type Format object type.
    /// @return Format info object or null if not found.
    ASPOSECPP_SHARED_API SharedPtr<Object> GetFormat(const TypeInfo &format_type) override;

    /// Gets is-inherited flag. FOR INTERNAL USE.
    bool IsInherited() const;

    CultureInfo& operator=(const CultureInfo&) = delete;

private:
    template <typename T>
    using Lazy = System::Details::Lazy<T>;

    using Lock = System::Details::OptionalSpinLock;
    using LockContext = std::lock_guard<Lock>;

    /// Read-only flag.
    const bool m_is_read_only = false;
    /// Use user-defined values instead of systems.
    const bool m_use_user_override = false;
    /// Is inherited flag.
    mutable Nullable<bool> m_is_inherited;
    /// Culture name used for TextInfo and CompareInfo objects.
    const String m_text_and_compare_culture_name;
    /// Mutex to protect object data.
    mutable Lock m_lockable;

    /// Culture data.
    const Details::CultureDataPtr m_culture_data;
    /// Parent culture.
    mutable Lazy<const CultureInfoPtr> m_parent;
    /// Text formatter.
    mutable Lazy<const TextInfoPtr> m_text_info;
    /// String comparer.
    mutable Lazy<const CompareInfoPtr> m_compare_info;
    /// Calendar.
    mutable Lazy<const CalendarPtr> m_calendar;
    /// Optional calendars.
    mutable Lazy<const ArrayPtr<CalendarPtr>> m_optional_calendars;
    /// Number formatter.
    mutable Lazy<NumberFormatInfoPtr> m_number_format;
    /// Date time formatter.
    mutable Lazy<DateTimeFormatInfoPtr> m_date_time_format;

    /// Constructor.
    /// @param name Culture name.
    /// @param text_and_compare_culture_name Culture name used for TextInfo and CompareInfo objects.
    CultureInfo(const String& name, const String& text_and_compare_culture_name);
    
    /// Copy constructor.
    /// @param other Culture info object.
    /// @param is_read_only Read-only flag.
    explicit CultureInfo(const CultureInfo& other, bool is_read_only = false);

    /// Internal constructor.
    /// @param data Culture data.
    /// @param is_read_only Read-only flag.
    explicit CultureInfo(const Details::CultureDataPtr& data, bool is_read_only = false);

    /// Verify that instance not read-only.
    void VerifyWriteable() const;

    /// Gets user default culture.
    /// @return Culture object.
    static const CultureInfoPtr& get_UserDefaultCulture();
};

}} // namespace System::Globalization
