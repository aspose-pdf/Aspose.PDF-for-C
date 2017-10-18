#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_SoundAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_SoundAnnotation_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Annotations/MarkupAnnotation.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace InteractiveFeatures { namespace Annotations { class SoundAnnotationTests; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class SoundData; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class SoundIcon; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class SoundSampleData; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Represents a sound annotation that contains sound recorded from the computer�s microphone or imported from a file.
/// </summary>
class ASPOSE_PDF_SHARED_API SoundAnnotation FINAL : public Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation
{
    typedef SoundAnnotation ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::InteractiveFeatures::Annotations::SoundAnnotationTests;
    
public:

    SoundIcon get_Icon();
    void set_Icon(SoundIcon value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::SoundData> get_SoundData();
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String soundFile);
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String soundFile, System::SharedPtr<SoundSampleData> soundSampleData);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SoundAnnotation"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::SoundData> _soundData;
    
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_SoundAnnotation_h_

