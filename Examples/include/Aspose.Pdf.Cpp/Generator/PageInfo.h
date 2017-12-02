#ifndef _Aspose_Pdf_Generator_PageInfo_h_
#define _Aspose_Pdf_Generator_PageInfo_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>

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
class ASPOSE_PDF_SHARED_API PageInfo FINAL : public System::Object
{
    typedef PageInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// Gets or sets default font.
    /// </summary>
    System::SharedPtr<Text::TextState> get_DefaultTextState();
    /// <summary>
    /// Gets or sets default font.
    /// </summary>
    void set_DefaultTextState(System::SharedPtr<Text::TextState> value);
    /// <summary>
    /// Gets or sets page height.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Gets or sets page height.
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets or sets is page landscaped.
    /// </summary>
    bool get_IsLandscape();
    /// <summary>
    /// Gets or sets is page landscaped.
    /// </summary>
    void set_IsLandscape(bool value);
    /// <summary>
    /// Gets or sets page margin.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Gets or sets page margin.
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets or sets page width.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets page width.
    /// </summary>
    void set_Width(double value);
    
    PageInfo();
    
    /// <summary>
    /// Clone page info.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<PageInfo> Clone();
    
protected:

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
    bool isWidthSet;
    bool isHeightSet;
    bool isLandscape;
    System::SharedPtr<Text::TextState> defaultTextState;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_PageInfo_h_

