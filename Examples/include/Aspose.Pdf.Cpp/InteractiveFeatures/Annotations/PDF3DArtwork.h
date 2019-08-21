#pragma once
//using System.Windows.Forms;

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/read_only_collection.h>
#include <system/array.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DViewArray; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DStream; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class PdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DLightingScheme; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DRenderMode; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DContent; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DArtwork.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DArtwork : public System::Object
{
    typedef PDF3DArtwork ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    
public:

    /// <summary>
    /// Gets the lighting scheme.
    /// </summary>
    /// <value>The lighting scheme.</value>
    System::SharedPtr<PDF3DLightingScheme> get_LightingScheme();
    /// <summary>
    /// Sets the lighting scheme.
    /// </summary>
    /// <value>The lighting scheme.</value>
    void set_LightingScheme(System::SharedPtr<PDF3DLightingScheme> value);
    /// <summary>
    /// Gets the render mode.
    /// </summary>
    /// <value>The render mode.</value>
    System::SharedPtr<PDF3DRenderMode> get_RenderMode();
    /// <summary>
    /// Sets the render mode.
    /// </summary>
    /// <value>The render mode.</value>
    void set_RenderMode(System::SharedPtr<PDF3DRenderMode> value);
    /// <summary>
    /// Gets the view array.
    /// </summary>
    /// <value>The view array.</value>
    System::SharedPtr<PDF3DViewArray> get_ViewArray();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DArtwork"/> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="content">The content.</param>
    /// <param name="lightingScheme">The lighting scheme.</param>
    /// <param name="renderMode">The render mode.</param>
    PDF3DArtwork(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DContent> content, System::SharedPtr<PDF3DLightingScheme> lightingScheme, System::SharedPtr<PDF3DRenderMode> renderMode);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DArtwork"/> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="content">The content.</param>
    PDF3DArtwork(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DContent> content);
    
    /// <summary>
    /// Get the views as list.
    /// </summary>
    /// <returns>ReadOnlyCollection&lt;PDF3DView&gt;.</returns>
    System::SharedPtr<System::Collections::ObjectModel::ReadOnlyCollection<System::SharedPtr<PDF3DView>>> GetViewsList();
    /// <summary>
    /// Gets the views array.
    /// </summary>
    /// <returns>Array of views.</returns>
    System::ArrayPtr<System::SharedPtr<PDF3DView>> GetViewsArray();
    
protected:

    System::SharedPtr<PDF3DStream> Pdf3DStream;
    System::SharedPtr<Aspose::Pdf::Engine::Data::PdfDictionary> Pdf3DArtwork;
    System::SharedPtr<PDF3DAnnotation> _annot;
    bool isAdded;
    
    void Add3DViewToList(System::SharedPtr<PDF3DView> view);
    
    PDF3DArtwork(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Document> doc, System::SharedPtr<PDF3DAnnotation> annot);
    
    void DeleteAllChildElements();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Document> _doc;
    System::SharedPtr<PDF3DLightingScheme> _lightingScheme;
    System::SharedPtr<PDF3DRenderMode> _renderMode;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


