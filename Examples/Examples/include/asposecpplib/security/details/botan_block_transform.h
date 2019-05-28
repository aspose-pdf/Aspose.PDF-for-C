/// @file security/details/botan_block_transform.h
#ifndef _security_details_botan_block_transform_h_
#define _security_details_botan_block_transform_h_

#include <security/cryptography/i_crypto_transform.h>
#include <system/array.h>
#include <memory>


namespace System { namespace Security { namespace Cryptography { namespace Details {

/// Adapter allowing to use Botan-like ciphers via ICryptoTransform interface.
/// @tparam botan_type_traits Traits that provides botan types information.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
template<typename botan_type_traits>
class BotanBlockTransform : public ICryptoTransform
{
    /// Cipher mode type.
    typedef typename botan_type_traits::Cipher_Mode		Cipher_Mode;
    /// Byte type.
    typedef typename botan_type_traits::byte			byte;
    /// Secure vector type.
    template<typename T> using secure_vector = typename botan_type_traits::template secure_vector<T>;

public:
    /// Constructor.
    /// @param cipher Cipher to wrap.
    BotanBlockTransform(std::unique_ptr<Cipher_Mode> cipher) : m_cipher(std::move(cipher))
    {}

    /// Processes block of data and copies data to output array.
    /// @param inputBuffer Buffer to read data from.
    /// @param inputOffset Input buffer offset.
    /// @param inputCount Number of bytes to process.
    /// @param outputBuffer Output buffer to copy data into; nullptr to do no copying.
    /// @param outputOffset Output buffer offset.
    /// @return Number of bytes written.
    int TransformBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount, ArrayPtr<uint8_t> outputBuffer, int outputOffset) override
    {
        secure_vector<byte> buffer(inputCount);
        botan_type_traits::copy_mem(buffer.data(), &inputBuffer->data()[inputOffset], buffer.size());

        m_cipher->update(buffer);

        botan_type_traits::copy_mem(&outputBuffer->data()[outputOffset], buffer.data(), buffer.size());

        return ASPOSECPP_CHECKED_CAST(int, buffer.size());
    }

    /// Processes last block of data and calculates output value.
    /// @param inputBuffer Buffer to read data from.
    /// @param inputOffset Input buffer offset.
    /// @param inputCount Number of bytes to process.
    /// @return Output calculated for the whole input sequence.
    ArrayPtr<uint8_t> TransformFinalBlock(ArrayPtr<uint8_t> inputBuffer, int inputOffset, int inputCount) override
    {
        secure_vector<byte> buffer(inputCount);
        botan_type_traits::copy_mem(buffer.data(), &inputBuffer->data()[inputOffset], buffer.size());

        m_cipher->finish(buffer);

        ArrayPtr<uint8_t> result = MakeObject<Array<uint8_t>>(ASPOSECPP_CHECKED_CAST(int, buffer.size()));
        botan_type_traits::copy_mem(&result->data()[0], buffer.data(), buffer.size());
        return result;
    }

    /// Input block size.
    /// @return Number of bytes in input block.
    int get_InputBlockSize() override
    {
        int size = ASPOSECPP_CHECKED_CAST(int, m_cipher->minimum_final_size());
        return size ? size : 16;
    }
    /// Output block size.
    /// @return Number of bytes in output block.
    int get_OutputBlockSize() override
    {
        return ASPOSECPP_CHECKED_CAST(int, m_cipher->output_length(get_InputBlockSize()));
    }

private:
    /// Cipher to call.
    std::unique_ptr<Cipher_Mode> m_cipher;
};

}}}}

#endif
