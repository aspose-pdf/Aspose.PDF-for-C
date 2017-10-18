#ifndef _Aspose_Pdf_Exceptions_InvalidPdfFileFormatException_h_
#define _Aspose_Pdf_Exceptions_InvalidPdfFileFormatException_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "Exceptions/InvalidFileFormatException.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when a pdf file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidPdfFileFormatException FINAL : public Aspose::Pdf::Exceptions::InvalidFileFormatException
{
    typedef InvalidPdfFileFormatException ThisType;
    typedef Aspose::Pdf::Exceptions::InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidPdfFileFormatException();
    
    InvalidPdfFileFormatException(System::String message);
    InvalidPdfFileFormatException(System::String message, System::Exception innerException);
    InvalidPdfFileFormatException(System::Exception innerException);
    InvalidPdfFileFormatException();
    InvalidPdfFileFormatException(std::nullptr_t);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "InvalidPdfFileFormatException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_InvalidPdfFileFormatException_h_

