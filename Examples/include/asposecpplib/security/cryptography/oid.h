#ifndef oid_h
#define oid_h

#include "system/object.h"
#include "system/exceptions.h"

namespace System{ namespace Security{ namespace Cryptography{

    class Oid FINAL : public System::Object
    {
        typedef Oid ThisType;
        typedef System::Object BaseType;

        RTTI_INFO_DECL();

    public:

        Oid();
        Oid(System::SharedPtr<Oid> oid);
        Oid(System::String oid);
        Oid(System::String value, System::String friendlyName);

        System::String get_FriendlyName();
        void set_FriendlyName(System::String value);
        System::String get_Value();
        void set_Value(System::String value);

    private:

        System::String pr_FriendlyName;
        System::String pr_Value;

    };

}}} // namespace System{ namespace Security{ namespace Cryptography{

#endif // oid_h
