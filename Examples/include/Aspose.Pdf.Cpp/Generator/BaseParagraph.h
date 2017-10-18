#ifndef _Aspose_Pdf_Generator_BaseParagraph_h_
#define _Aspose_Pdf_Generator_BaseParagraph_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    virtual Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    virtual void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    System::SharedPtr<MarginInfo> get_Margin();
    void set_Margin(System::SharedPtr<MarginInfo> value);
    bool get_IsKeptWithNext();
    void set_IsKeptWithNext(bool value);
    bool get_IsInNewPage();
    void set_IsInNewPage(bool value);
    bool get_IsInLineParagraph();
    void set_IsInLineParagraph(bool value);
    System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink();
    void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    
    BaseParagraph();
    
protected:

    virtual Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    virtual void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    System::SharedPtr<InteractiveFeatures::Annotations::LinkAnnotation> get_ReferencedFrom();
    void set_ReferencedFrom(System::SharedPtr<InteractiveFeatures::Annotations::LinkAnnotation> value);
    
    void ChangePosition(double &curX, double &curY, double width, double height, bool isNextParagraphInline);
    void ProcessHyperlink(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> rect);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BaseParagraph"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

