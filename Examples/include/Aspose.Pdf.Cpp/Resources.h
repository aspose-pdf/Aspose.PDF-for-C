#ifndef _Aspose_Pdf_Resources_h_
#define _Aspose_Pdf_Resources_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/image.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class GraphicElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class ImageElement; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfExtractor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class HighlightAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class XFormCollection; } }
namespace Aspose { namespace Pdf { class XImageCollection; } }
namespace Aspose { namespace Pdf { namespace Structure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextModel; } } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class ResourcesTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
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
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::PageModel::ImageElement;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfExtractor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XImageCollection;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Collections::ResourcesTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    
public:

    System::SharedPtr<XFormCollection> get_Forms();
    System::SharedPtr<XImageCollection> get_Images();
    System::SharedPtr<Text::FontCollection> get_Fonts();
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> _EngineDict;
    System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> _ResourceDictionary;
    System::SharedPtr<OperatorCollection> _Contents;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<OperatorCollection> get_Contents();
    void set_Contents(System::SharedPtr<OperatorCollection> value);
    bool get_IsCommonResource();
    void set_IsCommonResource(bool value);
    System::SharedPtr<Engine::Data::IPdfObject> get_Source();
    void set_Source(System::SharedPtr<Engine::Data::IPdfObject> value);
    
    void ClearFormsCache();
    void ClearFontsCache();
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<Page> page);
    static void ReleaseResourcesFor(System::SharedPtr<Page> const &page);
    static System::SharedPtr<Resources> Create(System::SharedPtr<Document> doc, System::SharedPtr<Engine::CommonData::PageContent::IResourceDictionary> res);
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<InteractiveFeatures::Forms::Form> form);
    static System::SharedPtr<Resources> GetResourcesFor(System::SharedPtr<XForm> xform);
    static void ReleaseResourcesFor(System::SharedPtr<XForm> xform);
    static System::SharedPtr<System::Drawing::Image> GetImage(System::String name, System::SharedPtr<Engine::Data::IPdfDictionary> resources);
    bool IsXObjectCommon(int32_t imageObjectId);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Resources"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    static const int32_t iFALSE;
    static const int32_t iTRUE;
    static const int32_t UNKNOWN;
    int32_t _IsCommonResource;
    System::WeakPtr<Document> _document;
    System::SharedPtr<Engine::Data::IPdfObject> _source;
    
    Resources(System::SharedPtr<Document> document, System::SharedPtr<Engine::Data::IPdfDictionary> resources);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Resources_h_

