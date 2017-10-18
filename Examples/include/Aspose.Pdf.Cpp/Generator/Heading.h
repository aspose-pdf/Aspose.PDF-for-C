#ifndef _Aspose_Pdf_Generator_Heading_h_
#define _Aspose_Pdf_Generator_Heading_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Text/TextFragment.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { enum class NumberingStyle; } }
namespace Aspose { namespace Pdf { class TocInfo; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents heading.
/// </summary>
class ASPOSE_PDF_SHARED_API Heading FINAL : public Aspose::Pdf::Text::TextFragment
{
    typedef Heading ThisType;
    typedef Aspose::Pdf::Text::TextFragment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Page;
    
public:

    System::SharedPtr<Aspose::Pdf::Page> get_TocPage();
    void set_TocPage(System::SharedPtr<Aspose::Pdf::Page> value);
    double get_Top();
    void set_Top(double value);
    bool get_IsAutoSequence();
    void set_IsAutoSequence(bool value);
    bool get_IsInList();
    void set_IsInList(bool value);
    System::SharedPtr<Aspose::Pdf::Page> get_DestinationPage();
    void set_DestinationPage(System::SharedPtr<Aspose::Pdf::Page> value);
    int32_t get_Level();
    void set_Level(int32_t value);
    NumberingStyle get_Style();
    void set_Style(NumberingStyle value);
    
    Heading(int32_t level);
    
protected:

    static System::SharedPtr<TocInfo> get_DefaultTOC();
    double get_Left();
    void set_Left(double value);
    
    Heading();
    
    void Process(double curX, double &curY, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<MarginInfo> marginInfo, double width, double realWidth, bool isWordWrapped, System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Text::TextBuilder> builder, System::SharedPtr<Text::TextParagraph> paragraph);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Heading"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static System::SharedPtr<TocInfo> defaultTOC;
    bool isInList;
    bool isAutoSequence;
    int32_t level;
    System::String number;
    NumberingStyle style;
    System::SharedPtr<Aspose::Pdf::Page> tocPage;
    System::SharedPtr<Aspose::Pdf::Page> destinationPage;
    double left;
    double top;
    
    void ProcessLink(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<MarginInfo> marginInfo, double width, double height, double curX, double curY);
    System::String ProcessDots(System::SharedPtr<Aspose::Pdf::Text::TextState> textState, System::String text, double realWidth, double leftMargin, double rightMargin, double subsequentLinesIndent, System::SharedPtr<Aspose::Pdf::Rectangle> &rect);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Heading_h_

