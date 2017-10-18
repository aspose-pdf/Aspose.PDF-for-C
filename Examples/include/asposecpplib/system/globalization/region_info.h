#ifndef _regioninfo_h_
#define _regioninfo_h_

#include "system/object.h"
#include "system/details/icu_namespace.h"
#include <string>
#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "unicode/locid.h"
#include "unicode/ucurr.h"
#endif


ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    ASPOSECPP_3RD_PARTY_CLASS(Locale);
}


namespace System
{
    namespace Globalization
    {
        class RegionInfo : public Object
        {
            RTTI_INFO(System::Globalization::RegionInfo, ::System::BaseTypesInfo<System::Object>)

        public:

            //Note, the name is language & Region.(not just region). For instance: en-US or en_US.
            RegionInfo(const String &name);
            RegionInfo(int culture);
            RegionInfo();
            virtual ~RegionInfo();
            static SharedPtr<RegionInfo> get_CurrentRegion();
            virtual String get_ISOCurrencySymbol() const;
            virtual String get_CurrencySymbol() const;
            virtual String get_CurrencyNativeName() const;
            virtual String get_CurrencyEnglishName() const;
            virtual String get_ThreeLetterISORegionName() const;
            virtual String get_TwoLetterISORegionName() const;
            virtual String get_Name() const;
            virtual String get_EnglishName() const;
            virtual String get_NativeName() const;
            virtual bool get_IsMetric() const;

        private:

            static icu::Locale* CreateLocale(const String &name);
            //Note, we shouldn't call it in nonwindows platforms.
            static icu::Locale* CreateLocale(int lcid);

            std::unique_ptr<icu::Locale> m_locale;
        };
    }
}

#endif // _regioninfo_h_

