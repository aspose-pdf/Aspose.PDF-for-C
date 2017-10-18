#ifndef __whitespace_handling_h__
#define __whitespace_handling_h__

namespace System { namespace Xml {

enum  class WhitespaceHandling
{
    // Return Whitespace and SignificantWhitespace nodes. This is the default.
    All = 0,

    // Return SignificantWhitespace nodes only.
    Significant = 1,

    // Return no Whitespace and no SignificantWhitespace nodes.
    None = 2,
};

}} // System::Xml

#endif // __whitespace_handling_h__