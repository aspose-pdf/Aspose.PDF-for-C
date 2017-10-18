#ifndef _Aspose_Pdf_Page_h_
#define _Aspose_Pdf_Page_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <system/io/stream.h>
#include <system/idisposable.h>
#include <system/event.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <drawing/rectangle_f.h>
#include <cstdint>

#include "ISupportsMemoryCleanup.h"

namespace Aspose { namespace Pdf { class ApsFragment; } }
namespace Aspose { namespace Pdf { class DocCorrector; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Redaction; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class GraphicElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmenter; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Image; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Devices { class ImageGenerator; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfPageEditor; } } }
namespace Aspose { namespace Pdf { class Stamp; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FileAttachmentAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextMarkupAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class StampAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class ExplicitDestination; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class XFA; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonOptionField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Border; } } } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class ApsToPdfGraphicStateBuilder; } }
namespace Aspose { namespace Pdf { class ContentsAppender; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace XfaRenderer { class XfaCheckButton; } }
namespace Aspose { namespace XfaRenderer { class XfaChoiceList; } }
namespace Aspose { namespace XfaRenderer { class XfaFill; } }
namespace Aspose { namespace XfaRenderer { class XfaRectangle; } }
namespace Aspose { namespace XfaRenderer { class PdfDocumentBuilder; } }
namespace Aspose { namespace XfaRenderer { class XfaLayout; } }
namespace Aspose { namespace XfaRenderer { class XfaRenderer; } }
namespace Aspose { namespace XfaRenderer { class XfaTextRenderer; } }
namespace Aspose { namespace Pdf { class Group; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class ScreenAnnotation; } } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class BackgroundArtifact; } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace Commands { class PageContentCommandProcessorTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfAConvertTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfXConvertTests; } } } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class Layer; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { class PageActionCollection; } }
namespace Aspose { namespace Pdf { class ApsFragmentCollection; } }
namespace Aspose { namespace Pdf { class TocInfo; } }
namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { enum class ColorType; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPage; } } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { enum class TabOrder; } }
namespace Aspose { namespace Pdf { enum class Rotation; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class Watermark; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPdfRectangle; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Rendering { class ApsNode; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPageTreeNode; } } } }
namespace Aspose { namespace Pdf { namespace Devices { class PageDevice; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { class CompositingParameters; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Operators { class BDC; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class XFormCollection; } }

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
    friend class Aspose::Pdf::ApsFragment;
    friend class Aspose::Pdf::DocCorrector;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Redaction;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmenter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
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
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::StampAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::ExplicitDestination;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::XFA;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::XFA;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Border;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::ApsToPdfGraphicStateBuilder;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::XfaRenderer::XfaCheckButton;
    friend class Aspose::XfaRenderer::XfaChoiceList;
    friend class Aspose::XfaRenderer::XfaFill;
    friend class Aspose::XfaRenderer::XfaRectangle;
    friend class Aspose::XfaRenderer::PdfDocumentBuilder;
    friend class Aspose::XfaRenderer::XfaLayout;
    friend class Aspose::XfaRenderer::XfaRenderer;
    friend class Aspose::XfaRenderer::XfaTextRenderer;
    friend class Aspose::Pdf::Group;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::ScreenAnnotation;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::BackgroundArtifact;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Tests::Engine::Commands::PageContentCommandProcessorTests;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfAConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfXConvertTests;
    
public:

    using BeforePageGenerate = System::MulticastDelegate<void(System::SharedPtr<Page>)>;
    
    
public:

