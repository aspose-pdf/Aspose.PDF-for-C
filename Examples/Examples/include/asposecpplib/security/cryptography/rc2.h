/// @file security/cryptography/rc2.h
#ifndef _security_cryptography_rc2_h_
#define _security_cryptography_rc2_h_

#include <security/cryptography/symmetric_algorithm.h>

namespace System { namespace Security { namespace Cryptography {

/// RC2 symmetric algorithm base class.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT RC2 : public SymmetricAlgorithm
{
protected:
    /// Constructor.
    ASPOSECPP_SHARED_API RC2();
};

}}}
#endif

