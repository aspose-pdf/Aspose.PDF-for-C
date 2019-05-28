/// @file system/db_null.h
/// Contains declarations of System::DBNull class.
#ifndef _aspose_system_db_null_h_
#define _aspose_system_db_null_h_

#include <system/object.h>

namespace System {

/// Represents a non-existing value.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS DBNull : public System::Object
{
    RTTI_INFO(System::DBNull, ::System::BaseTypesInfo<System::Object>)

public:
    /// Shared pointer to an instance of DBNull.
    static const  ASPOSECPP_SHARED_API System::SharedPtr<DBNull> Value;

#ifdef __DBG_FOR_EACH_MEMEBR
    /// Returns a c-string containing the name of the class the current object is instance of.
    virtual const char* DBG_class_name() const override { return "DBNull"; }
#endif
};

}

#endif // _aspose_system_db_null_h_
