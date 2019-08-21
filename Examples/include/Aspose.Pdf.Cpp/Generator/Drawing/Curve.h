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
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

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
    /// Gets a float position array.
    /// </summary>
    System::ArrayPtr<float> get_PositionArray();
    /// <summary>
    /// Sets a float position array.
    /// </summary>
    void set_PositionArray(System::ArrayPtr<float> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Curve"/> class.
    /// </summary>
    /// <param name="positionArray">The position array of the control points of the curve.There should be four 
    /// control points,so the length of the array should be eight.</param>
    Curve(System::ArrayPtr<float> positionArray);
    
protected:

    Curve();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual System::SharedPtr<Pdf::Rectangle> GetRect();
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<float> positionArray;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