    System::SharedPtr<Aspose::Pdf::TocInfo> get_TocInfo();
    void set_TocInfo(System::SharedPtr<Aspose::Pdf::TocInfo> value);
    System::SharedPtr<HeaderFooter> get_Header();
    void set_Header(System::SharedPtr<HeaderFooter> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> get_Layers();
    void set_Layers(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> value);
    System::SharedPtr<HeaderFooter> get_Footer();
    void set_Footer(System::SharedPtr<HeaderFooter> value);
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    System::SharedPtr<Rectangle> get_Rect();
    void set_Rect(System::SharedPtr<Rectangle> value);
    Aspose::Pdf::ColorType get_ColorType();
    System::SharedPtr<GraphInfo> get_NoteLineStyle();
    void set_NoteLineStyle(System::SharedPtr<GraphInfo> value);
    Aspose::Pdf::TabOrder get_TabOrder();
    void set_TabOrder(Aspose::Pdf::TabOrder value);
    double get_Duration();
    void set_Duration(double value);
    System::SharedPtr<OperatorCollection> get_Contents();
    System::SharedPtr<Aspose::Pdf::Group> get_Group();
    void set_Group(System::SharedPtr<Aspose::Pdf::Group> value);
    System::SharedPtr<InteractiveFeatures::Annotations::AnnotationCollection> get_Annotations();
    System::SharedPtr<Aspose::Pdf::Resources> get_Resources();
    Rotation get_Rotate();
    void set_Rotate(Rotation value);
    System::SharedPtr<Rectangle> get_TrimBox();
    void set_TrimBox(System::SharedPtr<Rectangle> value);
    System::SharedPtr<Rectangle> get_ArtBox();
    void set_ArtBox(System::SharedPtr<Rectangle> value);
    System::SharedPtr<Rectangle> get_BleedBox();
    void set_BleedBox(System::SharedPtr<Rectangle> value);
    System::SharedPtr<Rectangle> get_CropBox();
    void set_CropBox(System::SharedPtr<Rectangle> value);
    System::SharedPtr<Rectangle> get_MediaBox();
    void set_MediaBox(System::SharedPtr<Rectangle> value);
    int32_t get_Number();
    System::SharedPtr<DOM::Matrix> get_RotationMatrix();
    System::SharedPtr<Color> get_Background();
    void set_Background(System::SharedPtr<Color> value);
    System::SharedPtr<Aspose::Pdf::Watermark> get_Watermark();
    void set_Watermark(System::SharedPtr<Aspose::Pdf::Watermark> value);
    System::SharedPtr<ArtifactCollection> get_Artifacts();
    System::SharedPtr<PageActionCollection> get_Actions();
    
    System::Event<void(System::SharedPtr<Page>)> OnBeforePageGenerate;
    
    void ProcessParagraphs();
    System::SharedPtr<Rectangle> GetPageRect(bool considerRotation);
    System::SharedPtr<Rectangle> CalculateContentBBox();
    void SendTo(System::SharedPtr<Devices::PageDevice> device, System::SharedPtr<System::IO::Stream> output);
    void Accept(System::SharedPtr<InteractiveFeatures::Annotations::AnnotationSelector> visitor);
    static int32_t RotationToInt(Rotation rotation);
    static Rotation IntToRotation(int32_t rotation);
    void AddStamp(System::SharedPtr<Stamp> stamp);
    void AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Rectangle> imageRect);
    void AddImage(System::String hocr, System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Rectangle> imageRect);
    void AddImage(System::SharedPtr<System::IO::Stream> imageStream, System::SharedPtr<Rectangle> imageRect, int32_t imageWidth, int32_t imageHeight, bool saveImageProportions);
    void AddImage(System::String imagePath, System::SharedPtr<Rectangle> rectangle);
    void SendTo(System::SharedPtr<Devices::PageDevice> device, System::String outputFileName);
    void Flatten();
    void Accept(System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> visitor);
    void Accept(System::SharedPtr<ImagePlacementAbsorber> visitor);
    void Accept(System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> visitor);
    void SetPageSize(double width, double height);
    void Dispose();
    void MakeGrayscale();
    void FreeMemory();
    
    virtual ~Page();
    
protected:

    System::SharedPtr<OperatorCollection> _contents;
    
    bool get_IsPageInfoSet();
    void set_IsPageInfoSet(bool value);
    System::SharedPtr<PageCollection> get_Pages();
    void set_Pages(System::SharedPtr<PageCollection> value);
    
    System::WeakPtr<Document> _document;
    System::SharedPtr<Engine::CommonData::IPage> EnginePage;
    
    System::SharedPtr<Aspose::Pdf::ContentsAppender> get_ContentsAppender();
    
    void _SetPageNumber(int32_t number);
    static System::SharedPtr<Page> GetNextPage(System::SharedPtr<Page> page);
    void ProcessHeaderFooter();
    void SetPageInfo(System::SharedPtr<Aspose::Pdf::Text::TextState> defaultTextState);
    static System::SharedPtr<Page> ProcessPage(System::SharedPtr<Page> page);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool rotateGlyphs);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool rotateGlyphs, bool useClipping);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> Accept(System::SharedPtr<Aspose::Rendering::ApsNode> node, System::Drawing::RectangleF rectangle, bool rotateGlyphs, bool useClipping, bool addContent);
    System::SharedPtr<Rectangle> GetRect();
    
