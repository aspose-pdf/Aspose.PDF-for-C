#ifndef _Aspose_Pdf_Generator_Drawing_Curve_h_
#define _Aspose_Pdf_Generator_Drawing_Curve_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents bezier curve.
/// </summary>
class ASPOSE_PDF_SHARED_API Curve FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Curve ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 1 of the curve.
    /// </summary>
    float get_Position1X();
    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 1 of the curve.
    /// </summary>
    void set_Position1X(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 1 of the curve.
    /// </summary>
    float get_Position1Y();
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 1 of the curve.
    /// </summary>
    void set_Position1Y(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 2 of the curve.
    /// </summary>
    float get_Position2X();
    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 2 of the curve.
    /// </summary>
    void set_Position2X(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 2 of the curve.
    /// </summary>
    float get_Position2Y();
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 2 of the curve.
    /// </summary>
    void set_Position2Y(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 3 of the curve.
    /// </summary>
    float get_Position3X();
    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 3 of the curve.
    /// </summary>
    void set_Position3X(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 3 of the curve.
    /// </summary>
    float get_Position3Y();
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 3 of the curve.
    /// </summary>
    void set_Position3Y(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 4 of the curve.
    /// </summary>
    float get_Position4X();
    /// <summary>
    /// Gets or sets a float value that indicates the x-coordinate of the control point 4 of the curve.
    /// </summary>
    void set_Position4X(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 4 of the curve.
    /// </summary>
    float get_Position4Y();
    /// <summary>
    /// Gets or sets a float value that indicates the y-coordinate of the control point 4 of the curve.
    /// </summary>
    void set_Position4Y(float value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Curve"/> class.
    /// </summary>
    /// <param name="positionArr">The position array of the control points of the curve.There should be four 
    /// control points,so the length of the array should be eight.</param>
    Curve(System::ArrayPtr<float> positionArr);
    
protected:

    Curve();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    float xPos1;
    float yPos1;
    float xPos2;
    float yPos2;
    float xPos3;
    float yPos3;
    float xPos4;
    float yPos4;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Curve_h_

