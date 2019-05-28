/// @file security/cryptography/sha1.h
#ifndef _aspose_cryptography_sha1_h_
#define _aspose_cryptography_sha1_h_

#include "security/cryptography/hash_algorithm.h"

namespace System{ namespace Security{ namespace Cryptography{

/// Computes SHA1 hash for input data.
/// In C++ SHA1 is not an abstract class.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SHA1 : public HashAlgorithm
{
    /// Enables using MakeObject on this type.
    FRIEND_FUNCTION_System_MakeObject;

protected:
    /// Constructor.
    ASPOSECPP_SHARED_API SHA1();

public:
    /// Creates hash algorithm instance.
    /// @return Newly created hasher instance.
    static ASPOSECPP_SHARED_API SharedPtr<SHA1> Create();
    /// Creates hash algorithm instance.
    /// @param algName Must be "System.Security.Cryptography.SHA1".
    /// @return Newly created hasher instance.
    static ASPOSECPP_SHARED_API SharedPtr<SHA1> Create(const String& algName);
};

}}} //namespace System{ namespace Security{ namespace Cryptography{

#endif // _aspose_cryptography_sha1_h_
