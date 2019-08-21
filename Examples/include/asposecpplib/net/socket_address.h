#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include <net/sockets/address_family.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS SocketAddress : public System::Object
{
    typedef SocketAddress ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API Sockets::AddressFamily get_Family();
    ASPOSECPP_SHARED_API int32_t get_Size();

    ASPOSECPP_SHARED_API uint8_t idx_get(int32_t offset);
    ASPOSECPP_SHARED_API void idx_set(int32_t offset, uint8_t value);

    ASPOSECPP_SHARED_API SocketAddress(Sockets::AddressFamily family);
    ASPOSECPP_SHARED_API SocketAddress(Sockets::AddressFamily family, int32_t size);

    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> comparand) override;
    ASPOSECPP_SHARED_API int32_t GetHashCode() const override;
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
};
} // namespace Net
} // namespace System
