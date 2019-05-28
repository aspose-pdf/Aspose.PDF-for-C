#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/iasyncresult.h>
#include <system/async_callback.h>
#include <system/array.h>

#include <net/ip_host_entry.h>
#include <net/ip_address.h>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS Dns : public System::Object
{
    typedef Dns ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> GetHostByName(String hostName);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> GetHostByAddress(String address);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> GetHostByAddress(System::SharedPtr<IPAddress> address);
    static ASPOSECPP_SHARED_API String GetHostName();
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> Resolve(String hostName);
    static ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginGetHostByName(String hostName, AsyncCallback requestCallback, System::SharedPtr<Object> stateObject);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> EndGetHostByName(System::SharedPtr<IAsyncResult> asyncResult);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> GetHostEntry(String hostNameOrAddress);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> GetHostEntry(System::SharedPtr<IPAddress> address);
    static ASPOSECPP_SHARED_API System::ArrayPtr<System::SharedPtr<IPAddress>> GetHostAddresses(String hostNameOrAddress);
    static ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginGetHostEntry(String hostNameOrAddress, AsyncCallback requestCallback, System::SharedPtr<Object> stateObject);
    static ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginGetHostEntry(System::SharedPtr<IPAddress> address, AsyncCallback requestCallback, System::SharedPtr<Object> stateObject);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> EndGetHostEntry(System::SharedPtr<IAsyncResult> asyncResult);
    static ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginGetHostAddresses(String hostNameOrAddress, AsyncCallback requestCallback, System::SharedPtr<Object> state);
    static ASPOSECPP_SHARED_API System::ArrayPtr<System::SharedPtr<IPAddress>> EndGetHostAddresses(System::SharedPtr<IAsyncResult> asyncResult);
    static ASPOSECPP_SHARED_API System::SharedPtr<IAsyncResult> BeginResolve(String hostName, AsyncCallback requestCallback, System::SharedPtr<Object> stateObject);
    static ASPOSECPP_SHARED_API System::SharedPtr<IPHostEntry> EndResolve(System::SharedPtr<IAsyncResult> asyncResult);
};
} // namespace Net
} // namespace System
