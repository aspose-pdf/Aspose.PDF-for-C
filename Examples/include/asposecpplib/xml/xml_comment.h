/// @file xml/xml_comment.h
#ifndef _aspose_xml_xml_comment_h_
#define _aspose_xml_xml_comment_h_

#include "xml/xml_character_data.h"

namespace System { namespace Xml {

class XmlWriter;
/// Represents an XML comment node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlComment : public XmlCharacterData
{
    RTTI_INFO(XmlComment, ::System::BaseTypesInfo<System::Xml::XmlCharacterData>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XmlComment> Ptr;
    /// Returns the name of the node represented by the current object.
    String get_Name() const override { return u"#comment"; }
    /// Returns the length of the comment string represented by the current object.
    int get_Length() const override { return get_Value().get_Length(); }
    /// Saves the XML node represented by the current object to the specified XmlWriter object.
    /// @param writer A XmlWriter object to save the node to 
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;

protected:
    /// Constructs an XmlComment object that represents the specified native node and belongs
    /// to the specified XmlDocument.
    /// @param node The node to be represented by the object being constructed; the node must be of XML_COMMENT_NODE type
    /// @param owner The XML document to which the object being constructed will belong
    ASPOSECPP_SHARED_API XmlComment(xmlNode* node, const SharedPtr<XmlDocument> &owner);
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_comment_h_
