#ifndef _security_cryptography_rng_h
#define _security_cryptography_rng_h

#include <system/object.h>
#include <system/array.h>

namespace System { namespace Security { namespace Cryptography {


class ABSTRACT RandomNumberGenerator : virtual public System::Object
{
protected:
    RandomNumberGenerator();

public:

    virtual void GetBytes(ArrayPtr<uint8_t> bytes) = 0;
    virtual void GetBytes(ArrayPtr<uint8_t> bytes, int offset, int count);
    virtual void GetNonZeroBytes(ArrayPtr<uint8_t> bytes);
};

}}}
#endif // _security_cryptography_rng_h

