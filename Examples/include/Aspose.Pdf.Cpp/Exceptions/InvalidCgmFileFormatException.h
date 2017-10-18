#ifndef _Aspose_Pdf_Exceptions_InvalidCgmFileFormatException_h_
#define _Aspose_Pdf_Exceptions_InvalidCgmFileFormatException_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/exceptions.h>

#include "Exceptions/InvalidFileFormatException.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when an operation with form type is not valid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidFormTypeOperationException FINAL : public System::InvalidOperationException
{
    typedef InvalidFormTypeOperationException ThisType;
    typedef System::InvalidOperationException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidFormTypeOperationException();
    
    InvalidFormTypeOperationException(System::String message);
    InvalidFormTypeOperationException(System::String message, System::Exception innerException);
    InvalidFormTypeOperationException(System::Exception innerException);
    InvalidFormTypeOperationException();
    InvalidFormTypeOperationException(std::nullptr_t);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "InvalidFormTypeOperationException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// The exception that is thrown when a Cgm file is invalid.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidCgmFileFormatException FINAL : public Aspose::Pdf::Exceptions::InvalidFileFormatException
{
    typedef InvalidCgmFileFormatException ThisType;
    typedef Aspose::Pdf::Exceptions::InvalidFileFormatException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidCgmFileFormatException();
    
    InvalidCgmFileFormatException(System::String message);
    InvalidCgmFileFormatException(System::String message, System::Exception innerException);
    InvalidCgmFileFormatException(System::Exception innerException);
    InvalidCgmFileFormatException();
    InvalidCgmFileFormatException(std::nullptr_t);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "InvalidCgmFileFormatException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_InvalidCgmFileFormatException_h_

