/// @file data/data_view.h
#ifndef _aspose_data_data_view_h_
#define _aspose_data_data_view_h_

#include <system/object.h>
#include <cstdint>

namespace System { namespace Data {

class DataRowView;
class DataTable;

/// View working on table.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataView : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataView, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets count of rows in the view.
    /// @return Number of rows.
    ASPOSECPP_SHARED_API int32_t get_Count();
    /// Gets row views.
    /// @param recordIndex Row view index.
    /// @return Data row view at specified index.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Data::DataRowView> idx_get(const int32_t recordIndex);
    /// Gets table the view belongs to.
    /// @return Table object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Data::DataTable> get_Table();
};

}} // namespace System::Data

#endif // _aspose_data_data_view_h_
