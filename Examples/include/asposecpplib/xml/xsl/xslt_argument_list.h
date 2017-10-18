#ifndef _aspose_xml_xslt_argument_list_h_
#define _aspose_xml_xslt_argument_list_h_

#include <system/object.h>

#include <map>
#include <string>

namespace System { namespace Xml { namespace Xsl {

class XslCompiledTransform;

class XsltArgumentList : public System::Object
{
    RTTI_INFO(XsltArgumentList, ::System::BaseTypesInfo<::System::Object>);

    friend class XslCompiledTransform;

public:

    typedef SharedPtr<XsltArgumentList> Ptr;

    void AddParam(const String& name, const String& namespaceUri, const SharedPtr<Object>& parameter_obj);
    void Clear();
    String GetParam(const String& name, const String& namespaceUri);
    String RemoveParam(const String& name, const String& namespaceUri);

public:

    std::map<std::string, std::string> m_params;
    std::map<std::string, std::string> m_namespaces;
};

}}} // namespace System::Xml::Xsl

#endif // _aspose_xml_xslt_argument_list_h_
