/// @file system/text/decoder_replacement_fallback_buffer.h
#ifndef __DecoderReplacementFallbackBuffer_h__
#define __DecoderReplacementFallbackBuffer_h__

#include "system/text/decoder_fallback_buffer.h"
#include "system/text/decoder_replacement_fallback.h"
#include "system/string.h"
#include "system/exceptions.h"

#include "fwd.h"


namespace System { namespace Text {

/// Buffer for replacing decoding fallback strategy.
class ASPOSECPP_SHARED_CLASS DecoderReplacementFallbackBuffer : public DecoderFallbackBuffer
{
private:
    /// Indicates whether Fallback() function was called.
    bool fallback_assigned;
    /// Position in replacement string.
    int current;
    /// Replacement string to use.
    String replacement;

public:
    /// Constructor.
    /// @param fallback Fallback to get information from.
    ASPOSECPP_SHARED_API DecoderReplacementFallbackBuffer(DecoderReplacementFallbackPtr fallback);
    /// Gets number of remaining characters in buffer.
    /// @return Number of characters to be read or 0 if Fallback method was not called yet.
    virtual ASPOSECPP_SHARED_API int get_Remaining() ASPOSE_CONST override;
    /// Handles decoding failure.
    /// @param bytesUnknown Array of unknown bytes; ignored.
    /// @param index Unknown bytes offset; ignored.
    /// @return True if replacement string is provided and is not empty, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Fallback(ArrayPtr<uint8_t> bytesUnknown, int index) override;
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
