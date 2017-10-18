#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchemaDescription_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchemaDescription_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_Prefix();
    System::String get_NamespaceURI();
    System::String get_Description();
    
    XmpPdfAExtensionSchemaDescription(System::String prefix, System::String namespaceURI, System::String description);
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    static System::SharedPtr<XmpPdfAExtensionSchemaDescription> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmpPdfAExtensionSchemaDescription"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _prefix;
    System::String _namespaceURI;
    System::String _description;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionSchemaDescription_h_

