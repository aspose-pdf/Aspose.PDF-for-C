#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/image.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsCollector; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class FontCreator; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class PageAnnotationProcessor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequencePage; } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXForm; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WatermarkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontUtils; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace GlyphWidths { class TrueTypeGlyphWidthsProcessor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class GraphicElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace InlineImages { class EndInlineObject; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextExtractionVerifier; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfExtractor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class HighlightAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class XFormCollection; } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { class XImageCollection; } }
namespace Aspose { namespace Pdf { namespace Structure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextModel; } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class ResourcesTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class TextShowingTests; } } } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v16_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontCollection; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { class IResourceDictionary; } } } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing page resources.
/// </summary>
class ASPOSE_PDF_SHARED_API Resources FINAL : public System::Object
{
    typedef Resources ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsCollector;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontCreator;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::PageAnnotationProcessor;
    friend class Aspose::Pdf::Interchange::ContentSequencePage;
    friend class Aspose::Pdf::Interchange::ContentSequenceXForm;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::GlyphWidths::TrueTypeGlyphWidthsProcessor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::InlineImages::EndInlineObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XImage;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Collections::ResourcesTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::Engine::CommonData::PageContent::Operators::TextShowing::TextShowingTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    
public:

    /// <summary>
    /// Gets <see cref="Forms"/> forms collection
    /// </summary>
    System::SharedPtr<XFormCollection> get_Forms();
    /// <summary>
    /// Gets <see cref="Images"/> images collection
    /// </summary>
    System::SharedPtr<XImageCollection> get_Images();
    /// <summary>
    /// Gets <see cref="Fonts"/> resources collection
    /// </summary>
    System::SharedPtr<Text::FontCollection> get_Fonts();
    
    /// <summary>
    /// Returns fonts collection. If resources don't contain fonts entry it will be created in depends of CreateIfAbsent flag.
    /// </summary>
    /// <param name="CreateIfAbsent">If this flag is true then fonts will be created if this entry is absent.</param>
    /// <returns>Fonts collection.</returns>
    System::SharedPtr<Text::FontCollection> GetFonts(bool CreateIfAbsent);
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> _EngineDict;
    System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> _ResourceDictionary;
    System::SharedPtr<OperatorCollection> _Contents;
    
    System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> get_ResourceDictionary();
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<OperatorCollection> get_Contents();
    void set_Contents(System::SharedPtr<OperatorCollection> value);
    System::SharedPtr<Aspose::Pdf::Document> get_Document();
    /// <summary>
    /// True if this resources are common i.e. are shared for several pages 
    /// (placed in pages dictionary as inherited resouirces or in every page as object reference)
    /// Manipulation with common resources must be performed very carefully for example 
    /// deleting object form common resources in one page may cause errors on other pages if deleted object
    /// was used for other pages.
    /// </summary>
    bool get_IsCommonResource();
    /// <summary>
    /// True if this resources are common i.e. are shared for several pages 
    /// (placed in pages dictionary as inherited resouirces or in every page as object reference)
    /// Manipulation with common resources must be performed very carefully for example 
    /// deleting object form common resources in one page may cause errors on other pages if deleted object
    /// was used for other pages.
    /// </summary>
    void set_IsCommonResource(bool value);
    System::SharedPtr<Engine::Data::IPdfObject> get_Source();
    void set_Source(System::SharedPtr<Engine::Data::IPdfObject> value);
    
    /// <summary>
    /// Clears cached forms (this required when fields are flattened)
    /// </summary>
    void ClearFormsCache();
    void InvalidateForms();
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Page> page);
    static void ReleaseResourcesFor(System::SharedPtr<Page> const &page);
    static System::SharedPtr<Resources> Create(System::SharedPtr<Aspose::Pdf::Document> doc, System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> res);
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Forms::Form> form);
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<XForm> xform);
    static void ReleaseResourcesFor(System::SharedPtr<XForm> xform);
    static System::SharedPtr<System::Drawing::Image> GetImage(System::String name, System::SharedPtr<Engine::Data::IPdfDictionary> resources);
    /// <summary>
    /// Determines whether common images are existed in the document.
    /// </summary>
    /// <param name="imageObjectId">The image object id to validate.</param>
    /// <returns>True - the image is common resource; otherwise, false.</returns>
    bool IsXObjectCommon(int32_t imageObjectId);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XImageCollection> images;
    System::SharedPtr<Text::FontCollection> fonts;
    System::SharedPtr<XFormCollection> xforms;
    bool _fontsInitialized;
    bool _imagesInitialized;
    bool _xformsInitialized;
    System::SharedPtr<System::Object> _sync1;
    System::SharedPtr<System::Object> _sync2;
    System::SharedPtr<System::Object> _sync3;
    static const int32_t FALSE;
    static const int32_t TRUE;
    static const int32_t UNKNOWN;
    int32_t _IsCommonResource;
    System::WeakPtr<Aspose::Pdf::Document> _document;
    System::SharedPtr<Engine::Data::IPdfObject> _source;
    
    Resources(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<Engine::Data::IPdfDictionary> resources);
    
};

} // namespace Pdf
} // namespace Aspose


