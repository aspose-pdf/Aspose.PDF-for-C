#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents circle.
/// </summary>
class ASPOSE_PDF_SHARED_API Circle FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Circle ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a float value that indicates the x-coordinate of the center of the circle.
    /// </summary>
    double get_PosX();
    /// <summary>
    /// Sets a float value that indicates the x-coordinate of the center of the circle.
    /// </summary>
    void set_PosX(double value);
    /// <summary>
    /// Gets a float value that indicates the y-coordinate of the center of the circle.
    /// </summary>
    double get_PosY();
    /// <summary>
    /// Sets a float value that indicates the y-coordinate of the center of the circle.
    /// </summary>
    void set_PosY(double value);
    /// <summary>
    /// Gets a float value that indicates the radius of the circle.
    /// </summary>
    double get_Radius();
    /// <summary>
    /// Sets a float value that indicates the radius of the circle.
    /// </summary>
    void set_Radius(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Circle"/> class.
    /// </summary>
    /// <param name="posX">The x-coordinate of the center of the circle.</param>
    /// <param name="posY">The y-coordinate of the center of the circle.</param>
    /// <param name="radius">The radius of the circle.</param>
    Circle(float posX, float posY, float radius);
    
protected:

    Circle();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual System::SharedPtr<Pdf::Rectangle> GetRect();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    double posX;
    double posY;
    double radius;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


