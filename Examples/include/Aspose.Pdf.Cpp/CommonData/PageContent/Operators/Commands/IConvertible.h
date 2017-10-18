#ifndef _Aspose_Pdf_CommonData_PageContent_Operators_Commands_IConvertible_h_
#define _Aspose_Pdf_CommonData_PageContent_Operators_Commands_IConvertible_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace CommonData {

namespace PageContent {

namespace Operators {

namespace Commands {

class ASPOSE_PDF_SHARED_API IConvertible : public System::Object
{
    typedef IConvertible ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual int32_t ToInt() = 0;
    virtual double ToDouble() = 0;
    virtual float ToFloat() = 0;
    virtual System::String ToString() = 0;
    
};

} // namespace Commands
} // namespace Operators
} // namespace PageContent
} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_PageContent_Operators_Commands_IConvertible_h_

