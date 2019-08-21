/// @file system/globalization/region_info.h
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

/// Begins an ICU namspace scope.
ASPOSECPP_3RD_PARTY_ICU_NAMESPACE_START {
    /// ICU Locale class forward declaration.
    ASPOSECPP_3RD_PARTY_CLASS(Locale);
}


namespace System
{
namespace Globalization
{

/// Provides information on region.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RegionInfo : public Object
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::RegionInfo, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructor.
    /// @param name Language & Region pair (not just region). For instance: "en-US" or "en_US".
    ASPOSECPP_SHARED_API RegionInfo(const String &name);
    /// Constructor.
    /// @param culture Culture identifier.
    ASPOSECPP_SHARED_API RegionInfo(int culture);
    /// Current region constructor.
    ASPOSECPP_SHARED_API RegionInfo();
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~RegionInfo();

    /// Gets region set in system.
    /// @return Newly created region object.
    static ASPOSECPP_SHARED_API SharedPtr<RegionInfo> get_CurrentRegion();

    /// Gets ISO currency symbol.
    /// @return Currency symbol.
    virtual ASPOSECPP_SHARED_API String get_ISOCurrencySymbol() const;
    /// Gets currency symbol.
    /// @return Currency symbol.
    virtual ASPOSECPP_SHARED_API String get_CurrencySymbol() const;
    /// Gets currency native name.
    /// @return Currency name.
    virtual ASPOSECPP_SHARED_API String get_CurrencyNativeName() const;
    /// Gets currency English name.
    /// @return Currency name.
    virtual ASPOSECPP_SHARED_API String get_CurrencyEnglishName() const;
    /// Gets 3 letter ISO region code.
    /// @return Region code.
    virtual ASPOSECPP_SHARED_API String get_ThreeLetterISORegionName() const;
    /// Gets 2 letter ISO region code.
    /// @return Region code.
    virtual ASPOSECPP_SHARED_API String get_TwoLetterISORegionName() const;
    /// Gets region name.
    /// @return Region name.
    virtual ASPOSECPP_SHARED_API String get_Name() const;
    /// Gets English region name.
    /// @return Region name.
    virtual ASPOSECPP_SHARED_API String get_EnglishName() const;
    /// Gets native region name.
    /// @return Region name.
    virtual ASPOSECPP_SHARED_API String get_NativeName() const;
    /// Checks whether region uses metric system.
    /// @return True if region uses metric system, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsMetric() const;

private:
    /// Creates locale for specific region.
    /// @param name Region name.
    static icu::Locale* CreateLocale(const String &name);
    /// Creates locale for specific region. Shouldn't be called on nonwindows platforms.
    /// @param lcid Locale ID.
    static icu::Locale* CreateLocale(int lcid);

    /// Locale that provides region information.
    std::unique_ptr<icu::Locale> m_locale;
};

}
}

#endif // _regioninfo_h_

