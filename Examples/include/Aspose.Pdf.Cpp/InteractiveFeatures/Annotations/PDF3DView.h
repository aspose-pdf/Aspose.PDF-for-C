#pragma once
//using System.Windows.Forms;
//using System.CodeDom;

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DArtwork; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DCrossSectionArray; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DViewArray; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDF3D { class PDF3DReporter; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DLightingScheme; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DRenderMode; } } }
namespace Aspose { namespace Pdf { class Matrix3D; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DView.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DView : public System::Object
{
    typedef PDF3DView ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    
public:

    /// <summary>
    /// Gets or sets the lighting scheme of view.
    /// </summary>
    /// <value>The lighting scheme of view.</value>
    System::SharedPtr<PDF3DLightingScheme> get_LightingScheme();
    /// <summary>
    /// Gets or sets the lighting scheme of view.
    /// </summary>
    /// <value>The lighting scheme of view.</value>
    void set_LightingScheme(System::SharedPtr<PDF3DLightingScheme> value);
    /// <summary>
    /// Gets or sets the render mode of view.
    /// </summary>
    /// <value>The render mode of view.</value>
    System::SharedPtr<PDF3DRenderMode> get_RenderMode();
    /// <summary>
    /// Gets or sets the render mode of view.
    /// </summary>
    /// <value>The render mode of view.</value>
    void set_RenderMode(System::SharedPtr<PDF3DRenderMode> value);
    /// <summary>
    /// Gets the cross sections array of view.
    /// </summary>
    /// <value>The cross sections array of view.</value>
    System::SharedPtr<PDF3DCrossSectionArray> get_CrossSectionsArray();
    /// <summary>
    /// Gets or sets the name of the view.
    /// </summary>
    /// <value>The name of the view.</value>
    System::String get_ViewName();
    /// <summary>
    /// Gets or sets the name of the view.
    /// </summary>
    /// <value>The name of the view.</value>
    void set_ViewName(System::String value);
    /// <summary>
    /// Gets or sets the camera position of view.
    /// </summary>
    /// <value>The camera position of view.</value>
    System::SharedPtr<Matrix3D> get_CameraPosition();
    /// <summary>
    /// Gets or sets the camera position of view.
    /// </summary>
    /// <value>The camera position of view.</value>
    void set_CameraPosition(System::SharedPtr<Matrix3D> value);
    /// <summary>
    /// Gets or sets the camera orbit of view.
    /// </summary>
    /// <value>The camera orbit of view.</value>
    double get_CameraOrbit();
    /// <summary>
    /// Gets or sets the camera orbit of view.
    /// </summary>
    /// <value>The camera orbit of view.</value>
    void set_CameraOrbit(double value);
    /// <summary>
    /// Gets or sets the color of the back ground of view.
    /// </summary>
    /// <value>The color of the back ground of view.</value>
    System::SharedPtr<Color> get_BackGroundColor();
    /// <summary>
    /// Gets or sets the color of the back ground of view.
    /// </summary>
    /// <value>The color of the back ground of view.</value>
    void set_BackGroundColor(System::SharedPtr<Color> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DView"/> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="cameraPosition">The camera position.</param>
    /// <param name="cameraOrbit">The camera orbit.</param>
    /// <param name="viewName">Name of the view.</param>
    PDF3DView(System::SharedPtr<Document> doc, System::SharedPtr<Matrix3D> cameraPosition, double cameraOrbit, System::String viewName);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DView" /> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="view">The view.</param>
    /// <param name="viewName">Name of the view.</param>
    PDF3DView(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view, System::String viewName);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> PdfView;
    System::SharedPtr<PDF3DArtwork> Pdf3DArtwork;
    int32_t ObjectID;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> PdfObject;
    bool isAdded;
    System::String InternalName;
    
    PDF3DView(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> obj, System::SharedPtr<Document> doc, System::SharedPtr<PDF3DArtwork> pdf3DArtwork, bool isDefaultView = false);
    
    void RemoveChildElements();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<PDF3DLightingScheme> _lightingScheme;
    System::SharedPtr<PDF3DRenderMode> _renderMode;
    System::SharedPtr<PDF3DCrossSectionArray> _crossSectionArray;
    System::String _viewName;
    System::SharedPtr<Matrix3D> _cameraPosition;
    double _cameraOrbit;
    System::SharedPtr<Color> _backGroundColor;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


