/// @file system/globalization/idn_mapping.h
#pragma once

#include <system/string.h>

namespace System { namespace Globalization {

/// A dummy class for IdnMapping
/// Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class IdnMapping : public Object
{
public:
    /// Not implemented.
    String GetAscii(const String& unicode);
    /// Not implemented.
    String GetUnicode(const String& ascii);
};

}} // namespace System::Globalization
