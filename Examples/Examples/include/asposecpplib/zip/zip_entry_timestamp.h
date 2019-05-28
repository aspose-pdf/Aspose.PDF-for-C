#ifndef _aspose_zip_zip_entry_timestamp_h_
#define _aspose_zip_zip_entry_timestamp_h_

#include <system/enum_helpers.h>

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip { namespace Enums {
#else
namespace Aspose { namespace Zip {
#endif

// An enum that specifies the type of timestamp available on the ZipEntry.

enum class ZipEntryTimestamp
{
    None = 0,
    DOS = 1,
    Windows = 2,
    Unix = 4,
    InfoZip1 = 8
};

#ifdef ASPOSE_FOUNDATION_NS
DECLARE_ENUM_OPERATORS(Aspose::Foundation::Zip::Enums::ZipEntryTimestamp);
}}}} // namespace Aspose::Foundation::Zip
#else
DECLARE_ENUM_OPERATORS(Aspose::Zip::ZipEntryTimestamp);
}} // namespace Aspose::Zip
#endif




#endif // _aspose_zip_zip_entry_timestamp_h_

