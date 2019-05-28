/// @file data/common/db_connection_string_builder.h
#ifndef _aspose_data_common_db_connection_string_builder_h_
#define _aspose_data_common_db_connection_string_builder_h_

#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {

/// API to build connection string of named fields.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DbConnectionStringBuilder : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::Common::DbConnectionStringBuilder, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets named value.
    /// @param keyword Property name.
    /// @return Boxed value of named property.
    virtual ASPOSECPP_SHARED_API Object::ptr idx_get(String keyword) = 0;
    /// Sets named value.
    /// @param keyword Property name.
    /// @param value Boxed value of named property.
    virtual ASPOSECPP_SHARED_API Object::ptr idx_set(String keyword, Object::ptr value) = 0;

    /// Gets whole connection string.
    /// @return connection string.
    virtual ASPOSECPP_SHARED_API String get_ConnectionString() const;
    /// Sets whole connection string.
    /// @param value connection string.
    virtual ASPOSECPP_SHARED_API void set_ConnectionString(String value);
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_connection_string_builder_h_
