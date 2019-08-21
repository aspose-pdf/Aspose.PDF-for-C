/// @file system/text/decoder_exception_fallback_buffer.h
#ifndef __DecoderExceptionFallbackBuffer_h__
#define __DecoderExceptionFallbackBuffer_h__

#include "system/array.h"
#include "system/text/decoder_fallback_buffer.h"
#include "system/exceptions.h"
#include "system/text/decoder_fallback_exception.h"

//std
#include <limits>


namespace System { namespace Text {

/// Buffer for exception-throwing decoding fallback strategy. Doesn't store anything actually, but throws instead.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DecoderExceptionFallbackBuffer : public DecoderFallbackBuffer
{
public:
    /// Constructor.
    DecoderExceptionFallbackBuffer() {}
    /// Gets number of remaining characters.
    /// @return Always returns 0.
    virtual int get_Remaining() ASPOSE_CONST override { return 0; }
    /// Handles decoding failure.
    /// @param bytesUnknown Array of unknown bytes; ignored.
    /// @param index Unknown bytes offset; ignored.
    /// @return Never actually returns, throws instead.
    /// @throw DecoderFallbackException Throws unconditionally.
    virtual bool Fallback(ArrayPtr<uint8_t> bytesUnknown, int index) override { throw DecoderFallbackException(); }
    /// Gets next available character.
    /// @return Always returns placeholder value as nothing is actually buffered.
    virtual char_t GetNextChar() override { return std::numeric_limits<char_t>::min(); }
    /// Moves to previous chracter.
    /// @return Always returns false as no characters are stored.
    virtual bool MovePrevious() override { return false; }
};

}}

#endif
