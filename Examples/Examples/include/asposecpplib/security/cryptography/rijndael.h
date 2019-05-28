/// @file security/cryptography/rijndael.h
#ifndef rijndael_h
#define rijndael_h

#include "symmetric_algorithm.h"

namespace System{ namespace Security{ namespace Cryptography{

/// Base class for Rijndael algorithm.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Rijndael : public SymmetricAlgorithm
{
protected:
    /// Constructor.
    ASPOSECPP_SHARED_API Rijndael();
};

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // rijndael_h
