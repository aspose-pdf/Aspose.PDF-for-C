#ifndef _aspose_xml_xml_character_data_h_
#define _aspose_xml_xml_character_data_h_

#include "xml/xml_node.h"

namespace System { namespace Xml {

class XmlCharacterData : public XmlNode
{
public:

    virtual int get_Length() const = 0;

    virtual String get_Data() const { return get_Value(); }
    virtual void set_Data(String value) { set_Value(value); }

    virtual void AppendData(String strData);
    virtual void DeleteData(int offset, int count);
    virtual void InsertData(int offset, String strData);
    virtual void ReplaceData(int offset, int count, String strData);
    virtual String Substring(int offset, int count);

    XmlNode::Ptr CloneNode(bool deep) override;

protected:

    XmlCharacterData(xmlNode* node, const SharedPtr<XmlDocument>& owner) :  XmlNode(node, owner) {}
};

}}

#endif //_aspose_xml_xml_character_data_h_
