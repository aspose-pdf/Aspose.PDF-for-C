#ifndef _Aspose_Pdf_Exceptions_IncorrectFontUsageException_h_
#define _Aspose_Pdf_Exceptions_IncorrectFontUsageException_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Exceptions/InvalidFileFormatException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when font usage is incorrect.
/// </summary>
class ASPOSE_PDF_SHARED_API IncorrectFontUsageException FINAL : public Aspose::Pdf::Exceptions::InvalidFileFormatException
{
    typedef IncorrectFontUsageException ThisType;
    typedef Aspose::Pdf::Exceptions::InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~IncorrectFontUsageException();
    
    IncorrectFontUsageException(System::String message);
    IncorrectFontUsageException(System::String message, System::Exception innerException);
    IncorrectFontUsageException(System::Exception innerException);
    IncorrectFontUsageException();
    IncorrectFontUsageException(std::nullptr_t);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "IncorrectFontUsageException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_IncorrectFontUsageException_h_

