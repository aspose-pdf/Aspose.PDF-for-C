#ifndef __DecoderFallback_h__
#define __DecoderFallback_h__

//boost
#include "fwd.h"
#include "system/object.h"

namespace System { namespace Text {

    class DecoderFallback: public Object
    {
    private:
       static const DecoderFallbackPtr exception_fallback;
       static const DecoderFallbackPtr replacement_fallback;
       static const DecoderFallbackPtr standard_safe_fallback;

    protected:
        DecoderFallback() {}

    public:
        static const DecoderFallbackPtr get_ExceptionFallback();
        static const DecoderFallbackPtr get_ReplacementFallback();
        static const DecoderFallbackPtr get_StandardSafeFallback();

        virtual int get_MaxCharCount() ASPOSE_CONST = 0;
        virtual DecoderFallbackBufferPtr CreateFallbackBuffer() = 0;
    };

}}

#endif
