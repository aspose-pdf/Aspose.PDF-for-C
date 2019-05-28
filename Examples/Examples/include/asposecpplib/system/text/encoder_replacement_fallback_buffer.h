/// @file system/text/encoder_replacement_fallback_buffer.h
#ifndef __EncoderReplacementFallbackBuffer_h__
#define __EncoderReplacementFallbackBuffer_h__

#include "system/string.h"
#include "system/text/encoder_fallback_buffer.h"
#include "system/text/encoder_replacement_fallback.h"

#include "system/exceptions.h"

#include "fwd.h"

//std
#include <limits>

namespace System { namespace Text {

/// Buffer for replacing encoding fallback strategy.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncoderReplacementFallbackBuffer : public EncoderFallbackBuffer
{
private:
    /// Replacement string to use.
    String replacement;
    /// Position in replacement string.
    int current;
    /// Indicates whether Fallback() function was called.
    bool fallback_assigned;

public:
    /// Constructor.
    /// @param fallback Fallback to get information from.
    ASPOSECPP_SHARED_API EncoderReplacementFallbackBuffer(EncoderReplacementFallbackPtr fallback);
    /// Gets number of remaining characters in buffer.
    /// @return Number of characters to be read or 0 if Fallback method was not called yet.
    virtual ASPOSECPP_SHARED_API int get_Remaining() ASPOSE_CONST override;
    /// Handles encoding failure.
    /// @param charUnknown Unknown character; ignored.
    /// @param index Unknown character position; ignored.
    /// @return True if replacement string is provided and is not empty, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Fallback(char_t charUnknown, int index) override;
    /// Handles encoding failure.
    /// @param charUnknownHigh High part of surrogate pair that triggered error.
    /// @param charUnknownLow Low part of surrogate pair that triggered error.
    /// @param index Unknown character position; ignored.
    /// @return True if replacement string is provided and is not empty, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Fallback(char_t charUnknownHigh, char_t charUnknownLow, int index) override;

private:
    /// Actually handles encoding failure.
    /// @param index Unknown character position.
    /// @return True if replacement string is provided and is not empty, false otherwise.
    ASPOSECPP_SHARED_API bool Fallback(int index);

public:
    /// Gets next available character.
    /// @return Next character in replacement string or 0x00 if it is read to the end.
    virtual ASPOSECPP_SHARED_API char_t GetNextChar() override;
    /// Moves to previous chracter.
    /// @return True if there is a previous character in replacement string and a step back succeeded, false otherwise.
    virtual ASPOSECPP_SHARED_API bool MovePrevious() override;
    /// Resets buffer to initial state (before Fallback() call).
    virtual ASPOSECPP_SHARED_API void Reset() override;
};

}}

#endif
