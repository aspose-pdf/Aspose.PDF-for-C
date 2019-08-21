#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class Element; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Standard Attribute Owners.
/// </summary>
class ASPOSE_PDF_SHARED_API AttributeOwnerStandard FINAL : public System::Object
{
    typedef AttributeOwnerStandard ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    ///     Get Attribute Owner.
    /// </summary>
    /// <value>Attribute Owner.</value>
    System::String get_Owner();
    
    static System::SharedPtr<AttributeOwnerStandard>& Layout();
    static System::SharedPtr<AttributeOwnerStandard>& List();
    static System::SharedPtr<AttributeOwnerStandard>& PrintField();
    static System::SharedPtr<AttributeOwnerStandard>& Table();
    static System::SharedPtr<AttributeOwnerStandard>& Xml_100();
    static System::SharedPtr<AttributeOwnerStandard>& Html_320();
    static System::SharedPtr<AttributeOwnerStandard>& Html_401();
    static System::SharedPtr<AttributeOwnerStandard>& Oeb_100();
    static System::SharedPtr<AttributeOwnerStandard>& Rtf_105();
    static System::SharedPtr<AttributeOwnerStandard>& Css_100();
    static System::SharedPtr<AttributeOwnerStandard>& Css_200();
    
    static System::SharedPtr<AttributeOwnerStandard> to_AttributeOwnerStandard(System::String owner);
    
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    static System::SharedPtr<AttributeOwnerStandard> DefaultAttributeOwnerToElement(System::SharedPtr<Element> element);
    
private:

    System::String _owner;
    
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<AttributeOwnerStandard>>>& _instance();
    
    AttributeOwnerStandard(System::String owner);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


