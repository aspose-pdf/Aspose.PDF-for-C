/// @file xml/xml_text.h
#ifndef _aspose_xml_xml_text_h_
#define _aspose_xml_xml_text_h_

#include "xml/xml_character_data.h"

namespace System { namespace Xml {

class XmlDocument;
class XmlWriter;

/// Represents the text content of an XML element or attribute.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlText : public XmlCharacterData
{
    RTTI_INFO(XmlText, ::System::BaseTypesInfo<System::Xml::XmlCharacterData>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:
    /// Destructor.
    virtual ~XmlText() { }
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlText> Ptr;
    /// Returns the qualified name of the node represented by the current object.
    String get_Name() const override { return u"#text"; }
    /// Returns the length of the data in characters.
    int get_Length() const override { return get_Value().get_Length(); }
    /// Saves the XML node represented by the current object to the specified XmlWriter object.
    /// @param writer A XmlWriter object to save the node to 
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;

protected:
    /// Constructs an instance of XmlNode class that represents the specified XML node and belongs
    /// to the specified owner XML document.
    /// @param node The node to be represented by the object being constructed
    /// @param owner The XML document to which the XML node represented by the object 
    /// being constructed should belong.
    ASPOSECPP_SHARED_API XmlText(xmlNode* node, const SharedPtr<XmlDocument>& owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_text_h_
