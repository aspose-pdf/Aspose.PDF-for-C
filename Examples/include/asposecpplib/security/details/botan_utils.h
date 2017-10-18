#ifndef _security_details_botan_utils_h_
#define _security_details_botan_utils_h_
#include <vector>
#include <cstddef>
#include <fwd.h>

namespace System { namespace Details { namespace Botan
{
    std::vector<uint8_t> generate_bytes(std::size_t size);


}}} // namespace System::Details::Botan
#endif // _security_details_botan_utils_h_