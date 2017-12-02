#ifndef _Aspose_Pdf_Generator_Heading_h_
#define _Aspose_Pdf_Generator_Heading_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets the page that contains this heading.
    /// </summary>
    /// <value>The page.</value>
    System::SharedPtr<Aspose::Pdf::Page> get_TocPage();
    /// <summary>
    /// Gets the page that contains this heading.
    /// </summary>
    /// <value>The page.</value>
    void set_TocPage(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets the top Y of this headings.
    /// </summary>
    /// <value>The top Y.</value>
    double get_Top();
    /// <summary>
    /// Gets the top Y of this headings.
    /// </summary>
    /// <value>The top Y.</value>
    void set_Top(double value);
    /// <summary>
    /// Gets the heading should be numered automatically.
    /// </summary>
    /// <value>The IsAutoSequens.</value>
    bool get_IsAutoSequence();
    /// <summary>
    /// Gets the heading should be numered automatically.
    /// </summary>
    /// <value>The IsAutoSequens.</value>
    void set_IsAutoSequence(bool value);
    /// <summary>
    /// Gets the heading should be in toc list.
    /// </summary>
    /// <value>The IsInList.</value>
    bool get_IsInList();
    /// <summary>
    /// Gets the heading should be in toc list.
    /// </summary>
    /// <value>The IsInList.</value>
    void set_IsInList(bool value);
    /// <summary>
    /// Gets the destination page.
    /// </summary>
    /// <value>The destination page.</value>
    System::SharedPtr<Aspose::Pdf::Page> get_DestinationPage();
    /// <summary>
    /// Gets the destination page.
    /// </summary>
    /// <value>The destination page.</value>
    void set_DestinationPage(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets the level.
    /// </summary>
    /// <value>The heading level.</value>
    int32_t get_Level();
    /// <summary>
    /// Gets the level.
    /// </summary>
    /// <value>The heading level.</value>
    void set_Level(int32_t value);
    /// <summary>
    /// Gets or sets style.
    /// </summary>
    /// <value>The heading style.</value>
    NumberingStyle get_Style();
    /// <summary>
    /// Gets or sets style.
    /// </summary>
    /// <value>The heading style.</value>
    void set_Style(NumberingStyle value);
    
    /// <summary>
    /// Initializes a new instance of the Cell class.
    /// </summary>
    /// <param name="level">The headings level.</param>
    Heading(int32_t level);
    
protected:

    /// <summary>
    /// DefaultTocInfo.
    /// </summary>
    /// <value>The page.</value>
    static System::SharedPtr<TocInfo> get_DefaultTOC();
    /// <summary>
    /// Gets the left X of this headings(for internal use).
    /// </summary>
    /// <value>The left x.</value>
    double get_Left();
    /// <summary>
    /// Gets the left X of this headings(for internal use).
    /// </summary>
    /// <value>The left x.</value>
    void set_Left(double value);
    
    Heading();
    
    /// <summary>
    /// Process headings for table of contents.
    /// </summary>
    /// <value>The heading.</value>
    /// <value>The text builder.</value>
    void Process(double curX, double& curY, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<MarginInfo> marginInfo, double width, double realWidth, bool isWordWrapped, System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Text::TextBuilder> builder, System::SharedPtr<Text::TextParagraph> paragraph);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
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
    System::String ProcessDots(System::SharedPtr<Aspose::Pdf::Text::TextState> textState, System::String text, double realWidth, double leftMargin, double rightMargin, double subsequentLinesIndent, System::SharedPtr<Aspose::Pdf::Rectangle>& rect);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Heading_h_

