/// @file xml/xml_processing_instruction.h
#ifndef _aspose_xml_xml_processing_instruction_h_
#define _aspose_xml_xml_processing_instruction_h_

#include <xml/xml_node.h>
#include <xml/xml_writer.h>
#include <system/exceptions.h>

namespace System { namespace Xml {

/// Represents the XML processing instruction node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlProcessingInstruction : public XmlNode
{
    RTTI_INFO(XmlProcessingInstruction, ::System::BaseTypesInfo<System::Xml::XmlNode>);

    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlNode;
    friend class XmlDocument;

public:
    /// An alias for a shared pointer to an instance of this class.
    typedef SharedPtr<XmlProcessingInstruction> Ptr;
    /// Returns the qualified name of the node represented by the current object.
    ASPOSECPP_SHARED_API String get_Name() const override;
    /// Returns the target of the processing instruction.
    ASPOSECPP_SHARED_API String get_Target() const;
    /// Returns the processing instruction data.
    ASPOSECPP_SHARED_API String get_Data() const;
    /// Returns the value of the XML node represented by the current object.
    ASPOSECPP_SHARED_API String get_InnerText() const override;
    /// Sets the processing instruction data.
    ASPOSECPP_SHARED_API void set_Data(const String& data);
    /// Saves the XML node represented by the current object to the specified XmlWriter object.
    /// @param writer A XmlWriter object to save the node to 
    ASPOSECPP_SHARED_API void WriteTo(SharedPtr<XmlWriter> writer) override;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

protected:
    /// Constructs an instance of XmlNode class that represents the specified XML node and belongs
    /// to the specified owner XML document.
    /// @param node The node to be represented by the object being constructed
    /// @param owner The XML document to which the XML node represented by the object 
    /// being constructed should belong.
    ASPOSECPP_SHARED_API XmlProcessingInstruction(xmlNode* node, const SharedPtr<XmlDocument>& owner);
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_processing_instruction_h_
