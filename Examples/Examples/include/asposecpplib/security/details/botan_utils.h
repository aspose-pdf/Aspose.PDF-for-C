/// @file security/details/botan_utils.h
#ifndef _security_details_botan_utils_h_
#define _security_details_botan_utils_h_

#include <vector>
#include <cstddef>

#include "botan_1_11_31/types.h"
#include "botan_1_11_31/mem_ops.h"
#include "botan_1_11_31/cipher_mode.h"
#include "botan_1_11_31/secmem.h"

#include "botan_1_11_34/types.h"
#include "botan_1_11_34/mem_ops.h"
#include "botan_1_11_34/cipher_mode.h"
#include "botan_1_11_34/secmem.h"

/// Defines botan traits structure that holds information on specific botan version.
#define BOTAN_TRAITS() \
	struct botan_traits { \
		typedef Botan::byte			byte; \
		typedef Botan::size_t		size_t; \
		typedef Botan::Cipher_Mode	Cipher_Mode; \
		template<typename T> using secure_vector = Botan::secure_vector<T>; \
		\
		template<typename T0, typename T1> \
		static void copy_mem(T0 *out, const T1 *in, size_t n) { Botan::copy_mem(out, in, n); } \
	}

namespace System { namespace Security { namespace Cryptography { namespace Details { namespace Botan_1_11_34
{
    /// Generates vector of random bytes.
    /// @param size Number of bytes to generate.
    /// @return Generated vector.
    std::vector<uint8_t> generate_bytes(std::size_t size);

	namespace {
        /// Namespace for BOTAN_TRAITS macro to get definitions from.
		namespace Botan = ::Botan_1_11_34;
	}

    /// Botan 1.11.34 types information.
	BOTAN_TRAITS();

}}}}} // namespace System::Security::Cryptography::Details::Botan_1_11_34

namespace System { namespace Security { namespace Cryptography { namespace Details { namespace Botan_1_11_31
{
    /// Generates vector of random bytes.
    /// @param size Number of bytes to generate.
    /// @return Generated vector.
    std::vector<uint8_t> generate_bytes(std::size_t size);
	
	namespace {
        /// Namespace for BOTAN_TRAITS macro to get definitions from.
		namespace Botan = ::Botan_1_11_31;
	}

    /// Botan 1.11.31 types information.
	BOTAN_TRAITS();

}}}}} // namespace System::Security::Cryptography::Details::Botan_1_11_31

#endif // _security_details_botan_utils_h_
