#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchemaDescription_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchemaDescription_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_node.h>
#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class XmpPdfAExtensionSchema; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the description of XMP extension schema which is provided by PDF/A-1.
/// </summary>
class ASPOSE_PDF_SHARED_API XmpPdfAExtensionSchemaDescription : public System::Object
{
    typedef XmpPdfAExtensionSchemaDescription ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionSchema;
    
public:

    /// <summary>
    /// Gets the prefix.
    /// </summary>
    System::String get_Prefix();
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    System::String get_NamespaceURI();
    /// <summary>
    /// Gets the optional description.
    /// </summary>
    System::String get_Description();
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="namespaceURI">The namespace URI.</param>
    /// <param name="description">The optional desciption.</param>
    XmpPdfAExtensionSchemaDescription(System::String prefix, System::String namespaceURI, System::String description);
    
    /// <summary>
    /// Returns the list of xml elements that represent schema description in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    /// <summary>
    /// Creates a single schema description object from xml tree.
    /// </summary>
    /// <param name="rootNode">The root node of schema description.</param>
    /// <returns>The new schema description.</returns>
    static System::SharedPtr<XmpPdfAExtensionSchemaDescription> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    
private:

    System::String _prefix;
    System::String _namespaceURI;
    System::String _description;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchemaDescription_h_

