#ifndef _security_cryptography_rsa_parameters_h_
#define _security_cryptography_rsa_parameters_h_

#include <system/object.h>
#include <system/array.h>

namespace System { namespace Security { namespace Cryptography {

struct RSAParameters : public System::Object
{
private:
    typedef RSAParameters ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();

public:

    System::ArrayPtr<uint8_t> D;
    System::ArrayPtr<uint8_t> DP;
    System::ArrayPtr<uint8_t> DQ;
    System::ArrayPtr<uint8_t> Exponent;
    System::ArrayPtr<uint8_t> InverseQ;
    System::ArrayPtr<uint8_t> Modulus;
    System::ArrayPtr<uint8_t> P;
    System::ArrayPtr<uint8_t> Q;

    RSAParameters();

};

}}}

#endif // _security_cryptography_rsa_parameters_h_