#ifndef _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionValueType_h_
#define _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionValueType_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets the value type.
    /// </summary>        
    System::String get_Type();
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    System::String get_NamespaceUri();
    /// <summary>
    /// Gets the prefix.
    /// </summary>
    System::String get_Prefix();
    /// <summary>
    /// Gets the list of fields.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<XmpPdfAExtensionField>>> get_Fields();
    
    /// <summary>
    /// Initializes new object.
    /// </summary>
    /// <param name="type">The value type.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="prefix">The prefix.</param>
    /// <param name="description">The description.</param>
    XmpPdfAExtensionValueType(System::String type, System::String namespaceUri, System::String prefix, System::String description);
    
    /// <summary>
    /// Add new field.
    /// </summary>
    /// <param name="field">The field to add.</param>
    void Add(System::SharedPtr<XmpPdfAExtensionField> field);
    /// <summary>
    /// Adds the range of fields.
    /// </summary>
    /// <param name="fields">The fields to add.</param>
    void AddRange(System::ArrayPtr<System::SharedPtr<XmpPdfAExtensionField>> fields);
    /// <summary>
    /// Removes the field from the list of fields.
    /// </summary>
    /// <param name="field">The field to remove.</param>
    void Remove(System::SharedPtr<XmpPdfAExtensionField> field);
    /// <summary>
    /// Clears all fields.
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns the list of xml elements that represent value type in xml tree.
    /// </summary>
    /// <param name="xmlDocument">The source xml document.</param>
    /// <returns>The list of xml elements.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Xml::XmlElement>>> GetXml(System::SharedPtr<System::Xml::XmlDocument> xmlDocument);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _type;
    System::String _namespaceUri;
    System::String _prefix;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XmpPdfAExtensionField>>> _fields;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmpPdfAExtension_XmpPdfAExtensionValueType_h_

