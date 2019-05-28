/// @file security/cryptography/triple_des.h
#ifndef _security_cryptography_triple_des_h_
#define _security_cryptography_triple_des_h_

#include <security/cryptography/symmetric_algorithm.h>

namespace System { namespace Security { namespace Cryptography {

/// Triple Data Encryption Standard algorithm base class.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT TripleDES : public SymmetricAlgorithm
{
protected:
    /// Constructor.
    ASPOSECPP_SHARED_API TripleDES();
};

}}}

#endif
