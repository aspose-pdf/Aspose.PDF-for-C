#ifndef _Aspose_Pdf_Document_h_
#define _Aspose_Pdf_Document_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if __cplusplus 


// C# preprocessor directive: #else 

/* C# INACTIVE CODE:
using Aspose.Crypto;
*/

// C# preprocessor directive: #endif 


// C# preprocessor directive: #if !(NET4CP || NET35CP) 


// C# preprocessor directive: #endif 


#include <xml/xml_text_writer.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/nullable.h>
#include <system/multicast_delegate.h>
#include <system/io/stream.h>
#include <system/idisposable.h>
#include <system/enum_helpers.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <drawing/image.h>
#include <cstdint>

#include "Text/TextOptions/TextEditOptions.h"
#include "system/dummy_classes.h"

#include "Security/CryptoAlgorithm.h"
#include "ISupportsMemoryCleanup.h"
#include "Collections/HashDictionary.h"

namespace Aspose { namespace Pdf { class ApsFragment; } }
namespace Aspose { namespace Pdf { class ApsFragmentCollection; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class RedactionAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class AnnotationElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class GraphicElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TaggedPdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class VersionConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class DestinationCollection; } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
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
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class ActionCollection; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AppearanceDictionary; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class MarkupAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DocumentActionCollection; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class XFA; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class CheckboxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ChoiceOptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class OptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonOptionField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RichTextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class LaunchAction; } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class OutlineCollection; } }
namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacementCollection; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { namespace Text { class CharInfoCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegmentCollection; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class XFormCollection; } }
namespace Aspose { namespace Pdf { class XImageCollection; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class XfaMerge; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
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
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextEditOptions; } } } }
namespace Aspose { namespace Pdf { class Collection; } }
namespace Aspose { namespace Pdf { class Metadata; } }
namespace Aspose { namespace Pdf { class Copier; } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { class PageLabelCollection; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class IAppointment; } } }
namespace Aspose { namespace Pdf { enum class Direction; } }
namespace Aspose { namespace Pdf { namespace DOM { enum class PageMode; } } }
namespace Aspose { namespace Pdf { enum class PageLayout; } }
namespace Aspose { namespace Pdf { namespace Structure { class RootElement; } } }
namespace Aspose { namespace Pdf { class Id; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { class PdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Devices { class DocumentDevice; } } }
namespace Aspose { namespace Pdf { enum class ConvertErrorAction; } }
namespace Aspose { namespace Pdf { class LoadOptions; } }
namespace Aspose { namespace Pdf { namespace Facades { class DocumentPrivilege; } } }
namespace Aspose { namespace Pdf { enum class Permissions; } }
namespace Aspose { namespace Pdf { enum class SaveFormat; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace Types { class IPdfStreamAccessor; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFontDescriptor; } } } } } }
namespace Aspose { namespace Pdf { namespace Operators { class SelectFont; } } }

namespace Aspose {

namespace Pdf {

namespace Generator {

/// <summary>
/// The <b>Aspose.Pdf.Generator</b> namespace provides classes used for composing of PDF document
///  1) via API from scratch
///  2) via loading of document from logical model, described with special XML 
///  3) via mix of two aforementioned approaches (i.e. loading from XML and then customizing via API).
///  4) via creation of PDF-analogue of supplied document in one of that formats : PCL/HTML/SVG/XSLFO
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

} // namespace Generator
} // namespace Pdf
} // namespace Aspose
namespace Aspose {

namespace Pdf {

/// <summary>
/// The <b>Aspose.Pdf</b> is a root namespace for all classes of Aspose.Pdf library which are either directly in it like <b>Document</b> or indirectly through several subnamespaces.
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
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
    
