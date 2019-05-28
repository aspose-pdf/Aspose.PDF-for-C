/// @file system/runtime/serialization/streaming_context.h
#ifndef _aspose_serialization_streaming_context_h_
#define _aspose_serialization_streaming_context_h_

namespace System { namespace Runtime { namespace Serialization {

/// Dummy class to make StreamingContext-using ported classes compile.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StreamingContext
{
};

}}}

#endif
