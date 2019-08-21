#ifndef _aspose_zip_zip_error_action_h_
#define _aspose_zip_zip_error_action_h_

namespace Aspose { namespace Zip {

// An enum providing the options when an error occurs during opening or reading
// of a file or directory to be added to a zip file.

enum class ZipErrorAction
{
    Throw,
    Skip,
    Retry,
    InvokeErrorEvent
};

}} // namespace Aspose::Zip

#endif // _aspose_zip_zip_error_action_h_

