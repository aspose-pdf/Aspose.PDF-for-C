#pragma once

#include <system/uri.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

namespace System {
namespace Net {

class NetworkCredential;

class ASPOSECPP_SHARED_CLASS ICredentials : public virtual System::Object
{
    typedef ICredentials ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    virtual ASPOSECPP_SHARED_API System::SharedPtr<NetworkCredential> GetCredential(System::SharedPtr<Uri> uri, String authType) = 0;
};
} // namespace Net
} // namespace System
