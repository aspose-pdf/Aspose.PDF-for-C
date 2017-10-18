#ifndef _performance_counter_h_
#define _performance_counter_h_

#include <system/object.h>

#include "fwd.h"
#include "system/string.h"


namespace System
{
    namespace Diagnostics
    {
        class PerformanceCounter : public System::Object // Component, ISupportInitialize
        {
        public:
            PerformanceCounter();

            PerformanceCounter(String category_name, String counter_name);
            PerformanceCounter(String category_name, String counter_name, String instance_name, String machine_name);

            float NextValue();

            void Close();

        private:

        };

    }
}
#endif
