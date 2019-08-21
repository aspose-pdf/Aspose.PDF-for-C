/// @file data/data_row_view.h
#pragma once

#include <system/object.h>

namespace System {
namespace Data {

class DataRow;

/// View over the data row.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataRowView : public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataRowView, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets row available through the view.
    /// @return Data row object.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Data::DataRow> get_Row();
};

}
}
