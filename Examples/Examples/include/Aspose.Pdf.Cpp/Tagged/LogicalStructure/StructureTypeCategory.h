#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Categories of Standard Structure Types.
/// </summary>
class ASPOSE_PDF_SHARED_API StructureTypeCategory FINAL : public System::Object
{
    typedef StructureTypeCategory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    static System::SharedPtr<StructureTypeCategory>& GroupingElements();
    static System::SharedPtr<StructureTypeCategory>& BLSEs();
    static System::SharedPtr<StructureTypeCategory>& ILSEs();
    static System::SharedPtr<StructureTypeCategory>& IllustrationElements();
    
    static System::SharedPtr<StructureTypeCategory> to_StructureTypeCategory(System::String name);
    
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
private:

    System::String _name;
    System::String _fullName;
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<StructureTypeCategory>>> _instance;
    
    StructureTypeCategory(System::String name, System::String fullName);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


