#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionProperty_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionProperty_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_node.h>

#include "XmpPdfAExtension/XmpPdfAExtensionField.h"

namespace Aspose { namespace Pdf { class XmpPdfAExtensionSchema; } }
namespace Aspose { namespace Pdf { enum class XmpPdfAExtensionCategoryType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Describes a single property. Schema namespace URI: http://www.aiim.org/pdfa/ns/property#
/// Required schema namespace prefix: pdfaProperty
/// </summary>
class ASPOSE_PDF_SHARED_API XmpPdfAExtensionProperty FINAL : public Aspose::Pdf::XmpPdfAExtensionField
{
    typedef XmpPdfAExtensionProperty ThisType;
    typedef Aspose::Pdf::XmpPdfAExtensionField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XmpPdfAExtensionSchema;
    
public:

    XmpPdfAExtensionCategoryType get_Category();
    
    XmpPdfAExtensionProperty(System::String name, System::String value, System::String valueType, XmpPdfAExtensionCategoryType category, System::String description);
    
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionProperty>>> CreateElements(System::SharedPtr<System::Xml::XmlNode> rootNode);
    static System::SharedPtr<XmpPdfAExtensionProperty> CreateElement(System::SharedPtr<System::Xml::XmlNode> rootNode);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmpPdfAExtensionProperty"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    XmpPdfAExtensionCategoryType _category;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionProperty_h_

