/// @file xml/xpath/xpath_node_type.h
#ifndef _aspose_xml_xpath_node_type_h_
#define _aspose_xml_xpath_node_type_h_

namespace System { namespace Xml { namespace XPath {
    /// Represents an XPath node type.
    enum class XPathNodeType
    {
        /// The root node of the XML document or node tree.
        Root = 0,
        /// An element.
        Element = 1,
        /// An attribute.
        Attribute = 2,
        /// A namespace.
        Namespace = 3,
        /// The text content of a node with at least one character.
        Text = 4,
        /// A node that has white space characters and xml:space set to 'preserve'.
        SignificantWhitespace = 5,
        /// A node with only white space characters and no significant white space. White
        /// space characters are \#x20, \#x9, \#xD, or \#xA.
        Whitespace = 6,
        /// A processing instruction.
        ProcessingInstruction = 7,
        /// A comment.
        Comment = 8,
        /// Any of the System.Xml.XPath.XPathNodeType node types.
        All = 9

    };

}}} // namespace System::Xml::XPath

#endif //_aspose_xml_xpath_node_type_h_
