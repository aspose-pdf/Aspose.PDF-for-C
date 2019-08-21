#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "LoadOptions.h"

namespace Aspose { namespace Pdf { class SvgConverter; } }
namespace Aspose { namespace Pdf { class PageInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumerates conversion engines that can be used for conversion
/// </summary>
class ASPOSE_PDF_SHARED_API SvgLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef SvgLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::SvgConverter;
    
public:

    enum class ConversionEngines
    {
        /// <summary>
        /// Represents legacy SVG to PDF conversion engine.
        /// </summary>  
        LegacyEngine,
        /// <summary>
        /// Represents new SVG to PDF conversion engine.
        /// </summary>  
        NewEngine
    };
    
    
public:

    SvgLoadOptions::ConversionEngines ConversionEngine;
    
    /// <summary>
    /// Gets page info that should be applied during loading of document.
    /// NOTE that this parameter only works when ConversionEngine == ConversionEngines.NewEngine
    /// </summary>
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    /// <summary>
    /// Sets page info that should be applied during loading of document.
    /// NOTE that this parameter only works when ConversionEngine == ConversionEngines.NewEngine
    /// </summary>
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Adust pdf page size to svg size
    /// </summary>
    bool get_AdjustPageSize();
    /// <summary>
    /// Adust pdf page size to svg size
    /// </summary>
    void set_AdjustPageSize(bool value);
    
    /// <summary>
    /// Creates <see cref="SvgLoadOptions"/> object.
    /// </summary>
    SvgLoadOptions();
    
protected:

    /// <summary>
    /// The base path/url for the SVG file.
    /// It's a compulsory parameter when document is loaded from stream
    /// </summary>
    System::String get_BasePath();
    /// <summary>
    /// The base path/url for the SVG file.
    /// It's a compulsory parameter when document is loaded from stream
    /// </summary>
    void set_BasePath(System::String value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    bool adjustPageSize;
    System::String _basePath;
    
};

} // namespace Pdf
} // namespace Aspose


