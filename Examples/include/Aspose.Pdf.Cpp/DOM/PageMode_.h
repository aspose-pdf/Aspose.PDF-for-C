#ifndef _Aspose_Pdf_DOM_PageMode__h_
#define _Aspose_Pdf_DOM_PageMode__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace DOM {

/// <summary>
/// Class descibes used components of the document page.
/// </summary>
enum class PageMode
{
    UseNone,
    UseOutlines,
    UseThumbs,
    FullScreen,
    UseOC,
    UseAttachments
};

class ASPOSE_PDF_SHARED_API PageModeConverter : public System::Object
{
    typedef PageModeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(PageMode value);
    static PageMode ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageModeConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace DOM
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DOM_PageMode__h_

