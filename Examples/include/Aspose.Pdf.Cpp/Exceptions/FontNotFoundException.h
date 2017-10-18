#ifndef _Aspose_Pdf_Exceptions_FontNotFoundException_h_
#define _Aspose_Pdf_Exceptions_FontNotFoundException_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/exceptions.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when a font is not found.
/// </summary>
class ASPOSE_PDF_SHARED_API FontNotFoundException FINAL : public System::ApplicationException
{
    typedef FontNotFoundException ThisType;
    typedef System::ApplicationException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~FontNotFoundException();
    
    FontNotFoundException(System::String message);
    FontNotFoundException(System::String message, System::Exception innerException);
    FontNotFoundException(System::Exception innerException);
    FontNotFoundException();
    FontNotFoundException(std::nullptr_t);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontNotFoundException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_FontNotFoundException_h_

