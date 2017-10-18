#ifndef _aspose_data_common_db_connection_h_
#define _aspose_data_common_db_connection_h_

#include <system/exceptions.h>

namespace System { namespace Data { namespace Common {


class DbConnection: public System::Object
{
    RTTI_INFO(System::Data::Common::DbConnection, ::System::BaseTypesInfo<System::Object>)

public:

    virtual String get_ConnectionString() const = 0;
    virtual void set_ConnectionString(String value) const = 0;

    virtual void Open() = 0;
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_connection_h_