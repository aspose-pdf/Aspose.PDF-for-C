/// @file data/data_set.h
#pragma once

#include <system/object.h>

namespace System {
namespace Data {

class DataTableCollection;
class DataRelationCollection;

/// Set of data which is stored in tables having some relations between them.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataSet : public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataSet, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets tables present in the data set.
    /// @return Table collection object.
    ASPOSECPP_SHARED_API System::SharedPtr<DataTableCollection> get_Tables();
    /// Gets relations between tables in the data set.
    /// @return Table relation collection object.
    ASPOSECPP_SHARED_API System::SharedPtr<DataRelationCollection> get_Relations();
};

}
}
