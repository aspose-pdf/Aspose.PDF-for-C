#ifndef _Aspose_Pdf_Exceptions_PdfException_h_
#define _Aspose_Pdf_Exceptions_PdfException_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <system/exceptions.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The <b>Aspose.Pdf.Exceptions</b> namespace provides classes for exceptions which can occur while working with a document.
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Represents errors that occur during PDF application execution.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfException : public System::Exception
{
    typedef PdfException ThisType;
    typedef System::Exception BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~PdfException();
    
    PdfException();
    PdfException(std::nullptr_t);
    PdfException(System::String message);
    PdfException(System::String message, System::Exception innerException);
    PdfException(System::Exception innerException);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_PdfException_h_

