/// @file system/text/decoder_fallback_buffer.h
#ifndef __DecoderFallbackBuffer_h__
#define __DecoderFallbackBuffer_h__

#include "system/array.h"
#include "system/object.h"

namespace System { namespace Text {

/// Provides buffer for fallback implementation.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DecoderFallbackBuffer: public Object
{
    typedef DecoderFallbackBuffer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO(ThisType, ThisTypeBaseTypesInfo);
    
protected:
    /// Constructor.
    ASPOSECPP_SHARED_API DecoderFallbackBuffer() = default;

public:
    /// Gets remaining count of characters to be processed.
    /// @return Number of characters currently in the buffer.
    virtual ASPOSECPP_SHARED_API int get_Remaining() ASPOSE_CONST = 0;
    /// Implements actual fallback procedure.
    /// @param bytesUnknown Array of bytes including the one decoder fails to decode.
    /// @param index Index of byte that triggered error.
    /// @return True if buffer processes unknown bytes, false if it ignores them.
    virtual ASPOSECPP_SHARED_API bool Fallback(ArrayPtr<uint8_t> bytesUnknown, int index) = 0;
    /// Extracts next character in fallback buffer.
    /// @return Extracted character or 0x0000 to indicate sequence end.
    virtual ASPOSECPP_SHARED_API char_t GetNextChar() = 0;
    /// Moves buffer position one step back if possible.
    /// @return True if a step back was taken, false otherwise.
    virtual ASPOSECPP_SHARED_API bool MovePrevious() = 0;
    /// Resets buffer to initial state.
    virtual void Reset() {}
};

}}

#endif
