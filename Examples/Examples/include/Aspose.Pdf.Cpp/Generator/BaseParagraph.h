#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class FormattedFragment; } }
namespace Aspose { namespace Pdf { class Note; } }
namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { class FloatingBox; } }
namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Image; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Hyperlink; } }
namespace Aspose { namespace Pdf { namespace Annotations { class LinkAnnotation; } } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a abstract base object can be added to the page(doc.Paragraphs.Add()).
/// </summary>
class ASPOSE_PDF_SHARED_API BaseParagraph : public System::ICloneable
{
    typedef BaseParagraph ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::Note;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets or sets a vertical alignment of paragraph 
    /// </summary>
    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets a vertical alignment of paragraph 
    /// </summary>
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
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
    /// Gets or sets a bool value that indicates whether this paragraph will be at next column.
    /// Default is false.(for pdf generation)
    /// </summary>
    bool get_IsFirstParagraphInColumn();
    /// <summary>
    /// Gets or sets a bool value that indicates whether this paragraph will be at next column.
    /// Default is false.(for pdf generation)
    /// </summary>
    void set_IsFirstParagraphInColumn(bool value);
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
    virtual System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink();
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator).
    /// </summary>
    virtual void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    /// <summary>
    /// Gets or sets a int value that indicates the Z-order of the graph. A graph with larger ZIndex 
    /// will be placed over the graph with smaller ZIndex. ZIndex can be negative. Graph with negative 
    /// ZIndex will be placed behind the text in the page.
    /// </summary>
    int32_t get_ZIndex();
    /// <summary>
    /// Gets or sets a int value that indicates the Z-order of the graph. A graph with larger ZIndex 
    /// will be placed over the graph with smaller ZIndex. ZIndex can be negative. Graph with negative 
    /// ZIndex will be placed behind the text in the page.
    /// </summary>
    void set_ZIndex(int32_t value);
    
    virtual System::SharedPtr<System::Object> Clone();
    
    BaseParagraph();
    
protected:

    System::SharedPtr<Engine::Data::IPdfObject> linkobject;
    
    /// <summary>
    /// Gets or sets a paragraph id.
    /// </summary>
    System::String get_Id();
    /// <summary>
    /// Gets or sets a paragraph id.
    /// </summary>
    void set_Id(System::String value);
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator performance internal use).
    /// </summary>
    static bool get_IsZIndexSet();
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator performance internal use).
    /// </summary>
    static void set_IsZIndexSet(bool value);
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator internal use).
    /// </summary>
    System::SharedPtr<Annotations::LinkAnnotation> get_ReferencedFrom();
    /// <summary>
    /// Gets or sets the fragment hyperlink(for pdf generator internal use).
    /// </summary>
    void set_ReferencedFrom(System::SharedPtr<Annotations::LinkAnnotation> value);
    
    void ChangePosition(double& curX, double& curY, double newX, double newY, bool isNextParagraphInline);
    void ProcessHyperlink(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> rect);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    System::SharedPtr<MarginInfo> margin;
    System::String id;
    bool isFirstParagraphInColumn;
    bool isFootNoteParagraph;
    bool isKeptWithNext;
    bool isInNewPage;
    bool isInLineParagraph;
    System::SharedPtr<Aspose::Pdf::Hyperlink> hyperlink;
    System::SharedPtr<Annotations::LinkAnnotation> referencedFrom;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    int32_t zindex;
    static bool isZindexSet;
    
};

} // namespace Pdf
} // namespace Aspose


