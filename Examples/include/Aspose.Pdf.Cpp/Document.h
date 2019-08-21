#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET40CP || NET35CP || NETCORE)


// C# preprocessor directive: #endif


// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using Aspose.Pdf.Engine.Security.Impl.Digests;

// C# preprocessor directive: #endif


#include <xml/xml_text_writer.h>
#include <xml/xml_reader_settings.h>
#include <system/string.h>
#include <system/nullable.h>
#include <system/multicast_delegate.h>
#include <system/io/memory_stream.h>
#include <system/idisposable.h>
#include <system/event.h>
#include <system/enum_helpers.h>
#include <system/dummy_classes.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <drawing/image.h>

#include "Text/TextOptions/TextEditOptions.h"
#include "Security/CryptoAlgorithm.h"
#include "Optimization/OptimizationOptions.h"
#include "ISupportsMemoryCleanup.h"
#include "InteractiveFeatures/Forms/Form_.h"
#include "HtmlSaveOptions.h"
#include "CommonData/Text/Fonts/FontSubstitutions/IFontSubstitutionRegistrator.h"
#include "CommonData/IDocumentSecondaryStrategies.h"

namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicense; } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class RestrictionChecker; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { class ApsFragment; } }
namespace Aspose { namespace Pdf { class ApsFragmentCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontFactory; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsIterator; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsSubsetter; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsUnembedder; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { template<typename> class FontsRemover; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class XObjectsProcessor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentCIDType2FontContentUpdater; } } } } } } }
namespace Aspose { namespace Pdf { class DocumentFactory; } }
namespace Aspose { namespace Pdf { class FormattedFragment; } }
namespace Aspose { namespace Pdf { namespace Interchange { class DocumentInterchange; } } }
namespace Aspose { namespace Pdf { namespace Interchange { namespace Helpers { class MetadataHelper; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class NamedDestinationCollection; } }
namespace Aspose { namespace Pdf { namespace Annotations { class PdfActionCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DArtwork; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DCrossSectionArray; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DStream; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DViewArray; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DCrossSection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RedactionAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontUtils; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace GlyphWidths { class TrueTypeGlyphWidthsProcessor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicenseDecoder; } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class VentureLicenser; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class GraphicElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { class ResourceDictionary; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Encoding { namespace PdfFontEncoding { class SimpleFontEncodingBase; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class CIDFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class PdfFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TaggedPdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class VersionConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { class PdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor2; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ResourceOptimizer; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class UnusedObjectsScanner; } } }
namespace Aspose { namespace Pdf { namespace Text { class EvaluationTextExportInspector; } } }
namespace Aspose { namespace Pdf { namespace Text { template<typename> class TableElementCollection; } } }
namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { class DestinationCollection; } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
namespace Aspose { namespace src { class TreeNamedDestinations; } }
namespace Aspose { namespace Pdf { namespace Devices { class ImageGenerator; } } }
namespace Aspose { namespace Pdf { class DocumentInfo; } }
namespace Aspose { namespace Pdf { class EmbeddedFileCollection; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfAnnotationEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfExtractor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileInfo; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileStamp; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfJavaScriptStripper; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfPageEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfXmpMetadata; } } }
namespace Aspose { namespace Pdf { class ImageStamp; } }
namespace Aspose { namespace Pdf { class Stamp; } }
namespace Aspose { namespace Pdf { namespace Annotations { class ActionCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationCollection; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AppearanceDictionary; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class MarkupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DocumentActionCollection; } } }
namespace Aspose { namespace Pdf { namespace Forms { class XFA; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Forms { class CheckboxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ChoiceOptionCollection; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ListBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class OptionCollection; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonOptionField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RichTextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class SignatureField; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class GoToAction; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class LaunchAction; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacementCollection; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { namespace Text { class CharInfoCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegmentCollection; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class XFormCollection; } }
namespace Aspose { namespace Pdf { class XImageCollection; } }
namespace Aspose { namespace Pdf { class DocOutOfMemoryHandler; } }
namespace Aspose { namespace Pdf { class DocConverter; } }
namespace Aspose { namespace Pdf { namespace Annotations { class NamedDestination; } } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class XfaMerge; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class SvgConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace APSImpl { class APSPresenter; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace IndependentImpl { namespace ColorInitializerStrategies { class RgbColorConversionStrategy; } } } } } }
namespace Aspose { namespace Pdf { class OutlineCollection; } }
namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class FontSharedObjectsUpdateManager; } } } } } }
namespace Aspose { namespace Pdf { class ExcelConverter; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class OperatorCollectionTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextSegmentTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextFragmentAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextFragmentTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class VersionsTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DocumentTest; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfAConvertTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfXConvertTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace OriginalKit { namespace New { class FunctionalTests_v4_8; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace OriginalKit { namespace New { class RegressionTests_v4_4; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace OriginalKit { namespace New { class RegressionTests_v4_5; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { class XfaRendererTests; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v16_11; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v16_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontSubstitutionRegistratorTests; } } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfUaConvertTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace IO { class PdfUaGenerateTests; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Lic { class MeteredTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDFUA { class PDFUA_CreatingTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Utils { class DocumentComparer; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_10; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_11; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfFileSecurityTests; } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextEditOptions; } } }
namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class Direction; } }
namespace Aspose { namespace Pdf { enum class PageMode; } }
namespace Aspose { namespace Pdf { enum class PageLayout; } }
namespace Aspose { namespace Pdf { enum class PrintDuplex; } }
namespace Aspose { namespace Pdf { class Collection; } }
namespace Aspose { namespace Pdf { class Metadata; } }
namespace Aspose { namespace Pdf { class Copier; } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { class PageLabelCollection; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { class JavaScriptCollection; } }
namespace Aspose { namespace Rendering { class ApsPage; } }
namespace Aspose { namespace Pdf { namespace Text { class IFontSubstitutionRegistrator; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class IDocumentFontSaveOptions; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class IAppointment; } } }
namespace Aspose { namespace Pdf { namespace Structure { class RootElement; } } }
namespace Aspose { namespace Pdf { class Id; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Tagged { class ITaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Addressing { class IRegistrar; } } } }
namespace Aspose { namespace Pdf { enum class FontSubsetStrategy : uint8_t; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Encoding { namespace PdfFontEncoding { enum class SimpleFontEncodingRules : uint8_t; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IDocumentSecondaryStrategiesDefaults; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Encoding { namespace PdfFontEncoding { class SimpleFontEncodingStrategy; } } } } } } }
namespace Aspose { namespace Pdf { class HtmlSaveOptions; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Devices { class DocumentDevice; } } }
namespace Aspose { namespace Pdf { enum class ConvertErrorAction; } }
namespace Aspose { namespace Pdf { enum class ConvertTransparencyAction; } }
namespace Aspose { namespace Pdf { class PdfFormatConversionOptions; } }
namespace Aspose { namespace Pdf { class LoadOptions; } }
namespace Aspose { namespace Pdf { namespace Facades { class DocumentPrivilege; } } }
namespace Aspose { namespace Pdf { enum class Permissions; } }
namespace Aspose { namespace Pdf { enum class SaveFormat; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace Types { class IPdfStreamAccessor; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFontDescriptor; } } } } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { namespace Operators { class SelectFont; } } }
namespace Aspose { namespace Pdf { class Paragraphs; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// The <b>Aspose.Pdf</b> is a root namespace for all classes of Aspose.Pdf library which are either directly in it like <b>Document</b> or indirectly through several subnamespaces.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class representing PDF document
/// </summary>
class ASPOSE_PDF_SHARED_API Document FINAL : public System::IDisposable, public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef Document ThisType;
    typedef System::IDisposable BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LicenseManagement::RestrictionChecker;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::ApsFragment;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontFactory;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsIterator;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsUnembedder;
    template<typename FT0> friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontsRemover;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::XObjectsProcessor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::DocumentFactory;
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::Interchange::DocumentInterchange;
    friend class Aspose::Pdf::Interchange::Helpers::MetadataHelper;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::NamedDestinationCollection;
    friend class Aspose::Pdf::Annotations::PdfActionCollection;
    friend class Aspose::Pdf::Annotations::PdfActionCollection;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Annotations::PDF3DStream;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSection;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontUtils;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::GlyphWidths::TrueTypeGlyphWidthsProcessor;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::LicenseManagement::VentureLicenseDecoder;
    friend class Aspose::Pdf::LicenseManagement::VentureLicenser;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::ResourceDictionary;
    friend class Aspose::Pdf::Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingBase;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::CIDFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::PdfFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TaggedPdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::VersionConvertStrategy;
    friend class Aspose::Pdf::Engine::PdfDocument;
    friend class Aspose::Pdf::Optimization::ImageCompressor2;
    friend class Aspose::Pdf::Optimization::ResourceOptimizer;
    friend class Aspose::Pdf::Optimization::UnusedObjectsScanner;
    friend class Aspose::Pdf::Text::EvaluationTextExportInspector;
    template<typename FT0> friend class Aspose::Pdf::Text::TableElementCollection;
    template<typename FT0> friend class Aspose::Pdf::Text::TableElementCollection;
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::src::TreeNamedDestinations;
    friend class Aspose::Pdf::Devices::ImageGenerator;
    friend class Aspose::Pdf::DocumentInfo;
    friend class Aspose::Pdf::EmbeddedFileCollection;
    friend class Aspose::Pdf::EmbeddedFileCollection;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfAnnotationEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Facades::PdfFileStamp;
    friend class Aspose::Pdf::Facades::PdfJavaScriptStripper;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::Facades::PdfXmpMetadata;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Stamp;
    friend class Aspose::Pdf::Annotations::ActionCollection;
    friend class Aspose::Pdf::Annotations::ActionCollection;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Annotations::DocumentActionCollection;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ChoiceOptionCollection;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::OptionCollection;
    friend class Aspose::Pdf::Forms::OptionCollection;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::RichTextBoxField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Annotations::GoToAction;
    friend class Aspose::Pdf::Annotations::LaunchAction;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacementCollection;
    friend class Aspose::Pdf::ImagePlacementCollection;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::CharInfoCollection;
    friend class Aspose::Pdf::Text::CharInfoCollection;
    friend class Aspose::Pdf::Text::TextParagraphCollection;
    friend class Aspose::Pdf::Text::TextParagraphCollection;
    friend class Aspose::Pdf::Text::TextAbsorber;
    friend class Aspose::Pdf::Text::FontCollection;
    friend class Aspose::Pdf::Text::FontCollection;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextSegmentCollection;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::DocOutOfMemoryHandler;
    friend class Aspose::Pdf::DocConverter;
    friend class Aspose::Pdf::Annotations::NamedDestination;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::XfaMerge;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::SvgConverter;
    friend class Aspose::Pdf::Engine::Presentation::APSImpl::APSPresenter;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::RgbColorConversionStrategy;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineItemCollection;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::FontSharedObjectsUpdateManager;
    friend class Aspose::Pdf::ExcelConverter;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::Engine::IO::VersionsTests;
    friend class Aspose::Pdf::Tests::Facades::DocumentTest;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfAConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfXConvertTests;
    friend class Aspose::Pdf::Tests::OriginalKit::New::FunctionalTests_v4_8;
    friend class Aspose::Pdf::Tests::OriginalKit::New::RegressionTests_v4_4;
    friend class Aspose::Pdf::Tests::OriginalKit::New::RegressionTests_v4_5;
    friend class Aspose::Pdf::Tests::XfaRendererTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_8;
    friend class Aspose::Pdf::Tests::Engine::CommonData::Text::Fonts::FontSubstitutionRegistratorTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaConvertTests;
    friend class Aspose::Pdf::Tests::Engine::IO::PdfUaGenerateTests;
    friend class Aspose::Pdf::Tests::Lic::MeteredTests;
    friend class Aspose::Pdf::Tests::PDFUA::PDFUA_CreatingTests;
    friend class Aspose::Pdf::Tests::Utils::DocumentComparer;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    friend class Aspose::Pdf::Tests::Facades::PdfFileSecurityTests;
    
public:

