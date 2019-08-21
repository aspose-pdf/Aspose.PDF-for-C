#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the page information.
/// </summary>
class ASPOSE_PDF_SHARED_API PageInfo FINAL : public System::ICloneable
{
    typedef PageInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// Gets default font.
    /// </summary>
    System::SharedPtr<Text::TextState> get_DefaultTextState();
    /// <summary>
    /// Sets default font.
    /// </summary>
    void set_DefaultTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets page height.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Sets page height.
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets page pure height without margins.
    /// </summary>
    double get_PureHeight();
    /// <summary>
    /// Gets is page landscaped.
    /// </summary>
    bool get_IsLandscape();
    /// <summary>
    /// Sets is page landscaped.
    /// </summary>
    void set_IsLandscape(bool value);
    /// <summary>
    /// Gets page margin.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Sets page margin.
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets page width.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Sets page width.
    /// </summary>
    void set_Width(double value);
    
    PageInfo();
    
    /// <summary>
    /// Clone page info.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<System::Object> Clone();
    
protected:

    bool get_IsDefaultSize();
    bool get_IsDefault();
    /// <summary>
    /// Gets is width is set.
    /// </summary>
    bool get_IsWidthSet();
    /// <summary>
    /// Gets is height is set.
    /// </summary>
    bool get_IsHeightSet();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<MarginInfo> marginInfo;
    double height;
    double width;
    bool isHeightSet;
    bool isWidthSet;
    bool isLandscape;
    System::SharedPtr<Text::TextState> defaultTextState;
    
};

} // namespace Pdf
} // namespace Aspose


