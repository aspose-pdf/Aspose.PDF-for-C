#pragma once
//using System.Windows.Forms;
//using System.CodeDom;

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DCrossSectionArray; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDF3D { class PDF3DReporter; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { class Point3D; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DCuttingPlaneOrientation; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DCrossSection.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DCrossSection : public System::Object
{
    typedef PDF3DCrossSection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    
public:

    /// <summary>
    /// Gets or sets the cross section rotation center.
    /// </summary>
    /// <value>The center.</value>
    System::SharedPtr<Point3D> get_Center();
    /// <summary>
    /// Gets or sets the cross section rotation center.
    /// </summary>
    /// <value>The center.</value>
    void set_Center(System::SharedPtr<Point3D> value);
    /// <summary>
    /// Gets or sets the cutting plane opacity.
    /// </summary>
    /// <value>The cutting plane opacity.</value>
    /// <exception cref="Exception">The number must be in the range [0 , 1]</exception>
    double get_CuttingPlaneOpacity();
    /// <summary>
    /// Gets or sets the cutting plane opacity.
    /// </summary>
    /// <value>The cutting plane opacity.</value>
    /// <exception cref="Exception">The number must be in the range [0 , 1]</exception>
    void set_CuttingPlaneOpacity(double value);
    /// <summary>
    /// Gets or sets the cutting plane orientation.
    /// </summary>
    /// <value>The cutting plane orientation.</value>
    /// <exception cref="Exception">
    /// Only one of the values shall be Null
    /// </exception>
    System::SharedPtr<PDF3DCuttingPlaneOrientation> get_CuttingPlaneOrientation();
    /// <summary>
    /// Gets or sets the cutting plane orientation.
    /// </summary>
    /// <value>The cutting plane orientation.</value>
    /// <exception cref="Exception">
    /// Only one of the values shall be Null
    /// </exception>
    void set_CuttingPlaneOrientation(System::SharedPtr<PDF3DCuttingPlaneOrientation> value);
    /// <summary>
    /// Gets or sets the color of the cutting plane.
    /// </summary>
    /// <value>The color of the cutting plane.</value>
    System::SharedPtr<Color> get_CuttingPlaneColor();
    /// <summary>
    /// Gets or sets the color of the cutting plane.
    /// </summary>
    /// <value>The color of the cutting plane.</value>
    void set_CuttingPlaneColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets or sets the color of the cutting planes intersection.
    /// </summary>
    /// <value>The color of the cutting planes intersection.</value>
    System::SharedPtr<Color> get_CuttingPlanesIntersectionColor();
    /// <summary>
    /// Gets or sets the color of the cutting planes intersection.
    /// </summary>
    /// <value>The color of the cutting planes intersection.</value>
    void set_CuttingPlanesIntersectionColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets or sets a value indicating visibility of the cutting planes intersection.
    /// </summary>
    /// <value><c>true</c> if visible; otherwise, <c>false</c>.</value>
    bool get_Visibility();
    /// <summary>
    /// Gets or sets a value indicating visibility of the cutting planes intersection.
    /// </summary>
    /// <value><c>true</c> if visible; otherwise, <c>false</c>.</value>
    void set_Visibility(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCrossSection"/> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    PDF3DCrossSection(System::SharedPtr<Document> doc);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> CrossSectionPdfDict;
    int32_t ObjectID;
    System::SharedPtr<PDF3DView> Pdf3DView;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> PdfObject;
    
    PDF3DCrossSection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> obj);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Point3D> _center;
    double _cuttingPlaneOpacity;
    System::SharedPtr<PDF3DCuttingPlaneOrientation> _cuttingPlaneOrientation;
    System::SharedPtr<Color> _cuttingPlaneColor;
    System::SharedPtr<Color> _cuttingPlanesIntersectionColor;
    bool _visibility;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


