#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_SoundAnnotation_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_SoundAnnotation_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets or sets an icon to be used in displaying the annotation.
    /// </summary>
    SoundIcon get_Icon();
    /// <summary>
    /// Gets or sets an icon to be used in displaying the annotation.
    /// </summary>
    void set_Icon(SoundIcon value);
    /// <summary>
    /// Gets a sound object defining the sound to be played when the annotation is activated.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::SoundData> get_SoundData();
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    /// <summary>
    /// Creates new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="soundFile">A sound file defining the sound to be played when the annotation is activated.</param>
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String soundFile);
    /// <summary>
    /// Creates new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="soundFile">A sound file defining the sound to be played when the annotation is activated.</param>
    /// <param name="soundSampleData">A sound sample data contains extra of sound parameters such as sampling rate, bits per sample and so on.</param>
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String soundFile, System::SharedPtr<SoundSampleData> soundSampleData);
    
protected:

    virtual void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer);
    virtual void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    
    /// <summary>
    /// Ititializes Sound annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::SoundData> _soundData;
    
    /// <summary>
    /// Create new Sound annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    SoundAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_SoundAnnotation_h_

