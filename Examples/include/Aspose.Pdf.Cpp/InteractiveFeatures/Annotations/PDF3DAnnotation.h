#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <cstdint>

#include "InteractiveFeatures/Annotations/Annotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DArtwork; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DViewArray; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDF3D { class PDF3DAnnotation_OpenningTests; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationType; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DLightingScheme; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DContent; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DRenderMode; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enum PDF3DActivation: set of 3D annotation activation mode.
/// </summary>
enum class PDF3DActivation
{
    /// <summary>
    /// The active when open
    /// </summary>
    activeWhenOpen,
    /// <summary>
    /// The active when visible
    /// </summary>
    activeWhenVisible,
    /// <summary>
    /// The activated by user or script action
    /// </summary>
    activatedUserOrScriptAction
};

/// <summary>
/// Class PDF3DAnnotation. This class cannot be inherited.
/// </summary>
/// <seealso cref="Aspose::Pdf::Annotations::Annotation" />
class ASPOSE_PDF_SHARED_API PDF3DAnnotation FINAL : public Aspose::Pdf::Annotations::Annotation
{
    typedef PDF3DAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DAnnotation_OpenningTests;
    
public:

    /// <summary>
    /// Gets the 3D Artwork.
    /// </summary>
    /// <value>The PDF3 d artwork.</value>
    System::SharedPtr<PDF3DArtwork> get_Pdf3DArtwork();
    /// <summary>
    /// Gets the lighting scheme.
    /// </summary>
    /// <value>The lighting scheme.</value>
    System::SharedPtr<PDF3DLightingScheme> get_LightingScheme();
    /// <summary>
    /// Gets the content.
    /// </summary>
    /// <value>The content.</value>
    System::SharedPtr<PDF3DContent> get_Content();
    /// <summary>
    /// Sets the content.
    /// </summary>
    /// <value>The content.</value>
    void set_Content(System::SharedPtr<PDF3DContent> value);
    /// <summary>
    /// Gets the render mode.
    /// </summary>
    /// <value>The render mode.</value>
    System::SharedPtr<PDF3DRenderMode> get_RenderMode();
    /// <summary>
    /// Gets the view array.
    /// </summary>
    /// <value>The view array.</value>
    System::SharedPtr<PDF3DViewArray> get_ViewArray();
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    /// <value>The type of the annotation.</value>
    virtual Aspose::Pdf::Annotations::AnnotationType get_AnnotationType();
    
    /// <summary>
    /// Sets the index of the default view.
    /// </summary>
    /// <param name="index">The default view index.</param>
    void SetDefaultViewIndex(int32_t index);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DAnnotation"/> class.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <param name="rect">The rectangle.</param>
    /// <param name="pdf3DArtwork">The 3D Artwork.</param>
    PDF3DAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<PDF3DArtwork> pdf3DArtwork);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DAnnotation"/> class.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <param name="rect">The rectangle.</param>
    /// <param name="pdf3DArtwork">The 3D Artwork.</param>
    /// <param name="activation">The activation mode.</param>
    /// <exception cref="Exception">3D Stream is already added to current 3D Artwork</exception>
    PDF3DAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<PDF3DArtwork> pdf3DArtwork, PDF3DActivation activation);
    
    /// <summary>
    /// Accepts visitor for annotation processing.
    /// </summary>
    /// <param name="visitor">AnnotationSelector object.</param>
    virtual void Accept(System::SharedPtr<AnnotationSelector> visitor);
    /// <summary>
    /// Sets the image preview.
    /// </summary>
    /// <param name="filename">The image preview filename.</param>
    void SetImagePreview(System::String filename);
    /// <summary>
    /// Sets the image preview.
    /// </summary>
    /// <param name="image">The image stream.</param>
    void SetImagePreview(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Clears the image preview.
    /// </summary>
    void ClearImagePreview();
    /// <summary>
    /// Gets the image preview.
    /// </summary>
    /// <returns>Image preview as stream.</returns>
    System::SharedPtr<System::IO::Stream> GetImagePreview();
    
protected:

    System::SharedPtr<PDF3DView> DefaultView;
    int32_t defaultViewIndex;
    
    PDF3DAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Document> doc);
    
    virtual void DeleteAllChildElements();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XForm> _appForm;
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<PDF3DArtwork> _pdf3DArtwork;
    System::SharedPtr<System::IO::Stream> _imagePreviewStream;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


