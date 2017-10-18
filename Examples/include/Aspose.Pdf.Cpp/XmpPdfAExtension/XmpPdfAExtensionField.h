#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionField_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>

#include "XmpPdfAExtension/XmpPdfAExtensionObject.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This schema describes a field in a structured type. It is very similar to the PDF/A Property Value Type 
/// schema, but defines a field in a structure instead of a property.
/// Schema namespace URI: http://www.aiim.org/pdfa/ns/field#
/// Required schema namespace prefix: pdfaField.
/// </summary>
class ASPOSE_PDF_SHARED_API XmpPdfAExtensionField : public Aspose::Pdf::XmpPdfAExtensionObject
{
    typedef XmpPdfAExtensionField ThisType;
    typedef Aspose::Pdf::XmpPdfAExtensionObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Name();
    System::String get_ValueType();
    
    XmpPdfAExtensionField(System::String name, System::String value, System::String valueType, System::String description);
    
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmpPdfAExtensionField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _name;
    System::String _valueType;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionField_h_

