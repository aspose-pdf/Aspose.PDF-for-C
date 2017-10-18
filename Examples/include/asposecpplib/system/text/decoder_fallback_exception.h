#ifndef _aspose_system_text_decoder_fallback_exception_h_
#define _aspose_system_text_decoder_fallback_exception_h_

#include "system/array.h"
#include "system/exceptions.h"

namespace System {   namespace Text {

class DecoderFallbackException : public ArgumentException
{
public:
    DecoderFallbackException();
    DecoderFallbackException(std::nullptr_t);
    DecoderFallbackException(const System::String &message);
    DecoderFallbackException(const System::String &message, ArrayPtr<uint8_t>  bytesUnknown, int index);
    DecoderFallbackException(const System::String &message, const Exception& innerException);


    System::ArrayPtr<uint8_t> get_BytesUnknown();
    int get_Index();
protected:

    System::ArrayPtr<uint8_t>  m_bytesUnknown;
    int m_index = 0;
};

}};

#endif