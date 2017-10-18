#ifndef _aspose_xml_xml_node_reader_h_
#define _aspose_xml_xml_node_reader_h_

#include <xml/xml_text_reader.h>

namespace System { namespace Xml {

class XmlNode;

class XmlNodeReader : public XmlTextReader
{
    RTTI_INFO(XmlNodeReader, ::System::BaseTypesInfo<System::Xml::XmlTextReader>);

    friend class XmlReader;

public:

    XmlNodeReader(const System::SharedPtr<XmlNode>& node);
    virtual ~XmlNodeReader();

private:

    _xmlDoc* m_internalDoc;
};

}} // namespace System::Xml

#endif // _aspose_xml_xml_node_reader_h_
