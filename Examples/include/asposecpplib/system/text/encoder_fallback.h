#ifndef __EncoderFallback_h__
#define __EncoderFallback_h__

#include "system/exceptions.h"
#include "system/object.h"
#include "fwd.h"

namespace System { namespace Text {

    class EncoderFallback: public Object
    {
    private:
        static const EncoderFallbackPtr exception_fallback;
        static const EncoderFallbackPtr replacement_fallback;
        static const EncoderFallbackPtr standard_safe_fallback;

    protected:
        EncoderFallback() {}

    public:
        static const EncoderFallbackPtr get_ExceptionFallback();
        static const EncoderFallbackPtr get_ReplacementFallback();
        static const EncoderFallbackPtr get_StandardSafeFallback();

        virtual int get_MaxCharCount() ASPOSE_CONST = 0;
        virtual EncoderFallbackBufferPtr CreateFallbackBuffer() = 0;
    };

}}

#endif
