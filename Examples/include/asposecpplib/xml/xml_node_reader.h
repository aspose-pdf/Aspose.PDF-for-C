/// @file xml/xml_node_reader.h
#ifndef _aspose_xml_xml_node_reader_h_
#define _aspose_xml_xml_node_reader_h_

#include <xml/xml_text_reader.h>

namespace System { namespace Xml {

class XmlNode;

/// Provides non-cached forward-only access to data in an XML node.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNodeReader : public XmlTextReader
{
    RTTI_INFO(XmlNodeReader, ::System::BaseTypesInfo<System::Xml::XmlTextReader>);

    friend class XmlReader;

public:
    /// Constructs an instance that provides access to the specified XML node.
    /// @param node an XmlNode object to be read
    ASPOSECPP_SHARED_API XmlNodeReader(const System::SharedPtr<XmlNode>& node);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XmlNodeReader();

private:
    /// A pointer to the libxml2 object that represents an XML documnet to which the XML node read by the current object belongs.
    _xmlDoc* m_internalDoc;
};

}} // namespace System::Xml

#endif // _aspose_xml_xml_node_reader_h_
