#ifndef _Aspose_Pdf_XpsLoadOptions_h_
#define _Aspose_Pdf_XpsLoadOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "LoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing xps file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API XpsLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef XpsLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates default load options for converting xps file into pdf document. 
    /// </summary>
    XpsLoadOptions();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XpsLoadOptions_h_

