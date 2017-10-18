#ifndef _aspose_system_icu_initializer_h_
#define _aspose_system_icu_initializer_h_

namespace System
{
    namespace Details
    {
        class IcuInitializer
        {
        public:
            IcuInitializer();

        private:
            static bool s_initialized;
        };
    }
}
#endif // _aspose_system_icu_initializer_h_