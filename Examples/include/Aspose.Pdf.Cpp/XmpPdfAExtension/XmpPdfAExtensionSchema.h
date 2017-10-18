#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchema_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchema_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    
    System::SharedPtr<XmpPdfAExtensionSchemaDescription> get_Description();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionObject>>> get_Objects();
    
    XmpPdfAExtensionSchema(System::SharedPtr<XmpPdfAExtensionSchemaDescription> description);
    
    void Add(System::SharedPtr<XmpPdfAExtensionObject> obj);
    bool Contains(System::SharedPtr<XmpPdfAExtensionObject> obj);
    void Remove(System::SharedPtr<XmpPdfAExtensionObject> obj);
    System::SharedPtr<System::Xml::XmlElement> GetSchemaXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    void GetValuesXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlElement> rootElement);
    
protected:

    static bool IsPdfAExtensionPrefix(System::String localName);
    static System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> CreateSchemasElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    static void InitializeSchemaValue(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XmpPdfAExtensionSchema> schema);
    static System::SharedPtr<System::Xml::XmlElement> CreateDescriptionValueXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    static System::SharedPtr<System::Xml::XmlElement> CreateDescriptionXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmpPdfAExtensionSchema"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionObject>>> _objects;
    System::SharedPtr<XmpPdfAExtensionSchemaDescription> _description;
    
    void WriteProperties(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlNode> rootNode);
    void WriteValueTypes(System::SharedPtr<System::Xml::XmlDocument> xmlDocument, System::SharedPtr<System::Xml::XmlNode> rootNode);
    static System::SharedPtr<XmpPdfAExtensionSchema> CreateSchemaElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchema_h_

