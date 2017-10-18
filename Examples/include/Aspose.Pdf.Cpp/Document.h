#ifndef _Aspose_Pdf_Document_h_
#define _Aspose_Pdf_Document_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphCollection; } } }
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
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    friend class Aspose::Pdf::Text::TextParagraphCollection;
    friend class Aspose::Pdf::Text::TextParagraphCollection;
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
        friend class Aspose::Pdf::Text::TextParagraphCollection;
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
        
        static void CutByRestriction(System::ArrayPtr<T> &list)
        {
            if (!get_IsLicensed() && !get_Indivisible() && list->get_Length() > 4)
            {
                System::ArrayPtr<T> copy = System::MakeArray<T>(4);
                System::Array<T>::Copy(list, copy, 4);
                list = copy;
            }
        }
        
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override
        {
            System::Object::DBG_for_each_member(visitor);
            
            visitor.add_self(this);
        }
        const char* DBG_class_name() const override { return "CutByRestrictionWrap"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    class ASPOSE_PDF_SHARED_API OptimizationOptions : public System::Object
    {
        typedef OptimizationOptions ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        bool get_LinkDuplcateStreams();
        void set_LinkDuplcateStreams(bool value);
        bool get_AllowReusePageContent();
        void set_AllowReusePageContent(bool value);
        bool get_RemoveUnusedStreams();
        void set_RemoveUnusedStreams(bool value);
        bool get_RemoveUnusedObjects();
        void set_RemoveUnusedObjects(bool value);
        bool get_CompressImages();
        void set_CompressImages(bool value);
        int32_t get_ImageQuality();
        void set_ImageQuality(int32_t value);
        bool get_UnembedFonts();
        void set_UnembedFonts(bool value);
        
        static System::SharedPtr<Document::OptimizationOptions> All();
        
        OptimizationOptions();
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "OptimizationOptions"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "DocumentScanner"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "UnusedObjectsScanner"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ImageCompressor"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "DuplicateResourceScanner"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "FontUsage"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
public:

    static bool get_IsLicensed();
    System::SharedPtr<Aspose::Pdf::PageInfo> get_PageInfo();
    void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    System::SharedPtr<DestinationCollection> get_Destinations();
    System::SharedPtr<Aspose::Pdf::Collection> get_Collection();
    void set_Collection(System::SharedPtr<Aspose::Pdf::Collection> value);
    System::String get_Version();
    System::SharedPtr<InteractiveFeatures::IAppointment> get_OpenAction();
    void set_OpenAction(System::SharedPtr<InteractiveFeatures::IAppointment> value);
    bool get_HideToolBar();
    void set_HideToolBar(bool value);
    bool get_HideMenubar();
    void set_HideMenubar(bool value);
    bool get_HideWindowUI();
    void set_HideWindowUI(bool value);
    bool get_FitWindow();
    void set_FitWindow(bool value);
    bool get_CenterWindow();
    void set_CenterWindow(bool value);
    bool get_DisplayDocTitle();
    void set_DisplayDocTitle(bool value);
    System::SharedPtr<PageCollection> get_Pages();
    System::SharedPtr<OutlineCollection> get_Outlines();
    System::SharedPtr<InteractiveFeatures::DocumentActionCollection> get_Actions();
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Form> get_Form();
    System::SharedPtr<EmbeddedFileCollection> get_EmbeddedFiles();
    Aspose::Pdf::Direction get_Direction();
    void set_Direction(Aspose::Pdf::Direction value);
    Aspose::Pdf::DOM::PageMode get_PageMode();
    void set_PageMode(Aspose::Pdf::DOM::PageMode value);
    Aspose::Pdf::DOM::PageMode get_NonFullScreenPageMode();
    void set_NonFullScreenPageMode(Aspose::Pdf::DOM::PageMode value);
    Aspose::Pdf::PageLayout get_PageLayout();
    void set_PageLayout(Aspose::Pdf::PageLayout value);
    System::String get_FileName();
    System::SharedPtr<DocumentInfo> get_Info();
    System::SharedPtr<Aspose::Pdf::Metadata> get_Metadata();
    System::SharedPtr<Structure::RootElement> get_LogicalStructure();
    System::Nullable<Aspose::Pdf::CryptoAlgorithm> get_CryptoAlgorithm();
    bool get_IsLinearized();
    void set_IsLinearized(bool value);
    int32_t get_Permissions();
    bool get_IsEncrypted();
    System::SharedPtr<Aspose::Pdf::Id> get_Id();
    System::SharedPtr<Color> get_Background();
    void set_Background(System::SharedPtr<Color> value);
    bool get_OptimizeSize();
    void set_OptimizeSize(bool value);
    bool get_AllowReusePageContent();
    void set_AllowReusePageContent(bool value);
    bool get_IgnoreCorruptedObjects();
    void set_IgnoreCorruptedObjects(bool value);
    System::SharedPtr<PageLabelCollection> get_PageLabels();
    
    void RemovePdfaCompliance();
    
    Document(System::SharedPtr<System::IO::Stream> input);
    Document(System::SharedPtr<System::IO::Stream> input, System::String password, bool isManagedStream);
    Document(System::SharedPtr<System::IO::Stream> input, bool isManagedStream);
    Document(System::String filename);
    
    void ProcessParagraphs();
    void Save(System::SharedPtr<System::IO::Stream> output);
    
    Document(System::SharedPtr<System::IO::Stream> input, System::String password);
    
    void Save(System::String outputFileName);
    void ExportAnnotationsToXfdf(System::String fileName);
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, System::SharedPtr<System::IO::Stream> output);
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, int32_t fromPage, int32_t toPage, System::SharedPtr<System::IO::Stream> output);
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, System::String outputFileName);
    void SendTo(System::SharedPtr<Devices::DocumentDevice> device, int32_t fromPage, int32_t toPage, System::String outputFileName);
    void RemoveMetadata();
    void ImportAnnotationsFromXfdf(System::String fileName);
    bool Validate(System::String outputLogFileName, PdfFormat format);
    bool Convert(System::String outputLogFileName, PdfFormat format, ConvertErrorAction action);
    bool Validate(System::SharedPtr<System::IO::Stream> outputLogStream, PdfFormat format);
    bool Convert(Document::CallBackGetHocr callback);
    bool Convert(System::SharedPtr<System::IO::Stream> outputLogStream, PdfFormat format, ConvertErrorAction action);
    
    Document();
    Document(System::String filename, System::SharedPtr<LoadOptions> options);
    Document(System::SharedPtr<System::IO::Stream> input, System::SharedPtr<LoadOptions> options);
    
    void Flatten();
    void Encrypt(System::String userPassword, System::String ownerPassword, System::SharedPtr<Facades::DocumentPrivilege> privileges, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm, bool usePdf20);
    void Encrypt(System::String userPassword, System::String ownerPassword, Aspose::Pdf::Permissions permissions, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm);
    void Encrypt(System::String userPassword, System::String ownerPassword, Aspose::Pdf::Permissions permissions, Aspose::Pdf::CryptoAlgorithm cryptoAlgorithm, bool usePdf20);
    void ChangePasswords(System::String ownerPassword, System::String newUserPassword, System::String newOwnerPassword);
    
    Document(System::String filename, System::String password);
    Document(System::String filename, System::String password, bool isManagedStream);
    
    void Decrypt();
    void Optimize();
    void Save();
    void Save(System::String outputFileName, SaveFormat format);
    void Save(System::SharedPtr<System::IO::Stream> outputStream, SaveFormat format);
    void Save(System::String outputFileName, System::SharedPtr<SaveOptions> options);
    void Save(System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<SaveOptions> options);
    void Save(System::SharedPtr<System::Web::HttpResponse> response, System::String outputFileName, ContentDisposition disposition, System::SharedPtr<SaveOptions> options);
    void Dispose();
    void OptimizeResources();
    void OptimizeResources(System::SharedPtr<Document::OptimizationOptions> strategy);
    void FreeMemory();
    void SaveXml(System::String file);
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
    
    bool get_IsNotCheckMetadata();
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
    void ProcessLayers();
    bool Convert(System::SharedPtr<System::Xml::XmlTextWriter> xml, PdfFormat format, bool onlyValidation, ConvertErrorAction action);
    void FlattenA();
    void FlattenB();
    System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor> GetMetadataStream();
    void UpdatePages();
    void SuppressUpdate();
    void ResumeUpdate();
    System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj);
    void ReleaseResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj);
    void SetResourcesFor(System::SharedPtr<Engine::Data::IPdfObject> obj, System::SharedPtr<Resources> res);
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal();
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> OptimizeResourceInternal(System::SharedPtr<Document::OptimizationOptions> strategy);
    System::SharedPtr<Engine::Data::IPdfPrimitive> GetCatalogValue(System::String key);
    void RegisterAfterImportAnnotation(System::SharedPtr<InteractiveFeatures::Annotations::Annotation> annotation);
    void AfterImport();
    void LoadXml(System::SharedPtr<System::IO::Stream> stream);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Document"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    System::SharedPtr<LoadOptions> GetRelevantLoadingOptions(System::SharedPtr<System::IO::Stream> input);
    void InitDocument();
    bool IsStreamSavableFormat(System::SharedPtr<SaveOptions> options);
    static void RemoveUnusedFonts(System::SharedPtr<PageCollection> pages);
    static void UnembedFontDescriptor(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfObject>>> objectsToDelete, System::SharedPtr<Engine::CommonData::Text::Fonts::IPdfFontDescriptor> pdfFontDescriptor);
    static void RemoveWithUnderlyingObject(System::SharedPtr<Engine::CommonData::Text::Fonts::IPdfFontDescriptor> fontDescriptor, System::String key, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfObject>>> objectsToDelete);
    static void CleanupFontsInContents(System::SharedPtr<Resources> resources, System::SharedPtr<Collections::AsposeHashDictionary<System::SharedPtr<Engine::Data::IPdfDictionary>, System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::String>>>> usedFonts, System::SharedPtr<OperatorCollection> contents);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Document_h_

