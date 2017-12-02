#ifndef _Aspose_Pdf_Generator_Drawing_Rectangle_h_
#define _Aspose_Pdf_Generator_Drawing_Rectangle_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Operator; } }

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
    
public:

    /// <summary>
    /// Gets or sets a float value that indicates the radius of rectangle corners.
    /// </summary>
    float get_RadiusForRoundCorner();
    /// <summary>
    /// Gets or sets a float value that indicates the radius of rectangle corners.
    /// </summary>
    void set_RadiusForRoundCorner(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the left position of the rectangle.
    /// </summary>
    float get_Left();
    /// <summary>
    /// Gets or sets a float value that indicates the left position of the rectangle.
    /// </summary>
    void set_Left(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the bottom position of the rectangle.
    /// </summary>
    float get_Bottom();
    /// <summary>
    /// Gets or sets a float value that indicates the bottom position of the rectangle.
    /// </summary>
    void set_Bottom(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the width of the rectangle.
    /// </summary>
    float get_Width();
    /// <summary>
    /// Gets or sets a float value that indicates the width of the rectangle.
    /// </summary>
    void set_Width(float value);
    /// <summary>
    /// Gets or sets a float value that indicates the height of the rectangle.
    /// </summary>
    float get_Height();
    /// <summary>
    /// Gets or sets a float value that indicates the height of the rectangle.
    /// </summary>
    void set_Height(float value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Rectangle"/> class.
    /// </summary>
    /// <param name="left">The left position of the rectangle.</param>
    /// <param name="bottom">The bottom position of the rectangle.</param>
    /// <param name="width">The width of the rectangle.</param>
    /// <param name="height">The height of the rectangle.</param>
    Rectangle(float left, float bottom, float width, float height);
    
protected:

    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    float bottom;
    float height;
    float left;
    float width;
    float radiusForRoundCorner;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Rectangle_h_

