/// @file system/text/decoder_fallback_exception.h
#ifndef _aspose_system_text_decoder_fallback_exception_h_
#define _aspose_system_text_decoder_fallback_exception_h_

#include "system/array.h"
#include "system/exceptions.h"

namespace System {   namespace Text {

/// Exception thrown by DecoderExceptionFallback when decoding fails.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS DecoderFallbackException : public ArgumentException
{
public:
    /// Dedfault constructor.
    ASPOSECPP_SHARED_API DecoderFallbackException();
    /// Nullptr exception constructor.
    ASPOSECPP_SHARED_API DecoderFallbackException(std::nullptr_t);
    /// Constructor.
    /// @param message Message to throw.
    ASPOSECPP_SHARED_API DecoderFallbackException(const System::String &message);
    /// Constructor.
    /// @param message Message to throw.
    /// @param bytesUnknown Array of bytes which triggered the error.
    /// @param index Index of byte that triggered error.
    ASPOSECPP_SHARED_API DecoderFallbackException(const System::String &message, const ArrayPtr<uint8_t>& bytesUnknown, int index);
    /// Constructor.
    /// @param message Message to throw.
    /// @param innerException Wrapped exception.
    ASPOSECPP_SHARED_API DecoderFallbackException(const System::String &message, const Exception& innerException);

    /// Gets byte array that triggered error.
    /// @return Byte array that broke decoding.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> get_BytesUnknown();
    /// Gets position of byte that triggered error in input array.
    /// @return Index of erroneous byte in input array.
    ASPOSECPP_SHARED_API int get_Index();

protected:
    /// Array of bytes that triggered decoder error.
    System::ArrayPtr<uint8_t>  m_bytesUnknown;
    /// Index of byte that triggered error in input array.
    int m_index = 0;
};

}};

#endif
