#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "UnifiedSaveOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
///  enumerates possible types of image files
///  that can be saved as external resources during
///  during Pdf to SVG conversion
/// </summary>
class ASPOSE_PDF_SHARED_API SvgSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef SvgSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class SvgExternalImageType
    {
        /// <summary>
        /// Jpeg format
        /// </summary>
        Jpeg = 0,
        /// <summary>
        /// Png format
        /// </summary>
        Png = 1,
        /// <summary>
        /// Bmp format 
        /// </summary>
        Bmp = 2,
        /// <summary>
        /// Gif format 
        /// </summary>
        Gif = 3,
        /// <summary>
        ///  Tiff format
        /// </summary>
        Tiff = 4,
        /// <summary>
        /// Unknown - means that converter cannot detect type of content itself
        /// </summary>
        Unknown = 5
    };
    
    
public:

    class SvgImageSavingInfo;
    using EmbeddedImagesSavingStrategy = System::MulticastDelegate<System::String(System::SharedPtr<SvgSaveOptions::SvgImageSavingInfo>)>;
    
    
public:

    class ASPOSE_PDF_SHARED_API SvgImageSavingInfo : public Aspose::Pdf::SaveOptions::ResourceSavingInfo
    {
        typedef SvgImageSavingInfo ThisType;
        typedef Aspose::Pdf::SaveOptions::ResourceSavingInfo BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        SvgSaveOptions::SvgExternalImageType ImageType;
        
        /// <summary>
        ///  creates new instance of HtmlImageSavingInfo
        /// </summary>
        SvgImageSavingInfo();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    SvgSaveOptions::EmbeddedImagesSavingStrategy CustomStrategyOfEmbeddedImagesSaving;
    bool TreatTargetFileNameAsDirectory;
    bool CompressOutputToZipArchive;
    
    /// <summary>
    /// Constructor
    /// </summary>
    SvgSaveOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Pdf
} // namespace Aspose


