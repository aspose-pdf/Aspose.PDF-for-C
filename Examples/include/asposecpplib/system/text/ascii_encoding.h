#ifndef __ASCIIEncoding_h__
#define __ASCIIEncoding_h__

#include "system/text/encoding.h"
#include "system/text/icu_encoding.h"

#include "fwd.h"


namespace System { namespace Text {

class ASCIIEncoding : public ICUEncoding
{
    RTTI_INFO(System::Text::ASCIIEncoding, ::System::BaseTypesInfo<System::Text::ICUEncoding>)

public:
    // Magic number used by Windows for "ASCII".
    enum : int { ASCII_CODE_PAGE = 20127 };
    ASCIIEncoding();

    virtual int GetMaxByteCount(int charCount) override { return charCount + 1;  };

    // Get the maximum number of characters needed to decode a
    // specified number of bytes.
    virtual int GetMaxCharCount(int byteCount) override { return byteCount; };

    virtual int get_CodePage() override { return ASCII_CODE_PAGE; };

};

}}

#endif
