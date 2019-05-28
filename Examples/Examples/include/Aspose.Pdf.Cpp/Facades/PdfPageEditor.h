#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <drawing/rectangle.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPdfRectangle; } } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary> 
/// Represents a class to edit the PDF file's page, including rotating page, zooming page, moving position and changing page size. 
/// </summary>
class ASPOSE_PDF_SHARED_API PdfPageEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfPageEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class Transition : public System::Object
    {
        typedef Transition ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t type;
        System::SharedPtr<Document> document;
        int32_t duration;
        
        int32_t get_Duration();
        void set_Duration(int32_t value);
        
        Transition(System::SharedPtr<Document> document, int32_t type);
        
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetDictionary();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    /// <summary>
    /// Gets or sets duration of the transition effect.
    /// </summary>
    int32_t get_TransitionDuration();
    /// <summary>
    /// Gets or sets duration of the transition effect.
    /// </summary>
    void set_TransitionDuration(int32_t value);
    /// <summary>
    /// Gets or sets transition style to use when moving to this page from another during a presentation.
    /// </summary>
    int32_t get_TransitionType();
    /// <summary>
    /// Gets or sets transition style to use when moving to this page from another during a presentation.
    /// </summary>
    void set_TransitionType(int32_t value);
    /// <summary>
    /// Gets or sets display duration for pages.
    /// </summary>
    int32_t get_DisplayDuration();
    /// <summary>
    /// Gets or sets display duration for pages.
    /// </summary>
    void set_DisplayDuration(int32_t value);
    /// <summary>
    /// Gets or sets the page numbers to be edited. By default, each page would be edited.
    /// </summary>
    System::ArrayPtr<int32_t> get_ProcessPages();
    /// <summary>
    /// Gets or sets the page numbers to be edited. By default, each page would be edited.
    /// </summary>
    void set_ProcessPages(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets or sets the rotation of the pages, the rotation must be 0, 90, 180 or 270.
    /// Default value is 0.
    /// </summary>
    int32_t get_Rotation();
    /// <summary>
    /// Gets or sets the rotation of the pages, the rotation must be 0, 90, 180 or 270.
    /// Default value is 0.
    /// </summary>
    void set_Rotation(int32_t value);
    /// <summary>
    /// A hashtable contains the page number and rotation degree,
    /// the key represents the page number, the value of key represents the rotation in degrees.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> get_PageRotations();
    /// <summary>
    /// A hashtable contains the page number and rotation degree,
    /// the key represents the page number, the value of key represents the rotation in degrees.
    /// </summary>
    void set_PageRotations(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> value);
    /// <summary>
    /// Get or sets zoom coefficient. Value 1.0 corresponds to 100%.
    /// Default value is 1.0.
    /// <example>
    /// The following example demonstrates how to change zoom of the document pages.
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// editor.Zoom = 0.5f;
    /// </code>
    /// </example>
    /// </summary>
    float get_Zoom();
    /// <summary>
    /// Get or sets zoom coefficient. Value 1.0 corresponds to 100%.
    /// Default value is 1.0.
    /// <example>
    /// The following example demonstrates how to change zoom of the document pages.
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// editor.Zoom = 0.5f;
    /// </code>
    /// </example>
    /// </summary>
    void set_Zoom(float value);
    /// <summary>
    /// Gets or sets the output file's page size.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::PageSize> get_PageSize();
    /// <summary>
    /// Gets or sets the output file's page size.
    /// </summary>
    void set_PageSize(System::SharedPtr<Aspose::Pdf::PageSize> value);
    /// <summary>
    /// Gets or sets the horizontal alignment of the original PDF content on the result page, default is AlignmentType.Left.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Gets or sets the horizontal alignment of the original PDF content on the result page, default is AlignmentType.Left.
    /// </summary>
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets or Sets the vertical alignment of the original PDF content on the result page, default is VerticalAlignmentType.Bottom.
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignmentType();
    /// <summary>
    /// Gets or Sets the vertical alignment of the original PDF content on the result page, default is VerticalAlignmentType.Bottom.
    /// </summary>
    void set_VerticalAlignmentType(Aspose::Pdf::VerticalAlignment value);
    
    /// <summary>
    /// Constructor for PdfPageEditor class.
    /// </summary>
    PdfPageEditor();
    /// <summary>
    /// Constructor for PdfPageEditor class.
    /// </summary>
    /// <param name="document">Document object which should be processed.</param>
    PdfPageEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Moves the origin from (0, 0) to the point that appointted. 
    /// The origin is left-bottom and the unit is point(1 inch = 72 points). 
    /// </summary>
    /// <param name="moveX">X-coordinate.</param>
    /// <param name="moveY">Y-coordinate.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("input.pdf");
    /// editor.MovePosition(-100, 60);
    /// editor.Save("moved.pdf");
    /// </code>
    /// </example>
    void MovePosition(float moveX, float moveY);
    /// <summary>
    /// Returns total number of pages.
    /// </summary>  
    /// <returns>Number of pages.</returns>
    /// <example>
    /// The following example demonstrates using of GetPages() method:
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// Console.WriteLine("Document has: " + editor.GetPages());
    /// </code>
    /// </example>
    int32_t GetPages();
    /// <summary>
    /// Returns the page size of the specified page.
    /// </summary>
    /// <param name="page">Page index. Document pages are numbered from 1.</param>
    /// <returns>Result is instance of PageSize. Use Width and Height properties of the returned object to get page width and height.</returns>
    /// <example>
    /// The following example demonstrates using of GetPageSize method: 
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// PageSize size = editor.GetPageSize(1);
    /// Console.WriteLine("Size of 1st page : " + size.Width + " x " + size.Height);
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::PageSize> GetPageSize(int32_t page);
    /// <summary>
    /// Returns the rotation of specified page. 
    /// </summary>
    /// <param name="page">Page index. Document pages are numbered from 1.</param>
    /// <returns>Page rotation in degrees.</returns>
    /// <example>
    /// The following example demonstrates how to get page rotation:
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// int rotation = editor.GetPageSize(1);
    /// Console.WriteLine("Rotation of 1st page : " + rotation + " degrees");        
    /// </code>
    /// </example>
    int32_t GetPageRotation(int32_t page);
    /// <summary>
    /// Returns size of specified box in document.
    /// </summary>
    /// <param name="page">Page index. Document pages are numbered from 1.</param>
    /// <param name="pageBoxName">Box type name. Valid values are: "art", "bleed", "crop", "media", "trim".</param>
    /// <returns>Rectangle which contains requested box.</returns>
    /// <example>
    /// The following example demonstrates how to get media box of the 1st page:
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// System.Drawing.Rectangle rect = editor.GetBoxSize(1, "media");
    /// </code>
    /// </example>
    System::Drawing::Rectangle GetPageBoxSize(int32_t page, System::String pageBoxName);
    /// <summary>
    /// Saves changed document into file. 
    /// </summary>
    /// <param name="outputFile">Path to file where document will be saved.</param>
    /// <example>
    /// The following sample demonstrates how to save changed PDF document
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// editor.Zoom = 0.5f;
    /// editor.Save("newdocument.pdf");
    /// </code>
    /// </example>
    virtual void Save(System::String outputFile);
    /// <summary>
    /// Saves changed document into stream. 
    /// </summary>
    /// <param name="outputStream">Stream where changed PDF document will be saved.</param>
    /// <example>
    /// The following sample demonstrates how to save changed PDF document into stream.
    /// <code lang="C#">
    /// PdfPageEditor editor = new PdfPageEditor();
    /// editor.BindPdf("sample.pdf");
    /// editor.Zoom = 0.5f;
    /// editor.Save("newdocument.pdf");
    /// </code>
    /// </example>
    virtual void Save(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Apply changes made to the document pages.
    /// </summary>
    void ApplyChanges();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t transitionSet;
    int32_t displayDuration;
    int32_t transitionType;
    int32_t transitionDuration;
    System::ArrayPtr<int32_t> pages;
    int32_t rotation;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> pageRotations;
    float zoom;
    System::SharedPtr<Aspose::Pdf::PageSize> pageSize;
    Aspose::Pdf::HorizontalAlignment alignment;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    System::SharedPtr<Point> move;
    static const System::String E_INVALID_ROTATIONS;
    static const System::String E_INVALID_ROTATION_VALUE;
    
    void FlushChanges();
    /// <summary>
    /// Returns rotation value (in degrees) specified by customer for given page.
    /// </summary>
    /// <param name="pageIndex">Page index (starting from 1)</param>
    /// <returns>Rotation angle for page.</returns>
    int32_t getRequestedPageRotation(int32_t pageIndex);
    bool isBoxDefined(System::SharedPtr<Page> page, System::String boxName);
    System::SharedPtr<Rectangle> ToRectangle(System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPdfRectangle> rect);
    System::SharedPtr<Rectangle> GetPageRectangle(System::SharedPtr<Page> page);
    void applyChangesToPage(int32_t pageIndex);
    void checkRotation(int32_t rotation);
    void checkRotations(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> rotations);
    System::Drawing::Rectangle convertToRectangle(System::SharedPtr<Rectangle> rect);
    
public:

    static constexpr int32_t SPLITVOUT = 1;
    static constexpr int32_t SPLITHOUT = 2;
    static constexpr int32_t SPLITVIN = 3;
    static constexpr int32_t SPLITHIN = 4;
    static constexpr int32_t BLINDV = 5;
    static constexpr int32_t BLINDH = 6;
    static constexpr int32_t INBOX = 7;
    static constexpr int32_t OUTBOX = 8;
    static constexpr int32_t LRWIPE = 9;
    static constexpr int32_t RLWIPE = 10;
    static constexpr int32_t BTWIPE = 11;
    static constexpr int32_t TBWIPE = 12;
    static constexpr int32_t DISSOLVE = 13;
    static constexpr int32_t LRGLITTER = 14;
    static constexpr int32_t TBGLITTER = 15;
    static constexpr int32_t DGLITTER = 16;
    
private:

    static constexpr int32_t TRANSITION_DURATION = 1;
    static constexpr int32_t TRANSITION_TYPE = 2;
    static constexpr int32_t DISPLAY_DURATION = 4;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


