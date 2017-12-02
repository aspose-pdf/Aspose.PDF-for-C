#ifndef _Aspose_Pdf_InteractiveFeatures_LaunchActionOperation_h_
#define _Aspose_Pdf_InteractiveFeatures_LaunchActionOperation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Enumerates the operations to perform with document during launch action executing.
/// </summary>
enum class LaunchActionOperation
{
    /// <summary>
    /// Undefined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// Open a document.
    /// </summary>
    Open,
    /// <summary>
    /// Print a document.
    /// </summary>
    Print
};

class ASPOSE_PDF_SHARED_API LaunchActionOperationConverter : public System::Object
{
    typedef LaunchActionOperationConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(LaunchActionOperation value);
    static LaunchActionOperation ToEnum(System::String value);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_LaunchActionOperation_h_

