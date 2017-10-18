#ifndef i_crypto_transform_h
#define i_crypto_transform_h

#include "system/object.h"

namespace System{ namespace Security{ namespace Cryptography{

    class ABSTRACT ICryptoTransform : virtual public System::Object
    {
        RTTI_INFO(ICryptoTransform, ::System::BaseTypesInfo<::System::Object>);

    public:
        virtual int TransformBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount, ArrayPtr<uint8_t> outputBuffer, int outputOffset) = 0;
        virtual ArrayPtr<uint8_t> TransformFinalBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount) = 0;
        virtual int get_InputBlockSize() = 0;
        virtual int get_OutputBlockSize() = 0;
    };

}}}// namespace System{ namespace Security{ namespace Cryptography{

#endif // i_crypto_transform_h
