/// @file system/text/decoder_exception_fallback.h
#ifndef __DecoderExceptionFallback_h__
#define __DecoderExceptionFallback_h__

#include "system/text/decoder_fallback.h"
#include "system/text/decoder_exception_fallback_buffer.h"

#include "fwd.h"

namespace System { namespace Text {

/// Provides exception-throwing fallback strategy.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DecoderExceptionFallback : public DecoderFallback
{
public:
    /// Gets maximal count of characters the instance can return.
    /// @return Always returns 0.
    virtual int get_MaxCharCount() ASPOSE_CONST override { return 0; }
    /// Creates fallback buffer.
    /// @return Newly created fallback buffer object.
    virtual DecoderFallbackBufferPtr CreateFallbackBuffer() override {
        return MakeObject<DecoderExceptionFallbackBuffer>();
    }
};

}}

#endif
