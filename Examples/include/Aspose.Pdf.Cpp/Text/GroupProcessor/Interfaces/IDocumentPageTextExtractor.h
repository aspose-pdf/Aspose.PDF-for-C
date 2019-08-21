#pragma once

#include <system/string.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

class ASPOSE_PDF_SHARED_API IDocumentPageTextExtractor : public virtual System::Object
{
    typedef IDocumentPageTextExtractor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual int32_t get_PageCount() = 0;
    
    virtual System::String ExtractPageText(int32_t pageNumber) = 0;
    
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


