/// @file xml/xml_url_resolver.h
#ifndef _aspose_xml_xml_url_resolver_h_
#define _aspose_xml_xml_url_resolver_h_

#include "xml_resolver.h"

namespace System{ namespace Xml{
/// Resolves external XML resources specified by URL.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlUrlResolver : public XmlResolver
{
public:
    /// Returns an object that contains a resource specified by a URI.
    /// @param absoluteUri The URI
    /// @param role NOT USED
    /// @param ofObjectToReturn The type of object to return; must always be System.IO.Stream
    /// @returns A stream object representing the specified resource
    ASPOSECPP_SHARED_API SharedPtr<Object> GetEntity(SharedPtr<Uri> absoluteUri, String role, const TypeInfo& ofObjectToReturn) override;
};

}} // namespace System{ namespace Xml{

#endif // _aspose_xml_xml_url_resolver_h_
