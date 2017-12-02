#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionField_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Field name. Field names must be valid XML element names.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Field value type, drawn from XMP Specification 2004, or an embedded PDF/A value type extension
    /// schema. Predefined XMP type names or names of custom types.
    /// </summary>
    System::String get_ValueType();
    
    /// <summary>
    /// Initializes object.
    /// </summary>
    /// <param name="name">The field name.</param>
    /// <param name="value">The field value.</param>
    /// <param name="valueType">The field value type.</param>
    /// <param name="description">The field description.</param>
    XmpPdfAExtensionField(System::String name, System::String value, System::String valueType, System::String description);
    
    /// <summary>
    /// Returns the list of xml elements that represent field in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of fields.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
private:

    System::String _name;
    System::String _valueType;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionField_h_

