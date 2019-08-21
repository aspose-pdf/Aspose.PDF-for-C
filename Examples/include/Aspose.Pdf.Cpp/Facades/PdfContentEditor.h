﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/eventargs.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/boxed_value.h>
#include <system/array.h>
#include <drawing/rectangle.h>
#include <drawing/color.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextSearchOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextEditOptions; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextReplaceOptions; } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Facades { class ReplaceTextStrategy; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class StampType; } } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { namespace Annotations { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Facades { class LineInfo; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Facades { class StampInfo; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to edit PDF file's content.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfContentEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfContentEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class StampData : public System::Object
    {
        typedef StampData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Name();
        System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
        /// <summary>
        /// Gets visibility of stamp.
        /// </summary>
        bool get_Visible();
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineObj();
        Aspose::Pdf::Facades::StampType get_StampType();
        System::SharedPtr<XImage> get_Image();
        System::SharedPtr<XForm> get_Form();
        int32_t get_StampId();
        
        StampData(System::SharedPtr<PdfContentEditor> owner, System::SharedPtr<XImage> image, System::SharedPtr<System::Object> ownerObject, System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, bool visible);
        StampData(System::SharedPtr<PdfContentEditor> owner, System::SharedPtr<XForm> form, System::SharedPtr<System::Object> ownerObject, System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, bool visible);
        
        /// <summary>
        /// Moves the stamp into new location
        /// </summary>
        /// <param name="X">Horizontal coordinate.</param>
        /// <param name="Y">Vertical coordinate.</param>
        /// <returns></returns>
        bool Move(double X, double Y);
        /// <summary>
        /// Deletes the stamp.
        /// </summary>
        /// <returns></returns>
        bool Delete();
        /// <summary>
        /// Hides the stamp.
        /// </summary>
        /// <returns></returns>
        bool Hide();
        /// <summary>
        /// Shows previously hidden stamp the stamp.
        /// </summary>
        /// <returns></returns>
        bool Show();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Page> _ownerPage;
        System::SharedPtr<XForm> _ownerForm;
        System::String _name;
        System::SharedPtr<Matrix> _matrix;
        System::WeakPtr<PdfContentEditor> _owner;
        System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
        bool _visible;
        System::SharedPtr<System::Object> instance;
        
        System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleFromMatrix(System::SharedPtr<Matrix> matrix);
        System::SharedPtr<OperatorCollection> GetContents();
        System::SharedPtr<Resources> GetResources();
        System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangle();
        bool Delete(bool removeResource);
        
    };
    
    
