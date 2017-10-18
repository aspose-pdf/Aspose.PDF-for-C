#ifndef _aspose_system_win_resource_stream_h_
#define _aspose_system_win_resource_stream_h_
#include <system/io/memory_stream.h>

namespace System
{
    namespace Details
    {
        class WinResourceStream : public IO::MemoryStream
        {
        public:
            // resource with ID resourceID and RC_DATA type
            WinResourceStream(int resourceID);

        private:
            static ArrayPtr<uint8_t> load_content(int resourceID);
        };
    }
}
#endif // _aspose_system_win_resource_stream_h_
