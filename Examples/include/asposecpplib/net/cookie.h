#pragma once

#include <system/uri.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/date_time.h>
#include <cstdint>

namespace System {
namespace Net {

class ASPOSECPP_SHARED_CLASS Cookie FINAL : public System::Object
{
    typedef Cookie ThisType;
    typedef System::Object BaseType;

    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API String get_Comment();
    ASPOSECPP_SHARED_API void set_Comment(String value);
    ASPOSECPP_SHARED_API System::SharedPtr<Uri> get_CommentUri();
    ASPOSECPP_SHARED_API void set_CommentUri(System::SharedPtr<Uri> value);
    ASPOSECPP_SHARED_API bool get_HttpOnly();
    ASPOSECPP_SHARED_API void set_HttpOnly(bool value);
    ASPOSECPP_SHARED_API bool get_Discard();
    ASPOSECPP_SHARED_API void set_Discard(bool value);
    ASPOSECPP_SHARED_API String get_Domain();
    ASPOSECPP_SHARED_API void set_Domain(String value);
    ASPOSECPP_SHARED_API bool get_Expired();
    ASPOSECPP_SHARED_API void set_Expired(bool value);
    ASPOSECPP_SHARED_API DateTime get_Expires();
    ASPOSECPP_SHARED_API void set_Expires(DateTime value);
    ASPOSECPP_SHARED_API String get_Name();
    ASPOSECPP_SHARED_API void set_Name(String value);
    ASPOSECPP_SHARED_API String get_Path();
    ASPOSECPP_SHARED_API void set_Path(String value);
    ASPOSECPP_SHARED_API String get_Port();
    ASPOSECPP_SHARED_API void set_Port(String value);
    ASPOSECPP_SHARED_API bool get_Secure();
    ASPOSECPP_SHARED_API void set_Secure(bool value);
    ASPOSECPP_SHARED_API DateTime get_TimeStamp();
    ASPOSECPP_SHARED_API String get_Value();
    ASPOSECPP_SHARED_API void set_Value(String value);
    ASPOSECPP_SHARED_API int32_t get_Version();
    ASPOSECPP_SHARED_API void set_Version(int32_t value);

    ASPOSECPP_SHARED_API Cookie();
    ASPOSECPP_SHARED_API Cookie(String name, String value);
    ASPOSECPP_SHARED_API Cookie(String name, String value, String path);
    ASPOSECPP_SHARED_API Cookie(String name, String value, String path, String domain);

    virtual ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<Object> comparand);
    virtual ASPOSECPP_SHARED_API int32_t GetHashCode();
    virtual ASPOSECPP_SHARED_API String ToString();
};
} // namespace Net
} // namespace System
