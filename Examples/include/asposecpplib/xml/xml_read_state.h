/// @file xml/xml_read_state.h
#ifndef _aspose_xml_read_state_h_
#define _aspose_xml_read_state_h_

namespace System { namespace Xml {
    /// Indicates XmlReader's state.
    enum class ReadState
    {
        /// The Read method has not been called yet.
        Initial = 0,

        /// Reading is in progress.
        Interactive = 1,

        /// An error occurred that prevents the XmlReader from continuing.
        Error = 2,

        /// The end of the stream has been reached successfully.
        EndOfFile = 3,

        /// The Close() method has been called and the XmlReader object is closed.
        Closed = 4
    };

}} //namespace System::Xml

#endif // _aspose_xml_read_state_h_
