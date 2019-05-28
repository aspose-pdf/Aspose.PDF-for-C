/// @file security/cryptography/rsa_parameters.h
#ifndef _security_cryptography_rsa_parameters_h_
#define _security_cryptography_rsa_parameters_h_

#include <system/object.h>
#include <system/array.h>

namespace System { namespace Security { namespace Cryptography {

/// Data structure of RSA algorithm parameters.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
struct ASPOSECPP_SHARED_CLASS RSAParameters : public System::Object
{
private:
    /// This type.
    typedef RSAParameters ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// D parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> D;
    /// DP parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> DP;
    /// DQ parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> DQ;
    /// Exponent parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> Exponent;
    /// InverseQ parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> InverseQ;
    /// Modulus parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> Modulus;
    /// P parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> P;
    /// Q parameter of RSA algorithm.
    System::ArrayPtr<uint8_t> Q;

    /// Constructor.
    ASPOSECPP_SHARED_API RSAParameters();
};

}}}

#endif // _security_cryptography_rsa_parameters_h_
