#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionValueType_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionValueType_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ilist.h>
#include <system/array.h>

#include "XmpPdfAExtension/XmpPdfAExtensionObject.h"

namespace Aspose { namespace Pdf { class XmpPdfAExtensionField; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// The PDF/A ValueType schema is required for all property value types which are not defined in the XMP 2004 specification, i.e. for value types outside of the following list:
/// - Array types (these are container types which may contain one or more fields): Alt, Bag, Seq
/// - Basic value types: Boolean, (open and closed) Choice, Date, Dimensions, Integer, Lang Alt, Locale, MIMEType, ProperName, Real, Text, Thumbnail, URI, URL, XPath
/// - Media Management value types: AgentName, RenditionClass, ResourceEvent, ResourceRef, Version
/// - Basic Job/Workflow value type: Job
/// - EXIF schema value types: Flash, CFAPattern, DeviceSettings, GPSCoordinate, OECF/SFR, Rational
/// Schema namespace URI: http://www.aiim.org/pdfa/ns/type#
/// Required schema namespace prefix: pdfaType
/// </summary>
class ASPOSE_PDF_SHARED_API XmpPdfAExtensionValueType FINAL : public Aspose::Pdf::XmpPdfAExtensionObject
{
    typedef XmpPdfAExtensionValueType ThisType;
    typedef Aspose::Pdf::XmpPdfAExtensionObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Type();
    System::String get_NamespaceUri();
    System::String get_Prefix();
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<XmpPdfAExtensionField>>> get_Fields();
    
    XmpPdfAExtensionValueType(System::String type, System::String namespaceUri, System::String prefix, System::String description);
    
    void Add(System::SharedPtr<XmpPdfAExtensionField> field);
    void AddRange(System::ArrayPtr<System::SharedPtr<XmpPdfAExtensionField>> fields);
    void Remove(System::SharedPtr<XmpPdfAExtensionField> field);
    void Clear();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmpPdfAExtensionValueType"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _type;
    System::String _namespaceUri;
    System::String _prefix;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionField>>> _fields;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionValueType_h_

