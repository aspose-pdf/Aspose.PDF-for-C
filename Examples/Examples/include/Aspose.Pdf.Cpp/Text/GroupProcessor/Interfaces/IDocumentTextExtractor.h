#pragma once

#include <system/string.h>
#include <system/object.h>
#include <system/array.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

class ASPOSE_PDF_SHARED_API IDocumentTextExtractor : public virtual System::Object
{
    typedef IDocumentTextExtractor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::ArrayPtr<System::String> ExtractAllText() = 0;
    
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


