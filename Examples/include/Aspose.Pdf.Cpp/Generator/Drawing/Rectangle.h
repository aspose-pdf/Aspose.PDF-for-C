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
/// Represents rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_API Rectangle FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Rectangle ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a float value that indicates the radius of rectangle corners.
    /// </summary>
    double get_RoundedCornerRadius();
    /// <summary>
    /// Sets a float value that indicates the radius of rectangle corners.
    /// </summary>
    void set_RoundedCornerRadius(double value);
    /// <summary>
    /// Gets a float value that indicates the left position of the rectangle.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Sets a float value that indicates the left position of the rectangle.
    /// </summary>
    void set_Left(double value);
    /// <summary>
    /// Gets a float value that indicates the bottom position of the rectangle.
    /// </summary>
    double get_Bottom();
    /// <summary>
    /// Sets a float value that indicates the bottom position of the rectangle.
    /// </summary>
    void set_Bottom(double value);
    /// <summary>
    /// Gets a float value that indicates the width of the rectangle.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Sets a float value that indicates the width of the rectangle.
    /// </summary>
    void set_Width(double value);
    /// <summary>
    /// Gets a float value that indicates the height of the rectangle.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Sets a float value that indicates the height of the rectangle.
    /// </summary>
    void set_Height(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Rectangle"/> class.
    /// </summary>
    /// <param name="left">The left position of the rectangle.</param>
    /// <param name="bottom">The bottom position of the rectangle.</param>
    /// <param name="width">The width of the rectangle.</param>
    /// <param name="height">The height of the rectangle.</param>
    Rectangle(float left, float bottom, float width, float height);
    
protected:

    Rectangle();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual System::SharedPtr<Pdf::Rectangle> GetRect();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    double bottom;
    double height;
    double left;
    double width;
    double roundedCornerRadius;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


