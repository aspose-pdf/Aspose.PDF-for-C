#ifndef __latin1_encoding_h__
#define __latin1_encoding_h__

#include "system/text/icu_encoding.h"

#include "fwd.h"


namespace System { namespace Text {

class Latin1Encoding : public ICUEncoding
{
public:
    enum : int { LATIN1_CODE_PAGE = 28591 };

    // Constructor.
    Latin1Encoding();

    virtual int get_CodePage() override { return LATIN1_CODE_PAGE; };

};

}}

#endif // __latin1_encoding_h__
