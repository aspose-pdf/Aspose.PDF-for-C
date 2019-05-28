/// @file xml/xpath/xpath_document.h
#ifndef _aspose_xml_xpath_xpath_document_h_
#define _aspose_xml_xpath_xpath_document_h_

#include "xml/xml_document.h"
#include "xml/xml_space.h"
#include "xml/xpath/i_xpath_navigable.h"
#include "xml/xpath/xpath_navigator.h"

namespace System { namespace Xml { namespace XPath {

/// Provides a read-only representation of an XML document using the XPath data model.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XPathDocument : public IXPathNavigable
{
public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XPathDocument> Ptr;
    /// Constructs an XPathDocument object from the XML data in the specified resource.
    /// @param uri A URI of the XML document
    ASPOSECPP_SHARED_API XPathDocument(const String& uri);
    /// Constructs an XPathDocument object from the specified XML document.
    /// @param doc An XML document to be represented by the object being constructed
    ASPOSECPP_SHARED_API XPathDocument(const SharedPtr<XmlDocument>& doc);
    /// Constructs an XPathDocument object from the XML-data contained in the specified XmlReader object.
    /// @param reader An XmlReader object that contains the XML-data.
    ASPOSECPP_SHARED_API XPathDocument(const SharedPtr<XmlReader>& reader);
    /// Constructs an XPathDocument object from the XML-data contained in the specified XmlReader object
    /// with the specified xml:space scope.
    /// @param reader An XmlReader object that contains the XML-data.
    /// @param space An XmlSpace object.
    ASPOSECPP_SHARED_API XPathDocument(const SharedPtr<XmlReader>& reader, XmlSpace space);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XPathDocument();
    /// Constructs a new instance of XPathNavigator class.
    virtual ASPOSECPP_SHARED_API XPathNavigator::Ptr CreateNavigator() override;
    /// Returns an XML document represented by the current object.
    XmlDocument::Ptr GetDocument() const { return m_doc; }

private:
    /// URI of the XML resource represented by the current object.
    String m_uri;
    /// An XML document represented by the current object.
    XmlDocument::Ptr m_doc;
};

}}} // namespace System::Xml::XPath

#endif // _aspose_xml_xpath_xpath_document_h_
