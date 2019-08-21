/// @file system/globalization/region_info.h
#pragma once

#include <system/object.h>
#include <system/globalization/details/region_data_ptr.h>

namespace System { namespace Globalization {

class CultureInfo;

class RegionInfo;
/// RegionInfo pointer type.
typedef SharedPtr<RegionInfo> RegionInfoPtr;

/// Provides information on region.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS RegionInfo : public virtual Object
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::RegionInfo, ::System::BaseTypesInfo<System::Object>)

    /// Unhides constructor.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    /// @param name Language & Region pair (not just region). For instance: "en-US" or "en_US".
    ASPOSECPP_SHARED_API RegionInfo(const String &name);
    /// Constructor.
    /// @param culture Culture identifier.
    ASPOSECPP_SHARED_API RegionInfo(int culture);

public:
    RegionInfo(const RegionInfo&) = delete;
    RegionInfo& operator=(const RegionInfo&) = delete;

    /// Gets region set in system.
    /// @return Newly created region object.
    static ASPOSECPP_SHARED_API RegionInfoPtr get_CurrentRegion();

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
    /// Gets 3 letter Windows region code.
    /// @return Region code.
    virtual ASPOSECPP_SHARED_API String get_ThreeLetterWindowsRegionName() const;
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
    /// Gets full region name.
    /// @return Region name.
    virtual ASPOSECPP_SHARED_API String get_DisplayName() const;
    /// Checks whether region uses metric system.
    /// @return True if region uses metric system, false otherwise.
    virtual ASPOSECPP_SHARED_API bool get_IsMetric() const;
    /// Gets unique identificator for a region.
    /// @return A 32-bit unique identificator.
    virtual ASPOSECPP_SHARED_API int get_GeoId() const;

    // Object methods
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> value) override;
    ASPOSECPP_SHARED_API int GetHashCode() const override;
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

private:
    /// Region data.
    const Details::RegionDataPtr m_data;

    /// Current region constructor.
    RegionInfo();

    friend class CultureInfo;

    /// Refreshes cached culture information.
    static void ClearCachedData();
};

}} // namespace System::Globalization
