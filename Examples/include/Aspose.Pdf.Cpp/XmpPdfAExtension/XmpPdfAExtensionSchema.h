#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchema_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchema_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_node.h>
#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpPacket; } } } } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionObject; } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionSchemaDescription; } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes the XMP extension schema which is provided by PDF/A-1.
/// </summary>
class ASPOSE_PDF_SHARED_API XmpPdfAExtensionSchema : public System::Object
{
    typedef XmpPdfAExtensionSchema ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::Data::XMP::XmpPacket;
    
public:

    static const System::String DefaultExtensionNamespacePrefix;
    static const System::String DefaultExtensionNamespaceUri;
    static const System::String DefaultSchemaNamespacePrefix;
    static const System::String DefaultSchemaNamespaceUri;
    static const System::String DefaultPropertyNamespacePrefix;
    static const System::String DefaultPropertyNamespaceUri;
    static const System::String DefaultValueTypeNamespacePrefix;
    static const System::String DefaultValueNamespaceUri;
    static const System::String DefaultFieldNamespacePrefix;
    static const System::String DefaultFieldNamespaceUri;
    static const System::String RdfPrefix;
    static const System::String RdfNamespaceURI;
    
    /// <summary>
    /// Gets the schema description.
    /// </summary>
    System::SharedPtr<XmpPdfAExtensionSchemaDescription> get_Description();
    /// <summary>
    /// Gets the list of objects (properties, value types).
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionObject>>> get_Objects();
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="description">The schema description.</param>
    XmpPdfAExtensionSchema(System::SharedPtr<XmpPdfAExtensionSchemaDescription> description);
    
    /// <summary>
    /// Adds new object into schema.
    /// </summary>
    /// <param name="obj">The new object.</param>
    void Add(System::SharedPtr<XmpPdfAExtensionObject> obj);
    /// <summary>
    /// Determines whether obj exists in schema.
    /// </summary>
    /// <param name="obj">The obj to find.</param>
    /// <returns>True - object exists in schema; otherwise, false.</returns>
    bool Contains(System::SharedPtr<XmpPdfAExtensionObject> obj);
    /// <summary>
    /// Removes the object from schema.
    /// </summary>
    /// <param name="obj">The object to remove.</param>
    void Remove(System::SharedPtr<XmpPdfAExtensionObject> obj);
    /// <summary>
    /// Returns the xml element (tag - li) that represents schema in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The xml element.</returns>
    System::SharedPtr<System::Xml::XmlElement> GetSchemaXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    /// <summary>
    /// Gets the values of properties as xml tree representation.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <param name="rootElement">The root node of properties values list.</param>
    void GetValuesXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlElement> rootElement);
    
protected:

    /// <summary>
    /// Determines whether prefix value is a part of pdf-a extension.
    /// </summary>
    /// <param name="localName">The prefix value to validate.</param>
    /// <returns>True - prefix is a part of pdf-a extension; otherwise, false.</returns>
    static bool IsPdfAExtensionPrefix(System::String localName);
    /// <summary>
    /// Creates the list of schemas elements from xml tree.
    /// </summary>
    /// <param name="rootNode">The root node for schemas elements.</param>
    /// <returns>The dictionary of schemas elements in format (key, value): schema_prefix, schema value.</returns>
    static System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> CreateSchemasElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Initializes the value of property.
    /// </summary>
    /// <param name="node">The current node that stores property value.</param>
    /// <param name="schema">The schema that contains property definition.</param>
    static void InitializeSchemaValue(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XmpPdfAExtensionSchema> schema);
    /// <summary>
    /// Creates the description xml element for the block of properties values.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The description xml element.</returns>
    static System::SharedPtr<System::Xml::XmlElement> CreateDescriptionValueXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    /// <summary>
    /// Creates the description xml element for the all schemas.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The description xml element.</returns>
    static System::SharedPtr<System::Xml::XmlElement> CreateDescriptionXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionObject>>> _objects;
    System::SharedPtr<XmpPdfAExtensionSchemaDescription> _description;
    
    /// <summary>
    /// Writes the list properties into xml representation of schema.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <param name="rootNode">The root node of properties list.</param>
    void WriteProperties(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Writes the list of value types into xml representation of schema.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <param name="rootNode">The root node of value type list.</param>
    void WriteValueTypes(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlNode> rootNode);
    /// <summary>
    /// Creates a single schema object from xml tree.
    /// </summary>
    /// <param name="rootNode">The root node of schema.</param>
    /// <returns>The new schema.</returns>
    static System::SharedPtr<XmpPdfAExtensionSchema> CreateSchemaElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchema_h_

