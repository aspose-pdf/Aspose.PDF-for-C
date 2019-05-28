/// @file system/details/win_resource_stream.h
#ifndef _aspose_system_win_resource_stream_h_
#define _aspose_system_win_resource_stream_h_
#include <system/io/memory_stream.h>

namespace System
{
namespace Details
{

/// Stream class to load data from Windows resource.
class ASPOSECPP_SHARED_CLASS WinResourceStream : public IO::MemoryStream
{
public:
    /// Constructs stream reading resource of RC_DATA type.
    /// @param resourceID ID of resource to use.
    ASPOSECPP_SHARED_API WinResourceStream(int resourceID);

private:
    /// Loads resource contents.
    /// @param resourceID ID of resource to load.
    /// @return Array of bytes read.
    static ASPOSECPP_SHARED_API ArrayPtr<uint8_t> load_content(int resourceID);
};

}
}
#endif // _aspose_system_win_resource_stream_h_
