#ifndef _aspose_data_common_db_command_h_
#define _aspose_data_common_db_command_h_

#include <system/shared_ptr.h>
#include <system/string.h>
#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {

class DbDataReader;
class DbConnection;

class DbCommand : public System::Object
{
    RTTI_INFO(System::Data::Common::DbCommand, ::System::BaseTypesInfo<System::Object>)

public:

    virtual String get_CommandText() const = 0;
    virtual void set_CommandText(String value) const = 0;

    virtual SharedPtr<System::Data::Common::DbConnection> get_Connection() const;

    virtual void set_Connection(SharedPtr<System::Data::Common::DbConnection> value);

    virtual int ExecuteNonQuery() = 0;

    virtual SharedPtr<DbDataReader> ExecuteReader();
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_command_h_