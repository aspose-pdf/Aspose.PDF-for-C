#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Ellipse; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Path; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Arc; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Circle; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Curve; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Line; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Rectangle; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Color; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents shape - the base graphics object.
/// </summary>
class ASPOSE_PDF_SHARED_API Shape : public System::Object
{
    typedef Shape ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Ellipse;
    friend class Aspose::Pdf::Drawing::Path;
    friend class Aspose::Pdf::Drawing::Arc;
    friend class Aspose::Pdf::Drawing::Circle;
    friend class Aspose::Pdf::Drawing::Curve;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Drawing::Line;
    friend class Aspose::Pdf::Drawing::Rectangle;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a <see cref="GraphInfo"/> object that indicates the graph info,such as color,
    /// line width,etc.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::GraphInfo> get_GraphInfo();
    /// <summary>
    /// Sets a <see cref="GraphInfo"/> object that indicates the graph info,such as color,
    /// line width,etc.
    /// </summary>
    void set_GraphInfo(System::SharedPtr<Aspose::Pdf::GraphInfo> value);
    /// <summary>
    /// Gets a text for shape
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Text();
    /// <summary>
    /// Sets a text for shape
    /// </summary>
    void set_Text(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    
    Shape();
    
protected:

    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) = 0;
    virtual System::SharedPtr<Pdf::Rectangle> GetRect() = 0;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetTextOperators(System::SharedPtr<Page> page);
    static void SetTransparency(System::SharedPtr<Page> page, System::SharedPtr<Color> color, System::SharedPtr<Color> strokeColor, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void GetOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page, double curX, double curY);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::String GetArrayString(System::ArrayPtr<float> floatArray);
    System::ArrayPtr<float> GetArrayFromString(System::String split);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::GraphInfo> graphInfo;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> text;
    static int32_t graphicStateNumber;
    
    static void SetTransparecyOperator(System::String ca, System::SharedPtr<Page> page, System::SharedPtr<Color> color, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


