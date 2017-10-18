#ifndef _aspose_xml_xsl_transform_h_
#define _aspose_xml_xsl_transform_h_

#include <system/io/stream.h>
#include <system/io/text_writer.h>

#include "xml/xml_reader.h"
#include "xml/xml_writer.h"
#include "xml/xpath/i_xpath_navigable.h"
#include "xml/xsl/xslt_argument_list.h"

#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml { namespace Xsl {

class XslCompiledTransform  FINAL: public System::Object
{
    RTTI_INFO(XslCompiledTransform, ::System::BaseTypesInfo<::System::Object>);

public:

    typedef SharedPtr<XslCompiledTransform> Ptr;

    XslCompiledTransform();
    virtual ~XslCompiledTransform();

    void Load(const String& uri);
    void Load(const SharedPtr<XPath::IXPathNavigable>& stylesheet);
    void Load(const XmlReader::Ptr& stylesheet);

    void Transform(const String& inputUri, const String& outputfile);
    void Transform(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::IO::Stream>& result_stream);
    void Transform(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::IO::TextWriter>& result_writer);
    void Transform(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::Xml::XmlWriter>& result_writer);
    void Transform(const SharedPtr<XmlReader>& input, const SharedPtr<XmlWriter>& results);

private:

    xsltStylesheet* m_style;
    xsltTransformContext* m_trans_ctx;

    static const size_t s_max_params = 127;
    const char* m_libxml_params[s_max_params + 1];

    xmlDoc* Transform_internal(const String& inputUri, const XsltArgumentList::Ptr& arguments = XsltArgumentList::Ptr());

    template<typename Writer>
    void Transform_internal(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<Writer>& writer);
};

}}} // namespace System::Xml::Xsl

#endif // _aspose_xml_xsl_transform_h_