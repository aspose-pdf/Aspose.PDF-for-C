/// @file system/text/decoder_replacement_fallback.h
#ifndef __DecoderReplacementFallback_h__
#define __DecoderReplacementFallback_h__

#include "system/string.h"
#include "system/text/decoder_fallback.h"
#include "system/exceptions.h"

#include "fwd.h"

namespace System { namespace Text {

/// Provides fallback strategy of replacing erroneous symbol with a stub.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DecoderReplacementFallback
    : public DecoderFallback
{
public:
    /// Constructor that uses deafault "?" replacement string.
    DecoderReplacementFallback() : replacement(u"?") {}
    /// Constructor.
    /// @param replacement_ Replacement string.
    DecoderReplacementFallback(const String &replacement_) : replacement(replacement_) {
        /* ORIG: replacement == null
        if(replacement.IsEmpty()) {
            throw ArgumentNullException();
        }
        */
    }

public:
    /// Gets replacement string.
    /// @return Replacement string.
    const String& get_DefaultString() const { return replacement; }
    /// Gets maximal count of characters the instance can return.
    /// @return Replacement string length.
    virtual int get_MaxCharCount() ASPOSE_CONST override { return replacement.get_Length(); }
    /// Creates fallback buffer.
    /// @return Newly created fallback buffer object.
    virtual ASPOSECPP_SHARED_API DecoderFallbackBufferPtr CreateFallbackBuffer() override;

private:
    /// Replacement string.
    String replacement;
};

}}

#endif
