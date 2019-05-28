#pragma once

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Useful properties to tune Font behaviour
/// </summary>
class ASPOSE_PDF_SHARED_API IFontOptions : public System::Object
{
    typedef IFontOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Sometimes it's not possible to embed desired font into document. There are many reasons, for example
    /// license restrictions or when desired font was not found on destination computer.
    /// When this situation comes it's not simply to detect, because desired font is embedded via set 
    /// of property flag Font.IsEmbedded = true; Of course it's possible to read this property immediately after it was set but
    /// it's not convenient approach. Flag NotifyAboutFontEmbeddingError enforces exception mechanism 
    /// for cases when attempt to embed font became failed. If this flag is set an exception of type
    /// <see cref="Aspose::Pdf::FontEmbeddingException"/> will be thrown. By default false.
    /// </summary>
    virtual bool get_NotifyAboutFontEmbeddingError() = 0;
    /// <summary>
    /// Sometimes it's not possible to embed desired font into document. There are many reasons, for example
    /// license restrictions or when desired font was not found on destination computer.
    /// When this situation comes it's not simply to detect, because desired font is embedded via set 
    /// of property flag Font.IsEmbedded = true; Of course it's possible to read this property immediately after it was set but
    /// it's not convenient approach. Flag NotifyAboutFontEmbeddingError enforces exception mechanism 
    /// for cases when attempt to embed font became failed. If this flag is set an exception of type
    /// <see cref="Aspose::Pdf::FontEmbeddingException"/> will be thrown. By default false.
    /// </summary>
    virtual void set_NotifyAboutFontEmbeddingError(bool value) = 0;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


