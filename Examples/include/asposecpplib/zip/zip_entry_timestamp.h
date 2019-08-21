#ifndef _aspose_zip_zip_entry_timestamp_h_
#define _aspose_zip_zip_entry_timestamp_h_

#include <system/enum_helpers.h>

namespace Aspose { namespace Zip {

// An enum that specifies the type of timestamp available on the ZipEntry.

enum class ZipEntryTimestamp
{
    None = 0,
    DOS = 1,
    Windows = 2,
    Unix = 4,
    InfoZip1 = 8
};

DECLARE_ENUM_OPERATORS(Aspose::Zip::ZipEntryTimestamp);
}} // namespace Aspose::Zip

#endif // _aspose_zip_zip_entry_timestamp_h_