    using FontSubstitutionHandler = System::MulticastDelegate<void(System::SharedPtr<Text::Font>, System::SharedPtr<Text::Font>)>;
    using CallBackGetHocr = System::MulticastDelegate<System::String(System::SharedPtr<System::Drawing::Image>)>;
    
    
public:

    class ASPOSE_PDF_SHARED_API IDocumentFontUtilities : public System::Object
    {
        typedef IDocumentFontUtilities ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Subsets all fonts in document
        /// </summary>
        /// <param name="subsetStrategy">strategy</param>
        virtual void SubsetFonts(FontSubsetStrategy subsetStrategy) = 0;
        /// <summary>
        /// Returns all fonts from document
        /// </summary>
        /// <returns>fonts</returns>
        virtual System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::Font>> GetAllFonts() = 0;
        
    };
    
    class ASPOSE_PDF_SHARED_API OptimizationOptions : public Aspose::Pdf::Optimization::OptimizationOptions
    {
        typedef OptimizationOptions ThisType;
        typedef Aspose::Pdf::Optimization::OptimizationOptions BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates optimization strategy will all options activated.
        /// </summary>
        /// <returns>OptimizationOptions object.</returns>
        static System::SharedPtr<Document::OptimizationOptions> All();
        
    };
    
    
protected:

    template<typename T>
    class CutByRestrictionWrapper : public System::Object
    {
        typedef CutByRestrictionWrapper<T> ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
    public:
    
        static void CutByRestriction(System::SharedPtr<Document> doc, System::SharedPtr<System::Collections::Generic::IList<T>> list)
        {
            if (!get__IsLicensed() && !doc->get__IsObjectLicensed() && !get_Indivisible() && !list->get_IsReadOnly())
            {
                while (list->get_Count() > 4)
                {
                    list->RemoveAt(list->get_Count() - 1);
                }
            }
        }
        
        void SetTemplateWeakPtr(unsigned int argument) override
        {
            switch (argument)
            {
                case 0:
                    break;
            }
        }
        
    };
    
    
private:

    class FontSubstitutionCallback : public Aspose::Pdf::Text::IFontSubstitutionCallback
    {
        typedef FontSubstitutionCallback ThisType;
        typedef Aspose::Pdf::Text::IFontSubstitutionCallback BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        bool get_NotifyAboutFontSubstitutions();
        System::SharedPtr<Engine::Addressing::IRegistrar> get_Registrar();
        
        FontSubstitutionCallback(System::SharedPtr<Document> owner);
        
        void NotifyAboutSubstitution(System::SharedPtr<Text::Font> oldFont, System::SharedPtr<Text::Font> newFont);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::WeakPtr<Document> _owner;
        
    };
    
    class DocumentFontUtilities : public Aspose::Pdf::Document::IDocumentFontUtilities
    {
        typedef DocumentFontUtilities ThisType;
        typedef Aspose::Pdf::Document::IDocumentFontUtilities BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        DocumentFontUtilities(System::SharedPtr<Document> doc);
        
        /// <summary>
        /// Subsets all fonts in document
        /// </summary>
        void SubsetFonts(FontSubsetStrategy subsetStrategy);
        /// <summary>
        /// Returns all fonts from document
        /// </summary>
        /// <returns>fonts</returns>
        System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::Font>> GetAllFonts();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Document> _doc;
        
    };
    
    class SecondaryStrategies : public Aspose::Pdf::Engine::CommonData::IDocumentSecondaryStrategies
    {
        typedef SecondaryStrategies ThisType;
        typedef Aspose::Pdf::Engine::CommonData::IDocumentSecondaryStrategies BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingRules get_SimpleFontEncodingRule();
        void set_SimpleFontEncodingRule(Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingRules value);
        
