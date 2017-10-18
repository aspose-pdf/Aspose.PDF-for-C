#ifndef _aspose_xml_write_state_h_
#define _aspose_xml_write_state_h_

namespace System { namespace Xml {

enum class WriteState {
    //     Indicates that a Write method has not yet been called.
    Start = 0,

    //     Indicates that the prolog is being written.
    Prolog = 1,

    //     Indicates that an element start tag is being written.
    Element = 2,

    //     Indicates that an attribute value is being written.
    Attribute = 3,

    //     Indicates that element content is being written.
    Content = 4,

    //     Indicates that the System.Xml.XmlWriter.Close() method has been called.
    Closed = 5,

    //     An exception has been thrown, which has left the System::Xml::XmlWriter in
    //     an invalid state. You can call the System::Xml::XmlWriter::Close() method to
    //     put the System::Xml::XmlWriter in the System::Xml::WriteState::Closed state. Any
    //     other System::Xml::XmlWriter method calls results in an System::InvalidOperationException.
    Error = 6,
};

}} //namespace System::Xml

#endif // _aspose_xml_write_state_h_