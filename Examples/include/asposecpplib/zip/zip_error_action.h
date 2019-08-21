#ifndef _aspose_zip_zip_error_action_h_
#define _aspose_zip_zip_error_action_h_

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip { namespace Enums {
#else
namespace Aspose { namespace Zip {
#endif

// An enum providing the options when an error occurs during opening or reading
// of a file or directory to be added to a zip file.

enum class ZipErrorAction
{
    Throw,
    Skip,
    Retry,
    InvokeErrorEvent
};

#ifdef ASPOSE_FOUNDATION_NS
}}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zip_error_action_h_

