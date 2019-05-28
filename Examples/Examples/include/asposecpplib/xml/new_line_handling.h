/// @file xml/new_line_handling.h
#pragma once
#ifndef _aspose_xml_new_line_handling_h_
#define _aspose_xml_new_line_handling_h_

namespace System { namespace Xml {

/// Specifies how the line breaks are handled.
enum class NewLineHandling {
    /// The new line characetrs are replaced by the specified character.
    Replace = 0,
    /// The new line characters are entitized.
    Entitize = 1,
    /// The new line characters are not changed.
    None = 2
};

}}

#endif
