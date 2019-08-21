#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

#include <net/ip_address.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS IPHostEntry : public System::Object
{
    typedef IPHostEntry ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API String get_HostName();
    ASPOSECPP_SHARED_API void set_HostName(String value);
    ASPOSECPP_SHARED_API System::ArrayPtr<String> get_Aliases();
    ASPOSECPP_SHARED_API void set_Aliases(System::ArrayPtr<String> value);
    ASPOSECPP_SHARED_API System::ArrayPtr<System::SharedPtr<IPAddress>> get_AddressList();
    ASPOSECPP_SHARED_API void set_AddressList(System::ArrayPtr<System::SharedPtr<IPAddress>> value);

    ASPOSECPP_SHARED_API IPHostEntry();

private:
    String hostName;
    System::ArrayPtr<String> aliases;
    System::ArrayPtr<System::SharedPtr<IPAddress>> addressList;
};
} // namespace Net
} // namespace System
