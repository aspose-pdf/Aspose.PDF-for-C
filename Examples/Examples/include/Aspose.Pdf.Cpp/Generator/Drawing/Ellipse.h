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
/// Represents ellipse.
/// </summary>
class ASPOSE_PDF_SHARED_API Ellipse FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Ellipse ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets or sets a float value that indicates the left position of the ellipse.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Gets or sets a float value that indicates the left position of the ellipse.
    /// </summary>
    void set_Left(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the bottom position of the ellipse.
    /// </summary>
    double get_Bottom();
    /// <summary>
    /// Gets or sets a float value that indicates the bottom position of the ellipse.
    /// </summary>
    void set_Bottom(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the width of the ellipse.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets a float value that indicates the width of the ellipse.
    /// </summary>
    void set_Width(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the height of the ellipse.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Gets or sets a float value that indicates the height of the ellipse.
    /// </summary>
    void set_Height(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Ellipse"/> class.
    /// </summary>
    /// <param name="left">The left position of the ellipse.</param>
    /// <param name="bottom">The bottom position of the ellipse.</param>
    /// <param name="width">The width of the ellipse.</param>
    /// <param name="height">The height of the ellipse.</param>
    Ellipse(double left, double bottom, double width, double height);
    
protected:

    Ellipse();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual System::SharedPtr<Pdf::Rectangle> GetRect();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    double left;
    double bottom;
    double width;
    double height;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


