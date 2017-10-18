#ifndef _Aspose_Pdf_Exceptions_InvalidFileFormatException_h_
#define _Aspose_Pdf_Exceptions_InvalidFileFormatException_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Exceptions/PdfException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when a file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidFileFormatException : public Aspose::Pdf::Exceptions::PdfException
{
    typedef InvalidFileFormatException ThisType;
    typedef Aspose::Pdf::Exceptions::PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidFileFormatException();
    
    InvalidFileFormatException(System::String message);
    InvalidFileFormatException(System::String message, System::Exception innerException);
    InvalidFileFormatException(System::Exception innerException);
    InvalidFileFormatException();
    InvalidFileFormatException(std::nullptr_t);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "InvalidFileFormatException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_InvalidFileFormatException_h_

