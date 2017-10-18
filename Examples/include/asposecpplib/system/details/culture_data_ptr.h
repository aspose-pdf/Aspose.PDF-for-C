#pragma once
#include <memory>

namespace System
{
    namespace Globalization
    {
        namespace Details
        {
            class CultureData;

            using CultureDataPtr = std::shared_ptr<CultureData>;
        }
    }
}

