#ifndef _aspose_zip_extract_existing_file_action_h_
#define _aspose_zip_extract_existing_file_action_h_

namespace Aspose { namespace Zip {

// An enum for the options when extracting an entry would overwrite an existing file.

enum class ExtractExistingFileAction
{
    Throw,
    OverwriteSilently,
    DoNotOverwrite,
    InvokeExtractProgressEvent
};

}} // namespace Aspose::Zip

#endif // _aspose_zip_extract_existing_file_action_h_

