/// @file data/data_relation_collection.h
#pragma once

#include <system/object.h>
#include <system/collections/ienumerator.h>

namespace System {
namespace Data {

class DataRelation;

/// Collection of dependencies between tables.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DataRelationCollection : public System::Object 
{
    /// RTTI information.
    RTTI_INFO(System::Data::DataRelationCollection, ::System::BaseTypesInfo<System::Object>)

public:
    /// Gets enumerator to iterate through dependency records.
    /// @return Newly created iterator.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<System::Data::DataRelation>>> GetEnumerator();
};

}
}
