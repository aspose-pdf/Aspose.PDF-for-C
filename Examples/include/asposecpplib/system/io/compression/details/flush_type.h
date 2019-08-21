/// @file system/io/compression/details/flush_type.h
#pragma once

namespace Aspose { namespace Zip {

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

}} // namespace Aspose::Zip
