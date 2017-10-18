#ifndef _aspose_data_common_db_connection_string_builder_h_
#define _aspose_data_common_db_connection_string_builder_h_

#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {

class DbConnectionStringBuilder : public System::Object
{
    RTTI_INFO(System::Data::Common::DbConnectionStringBuilder, ::System::BaseTypesInfo<System::Object>)

public:

    virtual Object::ptr idx_get(String keyword) = 0;
    virtual Object::ptr idx_set(String keyword, Object::ptr) = 0;

    virtual String get_ConnectionString() const;
    virtual void set_ConnectionString(String value);
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_connection_string_builder_h_