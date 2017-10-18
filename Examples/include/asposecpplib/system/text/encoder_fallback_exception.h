#ifndef _aspose_system_text_encoder_fallback_exception_h_
#define _aspose_system_text_encoder_fallback_exception_h_

#include "system/exceptions.h"

namespace System {   namespace Text {

class EncoderFallbackException : public ArgumentException
{
public:
    EncoderFallbackException();
    EncoderFallbackException(std::nullptr_t);
    EncoderFallbackException(const System::String &message);
    EncoderFallbackException(const System::String &message, const Exception& innerException);
    EncoderFallbackException(const System::String &message, char_t charUnknown, int index);
    EncoderFallbackException(const System::String &message, char_t charUnknownHigh, char_t charUnknownLow, int index);

    char_t get_CharUnknown() { return m_charUnknown;  };
    char_t get_CharUnknownHigh() { return m_charUnknownHigh; };
    char_t get_CharUnknownLow() { return m_charUnknownLow;  };

    int get_Index() { return m_index; };

protected:

    char_t m_charUnknown = char_t();
    char_t m_charUnknownHigh = char_t();
    char_t m_charUnknownLow = char_t();
    int m_index = 0;
};

}};

#endif