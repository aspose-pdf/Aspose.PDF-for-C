/// @file data/sql_client/sql_connection_string_builder.h
#ifndef _aspose_data_sql_client_sql_connection_string_builder_h_
#define _aspose_data_sql_client_sql_connection_string_builder_h_

#include <data/common/db_connection_string_builder.h>

namespace System { namespace Data { namespace SqlClient {

/// SQL-based connection builder.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SqlConnectionStringBuilder : public System::Data::Common::DbConnectionStringBuilder
{
    /// RTTI information.
    RTTI_INFO(System::Data::SqlClient::SqlConnectionStringBuilder, ::System::BaseTypesInfo<System::Data::Common::DbConnectionStringBuilder>)

public:
    /// Gets keyed object.
    /// @param key Item key.
    /// @return Item associated with specified key.
    virtual ASPOSECPP_SHARED_API Object::ptr idx_get(String key) override;
    /// Sets keyed object.
    /// @param key Item key.
    /// @param value Item to associate with specified key.
    virtual ASPOSECPP_SHARED_API Object::ptr idx_set(String key, Object::ptr value) override;

    /// Gets data source (e. g. hostname and port).
    /// @return Data source string.
    ASPOSECPP_SHARED_API String get_DataSource() const;
    /// Gets data source (e. g. hostname and port).
    /// @param value Data source string.
    ASPOSECPP_SHARED_API void set_DataSource(const String& value);

    /// Checks whether encription is enabled on line.
    /// @return True if encription is enabled, false otherwise.
    ASPOSECPP_SHARED_API bool get_Encrypt() const;
    /// Toggles encryption on or off.
    /// @param value If true, toggles SSL on, else toggles it off.
    ASPOSECPP_SHARED_API void set_Encrypt(bool value);

    /// Checks whether connection is protected using trust server certificate.
    /// @return True if trust server certificate is provided, false otherwise.
    ASPOSECPP_SHARED_API bool get_TrustServerCertificate() const;
    /// Determines whether connection is protected using trust server certificate.
    /// @param value If true, enables trust server certificate usage, otherwise disables it.
    ASPOSECPP_SHARED_API void set_TrustServerCertificate(bool value);

    /// Gets name of database associated with connection.
    /// @return Database name.
    ASPOSECPP_SHARED_API String get_InitialCatalog() const;
    /// Sets name of database associated with connection.
    /// @param value Database name.
    ASPOSECPP_SHARED_API void set_InitialCatalog(const String& value);

    /// Gets used network library name.
    /// @return Name of network library used.
    ASPOSECPP_SHARED_API String get_NetworkLibrary() const;
    /// Selects network library to use.
    /// @param value Name of network library to use.
    ASPOSECPP_SHARED_API void set_NetworkLibrary(const String& value);

    /// Gets user id used for connection.
    /// @return User ID string.
    ASPOSECPP_SHARED_API String get_UserID() const;
    /// Sets user id to use for connection.
    /// @param value User ID string.
    ASPOSECPP_SHARED_API void set_UserID(const String& value);

    /// Gets password used to connect to database.
    /// @return Password string.
    ASPOSECPP_SHARED_API String get_Password() const;
    /// Sets password to be used to connect to database.
    /// @param value Password string.
    ASPOSECPP_SHARED_API void set_Password(const String& value);
};

} } } // namespace System::Data::SqlClient

#endif // _aspose_data_sql_client_sql_connection_string_builder_h_