        SecondaryStrategies();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Engine::CommonData::IDocumentSecondaryStrategiesDefaults> _strategiesDefaults;
        System::SharedPtr<Engine::CommonData::Text::Encoding::PdfFontEncoding::SimpleFontEncodingStrategy> _simpleFontEncodingStrategy;
        
    };
    
    class FontUsage : public System::Object
    {
        typedef FontUsage ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Operators::SelectFont> Font;
        int32_t Index;
        int32_t Usages;
        
        FontUsage(System::SharedPtr<Operators::SelectFont> font, int32_t index);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    /// <summary>
    /// Collection of JavaScript of document level.
    /// </summary>
    System::SharedPtr<JavaScriptCollection> get_JavaScript();
    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    static bool get_IsLicensed();
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
    /// Gets the is document pdfa compliant.
    /// </summary>
    bool get_IsPdfaCompliant();
    /// <summary>
    /// Gets the is document pdfua compliant.
    /// </summary>
    bool get_IsPdfUaCompliant();
    /// <summary>
    /// Gets  the is document pdfa compliant.
    /// </summary>
    bool get_IsXrefGapsAllowed();
    /// <summary>
    /// Sets  the is document pdfa compliant.
    /// </summary>
    void set_IsXrefGapsAllowed(bool value);
    /// <summary>
    /// Collection of Named Destination in the document.
    /// </summary>
    System::SharedPtr<NamedDestinationCollection> get_NamedDestinations();
    /// <summary>
    /// Gets the collection of destinations.
    /// Obsolete. Please use NamedDestinations.
    /// </summary>
    System::SharedPtr<DestinationCollection> get_Destinations();
    /// <summary>
    /// Gets PDF format
    /// </summary>
    Aspose::Pdf::PdfFormat get_PdfFormat();
    /// <summary>
    /// Property which declares that document must embed all standard Type1 fonts 
    /// which  has flag IsEmbedded set into true. All PDF fonts can be embedded 
    /// into document simply via setting of flag IsEmbedded into true, but PDF standard Type1 fonts is an exception from this rule.
    /// Standard Type1 font embedding requires much time, so to embed these fonts it's necessary
    /// not only set flag IsEmbedded into true for specified font but also set 
    /// an additiona flag on document's level - EmbedStandardFonts = true;
    /// This property can be set only one time for all fonts.
    /// By default false.
    /// </summary>
    bool get_EmbedStandardFonts();
    /// <summary>
    /// Property which declares that document must embed all standard Type1 fonts 
    /// which  has flag IsEmbedded set into true. All PDF fonts can be embedded 
    /// into document simply via setting of flag IsEmbedded into true, but PDF standard Type1 fonts is an exception from this rule.
    /// Standard Type1 font embedding requires much time, so to embed these fonts it's necessary
    /// not only set flag IsEmbedded into true for specified font but also set 
    /// an additiona flag on document's level - EmbedStandardFonts = true;
    /// This property can be set only one time for all fonts.
    /// By default false.
    /// </summary>
    void set_EmbedStandardFonts(bool value);
    /// <summary>
    /// IDocumentFontUtilities instance
    /// </summary>
    System::SharedPtr<Document::IDocumentFontUtilities> get_FontUtilities();
    /// <summary>
    /// Gets collection of document. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Collection> get_Collection();
    /// <summary>
    /// Gets collection of document. 
    /// </summary>
    void set_Collection(System::SharedPtr<Aspose::Pdf::Collection> value);
    /// <summary>
    /// Gets a version of Pdf from Pdf file header.
    /// </summary>
    System::String get_Version();
    /// <summary>
    /// Gets action performed at document opening. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// IAppointment value = document.OpenAction;
    /// </code>
    /// </example>
    System::SharedPtr<Annotations::IAppointment> get_OpenAction();
    /// <summary>
    /// Sets action performed at document opening. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// IAppointment value = document.OpenAction;
    /// </code>
    /// </example>
    void set_OpenAction(System::SharedPtr<Annotations::IAppointment> value);
    /// <summary>
    /// Gets flag specifying whether toolbar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideToolBar flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.HideToolBar;
    /// </code>
    /// </example>
    bool get_HideToolBar();
    /// <summary>
    /// Sets flag specifying whether toolbar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideToolBar flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.HideToolBar;
    /// </code>
    /// </example>
    void set_HideToolBar(bool value);
    /// <summary>
    /// Gets flag specifying whether menu bar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideMenubar flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.HideMenubar;
    /// </code>
    /// </example>
    bool get_HideMenubar();
    /// <summary>
    /// Sets flag specifying whether menu bar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideMenubar flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.HideMenubar;
    /// </code>
    /// </example>
    void set_HideMenubar(bool value);
    /// <summary>
    /// Gets flag specifying whether user interface elements should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideWindowUI flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.HideWindowUI;
    /// </code>
    /// </example>
    bool get_HideWindowUI();
    /// <summary>
    /// Sets flag specifying whether user interface elements should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideWindowUI flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.HideWindowUI;
    /// </code>
    /// </example>
    void set_HideWindowUI(bool value);
    /// <summary>
    /// Gets flag specifying whether document window must be resized to fit the first displayed page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get FitWindow flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.FitWindow;
    /// </code>
    /// </example>
    bool get_FitWindow();
    /// <summary>
    /// Sets flag specifying whether document window must be resized to fit the first displayed page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get FitWindow flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.FitWindow;
    /// </code>
    /// </example>
    void set_FitWindow(bool value);
    /// <summary>
    /// Gets flag specifying whether position of the document's window will be centerd on the screen.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.CenterWindow;
    /// </code>
    /// </example>
    bool get_CenterWindow();
    /// <summary>
    /// Sets flag specifying whether position of the document's window will be centerd on the screen.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.CenterWindow;
    /// </code>
    /// </example>
    void set_CenterWindow(bool value);
    /// <summary>
    /// Gets flag specifying whether document's window title bar should display document title.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get DisplayDocTitle flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.DisplayDocTitle;
    /// </code>
    /// </example>
    bool get_DisplayDocTitle();
    /// <summary>
    /// Sets flag specifying whether document's window title bar should display document title.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get DisplayDocTitle flag:
    /// <code lang="C#">
    /// Document document = new Document("sample.pdf");
    /// bool value = document.DisplayDocTitle;
    /// </code>
    /// </example>
    void set_DisplayDocTitle(bool value);
    /// <summary>
    /// Gets collection of document pages.
    /// Note that pages are numbered from 1 in collection.
    /// </summary>
    /// <example>
    /// Example below demonstrates how to operate with the document pages:
    /// How to obtain number of pages and how to obtain rectangle of starting page of the document. 
    /// <code lang="C#">
    /// Aspose.Pdf.Document document = new Aspose.Pdf.Document("sample.pdf");
    /// Aspose.Pdf.PageCollection pages = document.Pages;
    /// System.Console.WriteLine("Document contains " + pages.Count);
    /// Page page = pages[1];
    /// Rectangle rect = page.Rect;        
    /// </code>
    /// </example>
    System::SharedPtr<PageCollection> get_Pages();
    /// <summary>
    /// Gets document outlines.
    /// </summary>
    System::SharedPtr<OutlineCollection> get_Outlines();
    /// <summary>
    /// Gets document actions. This property is instance of DocumentActions class which allows to get/set BeforClosing, BeforSaving, etc. actions. 
    /// </summary>
    /// <example>
    /// This example demonstrates how to obtain after open action of the document:
    /// <code lang="C#">
    /// Aspose.Pdf.Document document = new Aspose.Pdf.Document("d:\\work\\aspose\\aspose.pdf.kit.net.new\\trunk\\testdata\\Aspose.Pdf\\PdfWithOpenAction.pdf");
    /// Aspose.Pdf.Annotations.DocumentActionCollection actions = document.Actions;
    /// Aspose.Pdf.Annotations.PdfAction afterSavingAction = actions.AfterSaving;
    /// </code>
    /// </example>
    System::SharedPtr<Annotations::DocumentActionCollection> get_Actions();
    /// <summary>
    /// Gets Acro Form of the document.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Forms::Form> get_Form();
    /// <summary>
    /// Gets collection of files embedded to document. 
    /// </summary>
    System::SharedPtr<EmbeddedFileCollection> get_EmbeddedFiles();
    /// <summary>
    /// Gets reading order of text: L2R (left to right) or R2L (right to left).
    /// </summary>
    Aspose::Pdf::Direction get_Direction();
    /// <summary>
    /// Sets reading order of text: L2R (left to right) or R2L (right to left).
    /// </summary>
    void set_Direction(Aspose::Pdf::Direction value);
    /// <summary>
    /// Gets page mode, specifying how document should be displayed when opened. 
    /// </summary>
    Aspose::Pdf::PageMode get_PageMode();
    /// <summary>
    /// Sets page mode, specifying how document should be displayed when opened. 
    /// </summary>
    void set_PageMode(Aspose::Pdf::PageMode value);
    /// <summary>
    /// Gets page mode, specifying how to display the document on exiting full-screen mode.
    /// </summary>
    Aspose::Pdf::PageMode get_NonFullScreenPageMode();
    /// <summary>
    /// Sets page mode, specifying how to display the document on exiting full-screen mode.
    /// </summary>
    void set_NonFullScreenPageMode(Aspose::Pdf::PageMode value);
    /// <summary>
    /// Gets page layout which shall be used when the document is opened.
    /// </summary>
    Aspose::Pdf::PageLayout get_PageLayout();
    /// <summary>
    /// Sets page layout which shall be used when the document is opened.
    /// </summary>
    void set_PageLayout(Aspose::Pdf::PageLayout value);
    /// <summary>
    /// Gets print duplex mode handling option to use when printing the file from the print dialog.
    /// </summary>
    PrintDuplex get_Duplex();
    /// <summary>
    /// Sets print duplex mode handling option to use when printing the file from the print dialog.
    /// </summary>
    void set_Duplex(PrintDuplex value);
    /// <summary>
    /// Name of the PDF file that caused this document
    /// </summary>
    System::String get_FileName();
    /// <summary>
    /// Gets document info.
    /// </summary>
    System::SharedPtr<DocumentInfo> get_Info();
    /// <summary>
    /// Document metadata.
    /// (A PDF document may include general information,
    ///  such as the document's title, author, and creation and modification dates.
    ///  Such global information about the document (as opposed to its content or structure) is called metadata
    ///  and is intended to assist in cataloguing and searching for documents in external databases.)
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Metadata> get_Metadata();
    /// <summary>
    /// Gets logical structure of the document. 
    /// </summary>
    System::SharedPtr<Structure::RootElement> get_LogicalStructure();
    /// <summary>
    /// Gets security settings if document is encrypted. 
    /// If document is not encrypted then corresponding exception will be raised in .net 1.1
    /// or CryptoAlgorithm will be null for other .net versions.
    /// </summary>
    System::Nullable<Aspose::Pdf::CryptoAlgorithm> get_CryptoAlgorithm();
    /// <summary>
    /// Gets a value indicating whether document is linearized.
    /// </summary>
    bool get_IsLinearized();
    /// <summary>
    /// Sets a value indicating whether document is linearized.
    /// </summary>
    void set_IsLinearized(bool value);
    /// <summary>
    /// Gets permissions of the document.
    /// </summary>
    int32_t get_Permissions();
    /// <summary>
    /// Gets encrypted status of the document. True if document is encrypted.
    /// </summary>
    bool get_IsEncrypted();
    /// <summary>
    /// Gets the ID.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Id> get_Id();
    /// <summary>
    /// Gets the background color of the document.
    /// </summary>
    System::SharedPtr<Color> get_Background();
    /// <summary>
    /// Sets the background color of the document.
    /// </summary>
    void set_Background(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets optimization flag. When pages are added to document, equal resource streams in resultant file are
    /// merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    bool get_OptimizeSize();
    /// <summary>
    /// Sets optimization flag. When pages are added to document, equal resource streams in resultant file are
    /// merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    void set_OptimizeSize(bool value);
    /// <summary>
    /// Allows to merge page contents to optimize docuement size. If used then differnet but duplicated pages may reference to the 
    /// same content object. Please note that this mode may cause side effects like changing page content when other page is changed.
    /// </summary>
    bool get_AllowReusePageContent();
    /// <summary>
    /// Allows to merge page contents to optimize docuement size. If used then differnet but duplicated pages may reference to the 
    /// same content object. Please note that this mode may cause side effects like changing page content when other page is changed.
    /// </summary>
    void set_AllowReusePageContent(bool value);
    /// <summary>
    /// Gets flag of ignoring errors in source files. 
    /// When pages from source document copied into destination document, copying process is stopped with exception 
    /// if some objects in source files are corrupted when this flag is false. 
    /// example: dest.Pages.Add(src.Pages);
    /// If this flag is set to true then corrupted objects will be replaced with empty values.
    /// By default: true.
    /// </summary>
    bool get_IgnoreCorruptedObjects();
    /// <summary>
    /// Sets flag of ignoring errors in source files. 
    /// When pages from source document copied into destination document, copying process is stopped with exception 
    /// if some objects in source files are corrupted when this flag is false. 
    /// example: dest.Pages.Add(src.Pages);
    /// If this flag is set to true then corrupted objects will be replaced with empty values.
    /// By default: true.
    /// </summary>
    void set_IgnoreCorruptedObjects(bool value);
    /// <summary>
    /// Gets page labels in the document. 
    /// </summary>
    System::SharedPtr<PageLabelCollection> get_PageLabels();
    /// <summary>
    /// Get or sets flag which enables document partially be unloaded from memory. 
    /// This allow to decrease memory usage but may have negative effect on perofmance.
    /// 
    /// </summary>
    bool get_EnableObjectUnload();
    /// <summary>
    /// Get or sets flag which enables document partially be unloaded from memory. 
    /// This allow to decrease memory usage but may have negative effect on perofmance.
    /// 
    /// </summary>
    void set_EnableObjectUnload(bool value);
    /// <summary>
    ///     <para>Gets access to TaggedPdf content.</para>
    /// </summary>
    /// <example>
    /// <para>The example demonstrates how to use tagged content for creating new document with header, paragraphs and images.</para>
    /// <code>
    ///     // Create new document
    ///     Document document = new Document();
    ///     
    ///     // Get the tagged content
    ///     ITaggedContent taggedContent = document.TaggedContent;
    ///     
    ///     // Set language for document
    ///     taggedContent.SetLanguage("en-US");
    ///     
    ///     // Set title for PDF document
    ///     taggedContent.SetTitle("Example document");
    ///     
    ///     // Creating and adding Section
    ///     SectElement sect = taggedContent.CreateSectElement();
    ///     taggedContent.RootElement.AppendChild(sect);
    ///     
    ///     // Create Header
    ///     HeaderElement h1 = taggedContent.CreateHeaderElement(1);
    ///     h1.SetText("The Header");
    ///     sect.AppendChild(h1);
    ///     
    ///     // Create paragraph
    ///     ParagraphElement p = taggedContent.CreateParagraphElement();
    ///     p.SetTag("Paragraph");
    ///     p.SetText("The text of paragraph.");
    ///     sect.AppendChild(p);
    /// 
    ///     // Create illustration
    ///     IllustrationElement figure1 = taggedContent.CreateFigureElement();
    ///     sect.AppendChild(figure1);
    ///     figure1.AlternativeText = "Figure 1";
    ///     figure1.Title = "Image 1";
    ///     figure1.SetTag("Fig");
    ///     figure1.SetImage("path/of/image.jpg");
    /// 
    ///     // Save document
    ///     document.Save("example.pdf");
    /// </code>
    /// </example>
    System::SharedPtr<Tagged::ITaggedContent> get_TaggedContent();
    
    /// <summary>
    /// Occurs when font replaces another font in document.
    /// </summary>
    System::Event<void(System::SharedPtr<Text::Font>, System::SharedPtr<Text::Font>)> FontSubstitution;
    
    /// <summary>
    /// Remove pdfa compliance from the document
    /// </summary>
    void RemovePdfaCompliance();
    /// <summary>
    /// Remove pdfUa compliance from the document
    /// </summary>
    void RemovePdfUaCompliance();
    /// <summary>
    /// Set Title for Pdf Document
    /// </summary>
    /// <param name="title">Document's title</param>
    void SetTitle(System::String title);
    
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" /> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    Document(System::SharedPtr<System::IO::Stream> input);
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" /> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    /// <param name="password">User or owner password.</param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    Document(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" /> stream.
    /// </summary>
    /// <param name="input">Stream with pdf document. </param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    Document(System::SharedPtr<System::IO::Stream> input, bool isManagedStream);
    /// <summary>
    /// Just init Document using <paramref name="filename" />. The same as <see cref="Document(Stream)"/>.
    /// </summary>
    /// <param name="filename">The name of the pdf document file. </param>
    Document(System::String filename);
    
    /// <summary>
    /// Process paragraphs for generator.
    /// </summary>
    void ProcessParagraphs();
    /// <summary>
    /// Stores document into stream.
    /// </summary>
    /// <param name="output">Stream where document shell be stored.</param>
    void Save(System::SharedPtr<System::IO::Stream> output);
    
    /// <summary>
    /// Initialize new Document instance from the <paramref name="input" /> stream.
    /// </summary>
    /// <param name="input">Input stream object, corresponding pdf is password protected.</param>
    /// <param name="password">User or owner password.</param>
    Document(System::SharedPtr<System::IO::Stream> input, System::String password);
    
    /// <summary>
    /// Saves document into the specified file.
    /// </summary>
    /// <param name="outputFileName">Path to file where the document will be stored.</param>
    void Save(System::String outputFileName);
    /// <summary>
    /// Exports all document annotations to XFDF file
    /// </summary>
    /// <param name="fileName">XFDF file name</param>
    void ExportAnnotationsToXfdf(System::String fileName);
    /// <summary>
    /// Export all document annotations into stream.
    /// </summary>
    /// <param name="stream">Stream where store XFDF.</param>
    void ExportAnnotationsToXfdf(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Sends the whole document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="output">
    /// Output stream contains the results of the document processing with given device.
    /// </param>
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Sends the certain pages of the document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="fromPage">
    /// The first page for processing.
    /// </param>
    /// <param name="toPage">
    /// The last page for processing.
    /// </param>
    /// <param name="output">
    /// Output stream contains the results of the document pages processing with given device.
    /// </param>
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output);
    /// <summary>
    /// Sends the whole document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="outputFileName">
    /// Output file name with the results of processing.
    /// </param>
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, System::String outputFileName);
    /// <summary>
    /// Sends the whole document to the document device for processing.
    /// </summary>
    /// <param name="device">
    /// Document device which is used to process the document.
    /// </param>
    /// <param name="fromPage">
    /// The first page for processing.
    /// </param>
    /// <param name="toPage">
    /// The last page for processing.
    /// </param>
    /// <param name="outputFileName">
    /// Output file name with the results of processing.
    /// </param>
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, int32_t fromPage, int32_t toPage, System::String outputFileName);
    /// <summary>
    /// Removes metadata from the document.
    /// </summary>
    void RemoveMetadata();
    /// <summary>
    /// Imports annotations from XFDF file to document.
    /// </summary>
    /// <param name="fileName">XFDF file name</param>
    void ImportAnnotationsFromXfdf(System::String fileName);
    /// <summary>
    /// Imports annotations from stream to document.
    /// </summary>
    /// <param name="stream">Stream contains XFDF data.</param>
    void ImportAnnotationsFromXfdf(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <returns>The operation result</returns>
    bool Validate(System::String outputLogFileName, Aspose::Pdf::PdfFormat format);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    /// <returns>The operation result</returns>
    bool Convert(System::String outputLogFileName, Aspose::Pdf::PdfFormat format, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="outputLogStream">Stream where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<System::IO::Stream> outputLogStream, Aspose::Pdf::PdfFormat format, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    bool Convert(System::String outputLogFileName, Aspose::Pdf::PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Convert document using specified conversion options
    /// </summary>
    /// <param name="options">set of options for convert PDF document</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<PdfFormatConversionOptions> options);
    /// <summary>
    ///  Convert page to PNG for DSR, OMR , OCR 
    /// </summary>
    /// <param name="page"></param>
    /// <returns></returns>
    System::SharedPtr<System::IO::MemoryStream> ConvertPageToPNGMemoryStream(System::SharedPtr<Page> page);
    /// <summary>
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="outputLogStream">Stream where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <returns>The operation result</returns>
    bool Validate(System::SharedPtr<System::IO::Stream> outputLogStream, Aspose::Pdf::PdfFormat format);
    /// <summary>
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="options">set of options for convert PDF document</param>
    /// <returns>The operation result</returns>
    bool Validate(System::SharedPtr<PdfFormatConversionOptions> options);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="callback">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    bool Convert(Document::CallBackGetHocr callback);
    /// <summary>
    /// Convert document and save errors into the specified stream.
    /// </summary>
    /// <param name="outputLogStream">Stream where the comments will be stored.</param>
    /// <param name="format">Pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<System::IO::Stream> outputLogStream, Aspose::Pdf::PdfFormat format, ConvertErrorAction action);
    
    /// <summary>
    /// Initializes empty document.
    /// </summary>
    Document();
    /// <summary>
    /// Opens an existing document from a file providing necessary converting options to get pdf document.
    /// </summary>
    /// <param name="filename">
    /// Input file to convert into pdf document.
    /// </param>
    /// <param name="options">
    /// Represents properties for converting <paramref name="filename"/> into pdf document.
    /// </param>
    Document(System::String filename, System::SharedPtr<LoadOptions> options);
    
    /// <summary>
    /// Converts source file in source format into destination file in destination format.
    /// </summary>
    /// <param name="srcFileName">The source file name.</param>
    /// <param name="loadOptions">The source file format.</param>
    /// <param name="dstFileName">The destination file name.</param>
    /// <param name="saveOptions">The destination file format.</param>
    static void Convert(System::String srcFileName, System::SharedPtr<LoadOptions> loadOptions, System::String dstFileName, System::SharedPtr<SaveOptions> saveOptions);
    /// <summary>
    /// Converts stream in source format into destination file in destination format.
    /// </summary>
    /// <param name="srcStream">The source stream.</param>
    /// <param name="loadOptions">The source stream format.</param>
    /// <param name="dstFileName">The destination file name.</param>
    /// <param name="saveOptions">The destination file format.</param>
    static void Convert(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<LoadOptions> loadOptions, System::String dstFileName, System::SharedPtr<SaveOptions> saveOptions);
    /// <summary>
    /// Converts source file in source format into stream in destination format.
    /// </summary>
    /// <param name="srcFileName">The source file name.</param>
    /// <param name="loadOptions">The source file format.</param>
    /// <param name="dstStream">The destination stream.</param>
    /// <param name="saveOptions">The destination stream format.</param>
    static void Convert(System::String srcFileName, System::SharedPtr<LoadOptions> loadOptions, System::SharedPtr<System::IO::Stream> dstStream, System::SharedPtr<SaveOptions> saveOptions);
    /// <summary>
    /// Converts stream in source format into stream in destination format.
    /// </summary>
    /// <param name="srcStream">The source stream.</param>
    /// <param name="loadOptions">The source stream format.</param>
    /// <param name="dstStream">The destination stream.</param>
    /// <param name="saveOptions">The destination file format.</param>
    static void Convert(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<LoadOptions> loadOptions, System::SharedPtr<System::IO::Stream> dstStream, System::SharedPtr<SaveOptions> saveOptions);
    
    /// <summary>
    /// Opens an existing document from a stream providing necessary converting to get pdf document.
    /// </summary>
    /// <param name="input">
    /// Input stream to convert into pdf document.
    /// </param>
    /// <param name="options">
    /// Represents properties for converting <paramref name="input"/> into pdf document.
    /// </param>
    Document(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    
    /// <summary>
    /// Removes all fields from the document and place their values instead.
    /// </summary>
    void Flatten();
    /// <summary>
    /// Removes all fields from the document and place their values instead.
    /// </summary>
    /// <param name="flattenSettings">Settings for flattening process.</param>
    void Flatten(System::SharedPtr<Aspose::Pdf::Forms::Form::FlattenSettings> flattenSettings);
    /// <summary>
    /// Encrypts the document. Call then Save to get encrypted version of the document.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="privileges">Document permissions, see <see cref="Permissions"/> for details.</param>
    /// <param name="cryptoAlgorithm">Cryptographic algorithm, see <see cref="CryptoAlgorithm"/> for details.</param>
    /// <param name="usePdf20">Support for revision 6 (Extension 8).</param>
    void Encrypt(System::String userPassword, System::String ownerPassword, System::SharedPtr<Facades::DocumentPrivilege> privileges, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm, bool usePdf20);
    /// <summary>
    /// Encrypts the document. Call then Save to get encrypted version of the document.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="permissions">Document permissions, see <see cref="Permissions"/> for details.</param>
    /// <param name="cryptoAlgorithm">Cryptographic algorithm, see <see cref="CryptoAlgorithm"/> for details.</param>
    void Encrypt(System::String userPassword, System::String ownerPassword, Aspose::Pdf::Permissions permissions, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm);
    /// <summary>
    /// Encrypts the document. Call then Save to get encrypted version of the document.
    /// </summary>
    /// <param name="userPassword">User password.</param>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="permissions">Document permissions, see <see cref="Permissions"/> for details.</param>
    /// <param name="cryptoAlgorithm">Cryptographic algorithm, see <see cref="CryptoAlgorithm"/> for details.</param>
    /// <param name="usePdf20">Support for revision 6 (Extension 8).</param>
    void Encrypt(System::String userPassword, System::String ownerPassword, Aspose::Pdf::Permissions permissions, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm, bool usePdf20);
    /// <summary>
    /// Changes document passwords. This action can be done only using owner password.
    /// </summary>
    /// <param name="ownerPassword">Owner password.</param>
    /// <param name="newUserPassword">New user password.</param>
    /// <param name="newOwnerPassword">New owner password.</param>
    void ChangePasswords(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword);
    
    /// <summary>
    /// Initializes new instance of the <see cref="Document"/> class for working with encrypted document. 
    /// </summary>
    /// <param name="filename">Document file name.</param>
    /// <param name="password">User or owner password.</param>
    Document(System::String filename, System::String password);
    /// <summary>
    /// Initializes new instance of the <see cref="Document"/> class for working with encrypted document. 
    /// </summary>
    /// <param name="filename">Document file name.</param>
    /// <param name="password">User or owner password.</param>
    /// <param name="isManagedStream">if set to <c>true</c> inner stream is closed before exit; otherwise, is not.</param>
    Document(System::String filename, System::String password, bool isManagedStream);
    
    /// <summary>
    /// Decrypts the document. Call then Save to obtain decrypted version of the document.
    /// </summary>
    void Decrypt();
    /// <summary>
    /// Linearize document in order to
    /// - open the first page as quickly as possible;
    /// - display next page or follow by link to the next page as quickly as possible;
    /// - display the page incrementally as it arrives when data for a page is delivered over a slow channel (display the most useful data first);
    /// - permit user interaction, such as following a link, to be performed even before the entire page has been received and displayed.
    /// Invoking this method doesn't actually saves the document. On the contrary the document only is prepared to have optimized structure,
    /// call then Save to get optimized document.
    /// </summary>
    void Optimize();
    /// <summary>
    /// Save document incrementally (i.e. using incremental update technque).
    /// </summary>
    /// <remarks>
    /// In order to save document incremetally we should open the document file for writing. 
    /// Therefore Document must be initialized with writable stream like in the next code snippet:
    /// Document doc = new Document(new FileStream("document.pdf", FileMode.Open, FileAccess.ReadWrite));
    /// // make some changes and save the document incrementally
    /// doc.Save();
    /// </remarks>
    void Save();
    /// <summary>
    /// Saves the document with a new name along with a file format.
    /// </summary>
    /// <param name="outputFileName">Path to file where the document will be stored.</param>
    /// <param name="format">Format options.</param>
    void Save(System::String outputFileName, SaveFormat format);
    /// <summary>
    /// Saves the document with a new name along with a file format.
    /// </summary>
    /// <exception cref="ArgumentException"><see cref="ArgumentException"/> when <see cref="HtmlSaveOptions"/> is passed to a method. Save a document to the html stream is not supported. Please use method save to the file.</exception>
    /// <param name="outputStream">Stream where the document will be stored.</param>
    /// <param name="format">Format options.</param>
    void Save(System::SharedPtr<System::IO::Stream> outputStream, SaveFormat format);
    /// <summary>
    /// Saves the document with a new name setting its save options.
    /// </summary>
    /// <param name="outputFileName">Path to file where the document will be stored.</param>
    /// <param name="options">Save options.</param>
    void Save(System::String outputFileName, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Saves the document to a stream with a save options.
    /// </summary>
    /// <exception cref="ArgumentException"><see cref="ArgumentException"/> when <see cref="HtmlSaveOptions"/> is passed to a method. Save a document to the html stream is not supported. Please use method save to the file.</exception>
    /// <param name="outputStream">Stream where the document will be stored.</param>
    /// <param name="options">Save options.</param>
    void Save(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Saves the document to a response stream with a save options.
    /// </summary>
    /// <param name="response">Encapsulates HTTP-response information.</param>
    /// <param name="outputFileName">Simple file name, i.e. without path.</param>
    /// <param name="disposition">Represents a MIME protocol Content-Disposition header.</param>
    /// <param name="options">Save options.</param>
    void Save(System::SharedPtr<System::Web::HttpResponse> response, System::String outputFileName, ContentDisposition disposition, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Closes all resources used by this document.
    /// </summary>
    void Dispose();
    /// <summary>
    /// Optimize resources in the document:
    /// 1. Resources which are not used on the document pages are removed;
    /// 2. Equal resources are joined into one object; 
    /// 3. Unused objects are deleted.
    /// </summary>
    void OptimizeResources();
    /// <summary>
    /// Optimize resources in the document according to defined optimization strategy.
    /// </summary>
    /// <param name="strategy">Optimization strategy.</param>
    void OptimizeResources(System::SharedPtr<Aspose::Pdf::Optimization::OptimizationOptions> strategy);
    /// <summary>
    /// Returns item value from catalog dictionary.
    /// </summary>
    /// <param name="key">The key of item.</param>
    /// <returns>Item value - if key was successfully found; otherwise, null.</returns>
    System::SharedPtr<System::Object> GetCatalogValue(System::String key);
    /// <summary>
    /// Clears memory
    /// </summary>
    void FreeMemory();
    /// <summary>
    ///  Save document to XML.
    /// </summary>
    /// <param name="file">The document model xml file</param>
    void SaveXml(System::String file);
    /// <summary>
    /// Gets a object with specified ID in the document.
    /// </summary>
    /// <param name="id">The object id.</param>
    /// <returns>The object with specified id. Null if the id is not found.</returns>
    System::SharedPtr<System::Object> GetObjectById(System::String id);
    /// <summary>
    /// Bind xml to document
    /// </summary>
    /// <param name="file">The xml file</param>
    void BindXml(System::String file);
    /// <summary>
    /// Repairs broken document. 
    /// </summary>
    void Repair();
    /// <summary>
    /// Bind xml/xsl to document
    /// </summary>
    /// <param name="xmlFile">The xml file.</param>
    /// <param name="xslFile">The xsl file if XSLT is used.</param>
    void BindXml(System::String xmlFile, System::String xslFile);
    /// <summary>
    /// Bind xml/xsl to document
    /// </summary>
    /// <param name="xmlStream">The xml stream.</param>
    /// <param name="xslStream">The xsl stream if XSLT is used.</param>
    void BindXml(System::SharedPtr<System::IO::Stream> xmlStream, System::SharedPtr<System::IO::Stream> xslStream);
    /// <summary>
    /// Bind xml/xsl to document
    /// </summary>
    /// <param name="xmlStream">The xml stream.</param>
    /// <param name="xslStream">The xsl stream if XSLT is used.</param>
    /// <param name="settings">The xml reader settings.</param>
    void BindXml(System::SharedPtr<System::IO::Stream> xmlStream, System::SharedPtr<System::IO::Stream> xslStream, System::SharedPtr<System::Xml::XmlReaderSettings> settings);
    /// <summary>
    /// Bind xml to document
    /// </summary>
    /// <param name="stream">The xml stream.</param>
    void BindXml(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Get XMP metadata from document.
    /// </summary>
    /// <param name="stream">Stream where metadata will be stored.</param>
    void GetXmpMetadata(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Set XMP metadata of document.
    /// </summary>
    /// <param name="stream">Stream which contains XMP metadata.</param>
    void SetXmpMetadata(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Validates document.
    /// </summary>
    /// <param name="doRepair">If true found issues will be repaired.</param>
    /// <returns></returns>
    bool Check(bool doRepair);
    
protected:

    /// <summary>
    /// List of APS pages for the case of F1-to-F2 conversion when neither F1 nor F2 is PDF.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Rendering::ApsPage>>> get_ApsPages();
    /// <summary>
    /// List of APS pages for the case of F1-to-F2 conversion when neither F1 nor F2 is PDF.
    /// </summary>
    void set_ApsPages(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Rendering::ApsPage>>> value);
    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    static bool get__IsLicensed();
    /// <summary>
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    bool get__IsObjectLicensed();
    static bool get_Indivisible();
    bool get_IsParagraphsAdded();
    void set_IsParagraphsAdded(bool value);
    bool get_IsLayersAdded();
    void set_IsLayersAdded(bool value);
    Text::TextEditOptions::FontReplace get_FontReplaceBehavior();
    void set_FontReplaceBehavior(Text::TextEditOptions::FontReplace value);
    
    static int32_t& IndivisibleLevel();
    
    static System::SharedPtr<System::Object> syncRoot;
    
    static bool get___Indivisible();
    
    bool IsPdfAConversionMode;
    
    bool get_NotifyAboutFontSubstitutions();
    System::SharedPtr<Text::IFontSubstitutionRegistrator> get_FontSubstitutionRegistrator();
    
    System::SharedPtr<Engine::CommonData::Text::Fonts::Utilities::IDocumentFontSaveOptions> FontSaveOptions;
    
    System::SharedPtr<Engine::CommonData::IDocumentSecondaryStrategies> get_DocumentStrategies();
    
    System::SharedPtr<Engine::IPdfDocument> _engineDoc;
    
    /// <summary>
    /// Gets a metadata check for pdf/a(validation should pass this because it updates after on save).
    /// </summary>
    bool get_IsNotCheckMetadata();
    /// <summary>
    /// Gets convert parameter for pdf/ua converter (Convert only Metadata and Document Catalog if set true)
    /// </summary>
    bool get_IsConvertMetadataAndCatalogOnly();
    /// <summary>
    /// Gets convert parameter for pdf/ua converter (Convert only Metadata and Document Catalog if set true)
    /// </summary>
    void set_IsConvertMetadataAndCatalogOnly(bool value);
    int32_t get_ParentTreeNextKey();
    void set_ParentTreeNextKey(int32_t value);
    /// <summary>
    /// Returns copier used for coping pages to this document. 
    /// </summary>
    System::SharedPtr<Copier> get_DefaultCopier();
    bool get_IsConverted();
    
    void SetVentureLicense(System::SharedPtr<LicenseManagement::VentureLicense> license);
    System::SharedPtr<LicenseManagement::VentureLicense> GetVentureLicense();
    static bool Restricted(System::SharedPtr<Engine::Data::ITrailerable> tr, int32_t index);
    static bool Restricted(System::SharedPtr<Document> doc, int32_t index);
    static bool _NeedCheckRestrictions(System::SharedPtr<Document> doc);
    static bool _Restricted(System::SharedPtr<Document> doc, int32_t index);
    static void _Restrict(System::SharedPtr<Document> doc, int32_t index);
    static void _Restrict(System::SharedPtr<Engine::Data::ITrailerable> tr, int32_t index);
    static bool _Restricted(System::SharedPtr<Engine::Data::ITrailerable> tr, int32_t index);
    static void Restrict(System::SharedPtr<Engine::Data::ITrailerable> tr, int32_t index);
    static void Restrict(System::SharedPtr<Document> doc, int32_t index);
    static void Restrict(System::SharedPtr<Engine::Data::ITrailerable> tr, System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> cache);
    static void Restrict(System::SharedPtr<Document> doc, System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> cache);
    template <typename TKey, typename TValue>
    static void Restrict(System::SharedPtr<Document> doc, System::SharedPtr<System::Collections::Generic::Dictionary<TKey, TValue>> cache)
    {
        Restrict(doc, cache->get_Count());
    }
    
    static bool IsVentureLicenseValid(System::SharedPtr<LicenseManagement::VentureLicense> _ventureLicense);
    static bool Restricted(System::SharedPtr<LicenseManagement::VentureLicense> ventureLicense, int32_t index);
    static void StartOperation();
    static void EndOperation();
    void NotifyAboutSubstitution(System::SharedPtr<Aspose::Pdf::Text::Font> oldFont, System::SharedPtr<Aspose::Pdf::Text::Font> newFont);
    void SetSimpleFontEncodingRule(HtmlSaveOptions::FontEncodingRules rule);
    static void UpdateMetadata(System::SharedPtr<Engine::PdfDocument> document, System::SharedPtr<Aspose::Pdf::Metadata> metadata);
    static void PreSave(System::SharedPtr<PageCollection> pages, System::SharedPtr<SaveOptions> saveOptions);
    /// <summary>
    /// Process layers for generator.
    /// </summary>
    void ProcessLayers();
    void ValidateAnnotations();
    void UncompressObject(System::SharedPtr<Engine::Data::IPdfObject> obj);
    /// <summary>
    /// Copies shared resources into pages.
    /// </summary>
    void UpdatePagesResources();
    /// <summary>
    /// Copies resources from Page into its XForm.
    /// </summary>
    void UpdateXFormResources();
    /// <summary>
    /// Convert the PDF Document and log results.
    /// </summary>
    /// <param name="xml">The log.</param>
    /// <param name="format">Pdf format.</param>
    /// <param name="onlyValidation">Only document validation.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<System::Xml::XmlTextWriter> xml, Aspose::Pdf::PdfFormat format, bool onlyValidation, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Convert the PDF Document and log results.
    /// </summary>
    /// <param name="xml">The log.</param>
    /// <param name="format">Pdf format.</param>
    /// <param name="onlyValidation">Only document validation.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<System::Xml::XmlTextWriter> xml, Aspose::Pdf::PdfFormat format, bool onlyValidation, ConvertErrorAction action);
    bool Convert(System::SharedPtr<PdfFormatConversionOptions> options, bool onlyValidation);
    void loadDocument(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    void FlattenA();
    void FlattenB();
    bool IsCertified();
    /// <summary>
    /// Returns raw metadata stream
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor> GetMetadataStream();
    void UpdatePages();
    /// <summary> 
    /// Suppresses update contents data for all pages
    /// The contents is not updated until ResumeUpdate is called
    /// </summary>
    void SuppressUpdate();
    /// <summary>
    /// resumes document update
    /// </summary>
    void ResumeUpdate();
    System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj);
    void ReleaseResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj);
    void SetResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj, System::SharedPtr<Resources> res);
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal(System::SharedPtr<Aspose::Pdf::Optimization::OptimizationOptions> strategy);
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal();
    /// <summary>
    /// Register annotation for which AfterImport method must be called after import finished.
    /// </summary>
    /// <param name="annotation"></param>
    void RegisterAfterImportAnnotation(System::SharedPtr<Annotations::Annotation> annotation);
    /// <summary>
    /// Enumerate all registered annotations and call AfterImport for each of them.
    /// </summary>
    void AfterImport();
    static System::SharedPtr<System::Object> GetObjectById(System::String id, System::SharedPtr<Paragraphs> paragraphs);
    bool Check(bool doRepair, System::SharedPtr<System::IO::Stream> log);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<PageCollection> pages;
    System::SharedPtr<Aspose::Pdf::Collection> collection;
    System::SharedPtr<OutlineCollection> outlines;
    System::SharedPtr<Annotations::DocumentActionCollection> actions;
    System::SharedPtr<Aspose::Pdf::Forms::Form> form;
    System::SharedPtr<DocumentInfo> info;
    System::String fileName;
    System::SharedPtr<Aspose::Pdf::Metadata> metadata;
    System::SharedPtr<Copier> defualtCopier;
    System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Resources>>> resources;
    Text::TextEditOptions::FontReplace fontReplaceBehavior;
    System::SharedPtr<PageLabelCollection> pageLabelList;
    System::SharedPtr<Aspose::Pdf::PageInfo> pageInfo;
    bool isLowMemoryMode;
    bool isNotCheckMetadata;
    bool isConvertMetadataAndCatalogOnly;
    bool isParagraphsAdded;
    bool isLayersAdded;
    System::SharedPtr<DestinationCollection> destinations;
    System::SharedPtr<JavaScriptCollection> _javaScript;
    bool _overrideMetadata;
    int64_t _loadedSize;
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Rendering::ApsPage>>> pr_ApsPages;
    System::SharedPtr<LicenseManagement::VentureLicense> _ventureLicense;
    
    static bool get___IsLicensed();
    
    System::SharedPtr<NamedDestinationCollection> _namedDestinations;
    bool pr_EmbedStandardFonts;
    System::SharedPtr<Aspose::Pdf::Text::IFontSubstitutionRegistrator> _fontSubstitutionRegistrator;
    System::SharedPtr<Document::IDocumentFontUtilities> _documentFontUtilities;
    System::SharedPtr<Document::SecondaryStrategies> _secondaryStrategies;
    bool _isDisposed;
    int32_t _parentTreeNextKey;
    System::SharedPtr<Structure::RootElement> _rootElement;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Annotations::Annotation>>> _afterImportList;
    bool _isConverted;
    System::SharedPtr<Tagged::ITaggedContent> _taggedContent;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> provideViewerPreferencesEntry();
    System::SharedPtr<Engine::Data::IPdfDictionary> provideMarkingsEntry();
    static bool GetIsLicensed();
    void RemoveMetadataItem(System::String name);
    System::SharedPtr<Text::IFontSubstitutionRegistrator> CreateFontSubstitutionRegistrator();
    static void SubstituteStandartFonts(System::SharedPtr<PageCollection> pages);
    static void SubstituteStandartFontsOnPage(System::SharedPtr<Page> Page);
    void Init();
    void Init(System::SharedPtr<System::IO::Stream> input, System::String password);
    void Init(System::String fileName, System::String password);
    void Init(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    void Init(System::String fileName, System::String password, bool isManagedStream);
    static void SetEvaluationWarning(System::SharedPtr<PageCollection> pages);
    void ProcessToc(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Page>>> tocPages);
    void ProcessLinks();
    void InternalSaveDocument(System::SharedPtr<System::IO::Stream> output, System::SharedPtr<SaveOptions> saveOptions);
    void InternalSave(System::String outputFileName);
    void AddConformance(bool result, Aspose::Pdf::PdfFormat format);
    void PreparePdfAConversion();
    /// <summary>
    /// Conversion into PDF/A require allocation of specific resources, also this conversion 
    /// puts some document's data into special state. 
    /// So conversion functionality is needed in pair of methods, 
    /// when the first method is responsible about resource allocation,
    /// and the last method in this pair is responsible for cleaning resources, 
    /// allocated by first method at the end of PDF/A conversion process.
    /// Method <see cref="PreparePdfAConversion()"/> is a first method in pair described above.
    /// This method <see cref="FinishPdfAConversion()"/> is a second method for this pair. 
    /// It is designed to be called at the end of any PDF/A conversion process and this 
    /// method must have all the functionality to clear relevant resources, which were 
    /// created by method <see cref="PreparePdfAConversion()"/>.
    /// </summary>
    void FinishPdfAConversion();
    void assertObject();
    /// <summary>
    ///  This method is full functional analogue of ParsePdf method of Pdf class of old Generator
    ///  and put here during works related to it's merging 
    /// </summary>
    /// <param name="input"></param>
    /// <returns></returns>
    System::SharedPtr<LoadOptions> GetRelevantLoadingOptions(System::SharedPtr<System::IO::Stream> input);
    void InitDocument();
    void FixAnnotations(System::SharedPtr<Page> page);
    void CallFormatEvent(System::String fieldName);
    void CallFormatEvents(System::String root, System::SharedPtr<Engine::Data::IPdfDictionary> field);
    void CallFormatEvents();
    void UpdateAppearances(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Annotations::WidgetAnnotation>>> fields);
    void InternalSave();
    void InternalSave(System::String outputFileName, SaveFormat format);
    void InternalSave(System::SharedPtr<System::IO::Stream> outputStream, SaveFormat format);
    void InternalSave(System::String outputFileName, System::SharedPtr<SaveOptions> options);
    bool IsStreamSavableFormat(System::SharedPtr<SaveOptions> options);
    void InternalSave(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<SaveOptions> options);
    void InternalSave(System::SharedPtr<System::Web::HttpResponse> response, System::String outputFileName, ContentDisposition disposition, System::SharedPtr<SaveOptions> options);
    /// <summary>
    /// Substitutes all not accessible fonts in document using default font name passed
    /// </summary>
    /// <param name="doc">document</param>
    /// <param name="defaultFontName">default font name</param>
    static void SubstituteFontsWithDefaultFont(System::SharedPtr<Document> doc, System::String defaultFontName);
    /// <summary>
    /// Removed unused fonts from document
    /// </summary>
    /// <param name="pages"></param>
    static void RemoveUnusedFonts(System::SharedPtr<PageCollection> pages);
    static void UnembedFontDescriptor(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfObject>>> objectsToDelete, System::SharedPtr<Engine::CommonData::Text::Fonts::IPdfFontDescriptor> pdfFontDescriptor);
    static void RemoveWithUnderlyingObject(System::SharedPtr<Engine::CommonData::Text::Fonts::IPdfFontDescriptor> fontDescriptor, System::String key, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfObject>>> objectsToDelete);
    static void CleanupFontsInContents(System::SharedPtr<Resources> resources, System::SharedPtr<Collections::AsposeHashDictionary<System::SharedPtr<Engine::Data::IPdfDictionary>, System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::String>>>> usedFonts, System::SharedPtr<OperatorCollection> contents);
    
};

} // namespace Pdf
} // namespace Aspose


