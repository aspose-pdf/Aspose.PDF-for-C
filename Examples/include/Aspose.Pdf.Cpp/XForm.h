#ifndef _Aspose_Pdf_XForm_h_
#define _Aspose_Pdf_XForm_h_
// Copyright (c) 2001-2011 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "ISupportsMemoryCleanup.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfPageEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AppearanceDictionary; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class StampAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class CheckboxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonOptionField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RichTextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class PdfPageStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { class XFormCollection; } }
namespace Aspose { namespace Pdf { class ContentsAppender; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class ResourcesTests; } } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Copier; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Filters { class IEncoder; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represent XForm
/// </summary>
class ASPOSE_PDF_SHARED_API XForm FINAL : public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef XForm ThisType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AppearanceDictionary;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::StampAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::CheckboxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RichTextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::PdfPageStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::XFormCollection;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Collections::ResourcesTests;
    
public:

    System::SharedPtr<Aspose::Pdf::Rectangle> get_BBox();
    void set_BBox(System::SharedPtr<Aspose::Pdf::Rectangle> value);
    System::String get_Name();
    void set_Name(System::String value);
    System::SharedPtr<OperatorCollection> get_Contents();
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_Matrix();
    void set_Matrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    System::SharedPtr<Aspose::Pdf::Resources> get_Resources();
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Document> document);
    void FreeMemory();
    
protected:

    System::SharedPtr<Document> _document;
    System::SharedPtr<Engine::Data::IPdfObject> EngineObj;
    
    XForm(System::SharedPtr<Engine::Data::IPdfObject> xform);
    
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    bool ContainsOwnResources();
    void setResources(System::SharedPtr<Engine::Data::IPdfPrimitive> resources);
    static System::SharedPtr<XForm> CreateNewForm_OLD(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Copier> copier);
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Copier> copier);
    static System::SharedPtr<XForm> CreateNewForm(System::SharedPtr<Page> source, System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    System::ArrayPtr<double> GetRectangle();
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleOfText();
    void Dispose();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> FindReferecnes(System::String name);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XForm"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Resources> resources;
    System::SharedPtr<OperatorCollection> _contents;
    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    
    static System::SharedPtr<System::IO::Stream> EncodeStream(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Filters::IEncoder> encoder);
    System::ArrayPtr<double> UpdateBoundRectangle(System::ArrayPtr<double> boundRect, System::SharedPtr<Aspose::Pdf::Rectangle> r);
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleOfObject(System::String name, System::SharedPtr<Aspose::Pdf::DOM::Matrix> matrix);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XForm_h_