public:

    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions();
    /// <summary>
    /// Gets or sets text search options.
    /// </summary>
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    /// <summary>
    /// Gets or sets text edit options. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> get_TextEditOptions();
    /// <summary>
    /// Gets or sets text edit options. 
    /// </summary>
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> value);
    /// <summary>
    /// Gets or sets text replace options. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> get_TextReplaceOptions();
    /// <summary>
    /// Gets or sets text replace options. 
    /// </summary>
    void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> value);
    /// <summary>
    /// A set of parameters for replace text operation
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> get_ReplaceTextStrategy();
    /// <summary>
    /// A set of parameters for replace text operation
    /// </summary>
    void set_ReplaceTextStrategy(System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> value);
    
    static const System::String DocumentOpen;
    static const System::String DocumentClose;
    static const System::String DocumentWillSave;
    static const System::String DocumentSaved;
    static const System::String DocumentWillPrint;
    static const System::String DocumentPrinted;
    
    /// <summary> 
    /// Binds a PDF file for editing.
    /// </summary>
    /// <param name="inputFile">A PDF file to be edited.</param>
    virtual void BindPdf(System::String inputFile);
    /// <summary> 
    /// Binds a PDF stream for editing.
    /// </summary>
    /// <param name="inputStream">A PDF stream to be edited.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Extracts the collection of Link instances contained in PDF document.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// IList links = editor.ExtractLink();
    /// foreach (object obj in links)
    /// {
    ///     Link link = (Link)obj;
    ///     // work with Link instance
    /// }
    /// </code>  
    /// </example>
    /// <returns>The collection of Link objects</returns>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> ExtractLink();
    /// <summary>
    /// Creates a web link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="url">The web link destination.</param>
    /// <param name="originalPage">The number of original page on which rectangle bound with web link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateWebLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "http://www.aspose.com", 1, System.Drawing.Color.Red,
    ///     new Enum[] { PredefinedAction.FirstPage, PredefinedAction.PrintDialog });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a web link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="url">The web link destination.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with web link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateWebLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "http://www.aspose.com", 1, System.Drawing.Color.Red });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage, System::Drawing::Color clr);
    /// <summary>
    /// Creates a web link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="url">The web link destination.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with web link will be created.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateWebLink(new System.Drawing.Rectangle(0, 0, 100, 100), "http://www.aspose.com", 1 });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage);
    /// <summary>
    /// Creates a local link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="desPage">The destination page.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with local link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateLocalLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     2, 1, System.Drawing.Color.Red,
    ///     new Enum[] { PredefinedAction.FirstPage, PredefinedAction.PrintDialog });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a local link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="desPage">The destination page.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with local link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateLocalLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     2, 1, System.Drawing.Color.Red });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage, System::Drawing::Color clr);
    /// <summary>
    /// Creates a link to another PDF document page.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="remotePdf">The PDF document which page will be opened.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="destinationPage">The destination page.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreatePdfDocumentLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "another_example.pdf", 1, 1, System.Drawing.Color.Red,
    ///     new Enum[] { PredefinedAction.FirstPage, PredefinedAction.PrintDialog });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a link to another PDF document page.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="remotePdf">The PDF document which page will be opened.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="destinationPage">The destination page.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreatePdfDocumentLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "another_example.pdf", 1, 1, System.Drawing.Color.Red });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage, System::Drawing::Color clr);
    /// <summary>
    /// Creates a link to another PDF document page.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="remotePdf">The PDF document which page will be opened.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="destinationPage">The destination page.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreatePdfDocumentLink(new System.Drawing.Rectangle(0, 0, 100, 100), "another_example.pdf", 1, 1 });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage);
    /// <summary>
    /// Creates a link to custom actions in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="color">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>/// 
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateCustomActionLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     1, System.Drawing.Color.Red,
    ///     new Enum[] { PredefinedAction.FirstPage, PredefinedAction.PrintDialog });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateCustomActionLink(System::Drawing::Rectangle rect, int32_t originalPage, System::Drawing::Color color, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a link to launch an application in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="application">The path of application to be launched.</param>
    /// <param name="page">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>/// 
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateApplicationLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "explorer", 1, System.Drawing.Color.Red,
    ///     new Enum[] { PredefinedAction.FirstPage, PredefinedAction.PrintDialog });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a link to launch an application in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="application">The path of application to be launched.</param>
    /// <param name="page">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateApplicationLink(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "explorer", 1, System.Drawing.Color.Red });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page, System::Drawing::Color clr);
    /// <summary>
    /// Creates a link to launch an application in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="application">The path of application to be launched.</param>
    /// <param name="page">The number of original page where rectangle bound with link will be created.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateApplicationLink(new System.Drawing.Rectangle(0, 0, 100, 100), "explorer", 1 });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page);
    /// <summary>
    /// Creates a link to JavaScript in PDF document.
    /// </summary>
    /// <param name="code">The JavaScript code.</param>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="color">The colour of rectangle for active click.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateJavaScriptLink("app.alert('welcome to aspose!');",
    ///     new System.Drawing.Rectangle(0, 0, 100, 100), 1, System.Drawing.Color.Red });
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateJavaScriptLink(System::String code, System::Drawing::Rectangle rect, int32_t originalPage, System::Drawing::Color color);
    /// <summary>
    /// Creates text annotation in PDF document
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="title">The title of the annotation.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="open">A flag specifying whether the annotation should initially be displayed open.</param>
    /// <param name="icon">The name of an icon will be used in displaying the annotation. 
    /// This value can be: "Comment", "Key", "Note", "Help", "NewParagraph", "Paragraph", "Insert"</param>
    /// <param name="page">The number of original page where the text annotation will be created.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateText(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "Welcome to Aspose", "You are welcome to Aspose!", true, "Key", 1);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateText(System::Drawing::Rectangle rect, System::String title, System::String contents, bool open, System::String icon, int32_t page);
    /// <summary>
    /// Creates free text annotation in PDF document
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="page">The number of original page where the text annotation will be created.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateFreeText(new System.Drawing.Rectangle(0, 0, 100, 100), "Welcome to Aspose", 1);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateFreeText(System::Drawing::Rectangle rect, System::String contents, int32_t page);
    /// <summary>
    /// Creates markup annotation it PDF document.
    /// </summary>
    /// <param name="rect">The rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="type">The type of markup annotation. Can be 0 (Highlight), 1 (Underline), 2 (StrikeOut), 3 (Squiggly).</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="clr">The color of markup.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateMarkup(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "Welcome to Aspose", 0, 1, System.Drawing.Color.Red);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateMarkup(System::Drawing::Rectangle rect, System::String contents, int32_t type, int32_t page, System::Drawing::Color clr);
    /// <summary>
    /// Creates popup annotation in PDF document.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="open">A flag specifying whether the pop-up annotation should initially be displayed open.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreatePopup(new System.Drawing.Rectangle(0, 0, 100, 100), "Welcome to Aspose", true, 1);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreatePopup(System::Drawing::Rectangle rect, System::String contents, bool open, int32_t page);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="filePath">The path of the file will be attached.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateFileAttachment(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "Welcome to Aspose", "attachment_file.pdf", 1, "Graph");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::String filePath, int32_t page, System::String name);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="filePath">The path of the file will be attached.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <param name="opacity">Icon's opacity from 0 to 1: 0 - completely transparant, 1 - completely opaque.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateFileAttachment(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///     "Welcome to Aspose", "attachment_file.pdf", 1, "Graph", 0.5);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::String filePath, int32_t page, System::String name, double opacity);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="attachmentStream">The attachment file stream.</param>
    /// <param name="attachmentName">The attachment name.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// using(System.IO.FileStream attStream = System.IO.File.OpenRead("attachment_file.pdf"))
    /// {
    ///     editor.CreateFileAttachment(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///         "Welcome to Aspose", attStream, "attachment_file.pdf", 1, "Graph");
    ///     editor.Save("example_out.pdf");
    /// }
    /// </code>
    /// </example>
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::SharedPtr<System::IO::Stream> attachmentStream, System::String attachmentName, int32_t page, System::String name);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="attachmentStream">The attachment file stream.</param>
    /// <param name="attachmentName">The attachment name.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <param name="opacity">Icon's opacity from 0 to 1: 0 - completely transparant, 1 - completely opaque.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// using(System.IO.FileStream attStream = System.IO.File.OpenRead("attachment_file.pdf"))
    /// {
    ///     editor.CreateFileAttachment(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///         "Welcome to Aspose", attStream, "attachment_file.pdf", 1, "Graph", 0.5);
    ///     editor.Save("example_out.pdf");
    /// }
    /// </code>
    /// </example>
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::SharedPtr<System::IO::Stream> attachmentStream, System::String attachmentName, int32_t page, System::String name, double opacity);
    /// <summary>
    /// Adds document attachment with no annotation.
    /// </summary>
    /// <param name="fileAttachmentPath">The path of the file will be attached.</param>
    /// <param name="description">The description information.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.AddDocumentAttachment("attachment_file.pdf", "description of attachment_file");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void AddDocumentAttachment(System::String fileAttachmentPath, System::String description);
    /// <summary>
    /// Adds document attachment with no annotation.
    /// </summary>
    /// <param name="fileAttachmentStream">The stream of the file will be attached.</param>
    /// <param name="fileAttachmentName">The attachment name.</param>        
    /// <param name="description">The description information.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// using(System.IO.FileStream attStream = System.IO.File.OpenRead("attachment_file.pdf"))
    /// {
    ///     editor.AddDocumentAttachment(attStream, "attachment_file.pdf", "description of attachment_file");
    ///     editor.Save("example_out.pdf");
    /// }    
    /// </code>
    /// </example>
    void AddDocumentAttachment(System::SharedPtr<System::IO::Stream> fileAttachmentStream, System::String fileAttachmentName, System::String description);
    /// <summary>
    /// Deletes all attachments in PDF document.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.DeleteAttachments();
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void DeleteAttachments();
    /// <summary>
    /// Creates line annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="x1">The starting horizontal coordinate of the line.</param>
    /// <param name="y1">The starting vertical coordinate of the line.</param>
    /// <param name="x2">The ending horizontal coordinate of the line.</param>
    /// <param name="y2">The ending vertical coordinate of the line.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="border">The border width in points. If this value is 0 no border is drawn. Default value is 1.</param>
    /// <param name="clr">The color of line.</param>
    /// <param name="borderStyle">The border style specifying the width and dash pattern to be used in drawing the line.
    /// This value can be: "S" (Solid), "D" (Dashed), "B" (Beveled), "I" (Inset), "U" (Underline).</param>
    /// <param name="dashArray">A dash array defining a pattern of dashes and gaps to be used in drawing a dashed border.
    /// If it is used, borderSyle must be accordingly set to "D".</param>
    /// <param name="LEArray">An array of two values respectively specifying the beginning and ending style of the drawing line.
    /// The values can be: "Square", "Circle", "Diamond", "OpenArrow", "ClosedArrow", "None", "Butt", "ROpenArrow", "RClosedArrow", "Slash".</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateLine(new System.Drawing.Rectangle(0, 0, 100, 100), "Welcome to Aspose", 0, 0, 100, 100,
    ///     1, 1, System.Drawing.Color.Red, "D", new int[] {2, 3}, new string[] {"OpenArrow", "ClosedArrow"});
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateLine(System::Drawing::Rectangle rect, System::String contents, float x1, float y1, float x2, float y2, int32_t page, int32_t border, System::Drawing::Color clr, System::String borderStyle, System::ArrayPtr<int32_t> dashArray, System::ArrayPtr<System::String> LEArray);
    /// <summary>
    /// Creates square-circle annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="clr">The colour of square or circle.</param>
    /// <param name="square">True (square), false (sircle).</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="borderWidth">The border width of square or circle.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    ///	editor.CreateSquareCircle(new System.Drawing.Rectangle(0, 0, 100, 100),
    ///	    "Welcome to Aspose", System.Drawing.Color.Red, false, 1, 5);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateSquareCircle(System::Drawing::Rectangle rect, System::String contents, System::Drawing::Color clr, bool square, int32_t page, int32_t borderWidth);
    /// <summary>
    /// Creates curve annotation.
    /// </summary>
    /// <param name="lineInfo">The instance of LineInfo class.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// newApiEditor.BindPdf("example.pdf");
    /// LineInfo lineInfo = new LineInfo();
    /// lineInfo.VerticeCoordinate = new float[] { 0, 0, 100, 100 };  //x1, y1, x2, y2, .. xn, yn
    /// lineInfo.Visibility = true;
    /// editor.DrawCurve(lineInfo, 1, new System.Drawing.Rectangle(0, 0, 0, 0), "Welcome to Aspose");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void DrawCurve(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    /// <summary>
    /// Creates polygon annotation.
    /// </summary>
    /// <param name="lineInfo">The instance of LineInfo class.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <example>
    /// <code lang="C#"> 
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// LineInfo lineInfo = new LineInfo();
    /// lineInfo.VerticeCoordinate = new float[] { 0, 0, 100, 100, 100, 50 };
    /// lineInfo.Visibility = true;
    /// editor.CreatePolygon(lineInfo, 1 , new System.Drawing.Rectangle(0, 0, 0, 0), "Welcome to Aspose");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreatePolygon(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    /// <summary>
    /// Creates polyline annotation.
    /// </summary>
    /// <param name="lineInfo">The instance of LineInfo class.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <example>
    /// <code lang="C#"> 
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// LineInfo lineInfo = new LineInfo();
    /// lineInfo.VerticeCoordinate = new float[] { 0, 0, 100, 100, 100, 50 };
    /// lineInfo.Visibility = true;
    /// editor.CreatePolyLine(lineInfo, 1 , new System.Drawing.Rectangle(0, 0, 0, 0), "Welcome to Aspose");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreatePolyLine(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    /// <summary>
    /// Creates caret annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="caretRect">The actual boundaries of the underlying caret.</param>
    /// <param name="symbol">A symbol will be associated with the caret. Value can be: "P" (Paragraph), "None".</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The colour of the annotation.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    ///	editor.CreateCaret(1,
    ///	    new System.Drawing.Rectangle(50, 50, 100, 100),
    ///	    new System.Drawing.Rectangle(60, 60, 70, 70),
    ///	    "None", "Welcome to Aspose", System.Drawing.Color.Red);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>  
    void CreateCaret(int32_t page, System::Drawing::Rectangle annotRect, System::Drawing::Rectangle caretRect, System::String symbol, System::String annotContents, System::Drawing::Color color);
    /// <summary>
    /// Creates a rubber stamp annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="icon">An icon is to be used in displaying the annotation. Default value: 'Draft'."</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The colour of the annotation.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    ///	editor.CreateRubberStamp(1, System.Drawing.Rectangle(0, 0, 100, 100),
    ///	    "Welcome to Aspose", System.Drawing.Color.Red);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String icon, System::String annotContents, System::Drawing::Color color);
    /// <summary>
    /// Creates a rubber stamp annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The colour of the annotation.</param>
    /// <param name="appearanceFile">The path of appearance file.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    ///	editor.CreateRubberStamp(1, System.Drawing.Rectangle(0, 0, 100, 100),
    ///	    "Welcome to Aspose", System.Drawing.Color.Red, "appearance_file.pdf");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents, System::Drawing::Color color, System::String appearanceFile);
    /// <summary>
    /// Creates a rubber stamp annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The colour of the annotation.</param>
    /// <param name="appearanceStream">The stream of appearance file.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// using (System.IO.FileStream appStream = File.OpenRead("appearance_file.pdf"))
    /// {
    ///	    editor.CreateRubberStamp(1, System.Drawing.Rectangle(0, 0, 100, 100),
    ///	        "Welcome to Aspose", System.Drawing.Color.Red, appStream);
    ///     editor.Save("example_out.pdf");
    /// }    
    /// </code>
    /// </example> 
    void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents, System::Drawing::Color color, System::SharedPtr<System::IO::Stream> appearanceStream);
    /// <summary>
    /// Creates a bookmark with the specified action.
    /// </summary>
    /// <param name="title">The title of the bookmark.</param>
    /// <param name="color">The colour of the bookmark's title.</param>
    /// <param name="boldFlag">The flag of bold attribution.</param>
    /// <param name="italicFlag">The flag of italic attribution.</param>
    /// <param name="file">Another file or application required when the action type is "GoToR" or "Launch".</param>
    /// <param name="actionType">The action type. The value can be: "GoToR", "Launch", "GoTo", "URI".</param>
    /// <param name="destination">The local destination or remote destination or URL.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateBookmarksAction("bookmark title",
    ///     System.Drawing.Color.Red, true, true, null, "GoTo", 1/*page number*/);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void CreateBookmarksAction(System::String title, System::Drawing::Color color, bool boldFlag, bool italicFlag, System::String file, System::String actionType, System::String destination);
    /// <summary>
    /// Adds additional action for document event.
    /// </summary>
    /// <param name="eventType">The document event types.</param>
    /// <param name="code">The code of JavaScript.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.AddDocumentAdditionalAction(PdfContentEditor.DocumentClose, "app.alert('Good-bye!');");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void AddDocumentAdditionalAction(System::String eventType, System::String code);
    /// <summary>
    /// Removes open action from the document. This operation is useful when concatenating multiple documents that use explicit 'GoTo' action on startup.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.RemoveDocumentOpenAction();
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void RemoveDocumentOpenAction();
    /// <summary>
    /// Changes the view preference.
    /// </summary>
    /// <param name="viewerAttribution">The view attribution defined in the ViewerPreference class.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.ChangeViewerPreference(ViewerPreference.HideMenubar);
    /// editor.ChangeViewerPreference(ViewerPreference.PageModeUseNone);
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void ChangeViewerPreference(int32_t viewerAttribution);
    /// <summary>
    /// Returns the view preference.
    /// </summary>
    /// <returns>Returns set of ViewerPrefernece flags </returns>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// int prefValue = editor.GetViewerPreference();
    /// if ((prefValue &amp; ViewerPreference.PageModeUseOutline) != 0)
    /// { // ... }
    /// </code>
    /// </example> 
    int32_t GetViewerPreference();
    /// <summary>
    /// Replaces the specified image on the specified page of PDF document with another image.
    /// </summary>
    /// <param name="pageNumber">The number of page on which the image is replaced.</param>
    /// <param name="index">The index of the image object must be replaced.</param>
    /// <param name="imageFile">The image file will be used for replacing.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.ReplaceImage(1, 1, "image.jpg");
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void ReplaceImage(int32_t pageNumber, int32_t index, System::String imageFile);
    /// <summary>
    /// Deletes the specified images on the specified page.
    /// </summary>
    /// <param name="pageNumber">The number of page on which images must be deleted.</param>
    /// <param name="index">An array repsents images' indexes.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.DeleteImage(1, new int[] {1, 2});
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void DeleteImage(int32_t pageNumber, System::ArrayPtr<int32_t> index);
    /// <summary>
    /// Deletes all images from PDF document.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.DeleteImage();
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example> 
    void DeleteImage();
    /// <summary>
    /// Replaces text in the PDF file on the specified page. <see cref="TextState"/> object (font family, color) can be specified to replaced text.
    /// </summary>
    /// <example>
    /// The example demonstrates how to replace text on the first page of the PDF document and set <see cref="TextState"/> text properties for the new text.
    /// <code lang="C#">
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // Create font and mark it to be embedded
    /// Aspose.Pdf.Text.Font font = FontRepository.FindFont("Courier New");
    /// font.IsEmbedded = true;
    /// 
    /// // create PdfContentEditor object to edit text
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf(doc);
    /// 
    /// // create textState object
    /// TextState textState = new TextState();
    /// textState.Font = font;
    /// textState.FontSize = 17;
    /// textState.FontStyle = FontStyle.Bold | FontStyle.Italic;
    /// textState.ForegroundColor = Color.Red;
    /// 
    /// // change text with specified font
    /// editor.ReplaceText("hello world", 1, "hi world", textState);
    /// 
    /// // save document
    /// doc.Save(outFile);
    /// </code>
    /// </example>
    /// <param name="srcString">The string to be replaced.</param>
    /// <param name="thePage">Page number (0 means "all pages").</param>
    /// <param name="destString">The replaced string.</param>
    /// <param name="textState">Text state (Text Color, Font etc).</param>
    /// <returns>Returns true if replacement was made.</returns>
    bool ReplaceText(System::String srcString, int32_t thePage, System::String destString, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Replaces text in the PDF file.
    /// </summary>
    /// <example>
    /// The example demonstrates how to replace text in PDF document.
    /// <code lang="C#">
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create PdfContentEditor object to edit text
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf(doc);
    /// 
    /// // change text 
    /// editor.ReplaceText("hello world", "hi world");
    /// 
    /// // save document
    /// doc.Save(outFile);
    /// </code>
    /// </example>
    /// <param name="srcString">The string to be replaced.</param>
    /// <param name="destString">Replacing string.</param>
    /// <returns>Returns true if replacement was made.</returns>
    bool ReplaceText(System::String srcString, System::String destString);
    /// <summary>
    /// Replaces text in the PDF file on the specified page.
    /// </summary>
    /// <example>
    /// The example demonstrates how to replace text in PDF document on the specified page.
    /// <code lang="C#">
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // create PdfContentEditor object to edit text
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf(doc);
    /// 
    /// // change text 
    /// editor.ReplaceText("hello world", 1, "hi world");
    /// 
    /// // save document
    /// doc.Save(outFile);
    /// </code>
    /// </example>
    /// <param name="srcString">The sting to be replaced.</param>
    /// <param name="thePage">Page number (0 for all pages)</param>
    /// <param name="destString">Replacing string.</param>
    /// <returns>Returns true if replacement was made.</returns>
    bool ReplaceText(System::String srcString, int32_t thePage, System::String destString);
    /// <summary>
    /// Replaces text in the PDF file using specified <see cref="TextState"/> object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to replace text and set <see cref="TextState"/> text properties for the new text.
    /// <code lang="C#">
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // Create font and mark it to be embedded
    /// Aspose.Pdf.Text.Font font = FontRepository.FindFont("Courier New");
    /// font.IsEmbedded = true;
    /// 
    /// // create PdfContentEditor object to edit text
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf(doc);
    /// 
    /// // create textState object
    /// TextState textState = new TextState();
    /// textState.Font = font;
    /// textState.FontStyle = FontStyle.Bold | FontStyle.Italic;
    /// 
    /// // change text with specified font
    /// editor.ReplaceText("hello world", "hi world", textState);
    /// 
    /// // save document
    /// doc.Save(outFile);
    /// </code>
    /// </example>
    /// <param name="srcString">String to be replaced</param>
    /// <param name="destString">Replacing string</param>
    /// <param name="textState">Text state (Text Color, Font etc)</param>
    /// <returns>Returns true if replacement was made.</returns>
    bool ReplaceText(System::String srcString, System::String destString, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Creates Movie Annotations.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="filePath">The path of movie file to be played.</param>
    /// <param name="page">The page in which the Line annotation is created.</param>
    void CreateMovie(System::Drawing::Rectangle rect, System::String filePath, int32_t page);
    /// <summary>
    /// Creates Sound Annotations.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="filePath">The file path of sound file.</param>
    /// <param name="name">The name of an icon to be used in displaying the annotation,include:Speaker and Mic.</param>
    /// <param name="page">The page in which the Sound annotation is created.</param>
    /// <param name="rate">The sampling rate, in samples per second.</param>
    void CreateSound(System::Drawing::Rectangle rect, System::String filePath, System::String name, int32_t page, System::String rate);
    /// <summary>
    /// Deletes multiple stamps on the specified page by stamp indexes.
    /// </summary>
    /// <param name="pageNumber">Page number where stamp will be deleted.</param>
    /// <param name="index">Stamp indexes.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor contentEditor = new PdfContentEditor();
    /// contentEditor.BindPdf("file.pdf");
    /// contentEditor.DeleteStamp(1, new int[] { 2, 3, 5} );
    /// contentEditor.Save("outfile.pdf");
    /// </code>
    /// </example>
    void DeleteStamp(int32_t pageNumber, System::ArrayPtr<int32_t> index);
    /// <summary>
    /// Deletes stamps with specified IDs from all pages of the document.
    /// </summary>
    /// <param name="stampIds">Array of stamp IDs.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor contentEditor = new PdfContentEditor();
    /// contentEditor.BindPdf("file.pdf");
    /// contentEditor.DeleteStampByIds(new int[] { 102, 103 } );
    /// contentEditor.Save("outfile.pdf");
    /// </code>
    /// </example>
    void DeleteStampByIds(System::ArrayPtr<int32_t> stampIds);
    /// <summary>
    /// Deletes stamps on the specified page by multiple stamp IDs.
    /// </summary>
    /// <param name="pageNumber">Page number where stamps will be deleted.</param>
    /// <param name="stampIds">Array of stamp IDs.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor contentEditor = new PdfContentEditor();
    /// contentEditor.BindPdf("file.pdf");
    /// contentEditor.DeleteStampByIds(1, new int[] { 100, 101 } );
    /// contentEditor.Save("outfile.pdf");
    /// </code>
    /// </example>
    void DeleteStampByIds(int32_t pageNumber, System::ArrayPtr<int32_t> stampIds);
    /// <summary>
    /// Deletes stamp on the specified page by stamp ID.
    /// </summary>
    /// <param name="pageNumber">Page number where stamp will be deleted.</param>
    /// <param name="stampId">Identifier of stanp which should be deleted.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor contentEditor = new PdfContentEditor();
    /// contentEditor.BindPdf("file.pdf");
    /// contentEditor.DeleteStampById(1, 100);
    /// contentEditor.Save("outfile.pdf");
    /// </code>
    /// </example>
    void DeleteStampById(int32_t pageNumber, int32_t stampId);
    /// <summary>
    /// Hides the stamp. After hiding, stamp visibility may be restored with ShowStampById method.
    /// </summary>
    /// <param name="pageNumber">Number of the page.</param>
    /// <param name="stampId">Identifier of stamp which should be hidden.</param>
    void HideStampById(int32_t pageNumber, int32_t stampId);
    /// <summary>
    /// Shows stamp which was hidden by HiddenStampById.
    /// </summary>
    /// <param name="pageNumber">Number of the page.</param>
    /// <param name="stampId">Identifier of stamp which should be shown.</param>
    void ShowStampById(int32_t pageNumber, int32_t stampId);
    /// <summary>
    /// Changes position of the stamp on page. 
    /// </summary>
    /// <param name="pageNumber">Numer of page.</param>
    /// <param name="stampId">Identifier of stamp which should be moved.</param>
    /// <param name="x">New stamp horizontal pozition on the page.</param>
    /// <param name="y">New stamp vertical position on the page.</param>
    void MoveStampById(int32_t pageNumber, int32_t stampId, double x, double y);
    /// <summary>
    /// Changes position of the stamp on page.
    /// </summary>
    /// <param name="pageNumber">Number of page.</param>
    /// <param name="stampIndex">Index of stamp on the page.</param>
    /// <param name="x">New stamp horizontal position.</param>
    /// <param name="y">New stamp vertical position.</param>
    void MoveStamp(int32_t pageNumber, int32_t stampIndex, double x, double y);
    /// <summary>
    /// Delete stamp by ID from all pages of the document.
    /// </summary>
    /// <param name="stampId">Identifier of stamp which should be deleted.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor contentEditor = new PdfContentEditor();
    /// contentEditor.BindPdf("file.pdf");
    /// contentEditor.DeleteStampById(100);
    /// contentEditor.Save("outfile.pdf");
    /// </code>
    /// </example>        
    void DeleteStampById(int32_t stampId);
    
    /// <summary> 
    /// The constructor of the PdfContentEditor object.
    /// </summary>
    PdfContentEditor();
    /// <summary>
    /// Initializes new <see cref="PdfContentEditor"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfContentEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Creates a local link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="desPage">The destination page.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with local link will be created.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf("example.pdf");
    /// editor.CreateLocalLink(new System.Drawing.Rectangle(0, 0, 100, 100), 2, 1});
    /// editor.Save("example_out.pdf");
    /// </code>
    /// </example>
    void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage);
    /// <summary>
    /// Replaces text in the PDF file and sets font size.
    /// </summary>
    /// <example>
    /// The example demonstrates how to replace text and set font size for the new text.
    /// <code lang="C#">
    /// // open document
    /// Document doc = new Document(inFile);
    /// 
    /// // Create font and mark it to be embedded
    /// Aspose.Pdf.Text.Font font = FontRepository.FindFont("Courier New");
    /// font.IsEmbedded = true;
    /// 
    /// // create PdfContentEditor object to edit text
    /// PdfContentEditor editor = new PdfContentEditor();
    /// editor.BindPdf(doc);
    /// 
    /// // change text with specified font
    /// editor.ReplaceText("hello world", "hi world", 14);
    /// 
    /// // save document
    /// doc.Save(outFile);
    /// </code>
    /// </example>
    /// <param name="srcString">String to be replaced.</param>
    /// <param name="destString">Replacing string.</param>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Returns true if replacement was made.</returns>
    bool ReplaceText(System::String srcString, System::String destString, int32_t fontSize);
    /// <summary>
    /// Returns array of stamps on the page.
    /// </summary>
    /// <param name="pageNumber">Page number where stamps will be searched.</param>
    /// <returns>Array of stamps.</returns>
    System::ArrayPtr<System::SharedPtr<StampInfo>> GetStamps(int32_t pageNumber);
    /// <summary>
    /// Closes opened document.
    /// </summary>
    virtual void Close();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> _textSearchOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> _textEditOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> _textReplaceOptions;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::ArrayPtr<System::SharedPtr<PdfContentEditor::StampData>>>> _stamps;
    System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> _replaceTextStrategy;
    static System::String HiddenStampTag;
    
    void SetNextActions(System::SharedPtr<Aspose::Pdf::Annotations::PdfAction> action, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName, bool isNamed);
    void SetNextActions(System::SharedPtr<Aspose::Pdf::Annotations::PdfAction> action, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    void ReplaceTextStrategy_OnPropertiesChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> e);
    void SyncOptionsWithReplaceTextStrategy();
    /// <summary>
    /// Check that XForm is used in  sequence of operators specific to Aspose stamps.
    /// This is required to distinguish from other pictures, forms etc. 
    /// (See Stamp.drawStampOnPage: q - gs - cm - Do - Q operators must be).
    /// </summary>
    /// <param name="contents"></param>
    /// <param name="op"></param>
    /// <returns></returns>
    bool CheckStampSignature(System::SharedPtr<OperatorCollection> contents, System::SharedPtr<Operator> op);
    bool CheckStampSignature(System::SharedPtr<OperatorCollection> contents, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> operators);
    void GetStamps(System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    void GetStamps(System::SharedPtr<Matrix> matrix, System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    void _GetStamps(System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    System::ArrayPtr<System::SharedPtr<PdfContentEditor::StampData>> GetStampsOnPage(int32_t pageIndex);
    bool DeleteStampLogic(int32_t pageIndex, System::ArrayPtr<int32_t> stampIndex);
    void ClearStampCache();
    bool IsResourceInUse(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> resource);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


