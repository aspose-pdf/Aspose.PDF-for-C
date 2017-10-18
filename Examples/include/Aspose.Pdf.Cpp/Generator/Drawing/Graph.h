#ifndef _Aspose_Pdf_Generator_Drawing_Graph_h_
#define _Aspose_Pdf_Generator_Drawing_Graph_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::SharedPtr<BorderInfo> get_Border();
    void set_Border(System::SharedPtr<BorderInfo> value);
    double get_Left();
    void set_Left(double value);
    double get_Top();
    void set_Top(double value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> get_Shapes();
    void set_Shapes(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> value);
    double get_SkewAngleX();
    void set_SkewAngleX(double value);
    double get_SkewAngleY();
    void set_SkewAngleY(double value);
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Title();
    void set_Title(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    double get_Width();
    void set_Width(double value);
    double get_Height();
    void set_Height(double value);
    double get_RotationAngle();
    void set_RotationAngle(double value);
    
    Graph(float width, float height);
    
protected:

    Graph();
    
    void Process(double &curX, double &curY, bool isNextParagraphInline, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Page> page);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Graph"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double height;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> shapes;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> title;
    System::SharedPtr<BorderInfo> border;
    double width;
    double left;
    double rotationAngle;
    double skewAngleX;
    double skewAngleY;
    double top;
    System::SharedPtr<GraphInfo> graphInfo;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Graph_h_

