#ifndef _Aspose_Pdf_Exceptions_InvalidPasswordException_h_
#define _Aspose_Pdf_Exceptions_InvalidPasswordException_h_

#include <system/string.h>

#include "Exceptions/PdfException.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Exceptions {

/// <summary>
/// The exception that is thrown when invalid password is provided by user.
/// </summary>
class ASPOSE_PDF_SHARED_API InvalidPasswordException FINAL : public Aspose::Pdf::Exceptions::PdfException
{
    typedef InvalidPasswordException ThisType;
    typedef Aspose::Pdf::Exceptions::PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ~InvalidPasswordException();
    
    InvalidPasswordException(System::String message);
    InvalidPasswordException(System::String message, System::Exception innerException);
    InvalidPasswordException(System::Exception innerException);
    InvalidPasswordException();
    InvalidPasswordException(std::nullptr_t);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "InvalidPasswordException"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Exceptions
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Exceptions_InvalidPasswordException_h_

