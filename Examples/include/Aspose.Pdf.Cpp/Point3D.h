#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent point with fractional coordinates.
/// </summary>
class ASPOSE_PDF_SHARED_API Point3D FINAL : public System::Object
{
    typedef Point3D ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// X coordinate value.
    /// </summary>
    double get_X();
    /// <summary>
    /// X coordinate value.
    /// </summary>
    void set_X(double value);
    /// <summary>
    /// Y coordinate value.
    /// </summary>
    double get_Y();
    /// <summary>
    /// Y coordinate value.
    /// </summary>
    void set_Y(double value);
    /// <summary>
    /// Z coordinate value.
    /// </summary>
    double get_Z();
    /// <summary>
    /// Z coordinate value.
    /// </summary>
    void set_Z(double value);
    /// <summary>
    /// Gets point with zero coordinates.
    /// </summary>
    static System::SharedPtr<Point3D> get_Trivial();
    
    /// <summary>
    /// Initializes new instance of the <see cref="Point3D"/>.
    /// </summary>
    /// <param name="x">
    /// x coordinate value.
    /// </param>
    /// <param name="y">
    /// y coordinate value.
    /// </param>
    /// <param name="z">
    /// z coordinate value.
    /// </param>
    Point3D(double x, double y, double z);
    
private:

    double x, y, z;
    
};

} // namespace Pdf
} // namespace Aspose


