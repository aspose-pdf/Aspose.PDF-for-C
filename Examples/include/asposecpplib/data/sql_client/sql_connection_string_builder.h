#ifndef _aspose_data_sql_client_sql_connection_string_builder_h_
#define _aspose_data_sql_client_sql_connection_string_builder_h_

#include <data/common/db_connection_string_builder.h>

namespace System { namespace Data { namespace SqlClient {

class SqlConnectionStringBuilder : public System::Data::Common::DbConnectionStringBuilder
{
    RTTI_INFO(System::Data::SqlClient::SqlConnectionStringBuilder, ::System::BaseTypesInfo<System::Data::Common::DbConnectionStringBuilder>)

public:

    virtual Object::ptr idx_get(String keyword);
    virtual Object::ptr idx_set(String keyword, Object::ptr);

    String get_DataSource() const;
    void set_DataSource(String value);

    bool get_Encrypt() const;
    void set_Encrypt(bool value);

    bool get_TrustServerCertificate() const;
    void set_TrustServerCertificate(bool value);

    String get_InitialCatalog() const;
    void set_InitialCatalog(String value);

    String get_NetworkLibrary() const;
    void set_NetworkLibrary(String value);

    String get_UserID() const;
    void set_UserID(String value);

    String get_Password() const;
    void set_Password(String value);
};

} } } // namespace System::Data::SqlClient

#endif // _aspose_data_sql_client_sql_connection_string_builder_h_