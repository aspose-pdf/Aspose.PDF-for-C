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

    /// <summary>
    /// Gets currently printed page number;
    /// </summary>
    int32_t get_PageNumber();
    
protected:

    /// <summary>
    /// Initializes new PdfPrintPageInfo object.
    /// </summary>
    /// <param name="pageNumber">Currently printed page number.</param>
    PdfPrintPageInfo(int32_t pageNumber);
    
private:

    int32_t pageNumber;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfPrintPageInfo_h_

