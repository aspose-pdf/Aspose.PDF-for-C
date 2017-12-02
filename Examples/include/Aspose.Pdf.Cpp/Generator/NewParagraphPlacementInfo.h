#ifndef _Aspose_Pdf_Generator_NewParagraphPlacementInfo_h_
#define _Aspose_Pdf_Generator_NewParagraphPlacementInfo_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents a placement info for new paragraph.
/// </summary>
class ASPOSE_PDF_SHARED_API NewParagraphPlacementInfo FINAL : public System::Object
{
    typedef NewParagraphPlacementInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets a is this paragraph will start new page 
    /// </summary>
    bool get_StartNewPage();
    /// <summary>
    /// Gets or sets a is this paragraph will start new page 
    /// </summary>
    void set_StartNewPage(bool value);
    
    NewParagraphPlacementInfo();
    
private:

    bool startNewPage;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_NewParagraphPlacementInfo_h_

