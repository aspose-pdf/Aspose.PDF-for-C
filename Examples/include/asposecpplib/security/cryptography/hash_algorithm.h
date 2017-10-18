#ifndef _aspose_cryptography_hash_algorithm_h_
#define _aspose_cryptography_hash_algorithm_h_

#include "i_crypto_transform.h"
#include "system/exceptions.h"
#include "system/array.h"
#include "system/io/stream.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <botan/hash.h>
#else
#include <cstdint>
#endif


namespace Botan {
    ASPOSECPP_3RD_PARTY_CLASS(HashFunction);
    ASPOSECPP_3RD_PARTY_TYPEDEF(byte, std::uint8_t);
}


namespace System{ namespace Security{ namespace Cryptography{

    class ABSTRACT HashAlgorithm : public ICryptoTransform
    {

    public:
        virtual ~HashAlgorithm();

        ArrayPtr<uint8_t> ComputeHash(ArrayPtr<uint8_t> buffer);
        ArrayPtr<uint8_t> ComputeHash(ArrayPtr<uint8_t> buffer, int offset, int count);
        ArrayPtr<uint8_t> ComputeHash(SharedPtr<IO::Stream> const& inputStream);
        static SharedPtr<HashAlgorithm> Create(String hashName);

        void Initialize();
        ArrayPtr<uint8_t> get_Hash();
        int get_HashSize();
        int TransformBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount, ArrayPtr<uint8_t> outputBuffer, int outputOffset);
        ArrayPtr<uint8_t> TransformFinalBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount);

        int get_InputBlockSize() override;
        int get_OutputBlockSize() override;

    protected:
        // Summary:
        //     Represents the size, in bits, of the computed hash code.
        int HashSizeValue; // please don't replace it with m_hash_size_value because it corresponds to C# protected field.

        HashAlgorithm();
        HashAlgorithm( std::unique_ptr<Botan::HashFunction> hash_function );

    private:
        std::unique_ptr<Botan::HashFunction> m_bt_hash_function;
        std::vector<Botan::byte> m_hash_value;
    };


}}}// namespace System{ namespace Security{ namespace Cryptography{

#endif // hash_algorithm_h
