#pragma once

#include <system/iformatprovider.h>

namespace System {

/// Defines a method that formats the value of the current object using the specified format string and format provider.
class ASPOSECPP_SHARED_CLASS IFormattable : public virtual Object
{
    RTTI_INFO(System::IFormattable, System::BaseTypesInfo<System::Object>);

public:
    virtual ASPOSECPP_SHARED_API String ToString(String format, SharedPtr<IFormatProvider> formatProvider) = 0;
};

} // namespace System
