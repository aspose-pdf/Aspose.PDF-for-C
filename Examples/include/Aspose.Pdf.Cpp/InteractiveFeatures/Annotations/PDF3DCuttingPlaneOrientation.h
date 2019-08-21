#pragma once
//using System.Windows.Forms;
//using System.CodeDom;

#include <system/string.h>
#include <system/object.h>
#include <system/nullable.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DCuttingPlaneOrientation.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DCuttingPlaneOrientation : public System::Object
{
    typedef PDF3DCuttingPlaneOrientation ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the angle to X axis.
    /// </summary>
    /// <value>The angle to X axis.</value>
    System::Nullable<double> get_AngleX();
    /// <summary>
    /// Sets the angle to X axis.
    /// </summary>
    /// <value>The angle to X axis.</value>
    void set_AngleX(System::Nullable<double> value);
    /// <summary>
    /// Gets the angle to Y axis.
    /// </summary>
    /// <value>The angle Y axis.</value>
    System::Nullable<double> get_AngleY();
    /// <summary>
    /// Sets the angle to Y axis.
    /// </summary>
    /// <value>The angle Y axis.</value>
    void set_AngleY(System::Nullable<double> value);
    /// <summary>
    /// Gets the angle to Z axis.
    /// </summary>
    /// <value>The angle to Z axis.</value>
    System::Nullable<double> get_AngleZ();
    /// <summary>
    /// Sets the angle to Z axis.
    /// </summary>
    /// <value>The angle to Z axis.</value>
    void set_AngleZ(System::Nullable<double> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCuttingPlaneOrientation"/> class.
    /// </summary>
    PDF3DCuttingPlaneOrientation();
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCuttingPlaneOrientation"/> class.
    /// </summary>
    /// <param name="angleX">The angle x.</param>
    /// <param name="angleY">The angle y.</param>
    /// <param name="angleZ">The angle z.</param>
    PDF3DCuttingPlaneOrientation(System::Nullable<double> angleX, System::Nullable<double> angleY, System::Nullable<double> angleZ);
    
    /// <summary>
    /// Returns a <see cref="System::String" /> that represents this instance.
    /// </summary>
    /// <returns>A <see cref="System::String" /> that represents this instance.</returns>
    System::String ToString();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Nullable<double> _angleX;
    System::Nullable<double> _angleY;
    System::Nullable<double> _angleZ;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