    friend class Aspose::Pdf::ApsFragment;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::ApsFragmentCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::PageModel::AnnotationElement;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TaggedPdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::VersionConvertStrategy;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::DestinationCollection;
    friend class Aspose::Pdf::Text::FontAbsorber;
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
    friend class Aspose::Pdf::InteractiveFeatures::ActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::ActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::DocumentActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::XFA;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::CheckboxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ChoiceOptionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::OptionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::OptionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RichTextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    friend class Aspose::Pdf::InteractiveFeatures::LaunchAction;
    friend class Aspose::Pdf::OperatorCollection;
    friend class Aspose::Pdf::OperatorCollection;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineItemCollection;
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
    friend class Aspose::Pdf::Text::FontCollection;
    friend class Aspose::Pdf::Text::FontCollection;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentCollection;
    friend class Aspose::Pdf::Text::TextFragmentCollection;
    friend class Aspose::Pdf::Text::TextSegmentCollection;
    friend class Aspose::Pdf::Text::TextSegmentCollection;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::XfaMerge;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::ApsUsingConverter;
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
    
public:

    using CallBackGetHocr = System::MulticastDelegate<System::String(System::SharedPtr<System::Drawing::Image>)>;
    
    
public:

    template<typename T>
    class CutByRestrictionWrap : public System::Object
    {
        typedef CutByRestrictionWrap<T> ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
        friend class Aspose::Pdf::ApsFragmentCollection;
        friend class Aspose::Pdf::EmbeddedFileCollection;
        friend class Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationCollection;
        friend class Aspose::Pdf::InteractiveFeatures::Annotations::AppearanceDictionary;
        friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
        friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
        friend class Aspose::Pdf::OperatorCollection;
        friend class Aspose::Pdf::OutlineCollection;
        friend class Aspose::Pdf::OutlineItemCollection;
        friend class Aspose::Pdf::PageCollection;
        friend class Aspose::Pdf::ImagePlacementCollection;
        friend class Aspose::Pdf::Text::CharInfoCollection;
        friend class Aspose::Pdf::Text::FontCollection;
        friend class Aspose::Pdf::Text::TextFragmentCollection;
        friend class Aspose::Pdf::Text::TextSegmentCollection;
        friend class Aspose::Pdf::XFormCollection;
        friend class Aspose::Pdf::XImageCollection;
        
    protected:
    
        static void CutByRestriction(System::SharedPtr<System::Collections::Generic::IList<T>> list)
        {
            if (!get_IsLicensed() && !get_Indivisible() && !list->get_IsReadOnly())
            {
                while (list->get_Count() > 4)
                {
                    list->RemoveAt(list->get_Count() - 1);
                }
            }
        }
        
        static void CutByRestriction(System::ArrayPtr<T>& list)
        {
            if (!get_IsLicensed() && !get_Indivisible() && list->get_Length() > 4)
            {
                System::ArrayPtr<T> copy = System::MakeArray<T>(4);
                System::Array<T>::Copy(list, copy, 4);
                list = copy;
            }
        }
        
        
    };
    
