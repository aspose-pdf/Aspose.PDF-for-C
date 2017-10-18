#ifndef _Aspose_Pdf_Facades_PdfPrintPageInfo_h_
#define _Aspose_Pdf_Facades_PdfPrintPageInfo_h_

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents an object that contains current printing page info.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfPrintPageInfo : public System::Object
{
    typedef PdfPrintPageInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    int32_t get_PageNumber();
    
protected:

    PdfPrintPageInfo(int32_t pageNumber);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfPrintPageInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t pageNumber;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfPrintPageInfo_h_

