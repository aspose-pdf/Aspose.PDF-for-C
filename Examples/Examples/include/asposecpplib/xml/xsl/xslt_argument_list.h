/// @file xml/xsl/xslt_argument_list.h
#ifndef _aspose_xml_xslt_argument_list_h_
#define _aspose_xml_xslt_argument_list_h_

#include <system/object.h>

#include <map>
#include <string>

namespace System { namespace Xml { namespace Xsl {

class XslCompiledTransform;
/// Represents a collection of XSLT parameters.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XsltArgumentList : public System::Object
{
    RTTI_INFO(XsltArgumentList, ::System::BaseTypesInfo<::System::Object>);

    friend class XslCompiledTransform;

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XsltArgumentList> Ptr;
    /// Adds the specified parameter to the collection and associates it with the specified namespace URI.
    /// @param name The parameter's name
    /// @param namespaceUri A namespace URI to associated the parameter being added with
    /// @param parameter_obj The parameter to add
    ASPOSECPP_SHARED_API void AddParam(const String& name, const String& namespaceUri, const SharedPtr<Object>& parameter_obj);
    /// Removes all parameters from the collection.
    ASPOSECPP_SHARED_API void Clear(); 
    /// Returns the string representation of the parameter whose name and associated namespace URI match the specified values.
    /// @param name The parameter's name
    /// @param namespaceUri The namespace URI associated with the parameter to return
    /// @returns The string representation of the specified parameter; or an emty string if a parameter that
    /// matches the specified criteria was not found
    ASPOSECPP_SHARED_API String GetParam(const String& name, const String& namespaceUri);
    /// Removes the specified parameter from the collection.
    /// @param name The parameter's name
    /// @param namespaceUri The namespace URI associated with the parameter to remove
    /// @returns The string representation of the removed parameter; or an emty string if a parameter that
    /// matches the specified criteria was not found
    ASPOSECPP_SHARED_API String RemoveParam(const String& name, const String& namespaceUri);

public:
    /// Storage for name-value pairs each representing individual parameters.
    std::map<std::string, std::string> m_params;
    /// Storage for name-value pairs each representing an association between a parameter's name and a namespace URI.
    std::map<std::string, std::string> m_namespaces;
};

}}} // namespace System::Xml::Xsl

#endif // _aspose_xml_xslt_argument_list_h_
