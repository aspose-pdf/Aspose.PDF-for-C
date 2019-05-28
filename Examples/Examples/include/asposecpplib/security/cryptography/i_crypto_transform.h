/// @file security/cryptography/i_crypto_transform.h
#ifndef i_crypto_transform_h
#define i_crypto_transform_h

#include "system/object.h"

namespace System{ namespace Security{ namespace Cryptography{

/// Base class of cryptographic transformer.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ABSTRACT ICryptoTransform : virtual public System::Object
{
    /// RTTI information.
    RTTI_INFO(ICryptoTransform, ::System::BaseTypesInfo<::System::Object>);

public:
    /// Processes block of data and copies data to output array.
    /// @param inputBuffer Buffer to read data from.
    /// @param inputOffset Input buffer offset.
    /// @param inputCount Number of bytes to process.
    /// @param outputBuffer Output buffer to copy data into; nullptr to do no copying.
    /// @param outputOffset Output buffer offset.
    /// @return Number of bytes written.
    virtual ASPOSECPP_SHARED_API int TransformBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount, ArrayPtr<uint8_t> outputBuffer, int outputOffset) = 0;
    /// Processes last block of data and calculates output value.
    /// @param inputBuffer Buffer to read data from.
    /// @param inputOffset Input buffer offset.
    /// @param inputCount Number of bytes to process.
    /// @return Output calculated for the whole input sequence.
    virtual ASPOSECPP_SHARED_API ArrayPtr<uint8_t> TransformFinalBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount) = 0;
    /// Input block size.
    /// @return Number of bytes in input block.
    virtual ASPOSECPP_SHARED_API int get_InputBlockSize() = 0;
    /// Output block size.
    /// @return Number of bytes in output block.
    virtual ASPOSECPP_SHARED_API int get_OutputBlockSize() = 0;
};

}}}// namespace System{ namespace Security{ namespace Cryptography{

#endif // i_crypto_transform_h
