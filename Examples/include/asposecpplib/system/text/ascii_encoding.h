/// @file system/text/ascii_encoding.h
#ifndef __ASCIIEncoding_h__
#define __ASCIIEncoding_h__

#include "system/text/encoding.h"
#include "system/text/icu_encoding.h"

#include "fwd.h"


namespace System { namespace Text {

/// Represents ASCII encoding.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ASCIIEncoding : public ICUEncoding
{
    /// RTTI
    RTTI_INFO(System::Text::ASCIIEncoding, ::System::BaseTypesInfo<System::Text::ICUEncoding>)

public:
    //. Magic number used by Windows for "ASCII".
    enum : int { ASCII_CODE_PAGE = 20127 };
    /// Constructor.
    ASPOSECPP_SHARED_API ASCIIEncoding();

    /// Gets max byte count possible to hold a string of known character count.
    /// @param charCount Character count.
    /// @return Number of characters sufficient to hold any string of @p charCount characters.
    virtual int GetMaxByteCount(int charCount) override { return charCount + 1;  };

    /// Get the maximum number of characters needed to decode a specified number of bytes.
    /// @param byteCount Byte count.
    /// @return Number of characters sufficient to hold any sequence of @p byteCount characters.
    virtual int GetMaxCharCount(int byteCount) override { return byteCount; };

    /// Gets Windows codepage ID.
    /// @return Always returns 20127.
    virtual int get_CodePage() override { return ASCII_CODE_PAGE; };

};

}}

#endif
