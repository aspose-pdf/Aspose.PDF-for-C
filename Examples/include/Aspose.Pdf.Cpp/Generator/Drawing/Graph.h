#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "Generator/BaseParagraph.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents graph - graphics generator paragraph.
/// </summary>
class ASPOSE_PDF_SHARED_API Graph FINAL : public Aspose::Pdf::BaseParagraph
{
    typedef Graph ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets or sets a <see cref="GraphInfo"/> object that indicates the graph info,such as color,
    /// line width,etc.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::GraphInfo> get_GraphInfo();
    /// <summary>
    /// Gets or sets a <see cref="GraphInfo"/> object that indicates the graph info,such as color,
    /// line width,etc.
    /// </summary>
    void set_GraphInfo(System::SharedPtr<Aspose::Pdf::GraphInfo> value);
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets or sets change curret position after process paragraph.(default true)
    /// </summary>
    bool get_IsChangePosition();
    /// <summary>
    /// Gets or sets change curret position after process paragraph.(default true)
    /// </summary>
    void set_IsChangePosition(bool value);
    /// <summary>
    /// Gets or sets the table left coordinate.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Gets or sets the table left coordinate.
    /// </summary>
    void set_Left(double value);
    /// <summary>
    /// Gets or sets the table top coordinate.
    /// </summary>
    double get_Top();
    /// <summary>
    /// Gets or sets the table top coordinate.
    /// </summary>
    void set_Top(double value);
    /// <summary>
    /// Gets or sets a <see cref="Shapes"/> collection that indicates all shapes in the graph.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> get_Shapes();
    /// <summary>
    /// Gets or sets a <see cref="Shapes"/> collection that indicates all shapes in the graph.
    /// </summary>
    void set_Shapes(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> value);
    /// <summary>
    /// Gets or sets a string value that indicates the title of the graph.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Title();
    /// <summary>
    /// Gets or sets a string value that indicates the title of the graph.
    /// </summary>
    void set_Title(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    /// <summary>
    /// Gets or sets a float value that indicates the graph width.
    /// The unit is point.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets a float value that indicates the graph width.
    /// The unit is point.
    /// </summary>
    void set_Width(double value);
    /// <summary>
    /// Gets or sets a float value that indicates the graph height.
    /// The unit is point.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Gets or sets a float value that indicates the graph height.
    /// The unit is point.
    /// </summary>
    void set_Height(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Graph"/> class.
    /// </summary>
    /// <param name="width">The width of the graph.</param>
    /// <param name="height">The height of the graph.</param>
    Graph(float width, float height);
    
    /// <summary>
    /// Clone the graph.
    /// </summary>
    /// <returns>The cloned object</returns>
    virtual System::SharedPtr<System::Object> Clone();
    
protected:

    /// <summary>
    /// Gets or sets is left set (for internal use).
    /// </summary>
    bool get_IsLeftSet();
    /// <summary>
    /// Gets or sets is left set (for internal use).
    /// </summary>
    void set_IsLeftSet(bool value);
    /// <summary>
    /// Gets or sets is top set (for internal use).
    /// </summary>
    bool get_IsTopSet();
    /// <summary>
    /// Gets or sets is top set (for internal use).
    /// </summary>
    void set_IsTopSet(bool value);
    
    Graph();
    
    bool Process(double& curX, double& curY, bool isNextParagraphInline, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    double height;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> shapes;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> title;
    System::SharedPtr<BorderInfo> border;
    double left;
    bool isChangePosition;
    double top;
    double width;
    System::SharedPtr<Aspose::Pdf::GraphInfo> graphInfo;
    bool pr_IsLeftSet;
    bool pr_IsTopSet;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


