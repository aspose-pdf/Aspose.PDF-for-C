/// @file xml/xml_character_data.h
#ifndef _aspose_xml_xml_character_data_h_
#define _aspose_xml_xml_character_data_h_

#include "xml/xml_node.h"

namespace System { namespace Xml {

/// Serves as a base class for several classes that represent XML nodes that represent sequences of characters.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlCharacterData : public XmlNode
{
public:
    /// Returns the length of the data in characters.
    virtual ASPOSECPP_SHARED_API int get_Length() const = 0;
    /// Returns the content of the node represented by the current object.
    /// @returns The content of the node represented by the current object.
    virtual String get_Data() const { return get_Value(); }
    /// Sets the content of the node represented by the current object.
    virtual void set_Data(String value) { set_Value(value); }
    /// Appends the specified string to the content of the node represented by the current object.
    virtual ASPOSECPP_SHARED_API void AppendData(String strData);
    /// Removes the specified substring from the content of the node represented by the current object.
    /// @param offset 0-based index of the character of the node's content string at which the substring to remove begins
    /// @param count The number of characters to remove
    virtual ASPOSECPP_SHARED_API void DeleteData(int offset, int count);
    /// Insert the specified string at the specified position in the content string
    /// @param offset 0-based index of the node's content string after which the specified string is inserted
    /// @param strData The string to insert
    virtual ASPOSECPP_SHARED_API void InsertData(int offset, String strData);
    /// Replaces the specified content string of the node represented by the current object with the specified string
    /// @param offset 0-based index of the character of the node's content string at which the substring to remove begins
    /// @param count The length of the substring to replace
    /// @param strData The string to replace the content substring with
    virtual ASPOSECPP_SHARED_API void ReplaceData(int offset, int count, String strData);
    /// Returns the specified substring of the node's content string.
    /// @param offset 0-based index of the character of the node's content string at which the substring to return begins
    /// @param count The length of the substring to return
    /// @returns The specified content substring
    virtual ASPOSECPP_SHARED_API String Substring(int offset, int count);

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API XmlNode::Ptr CloneNode(bool deep) override;

protected:
    /// Constructs an XmlCharacterData object that represents the specified native node and belongs
    /// to the specified XmlDocument.
    /// @param node The node to be represented by the object being constructed
    /// @param owner The XML document to which the object being constructed will belong
    ASPOSECPP_SHARED_API XmlCharacterData(xmlNode* node, const SharedPtr<XmlDocument> &owner);
};

}}

#endif //_aspose_xml_xml_character_data_h_