    Page(System::SharedPtr<Engine::CommonData::IPage> page);
    
    void UpdateContents();
    void AddImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Rectangle> rectangle, System::SharedPtr<CompositingParameters> compositingParameters);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> AddImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Rectangle> rectangle, System::SharedPtr<CompositingParameters> compositingParameters, bool addImage, bool isBlackWhite);
    void Flatten4(bool doRemoveFiedls);
    void SetTransition(System::SharedPtr<Engine::Data::IPdfDictionary> transition);
    void RemoveObjectReferences(System::String name);
    static void RemoveObjectReferences(System::SharedPtr<OperatorCollection> contents, System::String name);
    bool IsUsedOnPage(System::String name);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferences(System::String name);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferences(System::SharedPtr<OperatorCollection> Contents, System::String name);
    void FillUsedObjectsTable(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable, System::SharedPtr<Engine::Data::IPdfDictionary> CommonResources);
    void DeleteUnusedResources(System::SharedPtr<Engine::Data::IPdfDictionary> resources, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void DeleteUnusedResources(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void ClearContents();
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Page"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Resources> _resources;
    System::SharedPtr<InteractiveFeatures::Annotations::AnnotationCollection> _annotations;
    System::SharedPtr<DOM::Matrix> _rotationMatrix;
    System::SharedPtr<Aspose::Pdf::ContentsAppender> _contentsAppender;
    System::SharedPtr<Aspose::Pdf::Group> _group;
    System::SharedPtr<GraphInfo> noteLineStyle;
    bool _isDisposed;
    System::SharedPtr<ArtifactCollection> _artifacts;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Layer>>> _layers;
    System::SharedPtr<Aspose::Pdf::Paragraphs> _paragraphs;
    System::SharedPtr<Aspose::Pdf::PageInfo> _pageInfo;
    System::SharedPtr<PageCollection> _pages;
    System::SharedPtr<PageActionCollection> _actions;
    System::SharedPtr<ApsFragmentCollection> _apsFragments;
    System::SharedPtr<Aspose::Pdf::TocInfo> _tocInfo;
    System::SharedPtr<HeaderFooter> _header;
    System::SharedPtr<HeaderFooter> _footer;
    bool _isPageInfoSet;
    Aspose::Pdf::ColorType _colorType;
    int32_t _number;
    bool mIsDisposed;
    
    void AssignData(System::SharedPtr<Page> page);
    System::SharedPtr<Rectangle> normalize(System::SharedPtr<Engine::CommonData::IPdfRectangle> rect, System::SharedPtr<Engine::CommonData::IPdfRectangle> defaultValue1, System::SharedPtr<Engine::CommonData::IPdfRectangle> defaultValue2);
    void updateBox(System::String name, System::SharedPtr<Rectangle> rect);
    int32_t getNodePosition(System::SharedPtr<Engine::CommonData::IPageTreeNode> node);
    int32_t getPagesCount(System::SharedPtr<Engine::CommonData::IPageTreeNode> node);
    Aspose::Pdf::TabOrder TranslateTabOrder(System::String value);
    void createAppearance(System::SharedPtr<Engine::Data::IPdfObject> annotation);
    void RemoveFields(System::SharedPtr<Engine::Data::IPdfArray> fields, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> toDelete);
    static System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetArtifactOperators(System::SharedPtr<OperatorCollection> contents, System::String subtype);
    static bool IsArtifact(System::SharedPtr<Operators::BDC> op, System::String subtype);
    void assertObject();
    void MarkSubitemsUsed(System::SharedPtr<Engine::Data::IPdfPrimitive> item, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable);
    void FillUsedObjectsTable(System::SharedPtr<OperatorCollection> operators, System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> usageTable, System::SharedPtr<Aspose::Pdf::Resources> _Resources, System::SharedPtr<Engine::Data::IPdfDictionary> CommonResources);
    Aspose::Pdf::ColorType GetColorTypeOperators(System::SharedPtr<OperatorCollection> operators);
    Aspose::Pdf::ColorType GetColorTypeResources();
    Aspose::Pdf::ColorType GetColorTypeForms(System::SharedPtr<XFormCollection> xforms);
    Aspose::Pdf::ColorType GetColorTypeForm(System::SharedPtr<Aspose::Pdf::XForm> xform);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Page_h_