    class ASPOSE_PDF_SHARED_API OptimizationOptions : public System::Object
    {
        typedef OptimizationOptions ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// If this flag is set to true, Resource streams will be analyzed. If duplicate streams are found (i.e. if stream contents is equal), then thes streams will be stored as one object. 
        /// This allows to decrease document size in some cases (for example, when same document was concatenedted multiple times).
        /// </summary>
        bool get_LinkDuplcateStreams();
        /// <summary>
        /// If this flag is set to true, Resource streams will be analyzed. If duplicate streams are found (i.e. if stream contents is equal), then thes streams will be stored as one object. 
        /// This allows to decrease document size in some cases (for example, when same document was concatenedted multiple times).
        /// </summary>
        void set_LinkDuplcateStreams(bool value);
        /// <summary>
        /// If true page contents will be reused when document is optimized for equal pages.
        /// </summary>
        bool get_AllowReusePageContent();
        /// <summary>
        /// If true page contents will be reused when document is optimized for equal pages.
        /// </summary>
        void set_AllowReusePageContent(bool value);
        /// <summary>
        /// If this flag set to true, every resource is checked on it's usage. If resource is never used, then resources is removed.
        /// This may decrease document size for example when pages were extracted from document. 
        /// </summary>
        bool get_RemoveUnusedStreams();
        /// <summary>
        /// If this flag set to true, every resource is checked on it's usage. If resource is never used, then resources is removed.
        /// This may decrease document size for example when pages were extracted from document. 
        /// </summary>
        void set_RemoveUnusedStreams(bool value);
        /// <summary>
        /// If this flag is set to true, all document objects will be checked and unused objects (i.e. objects which does not have any reference) are removed from document.
        /// </summary>
        bool get_RemoveUnusedObjects();
        /// <summary>
        /// If this flag is set to true, all document objects will be checked and unused objects (i.e. objects which does not have any reference) are removed from document.
        /// </summary>
        void set_RemoveUnusedObjects(bool value);
        /// <summary>
        /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
        /// </summary>
        bool get_CompressImages();
        /// <summary>
        /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
        /// </summary>
        void set_CompressImages(bool value);
        /// <summary>
        /// Specifie slevel of image compression when CompressIamges flag is used.
        /// </summary>
        int32_t get_ImageQuality();
        /// <summary>
        /// Specifie slevel of image compression when CompressIamges flag is used.
        /// </summary>
        void set_ImageQuality(int32_t value);
        /// <summary>
        /// Make fonts not embedded if set to true. 
        /// </summary>
        bool get_UnembedFonts();
        /// <summary>
        /// Make fonts not embedded if set to true. 
        /// </summary>
        void set_UnembedFonts(bool value);
        
        /// <summary>
        /// Creates optimization strategy will all options activated.
        /// </summary>
        /// <returns>OptimizationOptions object.</returns>
        static System::SharedPtr<Document::OptimizationOptions> All();
        
        OptimizationOptions();
        
    private:
    
