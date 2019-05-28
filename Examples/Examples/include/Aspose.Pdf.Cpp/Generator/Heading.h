#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "Text/TextFragment.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { enum class NumberingStyle; } }
namespace Aspose { namespace Pdf { class TocInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

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
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Gets the page that contains this heading.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Page> get_TocPage();
    /// <summary>
    /// Gets the page that contains this heading.
    /// </summary>
    void set_TocPage(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets the top Y of this headings.
    /// </summary>
    double get_Top();
    /// <summary>
    /// Gets the top Y of this headings.
    /// </summary>
    void set_Top(double value);
    /// <summary>
    /// Gets the heading start number.
    /// </summary>
    int32_t get_StartNumber();
    /// <summary>
    /// Gets the heading start number.
    /// </summary>
    void set_StartNumber(int32_t value);
    /// <summary>
    /// Gets the heading should be numered automatically.
    /// </summary>
    bool get_IsAutoSequence();
    /// <summary>
    /// Gets the heading should be numered automatically.
    /// </summary>
    void set_IsAutoSequence(bool value);
    /// <summary>
    /// Gets the heading should be in toc list.
    /// </summary>
    bool get_IsInList();
    /// <summary>
    /// Gets the heading should be in toc list.
    /// </summary>
    void set_IsInList(bool value);
    /// <summary>
    /// Gets the destination page.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Page> get_DestinationPage();
    /// <summary>
    /// Gets the destination page.
    /// </summary>
    void set_DestinationPage(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets the level.
    /// </summary>
    int32_t get_Level();
    /// <summary>
    /// Gets the level.
    /// </summary>
    void set_Level(int32_t value);
    /// <summary>
    /// Gets or sets style.
    /// </summary>
    NumberingStyle get_Style();
    /// <summary>
    /// Gets or sets style.
    /// </summary>
    void set_Style(NumberingStyle value);
    /// <summary>
    /// Gets or sets user label.
    /// </summary>
    System::SharedPtr<Text::TextSegment> get_UserLabel();
    /// <summary>
    /// Gets or sets user label.
    /// </summary>
    void set_UserLabel(System::SharedPtr<Text::TextSegment> value);
    
    /// <summary>
    /// Initializes a new instance of the Cell class.
    /// </summary>
    /// <param name="level">The headings level.</param>
    Heading(int32_t level);
    
    /// <summary>
    /// Clone the heading.
    /// </summary>
    /// <returns>The cloned object</returns>
    virtual System::SharedPtr<System::Object> Clone();
    /// <summary>
    /// Clone the heading with all segments.
    /// </summary>
    /// <returns>The cloned object</returns>
    virtual System::SharedPtr<System::Object> CloneWithSegments();
    
protected:

    /// <summary>
    /// DefaultTocInfo.
    /// </summary>
    /// <value>The page.</value>
    static System::SharedPtr<TocInfo> get_DefaultTOC();
    /// <summary>
    /// Gets the left X of this headings(for internal use).
    /// </summary>
    double get_Left();
    /// <summary>
    /// Gets the left X of this headings(for internal use).
    /// </summary>
    void set_Left(double value);
    
    Heading();
    
    System::String GetDashString();
    /// <summary>
    /// Process headings for table of contents.
    /// </summary>
    /// <value>The heading.</value>
    /// <value>The text builder.</value>
    System::SharedPtr<Text::TextParagraph> Process(double curX, double& curY, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<MarginInfo> marginInfo, double width, double realWidth, bool isWordWrapped, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Heading>>> keptWithNextTocLinks, System::SharedPtr<Aspose::Pdf::Page> page);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static System::SharedPtr<TocInfo> defaultTOC;
    bool isInList;
    bool isAutoSequence;
    int32_t level;
    System::SharedPtr<Text::TextSegment> number;
    int32_t startNumber;
    NumberingStyle style;
    System::SharedPtr<Aspose::Pdf::Page> tocPage;
    System::SharedPtr<Aspose::Pdf::Page> destinationPage;
    double left;
    double top;
    System::SharedPtr<Text::TextSegment> userLabel;
    
    bool IsFormatArrayCorrect(System::SharedPtr<TocInfo> tocInfo);
    void ProcessLink(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<MarginInfo> marginInfo, double width, double height, double curX, double curY);
    void ProcessDots(System::SharedPtr<Text::TextParagraph>& paragraph, System::SharedPtr<Aspose::Pdf::Text::TextState> textState, double realWidth, System::SharedPtr<Aspose::Pdf::Page> page, float subsequentLinesIndent, System::SharedPtr<Aspose::Pdf::Rectangle> rect, int32_t& dotsCount);
    System::SharedPtr<Text::TextParagraph> ProcessHeading(double curX, double curY, System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Heading>>> keptWithNextTocLinks);
    void TransferParagraph(System::SharedPtr<Text::TextParagraph>& paragraph, System::SharedPtr<Text::TextFragment> fragment, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Aspose::Pdf::Page> page);
    System::SharedPtr<Text::TextParagraph> ProcessHeadingToc(double curX, double curY, System::SharedPtr<Aspose::Pdf::Page> page, double realWidth, double width, System::SharedPtr<MarginInfo> marginInfo, System::SharedPtr<Aspose::Pdf::Rectangle> rect);
    
};

} // namespace Pdf
} // namespace Aspose


