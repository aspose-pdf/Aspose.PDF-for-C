/// @file system/globalization/culture_info.h
#ifndef _aspose_system_culture_info_h_
#define _aspose_system_culture_info_h_

#include "system/globalization/number_format_info.h"
#include "system/globalization/date_time_format_info.h"
#include "system/exceptions.h"
#include "system/globalization/calendar.h"
#include "system/globalization/culture_types.h"
#include "system/globalization/compare_info.h"
#include "system/globalization/text_info.h"
#include "system/iformatprovider.h"
#include "system/details/culture_data_ptr.h"

namespace System
{
namespace Globalization
{

class CultureInfo;
/// Culture info pointer type.
typedef SharedPtr<CultureInfo> CultureInfoPtr;

/// Collection of culture-specific values and algorithms.
/// Setter operations are only enabled on non-read-only objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CultureInfo: virtual public Object, public IFormatProvider
{
    /// Friendship for implementation optimization.
    friend class DateTimeFormatInfo;
    /// RTTI information.
    RTTI_INFO(System::Globalization::CultureInfo, ::System::BaseTypesInfo<System::IFormatProvider>)

public:
    /// Constructor.
    /// @param culture Culture identifier.
    ASPOSECPP_SHARED_API CultureInfo(int culture);
    /// Constructor.
    /// @param name Culture name.
    ASPOSECPP_SHARED_API CultureInfo(const String& name);
    /// Constructor.
    /// @param name Culture name.
    /// @param useUserOverride If true, use user-defined values instead of systems; not supported.
    ASPOSECPP_SHARED_API CultureInfo(const String& name, bool useUserOverride);

    /// Compares culture parameters.
    /// @param other Culture to compare to.
    /// @return True if culture parameters match, false otherwise.
    ASPOSECPP_SHARED_API bool operator==(const CultureInfo& other) const;
    /// Compares objects.
    /// @param obj Object to compare to.
    /// @return True if @p obj is CultureInfo and has same parameters as this object, false otherwise.
    ASPOSECPP_SHARED_API bool Equals(ptr obj) override;

    /// Clones culture info.
    /// @return Newly created culture info object with same data as current one.
    ASPOSECPP_SHARED_API CultureInfoPtr Clone();
    /// Converts culture to string.
    /// @return Culture name.
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

    /// Checks if culture object is read-only.
    /// @return True if culture is read-only, false otherwise.
    virtual bool get_IsReadOnly() const { return m_isReadOnly;  };
    /// Gets number format information.
    /// @return Number format info structure associated with culture.
    virtual ASPOSECPP_SHARED_API SharedPtr<NumberFormatInfo> get_NumberFormat() const;
    /// Gets date format information.
    /// @return Date format info structure associated with culture.
    virtual ASPOSECPP_SHARED_API SharedPtr<DateTimeFormatInfo> get_DateTimeFormat() const;
    /// Sets date format information.
    /// @return Date format info structure associated with culture.
    /// @throw InvalidOperationException If culture is read-only.
    ASPOSECPP_SHARED_API void set_DateTimeFormat(SharedPtr<DateTimeFormatInfo> format);
    /// Gets culture identifier.
    /// @return Culture identifier.
    virtual ASPOSECPP_SHARED_API int get_LCID() const;
    /// Gets culture name.
    /// @return Culture name.
    virtual ASPOSECPP_SHARED_API const String& get_Name() const;
    /// Gets culture English name.
    /// @return Culture English name.
    virtual ASPOSECPP_SHARED_API const String& get_EnglishName() const;
    /// Gets culture native name.
    /// @return Culture native name.
    virtual ASPOSECPP_SHARED_API const String& get_NativeName() const;
    /// Gets parent culture.
    /// @return Parent culture object.
    virtual ASPOSECPP_SHARED_API SharedPtr<CultureInfo> get_Parent() const;
    /// Gets calendar used by the culture.
    /// @return Calendar object.
    virtual ASPOSECPP_SHARED_API SharedPtr<Calendar> get_Calendar() const;
    /// Gets text parameters used by the culture.
    /// @return Text information object.
    virtual ASPOSECPP_SHARED_API SharedPtr<TextInfo> get_TextInfo() const;
    /// Gets string comparer that adheres to culture rules.
    /// @return String comparer object.
    virtual ASPOSECPP_SHARED_API SharedPtr<CompareInfo> get_CompareInfo() const;

    /// Checks whether the culture is neutral.
    /// @return False if culture is associated with language but not with contry or region, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsNeutralCulture() const;
    /// Gets two letters ISO language name associated with culture.
    /// @return Two-letter ISO language name.
    virtual ASPOSECPP_SHARED_API String get_TwoLetterISOLanguageName() const;
    /// Gets bitwise joint of culture types that describe the current culture.
    /// @return Culture types bitwise joint.
    CultureTypes ASPOSECPP_SHARED_API get_CultureTypes() const;
    /// List of calendars that can be used with the culture.
    /// @return Calendar array.
    virtual ASPOSECPP_SHARED_API ArrayPtr<SharedPtr<Calendar>> get_OptionalCalendars() const;

    // IFormatProvider interface
    /// Gets format object for specific type.
    /// @param formatType Format object type.
    /// @return Format info object or null if not found.
    ASPOSECPP_SHARED_API SharedPtr<Object> GetFormat(const TypeInfo &formatType) override;

    /// Gets invariant culture.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API SharedPtr<CultureInfo> get_InvariantCulture();
    /// Gets culture set for current thread.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API SharedPtr<CultureInfo> get_CurrentCulture();
    /// Sets culture for current thread.
    /// @param culture Culture to set.
    static ASPOSECPP_SHARED_API void set_CurrentCulture(SharedPtr<CultureInfo> culture);
    /// Gets current thread's UI culture.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API SharedPtr<CultureInfo> get_CurrentUICulture();

    /// Creates culture by name.
    /// @param name Predefined culture name or existing culture object's name.
    /// @return Culture object.
    static ASPOSECPP_SHARED_API SharedPtr<CultureInfo> CreateSpecificCulture(const String& name);

    /// Gets cultures that fall into specified types.
    /// @param types Limits what cultures are fetched.
    /// @return Array of cultures selected.
    static ASPOSECPP_SHARED_API ArrayPtr<SharedPtr<CultureInfo>> GetCultures(CultureTypes types);
    /// Gets culture by its name. Same as CreateSpecificCulture.
    /// @param name Predefined culture name or existing culture object's name.
    /// @return Newly created culture object.
    static ASPOSECPP_SHARED_API SharedPtr<CultureInfo> GetCultureByName(const String& name);
    /// Gets culture by its name. Same as CreateSpecificCulture.
    /// @param name Predefined culture name or existing culture object's name.
    /// @return Newly created culture object.
    static ASPOSECPP_SHARED_API SharedPtr<CultureInfo> GetCultureInfo(const String& name);
    /// Gets culture by id.
    /// @param culture Culture identifier.
    /// @return Newly created culture object.
    static ASPOSECPP_SHARED_API SharedPtr<CultureInfo> GetCultureInfo(int32_t culture);

    /// Gets culture data associated with culture.
    /// @return Implementation object.
    ASPOSECPP_SHARED_API Details::CultureDataPtr GetCultureData();
    /// Creates calendar. Only Gregorian types are supported.
    /// @param calType Calendar type, must be gregorian.
    /// @return Newly created calendar object.
    static ASPOSECPP_SHARED_API CalendarPtr GetCalendarInstance(Details::CalendarId calType);
    /// Gets a read only version of culture.
    /// @param cultureInfo Culture to wrap as read-only.
    /// @return If @p cultureInfo is read-only, returns same object, otherwise creates a read-only copy.
    static ASPOSECPP_SHARED_API CultureInfoPtr ReadOnly(CultureInfoPtr cultureInfo);

private:
    /// Read-only sign.
    bool m_isReadOnly = false;
    /// Number formatter.
    mutable SharedPtr<NumberFormatInfo>   m_numInfo;
    /// Date time formatter.
    mutable SharedPtr<DateTimeFormatInfo> m_datetimeInfo;
    /// Text formatter.
    mutable SharedPtr<TextInfo>           m_textInfo;
    /// Parent culture.
    mutable SharedPtr<CultureInfo>        m_parent;
    /// String comparer.
    mutable SharedPtr<CompareInfo>        m_compareInfo;
    /// Calendar.s
    mutable CalendarPtr m_calendar;
    /// Culture data.
    Details::CultureDataPtr m_cultureData;

    /// Initializes global cluture objects such as invariant culture.
    static void Init();
    /// Initializes thread-local culture objects.
    static void InitLocalThread();
};

} // namespace Globalization
} // namespace System

#endif // _aspose_system_culture_info_h_
