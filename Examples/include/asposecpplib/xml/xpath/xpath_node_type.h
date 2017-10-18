#ifndef _aspose_xml_xpath_node_type_h_
#define _aspose_xml_xpath_node_type_h_

namespace System { namespace Xml { namespace XPath {

    enum class XPathNodeType
    {
        //     The root node of the XML document or node tree.
        Root = 0,

        //     An element, such as <element>.
        Element = 1,

        //     An attribute, such as id='123'.
        Attribute = 2,

        //     A namespace, such as xmlns="namespace".
        Namespace = 3,

        //     The text content of a node. Equivalent to the Document Object Model (DOM) Text
        //     and CDATA node types. Contains at least one character.
        Text = 4,

        //     A node with white space characters and xml:space set to preserve.
        SignificantWhitespace = 5,

        //     A node with only white space characters and no significant white space. White
        //     space characters are #x20, #x9, #xD, or #xA.
        Whitespace = 6,

        //     A processing instruction, such as <?pi test?>. This does not include XML declarations,
        //     which are not visible to the System.Xml.XPath.XPathNavigator class.
        ProcessingInstruction = 7,

        //     A comment, such as <!-- my comment -->
        Comment = 8,

        //     Any of the System.Xml.XPath.XPathNodeType node types.
        All = 9

    };

}}} // namespace System::Xml::XPath

#endif //_aspose_xml_xpath_node_type_h_
