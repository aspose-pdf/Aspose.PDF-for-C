/// @file xml/xsl/xsl_compiled_transform.h
#ifndef _aspose_xml_xsl_transform_h_
#define _aspose_xml_xsl_transform_h_

#include <system/io/stream.h>
#include <system/io/text_writer.h>

#include "xml/xml_reader.h"
#include "xml/xml_writer.h"
#include "xml/xml_resolver.h"
#include "xml/xpath/i_xpath_navigable.h"
#include "xml/xsl/xslt_argument_list.h"

#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml {

class XmlDocument;

namespace Xsl {

/// Transforms XML data using an XSLT style sheet.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XslCompiledTransform  FINAL: public System::Object
{
    RTTI_INFO(XslCompiledTransform, ::System::BaseTypesInfo<::System::Object>);

public:
    /// An alias for shared pointer to an instance of this class.
    typedef SharedPtr<XslCompiledTransform> Ptr;

    /// Constructs a new instance of XslCompiledTransform class.
    ASPOSECPP_SHARED_API XslCompiledTransform();
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~XslCompiledTransform();
    /// Compiles an XSLT style sheet located at the specified URI.
    /// @param uri The URI at which the style sheet is located
    ASPOSECPP_SHARED_API void Load(const String& uri);
    /// Compiles an XSLT style sheet contained in the specified IXPathNavigatible object.
    /// @param stylesheet The IXPathNavigatible object that contains the style sheet
    ASPOSECPP_SHARED_API void Load(const SharedPtr<XPath::IXPathNavigable>& stylesheet);
    /// Compiles an XSLT style sheet contained in the specified XmlReader object.
    /// @param stylesheet The XmlReader object that contains the style sheet
    ASPOSECPP_SHARED_API void Load(const XmlReader::Ptr& stylesheet);

    /// Performs the transform using the specifed input document and outputs the results to a file.
    /// @param inputUri The URI at which the input document is located
    /// @param outputfile A file to which the output is written
    ASPOSECPP_SHARED_API void Transform(const String& inputUri, const String& outputfile);
    /// Performs the transform using the specifed input document and outputs the results to the specified stream.
    /// @param inputUri The URI at which the input document is located
    /// @param arguments Additional run-time arguments
    /// @param result_stream A stream to which the output is written
    ASPOSECPP_SHARED_API void Transform(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::IO::Stream>& result_stream);
    /// Performs the transform using the specifed input document and outputs the results to the specified TextWriter.
    /// @param inputUri The URI at which the input document is located
    /// @param arguments Additional run-time arguments
    /// @param result_writer A TextWriter object to which the output is written
    ASPOSECPP_SHARED_API void Transform(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::IO::TextWriter>& result_writer);
    /// Performs the transform using the specifed input document and outputs the results to the specified XmlWriter.
    /// @param inputUri The URI at which the input document is located
    /// @param arguments Additional run-time arguments
    /// @param result_writer An xmlWriter object to which the output is written
    ASPOSECPP_SHARED_API void Transform(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::Xml::XmlWriter>& result_writer);
    /// Performs the transform using the input data from the specified stream and outputs the results to the specified XmlWriter.
    /// @param input The stream providing the input data
    /// @param results An xmlWriter object to which the output is written
    ASPOSECPP_SHARED_API void Transform(const SharedPtr<XmlReader>& input, const SharedPtr<XmlWriter>& results);
    /// Performs the transform using the input document from the IXPathNavigatible object and outputs the results to the specified stream.
    /// @param input The IXPathNavigatible object that contains the input document
    /// @param arguments Additional run-time arguments
    /// @param results A stream to which the output is written
    ASPOSECPP_SHARED_API void Transform(const SharedPtr<XPath::IXPathNavigable>& input, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::IO::Stream>& results);
    /// Performs the transform using the input document from the IXPathNavigatible object and outputs the results to the specified TextWriter.
    /// @param input The IXPathNavigatible object that contains the input document
    /// @param arguments Additional run-time arguments
    /// @param results A TextWriter object to which the output is written
    ASPOSECPP_SHARED_API void Transform(const SharedPtr<XPath::IXPathNavigable>& input, const XsltArgumentList::Ptr& arguments, const SharedPtr<System::IO::TextWriter>& results);
    /// Performs the transform using the input document from the IXPathNavigatible object and outputs the results to the specified XmlWriter.
    /// @param input The IXPathNavigatible object that contains the input document
    /// @param arguments Additional run-time arguments
    /// @param results An XmlWriter object to which the output is written
    ASPOSECPP_SHARED_API void Transform(const SharedPtr<XPath::IXPathNavigable>& input, const XsltArgumentList::Ptr& arguments, const SharedPtr<XmlWriter>& results);
    /// Performs the transform using the input document from the IXPathNavigatible object and outputs the results to the specified XmlWriter.
    /// @param input The IXPathNavigatible object that contains the input document
    /// @param arguments Additional run-time arguments
    /// @param results An XmlWriter object to which the output is written
    /// @param documentResolver The XmlResolver object used to resolve the Xslt document() function
    ASPOSECPP_SHARED_API void Transform(const SharedPtr<XPath::IXPathNavigable>& input, const XsltArgumentList::Ptr& arguments, const SharedPtr<XmlWriter>& results, const SharedPtr<XmlResolver>& documentResolver);

private:
    /// The underlying libxml2 object representing the XSLT style sheet.
    xsltStylesheet* m_style;
    /// The underlying libxml2 object representing the transform context.
    xsltTransformContext* m_trans_ctx;
    /// Maximum number of parameters in XsltArgumentList object passed to Transform() method.
    static const size_t s_max_params = 127;
    /// Transform arguments represented in a form consumable by libxml2 functions.
    const char* m_libxml_params[s_max_params + 1];

    /// Performs the transform using the specifed input document.
    /// @param inputUri The URI at which the input document is located
    /// @param arguments Additional run-time arguments
    /// @returns A pointer to xmlDoc object representing the result of the operation
    xmlDoc* Transform_internal(const String& inputUri, const XsltArgumentList::Ptr& arguments = XsltArgumentList::Ptr());

    /// Performs the transform using the specifed input document and outputs the results to the specified object.
    /// @param inputUri The URI at which the input document is located
    /// @param arguments Additional run-time arguments
    /// @param writer An object to which the result of the operation is written
    /// @tparam Writer The type of the object to which the result of the operation is written
    template<typename Writer>
    void Transform_internal(const String& inputUri, const XsltArgumentList::Ptr& arguments, const SharedPtr<Writer>& writer);

    /// Performs the transform using the specifed input document from the IXPathNavigatible object.
    /// @param input The IXPathNavigatible object that contains the input document
    /// @param arguments Additional run-time arguments
    /// @param documentResolver The XmlResolver object used to resolve the Xslt document() function
    /// @returns A pointer to XmlDocument object representing the result of the operation
    SharedPtr<XmlDocument> Transform_internal(const SharedPtr<XPath::IXPathNavigable>& input, const XsltArgumentList::Ptr& arguments, const SharedPtr<XmlResolver>& documentResolver);

    /// Checks the specified XSLT argument list.
    /// @param arguments Additional run-time arguments
    /// @throws System::Xml::XmlException If @arguments has too many items
    void CheckArgumentList(const XsltArgumentList::Ptr& arguments);

    /// Writes the specified @arguments to internal buffer.
    /// @param arguments Additional run-time arguments
    void WriteArgumentListToInternalBuffer(const XsltArgumentList::Ptr& arguments);
};

}}} // namespace System::Xml::Xsl

#endif // _aspose_xml_xsl_transform_h_
