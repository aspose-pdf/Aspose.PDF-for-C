#pragma once

#include <system/object.h>
#include <cstdint>

namespace System {
namespace Net {
namespace Sockets {

class ASPOSECPP_SHARED_CLASS LingerOption : public System::Object
{
    typedef LingerOption ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API bool get_Enabled();
    ASPOSECPP_SHARED_API void set_Enabled(bool value);
    ASPOSECPP_SHARED_API int32_t get_LingerTime();
    ASPOSECPP_SHARED_API void set_LingerTime(int32_t value);

    ASPOSECPP_SHARED_API LingerOption(bool enable, int32_t seconds);
};
} // namespace Sockets
} // namespace Net
} // namespace System
