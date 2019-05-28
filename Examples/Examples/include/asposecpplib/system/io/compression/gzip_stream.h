/// @file system/io/compression/gzip_stream.h
#pragma once
#include "zip/gzip_stream.h"

namespace System { namespace IO { namespace Compression {

#ifdef ASPOSE_FOUNDATION_NS
/// An alias for Aspose::Foundation::Zip::GZipStream.
using  GZipStream = Aspose::Foundation::Zip::GZipStream;
#else
/// An alias for Aspose::Zip::GZipStream.
using  GZipStream = Aspose::Zip::GZipStream;
#endif

}}}
