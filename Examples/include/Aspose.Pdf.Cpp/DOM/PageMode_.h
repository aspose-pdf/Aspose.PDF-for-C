#ifndef _Aspose_Pdf_DOM_PageMode__h_
#define _Aspose_Pdf_DOM_PageMode__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
    /// <summary>
    /// Dont use any components.
    /// </summary>
    UseNone,
    /// <summary>
    /// Document outline visible.
    /// </summary>
    UseOutlines,
    /// <summary>
    /// Thumbnail images visible.
    /// </summary>
    UseThumbs,
    /// <summary>
    /// FullScreenFull-screen mode, with no menu bar, window controls, or any other window visible.
    /// </summary>
    FullScreen,
    /// <summary>
    /// Optional content group panel visible.
    /// </summary>
    UseOC,
    /// <summary>
    /// Attachments panel visible.
    /// </summary>
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
    
};

} // namespace DOM
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DOM_PageMode__h_

