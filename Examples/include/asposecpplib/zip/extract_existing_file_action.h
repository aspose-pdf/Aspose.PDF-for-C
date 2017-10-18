#ifndef _aspose_zip_extract_existing_file_action_h_
#define _aspose_zip_extract_existing_file_action_h_

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip { namespace Enums {
#else
namespace Aspose { namespace Zip {
#endif

// An enum for the options when extracting an entry would overwrite an existing file.

enum class ExtractExistingFileAction
{
    Throw,
    OverwriteSilently,
    DoNotOverwrite,
    InvokeExtractProgressEvent
};

#ifdef ASPOSE_FOUNDATION_NS
}}}} // namespace Aspose::Foundation::Zip::Enums
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_extract_existing_file_action_h_

