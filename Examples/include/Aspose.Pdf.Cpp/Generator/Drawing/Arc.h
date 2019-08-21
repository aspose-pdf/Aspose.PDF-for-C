#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Generator { class GraphTests; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// The <b>Aspose.Pdf.Drawing</b> namespace provides classes describing graphic primitives like arc, line, circle etc. 
/// Corresponding objects can be used for creating new documents.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents arc.
/// </summary>
class ASPOSE_PDF_SHARED_API Arc FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Arc ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Tests::Generator::GraphTests;
    
public:

    /// <summary>
    /// Gets a float value that indicates the x-coordinate of the center of the arc.
    /// </summary>
    double get_PosX();
    /// <summary>
    /// Sets a float value that indicates the x-coordinate of the center of the arc.
    /// </summary>
    void set_PosX(double value);
    /// <summary>
    /// Gets a float value that indicates the y-coordinate of the center of the arc.
    /// </summary>
    double get_PosY();
    /// <summary>
    /// Sets a float value that indicates the y-coordinate of the center of the arc.
    /// </summary>
    void set_PosY(double value);
    /// <summary>
    /// Gets a float value that indicates the radius of the arc.
    /// </summary>
    double get_Radius();
    /// <summary>
    /// Sets a float value that indicates the radius of the arc.
    /// </summary>
    void set_Radius(double value);
    /// <summary>
    /// Gets a float value that indicates the beginning angle degree of the arc.
    /// </summary>
    double get_Alpha();
    /// <summary>
    /// Sets a float value that indicates the beginning angle degree of the arc.
    /// </summary>
    void set_Alpha(double value);
    /// <summary>
    /// Gets a float value that indicates the ending angle degree of the arc.
    /// </summary>
    double get_Beta();
    /// <summary>
    /// Sets a float value that indicates the ending angle degree of the arc.
    /// </summary>
    void set_Beta(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Arc"/> class.
    /// </summary>
    /// <param name="posX">The x-coordinate of the center point of the arc.</param>
    /// <param name="posY">The y-coordinate of the center point of the arc.</param>
    /// <param name="radius">The radius value of the arc.</param>
    /// <param name="alpha">The beginning angle value of the arc.</param>
    /// <param name="beta">The end angle value of the arc.</param>
    Arc(float posX, float posY, float radius, float alpha, float beta);
    
protected:

    Arc();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual System::SharedPtr<Pdf::Rectangle> GetRect();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::ArrayPtr<float> GetStartPosition();
    System::ArrayPtr<float> GetEndPosition();
    
private:

    double posX;
    double posY;
    double radius;
    double alpha;
    double beta;
    static const double EPSILON;
    
    void CreateSmallArc(double r, double a1, double a2, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double curX, double curY);
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


