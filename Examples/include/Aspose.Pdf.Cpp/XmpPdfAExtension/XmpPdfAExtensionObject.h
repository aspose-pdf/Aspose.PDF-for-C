#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionObject_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionObject_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class XmpPdfAExtensionField; } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionValueType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the base class for field, property, value type instances.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT XmpPdfAExtensionObject : public System::Object
{
    typedef XmpPdfAExtensionObject ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::XmpPdfAExtensionField;
    friend class Aspose::Pdf::XmpPdfAExtensionValueType;
    
public:

    System::String get_Description();
    System::String get_Value();
    void set_Value(System::String value);
    
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument) = 0;
    
protected:

    XmpPdfAExtensionObject(System::String value, System::String description);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmpPdfAExtensionObject"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _description;
    System::String _value;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionObject_h_

