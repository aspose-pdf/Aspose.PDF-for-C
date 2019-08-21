#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "CommonData/Text/Fonts/FontSources/FontSource.h"

namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents all fonts installed to the system. 
/// </summary>
class ASPOSE_PDF_SHARED_API SystemFontSource FINAL : public Aspose::Pdf::Text::FontSource
{
    typedef SystemFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary> 
    /// Initializes a new instance of <see cref="SystemFontSource"/> class.
    /// </summary>
    SystemFontSource();
    
    /// <summary>
    /// Check if system font source objects are equal.
    /// </summary>
    /// <param name="obj">System font source object which will be compared.</param>
    /// <returns>True if both objects are system font sources, false otherwise.</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    virtual System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> GetFontDefinitions();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


