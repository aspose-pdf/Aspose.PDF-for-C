#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class FloatingBox; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents header or footer pdf page.
/// </summary>
class ASPOSE_PDF_SHARED_API HeaderFooter FINAL : public System::ICloneable
{
    typedef HeaderFooter ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    
public:

    /// <summary>
    /// Gets the end note paragraphs.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// <summary>
    /// Sets the end note paragraphs.
    /// </summary>
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets the margin info.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Sets the margin info.
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    
    /// <summary>
    /// Clones a new object.
    /// </summary>
    /// <returns>The new object.</returns>
    System::SharedPtr<System::Object> Clone();
    
    HeaderFooter();
    
protected:

    /// <summary>
    /// Gets is note more than page.
    /// </summary>
    bool get_IsNoteMoreThanPage();
    /// <summary>
    /// Sets is note more than page.
    /// </summary>
    void set_IsNoteMoreThanPage(bool value);
    /// <summary>
    /// Gets footer with footnotes size.
    /// </summary>
    double get_FootNoteHeight();
    /// <summary>
    /// Sets footer with footnotes size.
    /// </summary>
    void set_FootNoteHeight(double value);
    /// <summary>
    /// Gets end note footer top line rightX.
    /// </summary>
    double get_EndNoteRightX();
    /// <summary>
    /// Sets end note footer top line rightX.
    /// </summary>
    void set_EndNoteRightX(double value);
    /// <summary>
    /// Gets footer top line rightX.
    /// </summary>
    double get_RightX();
    /// <summary>
    /// Sets footer top line rightX.
    /// </summary>
    void set_RightX(double value);
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_EndNoteParagraphs();
    /// <summary>
    /// Sets the paragraphs.
    /// </summary>
    void set_EndNoteParagraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_FootNoteParagraphs();
    /// <summary>
    /// Sets the paragraphs.
    /// </summary>
    void set_FootNoteParagraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets paragraphs without footnotes height.
    /// </summary>
    double get_ParagraphsHeight();
    /// <summary>
    /// Sets paragraphs without footnotes height.
    /// </summary>
    void set_ParagraphsHeight(double value);
    /// <summary>
    /// Gets the rectangles for links for notes.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> get_Rectangles();
    /// <summary>
    /// Sets the rectangles for links for notes.
    /// </summary>
    void set_Rectangles(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> value);
    static System::SharedPtr<MarginInfo> get_DefaultMargin();
    /// <summary>
    /// Gets page generator.
    /// </summary>
    System::SharedPtr<PageGenerator> get_Generator();
    /// <summary>
    /// Sets page generator.
    /// </summary>
    void set_Generator(System::SharedPtr<PageGenerator> value);
    
    /// <summary>
    /// Gets all paragraphs.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> GetAllParagraphs(bool isFootNote);
    /// <summary>
    /// Gets a object with specified ID in the document.
    /// </summary>
    /// <param name="id">The object id.</param>
    /// <returns>The object with specified id. Null if the id is not found.</returns>
    System::SharedPtr<System::Object> GetObjectById(System::String id);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<MarginInfo> margin;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    System::SharedPtr<Aspose::Pdf::Paragraphs> endNoteParagraphs;
    System::SharedPtr<Aspose::Pdf::Paragraphs> footNoteParagraphs;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Rectangle>>> rectangles;
    double endNoteRightX;
    System::SharedPtr<PageGenerator> generator;
    bool isNoteMoreThanPage;
    double rightX;
    double paragraphsHeight;
    double footNoteHeight;
    
};

} // namespace Pdf
} // namespace Aspose