        bool _linkDuplicateStreams;
        bool _removeUnusedStreams;
        bool _removeUnusedObjects;
        bool _compressImages;
        bool _unembedFonts;
        bool _allowReusePageContents;
        int32_t _imageQuality;
        
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API DocumentScanner : public System::Object
    {
        typedef DocumentScanner ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        DocumentScanner();
        
    protected:
    
        System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _visited;
        
        System::SharedPtr<Engine::Data::IPdfPrimitive> Scan(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
        virtual bool IsAllowedKey(System::SharedPtr<Engine::Data::IPdfDictionary> dict, System::String key);
        virtual System::SharedPtr<Engine::Data::IPdfObject> ScanObject(System::SharedPtr<Engine::Data::IPdfObject> value);
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        bool IsValueChanged(System::SharedPtr<Engine::Data::IPdfPrimitive> oldValue, System::SharedPtr<Engine::Data::IPdfPrimitive> newValue);
        void ScanArray(System::SharedPtr<Engine::Data::IPdfArray> array);
        void ScanDictionary(System::SharedPtr<Engine::Data::IPdfDictionary> dict);
        
    };
    
    class ASPOSE_PDF_SHARED_API UnusedObjectsScanner : public Aspose::Pdf::Document::DocumentScanner
    {
        typedef UnusedObjectsScanner ThisType;
        typedef Aspose::Pdf::Document::DocumentScanner BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        void RemoveUnused(System::SharedPtr<Document> doc);
        System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> GetStat();
        
        UnusedObjectsScanner();
        
    protected:
    
        virtual System::SharedPtr<Engine::Data::IPdfObject> ScanObject(System::SharedPtr<Engine::Data::IPdfObject> value);
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _usedObjects;
        System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _removed;
        
    };
    
    class ASPOSE_PDF_SHARED_API ImageCompressor : public System::Object
    {
        typedef ImageCompressor ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t get_Quality();
        void set_Quality(int32_t value);
        
        void CompressPictures(System::SharedPtr<Resources> resources);
        void Execute(System::SharedPtr<Document> doc);
        System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Engine::Data::IPdfObject>>> GetStatistics();
        
        ImageCompressor();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Engine::Data::IPdfObject>>> replaceMap;
        System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Engine::Data::IPdfObject>>> replaceMapReverse;
        System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<XForm>>> visited;
        int32_t _quality;
        
    };
    
    class ASPOSE_PDF_SHARED_API DuplicateResourceScanner : public Aspose::Pdf::Document::DocumentScanner
    {
        typedef DuplicateResourceScanner ThisType;
        typedef Aspose::Pdf::Document::DocumentScanner BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        bool get_AllowReusePageContent();
        void set_AllowReusePageContent(bool value);
        
        void FindDuplicateResources(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
        System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Engine::Data::IPdfObject>>> GetStat();
        
        DuplicateResourceScanner();
        
    protected:
    
        virtual bool IsAllowedKey(System::SharedPtr<Engine::Data::IPdfDictionary> dict, System::String key);
        virtual System::SharedPtr<Engine::Data::IPdfObject> ScanObject(System::SharedPtr<Engine::Data::IPdfObject> value);
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<Engine::Data::IPdfObject>>> _substByHash;
        System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Engine::Data::IPdfObject>>> _substById;
        System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::String>> _keyCache;
        bool _allowReusePageContent;
        
        static wchar_t DigitToHex(uint8_t b);
        System::String ComputeDataHash(System::ArrayPtr<uint8_t> data);
        System::String ComputeStreamHash(System::SharedPtr<Engine::Data::IPdfDataStream> stream);
        System::String ComputeStringHash(System::String data);
        System::String ComputeDictionaryHash(System::SharedPtr<Engine::Data::IPdfDictionary> dictionary, int32_t level);
        System::String ComputeArrayHash(System::SharedPtr<Engine::Data::IPdfArray> array, int32_t level);
        System::String ComputeHash(System::SharedPtr<Engine::Data::IPdfPrimitive> item, int32_t level);
        System::String ComputObjectHash(System::SharedPtr<Engine::Data::IPdfObject> item);
        
    };
    
    class ASPOSE_PDF_SHARED_API FontUsage : public System::Object
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
    /// Gets licensed state of the system. Returns true is system works in licensed mode and false otherwise. 
    /// </summary>
    static bool get_IsLicensed();
    /// <summary>
    /// Gets or sets the page info.(for generator only)
    /// </summary>
    /// <value>The page info.</value>
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    /// <summary>
    /// Gets or sets the page info.(for generator only)
    /// </summary>
    /// <value>The page info.</value>
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Gets the collection of destinations.
    /// </summary>
    System::SharedPtr<DestinationCollection> get_Destinations();
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
    /// Gets or sets action performed at document opening. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// System::SharedPtr<Aspose::Pdf::InteractiveFeatures::IAppointment> value = document->get_OpenAction();
    /// </code>
    /// </example>
    System::SharedPtr<InteractiveFeatures::IAppointment> get_OpenAction();
    /// <summary>
    /// Gets or sets action performed at document opening. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// System::SharedPtr<Aspose::Pdf::InteractiveFeatures::IAppointment> value = document->get_OpenAction();
    /// </code>
    /// </example>
    void set_OpenAction(System::SharedPtr<InteractiveFeatures::IAppointment> value);
    /// <summary>
    /// Gets or sets flag specifying whether toolbar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideToolBar flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_HideToolBar();
    /// </code>
    /// </example>
    bool get_HideToolBar();
    /// <summary>
    /// Gets or sets flag specifying whether toolbar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideToolBar flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_HideToolBar();
    /// </code>
    /// </example>
    void set_HideToolBar(bool value);
    /// <summary>
    /// Gets or sets flag specifying whether menu bar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideMenubar flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_HideMenubar();
    /// </code>
    /// </example>
    bool get_HideMenubar();
    /// <summary>
    /// Gets or sets flag specifying whether menu bar should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideMenubar flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_HideMenubar();
    /// </code>
    /// </example>
    void set_HideMenubar(bool value);
    /// <summary>
    /// Gets or sets flag specifying whether user interface elements should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideWindowUI flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_HideWindowUI();
    /// </code>
    /// </example>
    bool get_HideWindowUI();
    /// <summary>
    /// Gets or sets flag specifying whether user interface elements should be hidden when document is active. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get HideWindowUI flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_HideWindowUI();
    /// </code>
    /// </example>
    void set_HideWindowUI(bool value);
    /// <summary>
    /// Gets or sets flag specifying whether document window must be resized to fit the first displayed page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get FitWindow flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_FitWindow();
    /// </code>
    /// </example>
    bool get_FitWindow();
    /// <summary>
    /// Gets or sets flag specifying whether document window must be resized to fit the first displayed page. 
    /// </summary>
    /// <example>
    /// Example demonstrates how to get FitWindow flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_FitWindow();
    /// </code>
    /// </example>
    void set_FitWindow(bool value);
    /// <summary>
    /// Gets or sets flag specifying whether position of the document's window will be centerd on the screen.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_CenterWindow();
    /// </code>
    /// </example>
    bool get_CenterWindow();
    /// <summary>
    /// Gets or sets flag specifying whether position of the document's window will be centerd on the screen.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get CenterWindow flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_CenterWindow();
    /// </code>
    /// </example>
    void set_CenterWindow(bool value);
    /// <summary>
    /// Gets or sets flag specifying whether document's window title bar should display document title.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get DisplayDocTitle flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_DisplayDocTitle();
    /// </code>
    /// </example>
    bool get_DisplayDocTitle();
    /// <summary>
    /// Gets or sets flag specifying whether document's window title bar should display document title.
    /// </summary>
    /// <example>
    /// Example demonstrates how to get DisplayDocTitle flag:
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// bool value = document->get_DisplayDocTitle();
    /// </code>
    /// </example>
    void set_DisplayDocTitle(bool value);
    /// <summary>
    /// Gets or sets collection of document pages.
    /// Note that pages are numbered from 1 in collection.
    /// </summary>
    /// <example>
    /// Example below demonstrates how to operate with the document pages:
    /// How to obtain number of pages and how to obtain rectangle of starting page of the document. 
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"sample.pdf");
    /// System::SharedPtr<Aspose::Pdf::PageCollection> pages = document->get_Pages();
    /// System::Console::WriteLine(System::String(L"Document contains ") + pages->get_Count());
    /// System::SharedPtr<Page> page = pages->idx_get(1);
    /// System::SharedPtr<Rectangle> rect = page->get_Rect();
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
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> document = System::MakeObject<Aspose::Pdf::Document>(L"d:\\work\\aspose\\aspose.pdf.kit.net.new\\trunk\\testdata\\Aspose.Pdf\\PdfWithOpenAction.pdf");
    /// System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DocumentActionCollection> actions = document->get_Actions();
    /// System::SharedPtr<Aspose::Pdf::InteractiveFeatures::PdfAction> afterSavingAction = actions->get_AfterSaving();
    /// </code>
    /// </example>
    System::SharedPtr<InteractiveFeatures::DocumentActionCollection> get_Actions();
    /// <summary>
    /// Gets Acro Form of the document.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Form> get_Form();
    /// <summary>
    /// Gets collection of files embedded to document. 
    /// </summary>
    System::SharedPtr<EmbeddedFileCollection> get_EmbeddedFiles();
    /// <summary>
    /// Gets or sets reading order of text: L2R (left to right) or R2L (right to left).
    /// </summary>
    Aspose::Pdf::Direction get_Direction();
    /// <summary>
    /// Gets or sets reading order of text: L2R (left to right) or R2L (right to left).
    /// </summary>
    void set_Direction(Aspose::Pdf::Direction value);
    /// <summary>
    /// Gets or sets page mode, specifying how document should be displayed when opened. 
    /// </summary>
    Aspose::Pdf::DOM::PageMode get_PageMode();
    /// <summary>
    /// Gets or sets page mode, specifying how document should be displayed when opened. 
    /// </summary>
    void set_PageMode(Aspose::Pdf::DOM::PageMode value);
    /// <summary>
    /// Gets or sets page mode, specifying how to display the document on exiting full-screen mode.
    /// </summary>
    Aspose::Pdf::DOM::PageMode get_NonFullScreenPageMode();
    /// <summary>
    /// Gets or sets page mode, specifying how to display the document on exiting full-screen mode.
    /// </summary>
    void set_NonFullScreenPageMode(Aspose::Pdf::DOM::PageMode value);
    /// <summary>
    /// Gets or sets page layout which shall be used when the document is opened.
    /// </summary>
    Aspose::Pdf::PageLayout get_PageLayout();
    /// <summary>
    /// Gets or sets page layout which shall be used when the document is opened.
    /// </summary>
    void set_PageLayout(Aspose::Pdf::PageLayout value);
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
    ///  such as the document�s title, author, and creation and modification dates.
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
    /// Gets or sets a value indicating whether document is linearized.
    /// </summary>
    bool get_IsLinearized();
    /// <summary>
    /// Gets or sets a value indicating whether document is linearized.
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
    /// Gets or sets the background color of the document.
    /// </summary>
    System::SharedPtr<Color> get_Background();
    /// <summary>
    /// Gets or sets the background color of the document.
    /// </summary>
    void set_Background(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets or sets optimization flag. When pages are added to document, equal resource streams in resultant file are
    /// merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    bool get_OptimizeSize();
    /// <summary>
    /// Gets or sets optimization flag. When pages are added to document, equal resource streams in resultant file are
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
    /// Gets or sets flag of ignoring errors in source files. 
    /// When pages from source document copied into destination document, copying process is stopped with exception 
    /// if some objects in source files are corrupted when this flag is false. 
    /// example: dest.Pages.Add(src.Pages);
    /// If this flag is set to true then corrupted objects will be replaced with empty values.
    /// By default: true.
    /// </summary>
    bool get_IgnoreCorruptedObjects();
    /// <summary>
    /// Gets or sets flag of ignoring errors in source files. 
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
    /// Remove pdfa compliance from the document
    /// </summary>
    void RemovePdfaCompliance();
    
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
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <returns>The operation result</returns>
    bool Validate(System::String outputLogFileName, PdfFormat format);
    /// <summary>
    /// Convert document and save errors into the specified file.
    /// </summary>
    /// <param name="outputLogFileName">Path to file where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    bool Convert(System::String outputLogFileName, PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Validate document into the specified file.
    /// </summary>
    /// <param name="outputLogStream">Stream where the comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <returns>The operation result</returns>
    bool Validate(System::SharedPtr<System::IO::Stream> outputLogStream, PdfFormat format);
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
    bool Convert(System::SharedPtr<System::IO::Stream> outputLogStream, PdfFormat format, ConvertErrorAction action);
    
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
    /// Changes document passwords. This action can be done only using owner password/>.
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
    void OptimizeResources(System::SharedPtr<Document::OptimizationOptions> strategy);
    /// <summary>
    /// Clears memory
    /// </summary>
    void FreeMemory();
    /// <summary>
    /// Save document to xml
    /// </summary>
    void SaveXml(System::String file);
    /// <summary>
    /// Load document from xml
    /// </summary>
    void LoadXml(System::String file);
    
    virtual ~Document();
    
protected:

    static bool get_Indivisible();
    bool get_IsParagraphsAdded();
    void set_IsParagraphsAdded(bool value);
    bool get_IsLayersAdded();
    void set_IsLayersAdded(bool value);
    Text::TextOptions::TextEditOptions::FontReplace get_FontReplaceBehavior();
    void set_FontReplaceBehavior(Text::TextOptions::TextEditOptions::FontReplace value);
    
    static int32_t IndivisibleLevel;
    static System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsPdfaCompliant();
    PdfFormat get_PdfaFormat();
    
    System::SharedPtr<Engine::IPdfDocument> _engineDoc;
    
    /// <summary>
    /// Gets a metadata check for pdf/a(validation should pass this because it updates after on save).
    /// </summary>
    bool get_IsNotCheckMetadata();
    /// <summary>
    /// Returns copier used for coping pages to this document. 
    /// </summary>
    System::SharedPtr<Copier> get_DefaultCopier();
    
    static bool Restricted(int32_t index);
    static void Restrict(int32_t index);
    static void Restrict(System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> cache);
    template <typename TKey, typename TValue>
    static void Restrict(System::SharedPtr<Collections::AsposeHashDictionary<TKey, TValue>> cache)
    {
        assert_is_cs_class(TValue);
        
        Restrict(cache->get_Count());
    }
    
    template <typename TKey, typename TValue>
    static void Restrict(System::SharedPtr<System::Collections::Generic::Dictionary<TKey, TValue>> cache)
    {
        Restrict(cache->get_Count());
    }
    
    static void StartOperation();
    static void EndOperation();
    static void UpdateMetadata(System::SharedPtr<Engine::PdfDocument> document, System::SharedPtr<Aspose::Pdf::Metadata> metadata);
    static void PreSave(System::SharedPtr<PageCollection> pages);
    /// <summary>
    /// Process layers for generator.
    /// </summary>
    void ProcessLayers();
    /// <summary>
    /// Convert the PDF Document and log results.
    /// </summary>
    /// <param name="xml">The log.</param>
    /// <param name="format">Pdf format.</param>
    /// <param name="onlyValidation">Only document validation.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <returns>The operation result</returns>
    bool Convert(System::SharedPtr<System::Xml::XmlTextWriter> xml, PdfFormat format, bool onlyValidation, ConvertErrorAction action);
    void FlattenA();
    void FlattenB();
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
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal();
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal(System::SharedPtr<Document::OptimizationOptions> strategy);
    /// <summary>
    /// Returns item value from catalog dictionary.
    /// </summary>
    /// <param name="key">The key of item.</param>
    /// <returns>Item value - if key was successfully found; otherwise, null.</returns>
    /*public*/
    System::SharedPtr<Engine::Data::IPdfPrimitive> GetCatalogValue(System::String key);
    /// <summary>
    /// Register annotation for which AfterImport method must be called after import finished.
    /// </summary>
    /// <param name="annotation"></param>
    void RegisterAfterImportAnnotation(System::SharedPtr<InteractiveFeatures::Annotations::Annotation> annotation);
    /// <summary>
    /// Enumerate all registered annotations and call AfterImport for each of them.
    /// </summary>
    void AfterImport();
    void LoadXml(System::SharedPtr<System::IO::Stream> stream);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
private:

    System::SharedPtr<PageCollection> pages;
    System::SharedPtr<Aspose::Pdf::Collection> collection;
    System::SharedPtr<OutlineCollection> outlines;
    System::SharedPtr<InteractiveFeatures::DocumentActionCollection> actions;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Form> form;
    System::SharedPtr<DocumentInfo> info;
    System::String fileName;
    System::SharedPtr<Aspose::Pdf::Metadata> metadata;
    System::SharedPtr<Copier> defualtCopier;
    System::SharedPtr<Collections::AsposeHashDictionary<int32_t, System::SharedPtr<Resources>>> resources;
    Text::TextOptions::TextEditOptions::FontReplace fontReplaceBehavior;
    System::SharedPtr<PageLabelCollection> pageLabelList;
    System::SharedPtr<Aspose::Pdf::PageInfo> pageInfo;
    bool isNotCheckMetadata;
    bool isParagraphsAdded;
    bool isLayersAdded;
    System::SharedPtr<DestinationCollection> destinations;
    bool _isDisposed;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<InteractiveFeatures::Annotations::Annotation>>> _afterImportList;
    bool mIsDisposed;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> provideViewerPreferencesEntry();
    void RemovePdfaAttribute(System::String name);
    void Init();
    void Init(System::SharedPtr<System::IO::Stream> input, System::String password);
    void Init(System::String fileName, System::String password);
    void Init(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    void Init(System::String fileName, System::String password, bool isManagedStream);
    void ProcessToc(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Page>>> tocPages);
    void ProcessLinks();
    void AddConformance(bool result, PdfFormat format);
    void assertObject();
    void loadDocument(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    void InitDocument();
    bool IsStreamSavableFormat(System::SharedPtr<SaveOptions> options);
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

#endif // _Aspose_Pdf_Document_h_

