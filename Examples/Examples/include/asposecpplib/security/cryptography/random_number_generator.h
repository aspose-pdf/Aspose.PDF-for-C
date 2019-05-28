/// @file security/cryptography/random_number_generator.h
#ifndef _security_cryptography_rng_h
#define _security_cryptography_rng_h

#include <system/object.h>
#include <system/array.h>

namespace System { namespace Security { namespace Cryptography {

/// Abstract class for random number generators to inherit from.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT RandomNumberGenerator : virtual public System::Object
{
protected:
    /// Constructor.
    RandomNumberGenerator();

public:
    /// Fills existing array elements with random bytes.
    /// @param bytes Bytes array to fill.
    virtual ASPOSECPP_SHARED_API void GetBytes(ArrayPtr<uint8_t> bytes) = 0;
    /// Fills existing array slice with random bytes.
    /// @param bytes Bytes array to fill slice of.
    /// @param offset Slice beginning index.
    /// @param count Slice size.
    virtual ASPOSECPP_SHARED_API void GetBytes(ArrayPtr<uint8_t> bytes, int offset, int count);
    /// Fills existing array elements with random non-zero bytes.
    /// @param bytes Bytes array to fill.
    virtual ASPOSECPP_SHARED_API void GetNonZeroBytes(ArrayPtr<uint8_t> bytes);
};

}}}
#endif // _security_cryptography_rng_h

