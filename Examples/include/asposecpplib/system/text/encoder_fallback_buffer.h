/// @file system/text/encoder_fallback_buffer.h
#ifndef __EncoderFallbackBuffer_h__
#define __EncoderFallbackBuffer_h__

#include "system/object.h"

namespace System { namespace Text {

/// Provides buffer for fallback implementation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncoderFallbackBuffer: public Object
{
protected:
    /// Constructor.
    EncoderFallbackBuffer() {}

public:
    /// Gets remaining count of characters to be processed.
    /// @return Number of characters currently in the buffer.
    virtual ASPOSECPP_SHARED_API int get_Remaining() ASPOSE_CONST = 0;
    /// Implements actual fallback procedure.
    /// @param charUnknown Character encoder fails to encode.
    /// @param index Index of character that triggered error.
    /// @return True if buffer processes unknown characters, false if it ignores them.
    virtual ASPOSECPP_SHARED_API bool Fallback(char_t charUnknown, int index) = 0;
    /// Implements actual fallback procedure.
    /// @param charUnknownHigh High part of surrogate pair that triggered error.
    /// @param charUnknownLow Low part of surrogate pair that triggered error.
    /// @param index Index of character that triggered error.
    /// @return True if buffer processes unknown characters, false if it ignores them.
    virtual ASPOSECPP_SHARED_API bool Fallback(char_t charUnknownHigh, char_t charUnknownLow, int index) = 0;
    /// Extracts next character in fallback buffer.
    /// @return Extracted character or 0x0000 to indicate sequence end.
    virtual ASPOSECPP_SHARED_API char_t GetNextChar() = 0;
    /// Moves buffer position one step back if possible.
    /// @return True if a step back was taken, false otherwise.
    virtual ASPOSECPP_SHARED_API bool MovePrevious() = 0;
    /// Resets buffer to initial state.
    virtual void Reset() {
        while (GetNextChar() != u'\0') ;
    }
};

}}

#endif
