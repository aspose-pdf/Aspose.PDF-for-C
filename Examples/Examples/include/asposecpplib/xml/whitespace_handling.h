/// @file xml/whitespace_handling.h
#ifndef __whitespace_handling_h__
#define __whitespace_handling_h__

namespace System { namespace Xml {

/// Specifies how to handle the white spaces.
enum  class WhitespaceHandling
{
    /// Return SignificantWhitespace and Whitespace nodes. This option is default.
    All = 0,

    /// Return only SignificantWhitespace nodes.
    Significant = 1,

    /// Don't return Whitespace and SignificantWhitespace nodes.
    None = 2,
};

}} // System::Xml

#endif // __whitespace_handling_h__
