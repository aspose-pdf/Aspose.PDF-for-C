#ifndef _Aspose_Pdf_Brush__h_
#define _Aspose_Pdf_Brush__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if UNIT_TEST 


#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
///  This class represents abstract brush
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Brush : public System::Object
{
    typedef Brush ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Brush"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


#endif // _Aspose_Pdf_Brush__h_

