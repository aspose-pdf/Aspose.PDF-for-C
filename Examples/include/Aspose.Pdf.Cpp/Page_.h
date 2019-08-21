#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/text/string_builder.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <system/io/stream.h>
#include <system/io/memory_stream.h>
#include <system/idisposable.h>
#include <system/event.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <drawing/rectangle_f.h>
#include <cstdint>

#include "ISupportsMemoryCleanup.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { class ApsFragment; } }
namespace Aspose { namespace Pdf { class ApsFragmentCollection; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsSubstitutor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsUnembedder; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { template<typename> class FontsRemover; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class PageAnnotationProcessor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentCIDType2FontContentUpdater; } } } } } } }
namespace Aspose { namespace Pdf { class FormattedFragment; } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequencePage; } } }
namespace Aspose { namespace Pdf { namespace Interchange { class DocumentInterchange; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Redaction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class GraphicElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { class HtmlFragment; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ResourceOptimizer; } } }
namespace Aspose { namespace Pdf { namespace Text { class EvaluationTextExportInspector; } } }
namespace Aspose { namespace Pdf { namespace GroupProcessor { class TextExtractor; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { class Image; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Devices { class ImageGenerator; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfPageEditor; } } }
namespace Aspose { namespace Pdf { class Stamp; } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FileAttachmentAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextMarkupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class StampAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class ExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace Forms { class XFA; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Forms { class CheckboxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ListBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonOptionField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RichTextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class SignatureField; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Border; } } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentState; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class DocOutOfMemoryHandler; } }
namespace Aspose { namespace Pdf { class ApsToPdfGraphicStateBuilder; } }
namespace Aspose { namespace Pdf { class ContentsAppender; } }
namespace Aspose { namespace Pdf { class Group; } }
namespace Aspose { namespace Pdf { namespace Annotations { class ScreenAnnotation; } } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class BackgroundArtifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Commands { class PageContentCommandProcessorTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfAConvertTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfXConvertTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfUaConvertTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfUaGenerateTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfFileStampTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDFUA { class PDFUA_CreatingTests; } } } }
namespace Aspose { namespace Pdf { enum class ColorType; } }
namespace Aspose { namespace Pdf { enum class TabOrder; } }
namespace Aspose { namespace Pdf { enum class Rotation; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { class Layer; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { class PageActionCollection; } }
namespace Aspose { namespace Pdf { class TocInfo; } }
namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPage; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class Watermark; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPdfRectangle; } } } }
namespace Aspose { namespace Rendering { class ApsNode; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPageTreeNode; } } } }
namespace Aspose { namespace Pdf { namespace Devices { class PageDevice; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class CompositingParameters; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Operators { class BDC; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Devices { class Resolution; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing page of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API Page FINAL : public System::IDisposable, public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef Page ThisType;
    typedef System::IDisposable BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::ApsFragment;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsUnembedder;
    template<typename FT0> friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontsRemover;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::PageAnnotationProcessor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::Interchange::ContentSequencePage;
    friend class Aspose::Pdf::Interchange::DocumentInterchange;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::HtmlFragment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ResourceOptimizer;
    friend class Aspose::Pdf::Text::EvaluationTextExportInspector;
    friend class Aspose::Pdf::GroupProcessor::TextExtractor;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Devices::ImageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::Stamp;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Annotations::ExplicitDestination;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Annotations::Border;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::DocOutOfMemoryHandler;
    friend class Aspose::Pdf::ApsToPdfGraphicStateBuilder;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Group;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::BackgroundArtifact;
    friend class Aspose::Pdf::Tests::Engine::Commands::PageContentCommandProcessorTests;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfAConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfXConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaConvertTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_2;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaGenerateTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_8;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    friend class Aspose::Pdf::Tests::PDFUA::PDFUA_CreatingTests;
    
public:

    using BeforePageGenerate = System::MulticastDelegate<void(System::SharedPtr<Page>)>;
    
    
public:

