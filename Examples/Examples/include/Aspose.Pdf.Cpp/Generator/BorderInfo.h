#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { class FloatingBox; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { enum class BorderSide; } }
namespace Aspose { namespace Pdf { class Color; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents border for graphics elements.
/// </summary>
class ASPOSE_PDF_SHARED_API BorderInfo FINAL : public System::ICloneable
{
    typedef BorderInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets or sets a object that indicates left of the border.
    /// </summary>
    System::SharedPtr<GraphInfo> get_Left();
    /// <summary>
    /// Gets or sets a object that indicates left of the border.
    /// </summary>
    void set_Left(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets or sets a object that indicates right of the border.
    /// </summary>
    System::SharedPtr<GraphInfo> get_Right();
    /// <summary>
    /// Gets or sets a object that indicates right of the border.
    /// </summary>
    void set_Right(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets or sets a object that indicates the top border.
    /// </summary>
    System::SharedPtr<GraphInfo> get_Top();
    /// <summary>
    /// Gets or sets a object that indicates the top border.
    /// </summary>
    void set_Top(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets or sets a object that indicates bottom of the border.
    /// </summary>
    System::SharedPtr<GraphInfo> get_Bottom();
    /// <summary>
    /// Gets or sets a object that indicates bottom of the border.
    /// </summary>
    void set_Bottom(System::SharedPtr<GraphInfo> value);
    /// <summary>
    /// Gets or sets a rouded border radius
    /// </summary>
    double get_RoundedBorderRadius();
    /// <summary>
    /// Gets or sets a rouded border radius
    /// </summary>
    void set_RoundedBorderRadius(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"/> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (int)(BorderSide.Left | BorderSide.Top).</param>
    /// <param name="borderColor">The border color.</param>
    BorderInfo(BorderSide borderSide, System::SharedPtr<Color> borderColor);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"/> class.
    /// </summary>
    BorderInfo();
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"/> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    BorderInfo(BorderSide borderSide);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"/> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    /// <param name="borderWidth">The width of the border.</param>
    BorderInfo(BorderSide borderSide, float borderWidth);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"/> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    /// <param name="borderWidth">The width of the border.</param>
    /// <param name="borderColor">The border color.</param>
    BorderInfo(BorderSide borderSide, float borderWidth, System::SharedPtr<Color> borderColor);
    /// <summary>
    /// Initializes a new instance of the <see cref="BorderInfo"/> class.
    /// </summary>
    /// <param name="borderSide">Indicates the border sides info. For example: (BorderSide.Left | BorderSide.Top).</param>
    /// <param name="info">The border info.</param>
    BorderInfo(BorderSide borderSide, System::SharedPtr<GraphInfo> info);
    
    /// <summary>
    /// Clones a new BorderInfo object.
    /// </summary>
    /// <returns>The new BorderInfo object.</returns>
    System::SharedPtr<System::Object> Clone();
    
protected:

    /// <summary>
    /// Gets bool is all four border parts.
    /// </summary>
    bool get_IsSame();
    
    void SerializeGraphInfo(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String side, System::SharedPtr<GraphInfo> info);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<GraphInfo> bottom;
    System::SharedPtr<GraphInfo> left;
    System::SharedPtr<GraphInfo> right;
    double roundedBorderRadius;
    System::SharedPtr<GraphInfo> top;
    
    void AssignBorderSide(BorderSide borderSide);
    
};

} // namespace Pdf
} // namespace Aspose


