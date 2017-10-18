#pragma once


#include "system/enum_helpers.h"


namespace System
{
    namespace Globalization
    {

        enum CultureTypes : uint32_t
        {
            NeutralCultures = 1,
            SpecificCultures = 2,
            InstalledWin32Cultures = 4,
            AllCultures = 7,
            UserCustomCulture = 8,
            ReplacementCultures = 16,
            WindowsOnlyCultures = 32,
            FrameworkCultures = 64
        };

    } // namespace Globalization
} // namespace System


DECLARE_ENUM_OPERATORS(System::Globalization::CultureTypes)
