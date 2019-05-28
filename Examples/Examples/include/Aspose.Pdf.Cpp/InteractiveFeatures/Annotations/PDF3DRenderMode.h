#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enum RenderModeType: set of render mode types
/// </summary>
enum class RenderModeType
{
    /// <summary>
    /// The "Solid" render mode.
    /// </summary>
    Solid,
    /// <summary>
    /// The "SolidWireFrame" render mode.
    /// </summary>
    SolidWireframe,
    /// <summary>
    /// The "Transparent" render mode.
    /// </summary>
    Transparent,
    /// <summary>
    /// The "TransparentWareFrame" render mode.
    /// </summary>
    TransparentWareFrame,
    /// <summary>
    /// The "BoundingBox" render mode.
    /// </summary>
    BoundingBox,
    /// <summary>
    /// The "TransparentBoundingBox" render mode.
    /// </summary>
    TransparentBoundingBox,
    /// <summary>
    /// The "TransparentBoundingBoxOutline" render mode.
    /// </summary>
    TransparentBoundingBoxOutline,
    /// <summary>
    /// The "WireFrame" render mode.
    /// </summary>
    Wireframe,
    /// <summary>
    /// The "ShadedWireFrame" render mode.
    /// </summary>
    ShadedWireframe,
    /// <summary>
    /// The "Vertices" render mode.
    /// </summary>
    Vertices,
    /// <summary>
    /// The "ShadedVertices" render mode.
    /// </summary>
    ShadedVertices,
    /// <summary>
    /// The "Illustration" render mode.
    /// </summary>
    Illustration,
    /// <summary>
    /// The "SolidOutline" render mode.
    /// </summary>
    SolidOutline,
    /// <summary>
    /// The "ShadedIllustration" render mode.
    /// </summary>
    ShadedIllustration
};

/// <summary>
/// Class PDF3DRenderMode.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DRenderMode : public System::Object
{
    typedef PDF3DRenderMode ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    
public:

    static System::SharedPtr<PDF3DRenderMode> Solid;
    static System::SharedPtr<PDF3DRenderMode> SolidWireframe;
    static System::SharedPtr<PDF3DRenderMode> Transparent;
    static System::SharedPtr<PDF3DRenderMode> TransparentWareFrame;
    static System::SharedPtr<PDF3DRenderMode> BoundingBox;
    static System::SharedPtr<PDF3DRenderMode> TransparentBoundingBox;
    static System::SharedPtr<PDF3DRenderMode> TransparentBoundingBoxOutline;
    static System::SharedPtr<PDF3DRenderMode> Wireframe;
    static System::SharedPtr<PDF3DRenderMode> ShadedWireframe;
    static System::SharedPtr<PDF3DRenderMode> Vertices;
    static System::SharedPtr<PDF3DRenderMode> ShadedVertices;
    static System::SharedPtr<PDF3DRenderMode> Illustration;
    static System::SharedPtr<PDF3DRenderMode> SolidOutline;
    static System::SharedPtr<PDF3DRenderMode> ShadedIllustration;
    
    /// <summary>
    /// Gets the type.
    /// </summary>
    /// <value>The type.</value>
    RenderModeType get_Type();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DRenderMode"/> class.
    /// </summary>
    /// <param name="subtype">The render mode type.</param>
    PDF3DRenderMode(RenderModeType subtype);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DRenderMode"/> class.
    /// </summary>
    /// <param name="typeName">Name of the type.</param>
    /// <exception cref="ArgumentException">Unknown a render mode type argument</exception>
    PDF3DRenderMode(System::String typeName);
    
    /// <summary>
    /// Gets the auxiliary colour.
    /// </summary>
    /// <returns>Color.</returns>
    System::SharedPtr<Color> GetAuxiliaryColour();
    /// <summary>
    /// Sets the auxiliary colour.
    /// </summary>
    /// <param name="color">The color.</param>
    /// <returns>PDF3DRenderMode.</returns>
    System::SharedPtr<PDF3DRenderMode> SetAuxiliaryColour(System::SharedPtr<Color> color);
    /// <summary>
    /// Gets the color of the face.
    /// </summary>
    /// <returns>Object.</returns>
    System::SharedPtr<System::Object> GetFaceColor();
    /// <summary>
    /// Sets the color of the face.
    /// </summary>
    /// <param name="color">The color.</param>
    /// <returns>PDF3DRenderMode.</returns>
    System::SharedPtr<PDF3DRenderMode> SetFaceColor(System::SharedPtr<Color> color);
    /// <summary>
    /// Gets the opacity.
    /// </summary>
    /// <returns>System.Double.</returns>
    double GetOpacity();
    /// <summary>
    /// Sets the opacity.
    /// </summary>
    /// <param name="opacity">The opacity.</param>
    /// <returns>PDF3DRenderMode.</returns>
    System::SharedPtr<PDF3DRenderMode> SetOpacity(double opacity);
    /// <summary>
    /// Sets the crease value.
    /// </summary>
    /// <param name="creaseValue">The crease value.</param>
    /// <returns>PDF3DRenderMode.</returns>
    System::SharedPtr<PDF3DRenderMode> SetCreaseValue(double creaseValue);
    /// <summary>
    /// Gets the crease value.
    /// </summary>
    /// <returns>System.Double.</returns>
    double GetCreaseValue();
    
protected:

    System::SharedPtr<Color> auxiliaryColour;
    System::SharedPtr<System::Object> faceColor;
    double opacity;
    double creaseValue;
    
    PDF3DRenderMode(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> rmPdfDictionary);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    RenderModeType _type;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::RenderModeType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::RenderModeType, const char_t*>, 14>& values();
};



