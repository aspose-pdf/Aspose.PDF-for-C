/// @file data/data_table.h
#ifndef _aspose_data_data_table_h_
#define _aspose_data_data_table_h_

#include <system/object.h>
#include <system/string.h>

namespace System { namespace Data {

class DataRowCollection;
class DataColumnCollection;
class DataSet;

/// Data structured in rows and columns.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataTable : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataTable, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets rows present in the table.
    /// @return Data row collection.
    ASPOSECPP_SHARED_API System::SharedPtr<DataRowCollection> get_Rows();
    /// Gets table name.
    /// @return Table name.
    ASPOSECPP_SHARED_API System::String get_TableName();
    /// Gets columns present in the table.
    /// @return Data column collection.
    ASPOSECPP_SHARED_API System::SharedPtr<DataColumnCollection> get_Columns();
    /// Gets data set table belongs to.
    /// @return Parent data set object.
    ASPOSECPP_SHARED_API System::SharedPtr<DataSet> get_DataSet();
};

}} // namespace System::Data

#endif // _aspose_data_data_table_h_
