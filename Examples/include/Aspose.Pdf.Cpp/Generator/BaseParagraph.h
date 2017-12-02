#ifndef _Aspose_Pdf_Generator_BaseParagraph_h_
#define _Aspose_Pdf_Generator_BaseParagraph_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { class FloatingBox; } }
namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Image; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Hyperlink; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LinkAnnotation; } } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a abstract base object can be added to the page(doc.Paragraphs.Add()).
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT BaseParagraph : public virtual System::Object
{
    typedef BaseParagraph ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets or sets a horizontal alignment of paragraph 
    /// </summary>
    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets a horizontal alignment of paragraph 
    /// </summary>
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets or sets a outer margin for paragraph (for pdf generation)
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Gets or sets a outer margin for paragraph (for pdf generation)
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets or sets a bool value that indicates whether current paragraph remains in the same page along with next paragraph.
    /// Default is false.(for pdf generation)
    /// </summary>
    bool get_IsKeptWithNext();
    /// <summary>
    /// Gets or sets a bool value that indicates whether current paragraph remains in the same page along with next paragraph.
    /// Default is false.(for pdf generation)
    /// </summary>
    void set_IsKeptWithNext(bool value);
    /// <summary>
    /// Gets or sets a bool value that force this paragraph generates at new page.
    /// Default is false.(for pdf generation)
    /// </summary>
    bool get_IsInNewPage();
    /// <summary>
    /// Gets or sets a bool value that force this paragraph generates at new page.
    /// Default is false.(for pdf generation)
    /// </summary>
    void set_IsInNewPage(bool value);
    /// <summary>
    /// Gets or sets a paragraph is inline.
    /// Default is false.(for pdf generation)
    /// </summary>
    bool get_IsInLineParagraph();
    /// <summary>
    /// Gets or sets a paragraph is inline.
    /// Default is false.(for pdf generation)
    /// </summary>
    void set_IsInLineParagraph(bool value);
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator).
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink();
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator).
    /// </summary>
    void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    
    BaseParagraph();
    
protected:

    /// <summary>
    /// Gets or sets a vertical alignment of paragraph 
    /// </summary>
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets a vertical alignment of paragraph 
    /// </summary>
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator internal use).
    /// </summary>
    System::SharedPtr<InteractiveFeatures::Annotations::LinkAnnotation> get_ReferencedFrom();
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator internal use).
    /// </summary>
    void set_ReferencedFrom(System::SharedPtr<InteractiveFeatures::Annotations::LinkAnnotation> value);
    
    void ChangePosition(double& curX, double& curY, double width, double height, bool isNextParagraphInline);
    void ProcessHyperlink(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> rect);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    System::SharedPtr<MarginInfo> margin;
    bool isKeptWithNext;
    bool isInNewPage;
    bool isInLineParagraph;
    System::SharedPtr<Aspose::Pdf::Hyperlink> hyperlink;
    System::SharedPtr<InteractiveFeatures::Annotations::LinkAnnotation> referencedFrom;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_BaseParagraph_h_

