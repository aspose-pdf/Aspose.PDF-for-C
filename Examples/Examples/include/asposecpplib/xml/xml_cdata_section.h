/// @file xml/xml_cdata_section.h
#ifndef _aspose_xml_xml_cdata_section_h_
#define _aspose_xml_xml_cdata_section_h_

#include "xml/xml_character_data.h"

namespace System { namespace Xml {

class XmlDocument;

/// Represents a CDATA section.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlCDataSection : public XmlCharacterData
{
    RTTI_INFO(XmlCDataSection, ::System::BaseTypesInfo<System::Xml::XmlCharacterData>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlCDataSection> Ptr;
    /// Returns the qualified name of the CDATA section represented by the current object.
    String get_Name() const override { return u"#cdata-section"; }
    /// Returns the content of the CDATA section represented by the current object.
    String get_InnerText() const override { return get_Value(); }
    /// Sets the content of the CDATA section represented by the current object.
    /// @param value The content to set
    void set_InnerText(String value) override { set_Value(value); }
    /// Returns the content of the CDATA section represented by the current object.
    String get_Data() const override { return get_Value(); }
    /// Sets the content of the CDATA section represented by the current object.
    /// @param value The content to set
    void set_Data(String value) override { set_Value(value); }
    /// Returns the number of characters in the string representing the content of the 
    /// CDATA section reprsented by the current object.
    int get_Length() const override { return get_Value().get_Length(); }
    /// Does nothing.
    /// @param writer IGNORED
    ASPOSECPP_SHARED_API void WriteContentTo(SharedPtr<XmlWriter> writer) override;
    /// Writes the content of CDATA section represented by the current object to 
    /// the specified XmlWriter.
    /// @param writer The XmlWriter object to write to
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;

protected:
    /// Constructs an XmlCDataSection object that represents the specified native node and belongs
    /// to the specified XmlDocument.
    /// @param node The node to be represented by the object being constructed; the node must be of XML_CDATA_SECTION_NODE type
    /// @param owner The XML document to which the object being constructed will belong
    ASPOSECPP_SHARED_API XmlCDataSection(xmlNode* node, const SharedPtr<XmlDocument>& owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_cdata_section_h_
