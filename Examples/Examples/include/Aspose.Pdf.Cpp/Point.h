#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/point_f.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class ParagraphAbsorberTests; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent point with fractional coordinates.
/// </summary>
class ASPOSE_PDF_SHARED_API Point FINAL : public System::Object
{
    typedef Point ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Text::ParagraphAbsorberTests;
    
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
    /// Gets point with zero coordinates.
    /// </summary>
    static System::SharedPtr<Point> get_Trivial();
    
    /// <summary>
    /// Initializes new instance of the <see cref="Point"/>.
    /// </summary>
    /// <param name="x">
    /// x coordinate value.
    /// </param>
    /// <param name="y">
    /// y coordinate value.
    /// </param>
    Point(double x, double y);
    
    /// <summary>
    /// Converts point into System.Drawing.PointF object.
    /// </summary>
    /// <returns>PointF structure.</returns>
    System::Drawing::PointF ToPoint();
    
protected:

    bool NearEqual(System::SharedPtr<Point> another, double delta);
    
private:

    double x, y;
    
};

} // namespace Pdf
} // namespace Aspose


