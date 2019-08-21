#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines the constants that participate in the license check for the component.
/// These used to be defined directly as assembly attributes, but I moved them into
/// separate class because in .NET Compact Framework I cannot access assembly attributes.
/// Now the licensing code when compiled for the .NET Compact Framework uses these constants
/// instead of the assembly attributes.
/// </summary>
class AssemblyConstants : public System::Object
{
    typedef AssemblyConstants ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const System::String Title;
    static const System::String Product;
    static const System::String PRODUCT;
    static const System::String Version;
    static const System::String VERSION;
    static const System::String ReleaseDate;
    static const System::String Producer;
    
};

/// <summary>
/// This class provides information about current product build.
/// </summary>
class ASPOSE_PDF_SHARED_API BuildVersionInfo FINAL : public System::Object
{
    typedef BuildVersionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static const System::String AssemblyVersion;
    static const System::String Product;
    static const System::String FileVersion;
    
};

} // namespace Pdf
} // namespace Aspose


