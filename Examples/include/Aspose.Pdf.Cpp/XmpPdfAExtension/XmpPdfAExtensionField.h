#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_node.h>
#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>

#include "XmpPdfAExtension/XmpPdfAExtensionObject.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class XmpPdfAExtensionValueType; } }

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
    
    friend class Aspose::Pdf::XmpPdfAExtensionValueType;
    
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
    
protected:

    /// <summary>
    /// Returns the list of fields found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of fields in xml document.</param>
    /// <returns>Returns the list of fields.</returns>
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionField>>> CreateElements(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Returns the field found in li element of xml tree. Used during loading of metadata.
    /// </summary>
    /// <param name="rootNode">The root node of field in xml document.</param>
    /// <returns>The new field object.</returns>
    static System::SharedPtr<XmpPdfAExtensionField> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    
private:

    System::String _name;
    System::String _valueType;
    
};

} // namespace Pdf
} // namespace Aspose


