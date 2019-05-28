#pragma once
//using System.Security.Policy;

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Event which activates annotation. 
/// </summary>
class ASPOSE_PDF_SHARED_API RichMediaAnnotation : public Aspose::Pdf::Annotations::Annotation
{
    typedef RichMediaAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    enum class ContentType
    {
        /// <summary>
        /// Audio data.
        /// </summary>
        Audio,
        /// <summary>
        /// Video data.
        /// </summary>
        Video,
        /// <summary>
        /// Unknown/unsupported type of data.
        /// </summary>
        Unknown
    };
    
    enum class ActivationEvent
    {
        /// <summary>
        /// Activated by click on the annotation. 
        /// </summary>
        Click,
        /// <summary>
        /// Activated on page open.
        /// </summary>
        PageOpen,
        /// <summary>
        /// Activated when page becames visible. 
        /// </summary>
        PageVisible
    };
    
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    /// <summary>
    /// Sets or gets custom flash player to play video/audio data.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_CustomPlayer();
    /// <summary>
    /// Sets or gets custom flash player to play video/audio data.
    /// </summary>
    void set_CustomPlayer(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets or gets flash variables which passed to player. 
    /// </summary>
    System::String get_CustomFlashVariables();
    /// <summary>
    /// Sets or gets flash variables which passed to player. 
    /// </summary>
    void set_CustomFlashVariables(System::String value);
    /// <summary>
    /// Data of the Rich Media content. 
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Content();
    /// <summary>
    /// Gets or sets type of content. Possible values: Audio, Video. 
    /// </summary>
    RichMediaAnnotation::ContentType get_Type();
    /// <summary>
    /// Gets or sets type of content. Possible values: Audio, Video. 
    /// </summary>
    void set_Type(RichMediaAnnotation::ContentType value);
    /// <summary>
    /// Event which activates application.
    /// </summary>
    RichMediaAnnotation::ActivationEvent get_ActivateOn();
    /// <summary>
    /// Event which activates application.
    /// </summary>
    void set_ActivateOn(RichMediaAnnotation::ActivationEvent value);
    
    /// <summary>
    /// Accepts visitor for this annotation. 
    /// </summary>
    /// <param name="visitor">Visitor instance.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    
    RichMediaAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Add custom named data (for example required for flash script).
    /// </summary>
    /// <param name="name">Name of the data.</param>
    /// <param name="data">Data.</param>
    void AddCustomData(System::String name, System::SharedPtr<System::IO::Stream> data);
    /// <summary>
    /// Set content stream.
    /// </summary>
    /// <param name="fileName">Name of the stream.</param>
    /// <param name="audio">Data stream.</param>
    void SetContent(System::String fileName, System::SharedPtr<System::IO::Stream> audio);
    /// <summary>
    /// Set poster of the annotation. 
    /// </summary>
    /// <param name="imageStream">Stream containing poster image.</param>
    void SetPoster(System::SharedPtr<System::IO::Stream> imageStream);
    /// <summary>
    /// Updates data with specified parameters.
    /// </summary>
    void Update();
    
protected:

    RichMediaAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation);
    virtual bool AppearanceSupported();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _resourcePath;
    System::String _videoPlayerName;
    System::String _audioPlayerName;
    System::SharedPtr<System::IO::Stream> _content;
    RichMediaAnnotation::ContentType _contentType;
    System::String _contentName;
    System::String _imageName;
    System::SharedPtr<System::IO::Stream> _customPlayer;
    System::String _customFlashVariables;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::IO::Stream>>> _customData;
    RichMediaAnnotation::ActivationEvent _activateOn;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_RichMediaContent();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_RichMediaSettings();
    
    static const System::String Click;
    static const System::String PageOpen;
    static const System::String PageVisible;
    
    System::SharedPtr<System::IO::Stream> LoadResource(System::String name);
    System::String GetPlayerName();
    System::SharedPtr<System::IO::Stream> GetPlayer();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> Select(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> node, System::ArrayPtr<System::String> path);
    System::SharedPtr<System::IO::Stream> GetContent();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetDictionary(System::String key);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> ByRef(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> value);
    RichMediaAnnotation::ActivationEvent TranslateActionCode(System::String code);
    System::String GetActionCode();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


