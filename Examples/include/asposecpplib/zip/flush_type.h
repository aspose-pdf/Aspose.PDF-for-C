#ifndef _aspose_zip_flush_type_h_
#define _aspose_zip_flush_type_h_

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

/// Describes how to flush the current deflate operation.
/// The different FlushType values are useful when using a Deflate in a streaming application.

enum class FlushType
{
    None = 0,
    Partial,
    Sync,
    Full,
    Finish,
    Block,
    Trees
};

#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_flush_type_h_

