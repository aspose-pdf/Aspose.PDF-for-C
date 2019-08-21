/// @file system/text/encoder_fallback_exception.h
#ifndef _aspose_system_text_encoder_fallback_exception_h_
#define _aspose_system_text_encoder_fallback_exception_h_

#include "system/exceptions.h"

namespace System {   namespace Text {

/// Exception thrown by EncoderExceptionFallback when encoding fails.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS EncoderFallbackException : public ArgumentException
{
public:
    /// Dedfault constructor.
    ASPOSECPP_SHARED_API EncoderFallbackException();
    /// Nullptr exception constructor.
    ASPOSECPP_SHARED_API EncoderFallbackException(std::nullptr_t);
    /// Constructor.
    /// @param message Message to throw.
    ASPOSECPP_SHARED_API EncoderFallbackException(const System::String &message);
    /// Constructor.
    /// @param message Message to throw.
    /// @param innerException Wrapped exception.
    ASPOSECPP_SHARED_API EncoderFallbackException(const System::String &message, const Exception& innerException);
    /// Constructor.
    /// @param message Message to throw.
    /// @param charUnknown Character which triggered the error.
    /// @param index Index of character that triggered error.
    ASPOSECPP_SHARED_API EncoderFallbackException(const System::String &message, char_t charUnknown, int index);
    /// Constructor.
    /// @param message Message to throw.
    /// @param charUnknownHigh High part of surrogate pair that triggered error.
    /// @param charUnknownLow Low part of surrogate pair that triggered error.
    /// @param index Index of character that triggered error.
    ASPOSECPP_SHARED_API EncoderFallbackException(const System::String &message, char_t charUnknownHigh, char_t charUnknownLow, int index);

    /// Gets character that triggered error.
    /// @return Character that broke encoding.
    char_t get_CharUnknown() { return m_charUnknown;  };
    /// Gets high character of pair that triggered error.
    /// @return High character from the pair that broke encoding.
    char_t get_CharUnknownHigh() { return m_charUnknownHigh; };
    /// Gets low character of pair that triggered error.
    /// @return Low character from the pair that broke encoding.
    char_t get_CharUnknownLow() { return m_charUnknownLow;  };
    /// Gets position of character that triggered error in input array.
    /// @return Index of erroneous character in input array.
    int get_Index() { return m_index; };

protected:
    /// Unknown character.
    char_t m_charUnknown = char_t();
    /// High character from unknown pair.
    char_t m_charUnknownHigh = char_t();
    /// Low character from unknown pair.
    char_t m_charUnknownLow = char_t();
    /// Index of character that triggered error in input array.
    int m_index = 0;
};

}};

#endif
