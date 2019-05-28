/// @file system/text/encoder_exception_fallback_buffer.h
#ifndef __EncoderExceptionFallbackBuffer_h__
#define __EncoderExceptionFallbackBuffer_h__

#include "system/text/encoder_fallback_buffer.h"
#include "system/exceptions.h"

//std
#include <limits>

namespace System { namespace Text {

/// Buffer for exception-throwing encoding fallback strategy. Doesn't store anything actually, but throws instead.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncoderExceptionFallbackBuffer : public EncoderFallbackBuffer
{
public:
    /// Constructor.
    ASPOSECPP_SHARED_API EncoderExceptionFallbackBuffer();
    /// Gets number of remaining characters.
    /// @return Always returns 0.
    virtual ASPOSECPP_SHARED_API int get_Remaining() ASPOSE_CONST override;
    /// Handles encoding failure.
    /// @param charUnknown Unknown characters; ignored.
    /// @param index Unknown characters offset; ignored.
    /// @return Never actually returns, throws instead.
    /// @throw EncoderFallbackException Throws unconditionally.
    virtual ASPOSECPP_SHARED_API bool Fallback(char_t charUnknown, int index) override;
    /// Handles encoding failure.
    /// @param charUnknownHigh High part of surrogate pair that triggered error.
    /// @param charUnknownLow Low part of surrogate pair that triggered error.
    /// @param index Unknown character offset; ignored.
    /// @return Never actually returns, throws instead.
    /// @throw EncoderFallbackException Throws unconditionally.
    virtual ASPOSECPP_SHARED_API bool Fallback(char_t charUnknownHigh, char_t charUnknownLow, int index) override;
    /// Gets next available character.
    /// @return Always returns placeholder value as nothing is actually buffered.
    virtual ASPOSECPP_SHARED_API char_t GetNextChar() override;
    /// Moves to previous chracter.
    /// @return Always returns false as no characters are stored.
    virtual ASPOSECPP_SHARED_API bool MovePrevious() override;
};

}}

#endif
