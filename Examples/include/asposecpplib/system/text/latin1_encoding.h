/// @file system/text/latin1_encoding.h
#pragma once

#include <system/text/icu_encoding.h>
#include <fwd.h>

namespace System { namespace Text {

/// Latin1 encoding support.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Latin1Encoding : public ICUEncoding
{
public:
    /// Codepage.
    static constexpr int LATIN1_CODE_PAGE = 28591;

    /// Constructor.
    ASPOSECPP_SHARED_API Latin1Encoding();
};

}} // namespace System::Text
