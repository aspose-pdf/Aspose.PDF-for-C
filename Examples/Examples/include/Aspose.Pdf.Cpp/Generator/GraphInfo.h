#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Path; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class Color; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents graphics info.
/// </summary>
class ASPOSE_PDF_SHARED_API GraphInfo FINAL : public System::ICloneable
{
    typedef GraphInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Drawing::Path;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::BorderInfo;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets or sets a float value that indicates the line width of the graph.
    /// </summary>
    float get_LineWidth();
    /// <summary>
    /// Gets or sets a float value that indicates the line width of the graph.
    /// </summary>
    void set_LineWidth(float value);
    /// <summary>
    /// Gets or sets a <see cref="Color"/> object that indicates the color of the graph.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_Color();
    /// <summary>
    /// Gets or sets a <see cref="Color"/> object that indicates the color of the graph.
    /// </summary>
    void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets or sets a dash array.
    /// </summary>
    System::ArrayPtr<int32_t> get_DashArray();
    /// <summary>
    /// Gets or sets a dash array.
    /// </summary>
    void set_DashArray(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets or sets a dash phase.
    /// </summary>
    int32_t get_DashPhase();
    /// <summary>
    /// Gets or sets a dash phase.
    /// </summary>
    void set_DashPhase(int32_t value);
    /// <summary>
    /// Gets or sets a <see cref="Color"/> object that indicates the fill color of the graph.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Color> get_FillColor();
    /// <summary>
    /// Gets or sets a <see cref="Color"/> object that indicates the fill color of the graph.
    /// </summary>
    void set_FillColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets or sets is border doubled.
    /// </summary>
    bool get_IsDoubled();
    /// <summary>
    /// Gets or sets is border doubled.
    /// </summary>
    void set_IsDoubled(bool value);
    /// <summary>
    /// Gets or sets a float value that indicates the skew angle of the x-coordinate when transforming a coordinate system.
    /// </summary>
    double get_SkewAngleX();
    /// <summary>
    /// Gets or sets a float value that indicates the skew angle of the x-coordinate when transforming a coordinate system.
    /// </summary>
    void set_SkewAngleX(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the skew angle of the y-coordinate when transforming a coordinate system.
    /// </summary>
    double get_SkewAngleY();
    /// <summary>
    /// Gets or sets a float value that indicates the skew angle of the y-coordinate when transforming a coordinate system.
    /// </summary>
    void set_SkewAngleY(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the scaling rate of the x-coordinate when transforming a coordinate system.
    /// </summary>
    double get_ScalingRateX();
    /// <summary>
    /// Gets or sets a float value that indicates the scaling rate of the x-coordinate when transforming a coordinate system.
    /// </summary>
    void set_ScalingRateX(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the scaling rate of the y-coordinate when transforming a coordinate system.
    /// </summary>
    double get_ScalingRateY();
    /// <summary>
    /// Gets or sets a float value that indicates the scaling rate of the y-coordinate when transforming a coordinate system.
    /// </summary>
    void set_ScalingRateY(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the rotation angle of the coordinate system 
    /// when transforming a coordinate system.
    /// </summary>
    double get_RotationAngle();
    /// <summary>
    /// Gets or sets a float value that indicates the rotation angle of the coordinate system 
    /// when transforming a coordinate system.
    /// </summary>
    void set_RotationAngle(double value);
    
    /// <summary>
    /// Clone the graphics info.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<System::Object> Clone();
    
    GraphInfo();
    
protected:

    bool get_IsDefault();
    /// <summary>
    /// Gets border Ratio for doubled and not doubled borders.
    /// </summary>
    double get_Ratio();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Color> color;
    System::ArrayPtr<int32_t> dashArray;
    int32_t dashPhase;
    System::SharedPtr<Aspose::Pdf::Color> fillColor;
    float lineWidth;
    bool isDoubled;
    double rotationAngle;
    double skewAngleX;
    double skewAngleY;
    double scalingRateX;
    double scalingRateY;
    
};

} // namespace Pdf
} // namespace Aspose


