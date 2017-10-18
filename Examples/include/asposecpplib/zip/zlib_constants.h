#ifndef _aspose_zip_zlib_constants_h_
#define _aspose_zip_zlib_constants_h_

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

// A bunch of constants used in the Zlib interface.

enum class ZlibConstants : int
{
    Z_BUF_ERROR = -5,
    Z_DATA_ERROR = -3,
    Z_STREAM_ERROR = -2,
    Z_OK = 0,
    Z_STREAM_END = 1,
    Z_NEED_DICT = 2,
    WindowBitsMax = 15,
    WindowBitsDefault = WindowBitsMax,
    WorkingBufferSizeDefault = 8192,
    WorkingBufferSizeMin = 128
};


#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_zlib_constants_h_

