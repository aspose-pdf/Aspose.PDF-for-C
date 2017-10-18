#ifndef _aspose_zip_zip64_option_h_
#define _aspose_zip_zip64_option_h_

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip { namespace Enums {
#else
namespace Aspose { namespace Zip {
#endif

// Options for using ZIP64 extensions when saving zip archives.

enum class Zip64Option
{
    Default = 0,
    Never = 0,
    AsNecessary = 1,
    Always
};

#ifdef ASPOSE_FOUNDATION_NS
}}}} // namespace Aspose::Foundation::Zip::Enums
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zip64_option_h_

