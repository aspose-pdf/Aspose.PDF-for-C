/// @file xml/xml_write_state.h
#ifndef _aspose_xml_write_state_h_
#define _aspose_xml_write_state_h_

namespace System { namespace Xml {

/// Indicates XmlWriter's state.
enum class WriteState {
    /// A Write() method has not been called yet.
    Start = 0,

    /// The prolog is being written.
    Prolog = 1,

    /// A start tag of an element is being written.
    Element = 2,

    /// A value of an attribute is being written.
    Attribute = 3,

    /// Content of an element is being written.
    Content = 4,

    /// Method XmlWriter::Close() has been called.
    Closed = 5,

    /// An exception has been thrown leaving the System::Xml::XmlWriter in
    /// an invalid state. System::Xml::XmlWriter::Close() method can be called to
    /// put the System::Xml::XmlWriter in the System::Xml::WriteState::Closed state. Any
    /// other System::Xml::XmlWriter method calls result in an System::InvalidOperationException
    /// being thrown.
    Error = 6,
};

}} //namespace System::Xml

#endif // _aspose_xml_write_state_h_
