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
        typedef SharedPtr<CultureInfo> CultureInfoPtr;

        class CultureInfo: virtual public Object, public IFormatProvider
        {
            friend class DateTimeFormatInfo;

            RTTI_INFO(System::Globalization::CultureInfo, ::System::BaseTypesInfo<System::IFormatProvider>)

        public:

            CultureInfo(int LCID);
            CultureInfo(const String& name);

            CultureInfo(const String& name, bool useUserOverride);

            bool operator==(const CultureInfo& other) const;
            bool Equals(ptr obj) override;

            CultureInfoPtr Clone();
            String ToString() ASPOSE_CONST override;

            virtual bool get_IsReadOnly() const { return m_isReadOnly;  };
            virtual SharedPtr<NumberFormatInfo> get_NumberFormat() const;
            virtual SharedPtr<DateTimeFormatInfo> get_DateTimeFormat() const;
            void set_DateTimeFormat(SharedPtr<DateTimeFormatInfo> format);
            virtual int get_LCID() const;
            virtual const String& get_Name() const;
            virtual const String& get_EnglishName() const;
            virtual const String& get_NativeName() const;
            virtual SharedPtr<CultureInfo> get_Parent() const;
            virtual SharedPtr<Calendar> get_Calendar() const;
            virtual SharedPtr<TextInfo> get_TextInfo() const;
            virtual SharedPtr<CompareInfo> get_CompareInfo() const;

            virtual bool get_IsNeutralCulture() const;
            virtual String get_TwoLetterISOLanguageName() const;

            CultureTypes get_CultureTypes() const;

            virtual ArrayPtr<SharedPtr<CultureInfo>> get_OptionalCalendars() const;

            // IFormatProvider interface
            SharedPtr<Object> GetFormat(const TypeInfo &formatType) override;

            static SharedPtr<CultureInfo> get_InvariantCulture();
            static SharedPtr<CultureInfo> get_CurrentCulture();
            static void set_CurrentCulture(SharedPtr<CultureInfo> culture);
            static SharedPtr<CultureInfo> get_CurrentUICulture();

            static SharedPtr<CultureInfo> CreateSpecificCulture(const String& name);

            static ArrayPtr<SharedPtr<CultureInfo>> GetCultures(CultureTypes types);
            static SharedPtr<CultureInfo> GetCultureByName(const String& name);
            static SharedPtr<CultureInfo> GetCultureInfo(const String& name);
            static SharedPtr<CultureInfo> GetCultureInfo(int32_t culture);

            Details::CultureDataPtr GetCultureData();
            static CalendarPtr GetCalendarInstance(CalendarId calType);
            static CultureInfoPtr ReadOnly(CultureInfoPtr cultureInfo);

        private:
            bool m_isReadOnly = false;

            mutable String                        m_nameNoSort;
            mutable SharedPtr<NumberFormatInfo>   m_numInfo;
            mutable SharedPtr<DateTimeFormatInfo> m_datetimeInfo;
            mutable SharedPtr<TextInfo>           m_textInfo;
            mutable SharedPtr<CultureInfo>        m_parent;
            mutable SharedPtr<CompareInfo>        m_compareInfo;

            mutable CalendarPtr m_calendar;

            Details::CultureDataPtr m_cultureData;

            static void Init();
            static void InitLocalThread();
        };

    } // namespace Globalization
} // namespace System

#endif // _aspose_system_culture_info_h_