    /// <summary>
    /// Gets background image for page (for generator only).
    /// </summary>
    System::SharedPtr<Image> get_BackgroundImage();
    /// <summary>
    /// Sets background image for page (for generator only).
    /// </summary>
    void set_BackgroundImage(System::SharedPtr<Image> value);
    /// <summary>
    /// Gets table of contents info.
    /// </summary>
    /// <value>The table of contents info - default null. If it set this page will contain table of contents.</value>
    System::SharedPtr<Aspose::Pdf::TocInfo> get_TocInfo();
    /// <summary>
    /// Sets table of contents info.
    /// </summary>
    /// <value>The table of contents info - default null. If it set this page will contain table of contents.</value>
    void set_TocInfo(System::SharedPtr<Aspose::Pdf::TocInfo> value);
    /// <summary>
    /// Gets page header.
    /// </summary>
    /// <value>The page header.</value>
    System::SharedPtr<HeaderFooter> get_Header();
    /// <summary>
    /// Sets page header.
    /// </summary>
    /// <value>The page header.</value>
    void set_Header(System::SharedPtr<HeaderFooter> value);
    /// <summary>
    /// Gets layers collection.
    /// </summary>
    /// <value>The layers collection.</value>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> get_Layers();
    /// <summary>
    /// Sets layers collection.
    /// </summary>
    /// <value>The layers collection.</value>
    void set_Layers(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> value);
    /// <summary>
    /// Gets page footer.
    /// </summary>
    /// <value>The page footer.</value>
    System::SharedPtr<HeaderFooter> get_Footer();
    /// <summary>
    /// Sets page footer.
    /// </summary>
    /// <value>The page footer.</value>
    void set_Footer(System::SharedPtr<HeaderFooter> value);
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    /// <value>The paragraphs.</value>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// <summary>
    /// Gets the paragraphs.
    /// </summary>
    /// <value>The paragraphs.</value>
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets the page info.(for generator only)
    /// </summary>
    /// <value>The page info.</value>
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    /// <summary>
    /// Sets the page info.(for generator only)
    /// </summary>
    /// <value>The page info.</value>
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Gets rectangle of the page. Page crop box is returned if specified, otherwise page media box is returned.
    /// Please note that this property don't consider page rotation. To get page rectangle considering rotation please use ActualRect.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get page rectangle:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Page page = document.Pages[1];
    /// Rectangle pageRect = page.Rect;
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rect();
    /// <summary>
    /// Sets rectangle of the page. Page crop box is returned if specified, otherwise page media box is returned.
    /// Please note that this property don't consider page rotation. To get page rectangle considering rotation please use ActualRect.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get page rectangle:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Page page = document.Pages[1];
    /// Rectangle pageRect = page.Rect;
    /// </code>
    /// </example>
    void set_Rect(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Sets color type of the pages based on information getting from operators SetColor,
    /// images and forms.
    /// </summary>
    Aspose::Pdf::ColorType get_ColorType();
    /// <summary>
    /// Gets the line style for notes.(for generator only)
    /// </summary>
    /// <value>The note style.</value>
    System::SharedPtr<GraphInfo> get_NoteLineStyle();
    /// <summary>
    /// Sets the line style for notes.(for generator only)
    /// </summary>
    /// <value>The note style.</value>
    void set_NoteLineStyle(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets tab order of the page. 
    /// Possible values: Row, Column. Default, Manual
    /// </summary>
    Aspose::Pdf::TabOrder get_TabOrder();
    /// <summary>
    /// Sets tab order of the page. 
    /// Possible values: Row, Column. Default, Manual
    /// </summary>
    void set_TabOrder(Aspose::Pdf::TabOrder value);
    /// <summary>
    /// Gets of set page display duration. This is time in seconds that page shall be displayed during presentation.
    /// Returs -1 if duration is not defined. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get page duration
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Page page = document.Pages[1];
    /// int pageRect = page.Duration;
    /// </code>
    /// </example>
    double get_Duration();
    /// <summary>
    /// Gets of set page display duration. This is time in seconds that page shall be displayed during presentation.
    /// Returs -1 if duration is not defined. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get page duration
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Page page = document.Pages[1];
    /// int pageRect = page.Duration;
    /// </code>
    /// </example>
    void set_Duration(double value);
    /// <summary>
    /// Gets collection of operators in the content stream of the page.
    /// <see cref="OperatorCollection"/>
    /// </summary>
    /// <example>
    /// Example is demonstrates how to scan operators stream of page.
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Operators contents = document.Pages[1].Contents;
    /// foreach(Operator op in contents)
    /// {
    ///     Console.WriteLine(op);
    /// }
    /// </code>
    /// </example>
    System::SharedPtr<OperatorCollection> get_Contents();
    /// <summary>
    /// Gets a group attributes class specifying the attributes of the page�s page group for use in the transparent imaging model.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Group> get_Group();
    /// <summary>
    /// Sets a group attributes class specifying the attributes of the page�s page group for use in the transparent imaging model.
    /// </summary>
    void set_Group(System::SharedPtr<Aspose::Pdf::Group> value);
    /// <summary>
    /// Gets collection of page annotations.
    /// <see cref="Annotations"/>
    /// </summary>
    System::SharedPtr<Annotations::AnnotationCollection> get_Annotations();
    /// <summary>
    /// Gets page resources. Resources object contains collections of images, forms and fonts.
    /// <see cref="Resources"/>
    /// </summary>
    /// <example>
    /// Example demonstrates scan through page images:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// DocumentActions actions = document.Actions;
    /// Resources resources = document.Pages[1].Resources;
    /// foreach(XImage image in resources.Images)
    /// {
    ///   Console.WriteLine(image.Width + ":" + image.Height);
    /// }
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Resources> get_Resources();
    /// <summary>
    /// Gets rotation of the page.
    /// </summary>
    /// <example>
    /// Example demonstrates how to determine page rotation.
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Console.WriteLine(document.Pages[1].Rotate);
    /// </code>
    /// </example>
    Rotation get_Rotate();
    /// <summary>
    /// Sets rotation of the page.
    /// </summary>
    /// <example>
    /// Example demonstrates how to determine page rotation.
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Console.WriteLine(document.Pages[1].Rotate);
    /// </code>
    /// </example>
    void set_Rotate(Rotation value);
    /// <summary>
    /// Gets trim box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get trim box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle trimBox = document.Pages[1].TrimBox;
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_TrimBox();
    /// <summary>
    /// Sets trim box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get trim box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle trimBox = document.Pages[1].TrimBox;
    /// </code>
    /// </example>
    void set_TrimBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets art box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get art box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle artBox = document.Pages[1].ArtBox;
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_ArtBox();
    /// <summary>
    /// Sets art box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get art box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle artBox = document.Pages[1].ArtBox;
    /// </code>
    /// </example>
    void set_ArtBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets bleed box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get bleed box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle bleedBox = document.Pages[1].BleedBox;
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_BleedBox();
    /// <summary>
    /// Sets bleed box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get bleed box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle bleedBox = document.Pages[1].BleedBox;
    /// </code>
    /// </example>
    void set_BleedBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets crop box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get crop box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle cropBox = document.Pages[1].CropBox;
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_CropBox();
    /// <summary>
    /// Sets crop box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get crop box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle cropBox = document.Pages[1].CropBox;
    /// </code>
    /// </example>
    void set_CropBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Gets media box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get media box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle mediaBox = document.Pages[1].MediaBox;
    /// </code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_MediaBox();
    /// <summary>
    /// Sets media box of the page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get media box of the page:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// Rectangle mediaBox = document.Pages[1].MediaBox;
    /// </code>
    /// </example>
    void set_MediaBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    /// <summary>
    /// Get number of the page.
    /// </summary>
    int32_t get_Number();
    /// <summary>
    /// Gets transofmation matrix for the page.
    /// </summary>
    System::SharedPtr<Matrix> get_RotationMatrix();
    /// <summary>
    /// Gets the background color of the page.
    /// </summary>
    System::SharedPtr<Color> get_Background();
    /// <summary>
    /// Sets the background color of the page.
    /// </summary>
    void set_Background(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets the watermark of the page.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Watermark> get_Watermark();
    /// <summary>
    /// Sets the watermark of the page.
    /// </summary>
    void set_Watermark(System::SharedPtr<Aspose::Pdf::Watermark> value);
    /// <summary>
    /// Gets collection of artifacts on the page.
    /// </summary>
    System::SharedPtr<ArtifactCollection> get_Artifacts();
    /// <summary>
    /// Gets collection of page properties.
    /// </summary>
    System::SharedPtr<PageActionCollection> get_Actions();
    /// <summary>
    /// Gets list of Field object in Tab order on this page.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Forms::Field>>> get_FieldsInTabOrder();
    
    System::SharedPtr<System::IO::MemoryStream> ConvertToPNGMemoryStream();
    
    /// <summary>
    /// Event for customize header and footer.
    /// </summary>
    System::Event<void(System::SharedPtr<Page>)> OnBeforePageGenerate;
    
    /// <summary>
    /// Gets the flag whether page is blank or not.
    /// </summary>
    /// <value>The fill threshold value that manages the sensitivity of detection. Should be equal or greater than 0.01.</value>
    bool IsBlank(double fillThresholdFactor);
    /// <summary>
    /// Returns rectangle of the page. 
    /// </summary>
    /// <param name="considerRotation">If true then rotation of the page will be considered in rect calculation.</param>
    /// <returns>Rectangle of the page.</returns>
    System::SharedPtr<Aspose::Pdf::Rectangle> GetPageRect(bool considerRotation);
    /// <summary>
    /// Calculates bbox value - rectangle containing contents without visible margins.
    /// </summary>
    /// <returns>Bbox value - rectangle containing contents without visible margins</returns>
    System::SharedPtr<Aspose::Pdf::Rectangle> CalculateContentBBox();
    /// <summary>
    /// Sends page to process with given page device.
    /// </summary>
    /// <param name="device">
    /// The device to process page.
    /// </param>
    /// <param name="output">
    /// Result stream which is used with device to save its output.
    /// </param>
    void SendTo(System::SharedPtr<Devices::PageDevice> device, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Accepts <see cref="AnnotationSelector"/> visitor object that provides functionality to work with annotations.
    /// </summary>
    /// <param name="visitor">Annotation selector sobject.</param>
    void Accept(System::SharedPtr<Annotations::AnnotationSelector> visitor);
    /// <summary>
    /// Translates rotation enumeration member into integer value.
    /// </summary>
    /// <param name="rotation">Rotation enumeratioom member.</param>
    /// <returns>Corresponding integer value</returns>
    static int32_t RotationToInt(Rotation rotation);
    /// <summary>
    /// Translates integer value into corresponding rotation enumeration member.
    /// </summary>
    /// <param name="rotation">Integer value to convert</param>
    /// <returns>Rotation enumeration member</returns>
    static Rotation IntToRotation(int32_t rotation);
    /// <summary>
    /// Put stamp into page. Stamp can be page number, image or simple text, e.g. some logo.
    /// </summary>
    /// <param name="stamp">
    /// Stamp to add on the page. 
    /// Each stamp has its coordinates and corresponding properties regarding to the kind of stamp, 
    /// i.e. image or text value.
    /// </param>
    void AddStamp(System::SharedPtr<Stamp> stamp);
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="imageStream">The stream of the image.</param>
    /// <param name="imageRect">The position of the image.</param>
    void AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Aspose::Pdf::Rectangle> imageRect);
    /// <summary>
    /// Adds searchable image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="hocr">The hocr of the image.</param>
    /// <param name="imageStream">The stream of the image.</param>
    /// <param name="imageRect">The position of the image.</param>
    void AddImage(System::String hocr, System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Aspose::Pdf::Rectangle> imageRect);
    /// <summary>
    /// Adds image on page and places it depend on image rectangle position.
    /// </summary>
    /// <param name="imageStream">The stream of the image.</param>
    /// <param name="imageRect">The default position of the image on page.</param>
    /// <param name="imageWidth">The width of the image.</param>
    /// <param name="imageHeight">The height of the image.</param>
    /// <param name="saveImageProportions">If the flag set to true than image placed in rectangle position; otherwise, the size of rectange is becoming equal to image size.</param>
    void AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Aspose::Pdf::Rectangle> imageRect, int32_t imageWidth, int32_t imageHeight, bool saveImageProportions);
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="imagePath">The path to image.</param>
    /// <param name="rectangle">The position of the image.</param>
    void AddImage(System::String imagePath, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    /// <summary>
    /// Sends page to process with given page device.
    /// </summary>
    /// <param name="device">
    /// The device to process page.
    /// </param>
    /// <param name="outputFileName">
    /// File which is used with device to save its output.
    /// </param>
    void SendTo(System::SharedPtr<Devices::PageDevice> device, System::String outputFileName);
    /// <summary>
    /// Removes all fields located on the page and place their values instead.
    /// </summary>
    void Flatten();
    /// <summary>
    /// Accepts <see cref="TextFragmentAbsorber"/> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text absorber object.</param>
    void Accept(System::SharedPtr<Text::TextFragmentAbsorber> visitor);
    /// <summary>
    /// Accepts <see cref="ImagePlacementAbsorber"/> visitor object that provides functionality to work with image placement objects.
    /// </summary>
    /// <param name="visitor">Image placement absorber object.</param>
    void Accept(System::SharedPtr<ImagePlacementAbsorber> visitor);
    /// <summary>
    /// Accepts <see cref="TextAbsorber"/> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text absorber object.</param>
    void Accept(System::SharedPtr<Text::TextAbsorber> visitor);
    /// <summary>
    /// Sets page size for page. 
    /// </summary>
    /// <param name="width">Page width.</param>
    /// <param name="height">Page size.</param>
    void SetPageSize(double width, double height);
    /// <summary>
    /// Frees up memory
    /// </summary>
    void Dispose();
    /// <summary>
    /// Converts images on page as grayscaled.
    /// </summary>
    void MakeGrayscale();
    /// <summary>
    /// Clears cached data
    /// </summary>
    void FreeMemory();
    /// <summary>
    /// Returns notifications about inside operations with page content. (Only notifications about paragraph events in text adding scenarios are supported now.)
    /// </summary>
    /// <returns>String representing notifications about inside operations with page content.</returns>
    System::String GetNotifications();
    /// <summary>
    /// Converts current page as bitmap and than returns array of bytes.
    /// </summary>
    /// <param name="resolution">The resolution.</param>
    /// <returns>Converted array of image bytes.</returns>
    System::ArrayPtr<uint8_t> AsByteArray(System::SharedPtr<Devices::Resolution> resolution);
    /// <summary>
    /// Converts current page as xml in utf8 encoding.
    /// </summary>
    /// <returns>Converted xml string.</returns>
    System::String AsXml();
    void cpp_switch_document_to_shared();
    
protected:

    bool get_IsRowExceedPageMode();
    void set_IsRowExceedPageMode(bool value);
    double get_IsRowExceedPageHeigth();
    void set_IsRowExceedPageHeigth(double value);
    /// <summary>
    /// Gets page current Y coordinate.
    /// </summary>
    double get_CurY();
    /// <summary>
    /// Sets page current Y coordinate.
    /// </summary>
    void set_CurY(double value);
    /// <summary>
    /// Determines should be exceptions ignored during processing of annotations.
    /// </summary>
    bool get_IgnoreAnnotationExceptions();
    /// <summary>
    /// Determines should be exceptions ignored during processing of annotations.
    /// </summary>
    void set_IgnoreAnnotationExceptions(bool value);
    /// <summary>
    /// Gets page header.
    /// </summary>
    /// <value>The page header.</value>
    bool get_IsPageInfoSet();
    /// <summary>
    /// Sets page header.
    /// </summary>
    /// <value>The page header.</value>
    void set_IsPageInfoSet(bool value);
    /// <summary>
    /// Gets the pages collection.
    /// </summary>
    /// <value>The pages collection.</value>
    System::SharedPtr<PageCollection> get_Pages();
    /// <summary>
    /// Gets the pages collection.
    /// </summary>
    /// <value>The pages collection.</value>
    void set_Pages(System::SharedPtr<PageCollection> value);
    /// <summary>
    /// Gets the page id
    /// </summary>
    /// <value>The page id.</value>
    System::String get_Id();
    /// <summary>
    /// Sets the page id
    /// </summary>
    /// <value>The page id.</value>
    void set_Id(System::String value);
    
    System::WeakPtr<Document> _document;
    System::SharedPtr<Engine::CommonData::IPage> EnginePage;
    
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    bool get_IsNoteMoreThanPage();
    void set_IsNoteMoreThanPage(bool value);
    /// <summary>
    /// Gets current contents appender.
    /// <see cref="ContentsAppender"/>
    /// </summary>
    System::SharedPtr<Aspose::Pdf::ContentsAppender> get_ContentsAppender();
    
    void _SetPageNumber(int32_t number);
    /// <summary>
    /// Get next page and apply defaults.
    /// </summary>
    static System::SharedPtr<Page> GetNextPage(System::SharedPtr<Page> page);
    /// <summary>
    /// Process header and footer.
    /// </summary>
    void ProcessHeaderFooters();
    void SetPageInfo();
    static System::SharedPtr<Page> ProcessPage(System::SharedPtr<Page> page);
    /// <summary>
    /// Process generator paragraphs.
    /// </summary>
    void ProcessParagraphs();
    /// <summary>
    /// Accepts <see cref="ApsNode"/> aps root node (page, canvas, path, etc) object that needed to add onto the page, the clipping feature is skipped. The content is added onto the page.
    /// </summary>
    /// <param name="node">The aps root node object.</param>
    /// <param name="rectangle">The size of area to add apps node object.</param>
    /// <param name="rotateGlyphs">The flag determines whether text glyphs are rotated or not.</param>         
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool rotateGlyphs);
    /// <summary>
    ///  Accepts <see cref="ApsNode"/> aps root node (page, canvas, path, etc) object that needed to add onto the page with clipping feature. The content is added onto the page.        
    /// </summary>
    /// <param name="node">The aps root node object.</param>
    /// <param name="rectangle">The size of area to add apps node object.</param>
    /// <param name="rotateGlyphs">The flag determines whether text glyphs are rotated or not.</param>
    /// <param name="useClipping">The flag determines whether aps fragment is being clipped or not.</param>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool rotateGlyphs, bool useClipping);
    /// <summary>
    /// Accepts <see cref="ApsNode"/> aps root node (page, canvas, path, etc) object that needed to add onto the page.
    /// </summary>
    /// <param name="node">The aps root node object.</param>
    /// <param name="rectangle">The size of area to add apps node object.</param>
    /// <param name="rotateGlyphs">The flag determines whether text glyphs are rotated or not.</param>
    /// <param name="useClipping">The flag determines whether aps fragment is being clipped or not.</param>
    /// <param name="addContent">The flag determines whether aps fragment is being drawed or not.</param>
    /// <returns>The list of operators that aps fragment conatains.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool rotateGlyphs, bool useClipping, bool addContent);
    /// <summary>
    /// Returns rectanlge of the page according to its CropBox and Meia box; 
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRect();
    void InvalidateAnnotations();
    
    Page(System::SharedPtr<Engine::CommonData::IPage> page);
    
    /// <summary>
    /// Returns dictionary that contains frequencies for every unique rotation angle of text found.
    /// </summary>
    /// <returns>Returns dictionary that contains frequencies for every unique rotation angle of text found.</returns>
    System::SharedPtr<System::Collections::Generic::Dictionary<double, int32_t>> GetTextRotationStatistic();
    void UpdateContents();
    /// <summary>
    /// Updates the resources.
    /// </summary>
    void UpdateResources();
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="stream">The stream of the image.</param>
    /// <param name="rectangle">The position of the image.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <returns>List of operators that add image.</returns> 
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<CompositingParameters> compositingParameters);
    /// <summary>
    /// Adds image onto the page and locates it in the middle of specified rectangle saving image's proportion.
    /// </summary>
    /// <param name="stream">The stream of the image.</param>
    /// <param name="rectangle">The position of the image.</param>
    /// <param name="rotationMatrix">The rotation matrix.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <param name="pdfObject">Returns the created image pdf object.</param>
    /// <returns>List of operators that add image.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<Matrix> rotationMatrix, System::SharedPtr<CompositingParameters> compositingParameters, System::SharedPtr<Engine::Data::IPdfObject>& pdfObject, bool isTagged = false, int32_t MCID = 0);
    /// <summary>
    /// Adds image onto the page.
    /// </summary>
    /// <param name="stream">The stream of the image.</param>
    /// <param name="rectangle">The position of the image. If the rectangle is the point image will be added in original size.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <param name="addImage">If true image will be added otherwise not.</param>
    /// <param name="isBlackWhite">If true the image is black and white otherwise not.</param> 
    /// <returns>List of operators that add image.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<CompositingParameters> compositingParameters, bool addImage, bool isBlackWhite, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr, bool isTagged = false, int32_t MCID = 0);
    /// <summary>
    /// Adds image onto the page.
    /// </summary>
    /// <param name="stream">The stream of the image.</param>
    /// <param name="rectangle">The position of the image. If the rectangle is the point image will be added in original size.</param>
    /// <param name="rotationMatrix">The rotation matrix.</param>
    /// <param name="compositingParameters">The compositing parameters.</param>
    /// <param name="addImage">If true image will be added otherwise not.</param>
    /// <param name="isBlackWhite">If true the image is black and white otherwise not.</param> 
    /// <param name="pdfObject">Returns the created image pdf object.</param> 
    /// <returns>List of operators that add image.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle, System::SharedPtr<Matrix> rotationMatrix, System::SharedPtr<CompositingParameters> compositingParameters, bool addImage, bool isBlackWhite, System::SharedPtr<Engine::Data::IPdfObject>& pdfObject, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr, bool isTagged = false, int32_t MCID = 0);
    void Flatten4(bool doRemoveFiedls);
    /// <summary>
    /// 
    /// </summary>
    /// <param name="transition"></param>
    void SetTransition(System::SharedPtr<Engine::Data::IPdfDictionary> transition);
    /// <summary>
    /// Remove references to XObject from page contents (i.e. all Do operators which use name of object).
    /// </summary>
    /// <param name="name"></param>
    void RemoveObjectReferences(System::String name);
    static void RemoveObjectReferences(System::SharedPtr<OperatorCollection> contents, System::String name);
    bool IsUsedOnPage(System::String name);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferences(System::String name);
    /// <summary>
    /// Returns list of operators which uses resource with specified name.
    /// </summary>
    /// <param name="name"></param>
    /// <returns></returns>
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferences(System::SharedPtr<OperatorCollection> Contents, System::String name);
    void FillUsedObjectsTable(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable, System::SharedPtr<Engine::Data::IPdfDictionary> CommonResources);
    void DeleteUnusedResources(System::SharedPtr<Engine::Data::IPdfDictionary> resources, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void DeleteUnusedResources(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void ClearContents();
    void RegisterObservation(System::String message);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    void ReleaseResources();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Image> _backgroundImage;
    System::SharedPtr<Aspose::Pdf::Resources> _resources;
    System::SharedPtr<Annotations::AnnotationCollection> _annotations;
    System::SharedPtr<OperatorCollection> _contents;
    System::SharedPtr<Matrix> _rotationMatrix;
    System::SharedPtr<Aspose::Pdf::ContentsAppender> _contentsAppender;
    System::SharedPtr<Aspose::Pdf::Group> _group;
    System::SharedPtr<GraphInfo> noteLineStyle;
    bool isNoteMoreThanPage;
    System::String id;
    bool _isDisposed;
    System::SharedPtr<ArtifactCollection> _artifacts;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> _layers;
    System::SharedPtr<Aspose::Pdf::Paragraphs> _paragraphs;
    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    System::WeakPtr<PageCollection> _pages;
    System::SharedPtr<PageActionCollection> _actions;
    System::SharedPtr<ApsFragmentCollection> _apsFragments;
    System::SharedPtr<Aspose::Pdf::TocInfo> _tocInfo;
    System::SharedPtr<HeaderFooter> _header;
    System::SharedPtr<HeaderFooter> _footer;
    bool _isPageInfoSet;
    Aspose::Pdf::ColorType _colorType;
    double _curY;
    System::SharedPtr<System::Text::StringBuilder> _observationLog;
    int32_t _number;
    bool pr_IsRowExceedPageMode;
    double pr_IsRowExceedPageHeigth;
    bool pr_IgnoreAnnotationExceptions;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    
    /// <summary>
    /// Copy data from this page to another.
    /// </summary>
    /// <value>The source page.</value>
    void AssignData(System::SharedPtr<Page> page);
    static System::ArrayPtr<uint8_t> ReadFully(System::SharedPtr<System::IO::Stream> input);
    void ProcessHeaderFooterGenerators(System::SharedPtr<PageGenerator> generator, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void ProcessHeaderFooter(System::SharedPtr<HeaderFooter> headerFooter, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    static void ProcessNoteMoreThanPage(System::SharedPtr<Page> page, System::SharedPtr<Page>& newPage, System::SharedPtr<PageGenerator> generator, System::SharedPtr<HeaderFooter> footer, double width, double height, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    System::SharedPtr<Aspose::Pdf::Rectangle> normalize(System::SharedPtr<Engine::CommonData::IPdfRectangle> rect, System::SharedPtr<Engine::CommonData::IPdfRectangle> defaultValue1, System::SharedPtr<Engine::CommonData::IPdfRectangle> defaultValue2);
    void updateBox(System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect);
    int32_t getNodePosition(System::SharedPtr<Engine::CommonData::IPageTreeNode> node);
    int32_t getPagesCount(System::SharedPtr<Engine::CommonData::IPageTreeNode> node);
    Aspose::Pdf::TabOrder TranslateTabOrder(System::String value);
    /// <summary>
    /// Initializes Annotation apperacne if it is not found.
    /// </summary>
    /// <param name="annotation">PDF Object which contains annotation.</param>
    void createAppearance(System::SharedPtr<Engine::Data::IPdfObject> annotation);
    void RemoveFields(System::SharedPtr<Engine::Data::IPdfArray> fields, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> toDelete);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetArtifactOperators(System::SharedPtr<OperatorCollection> contents, System::String subtype);
    static bool IsArtifact(System::SharedPtr<Operators::BDC> op, System::String subtype);
    void assertObject();
    /// <summary>
    /// Mark IPdfObject and all its subobjects as used. 
    /// </summary>
    /// <param name="item"></param>
    /// <param name="usageTable"></param>
    void MarkSubitemsUsed(System::SharedPtr<Engine::Data::IPdfPrimitive> item, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    System::SharedPtr<Engine::Data::IPdfObject> FindColorSpaceByName(System::String name);
    void markColorSpaceUsed(System::SharedPtr<Engine::Data::IPdfPrimitive> name, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void FillUsedObjectsTable(System::SharedPtr<OperatorCollection> operators, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable, System::SharedPtr<Aspose::Pdf::Resources> _Resources, System::SharedPtr<Engine::Data::IPdfDictionary> CommonResources);
    /// <summary>
    /// Returns color type of operators SetColor on page.
    /// </summary>
    /// <returns>The color type value.</returns>
    Aspose::Pdf::ColorType GetColorTypeOperators(System::SharedPtr<OperatorCollection> operators);
    void MakeImagesGrayscale();
    void MakeFormsGrayscale();
    void MakeFormGrayscale(System::SharedPtr<XForm> form);
    
};

} // namespace Pdf
} // namespace Aspose


