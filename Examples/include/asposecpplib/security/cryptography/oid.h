/// @file security/cryptography/oid.h
#ifndef oid_h
#define oid_h

#include "system/object.h"
#include "system/exceptions.h"

namespace System{ namespace Security{ namespace Cryptography{

/// Cryptographic object identifier.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Oid FINAL : public System::Object
{
    /// This type.
    typedef Oid ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Default constructor.
    ASPOSECPP_SHARED_API Oid();
    /// Copy constructor.
    /// @param oid Identifier to copy data from.
    ASPOSECPP_SHARED_API Oid(const System::SharedPtr<Oid>& oid);
    /// Constructor.
    /// @param oid String value of object identifier.
    ASPOSECPP_SHARED_API Oid(const System::String& oid);
    /// Constructor.
    /// @param value String value of object identifier.
    /// @param friendlyName User-friendly object name.
    ASPOSECPP_SHARED_API Oid(const System::String& value, const System::String& friendlyName);

    /// Gets user-friendly name of object.
    /// @return User-friendly object name.
    ASPOSECPP_SHARED_API System::String get_FriendlyName();
    /// Sets user-friendly name of object.
    /// @param value User-friendly object name.
    ASPOSECPP_SHARED_API void set_FriendlyName(const System::String& value);
    /// Gets object identifier string.
    /// @return Object identifier.
    ASPOSECPP_SHARED_API System::String get_Value();
    /// Sets object identifier string.
    /// @param value Object identifier.
    ASPOSECPP_SHARED_API void set_Value(const System::String& value);

private:
    /// User-friendly object name.
    System::String pr_FriendlyName;
    /// Object identifier.
    System::String pr_Value;
};

}}} // namespace System{ namespace Security{ namespace Cryptography{

#endif // oid_h
