#pragma once
#include <system/io/stream.h>

namespace System {
namespace Net {
namespace Security {

class ASPOSECPP_SHARED_CLASS ABSTRACT AuthenticatedStream : public System::IO::Stream
{
    typedef AuthenticatedStream ThisType;
    typedef System::IO::Stream BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    bool ASPOSECPP_SHARED_API get_LeaveInnerStreamOpen() const;
    virtual ASPOSECPP_SHARED_API bool get_IsAuthenticated() const = 0;
    virtual ASPOSECPP_SHARED_API bool get_IsMutuallyAuthenticated() const = 0;
    virtual ASPOSECPP_SHARED_API bool get_IsEncrypted() const = 0;
    virtual ASPOSECPP_SHARED_API bool get_IsSigned() const = 0;
    virtual ASPOSECPP_SHARED_API bool get_IsServer() const = 0;

protected:
    ASPOSECPP_SHARED_API AuthenticatedStream(System::SharedPtr<IO::Stream>  innerStream, bool leaveInnerStreamOpen);
    ASPOSECPP_SHARED_API System::SharedPtr<IO::Stream> get_InnerStream() const;

private:
    System::SharedPtr<IO::Stream> InnerStream;
    bool    LeaveStreamOpen;
};
}}} // namespace System::Net::Security
