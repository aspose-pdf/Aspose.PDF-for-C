#ifndef _Aspose_Pdf_Generator_BorderInfo_h_
#define _Aspose_Pdf_Generator_BorderInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
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
class ASPOSE_PDF_SHARED_API BorderInfo FINAL : public System::Object
{
    typedef BorderInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
public:

    System::SharedPtr<GraphInfo> get_Left();
    void set_Left(System::SharedPtr<GraphInfo> value);
    System::SharedPtr<GraphInfo> get_Right();
    void set_Right(System::SharedPtr<GraphInfo> value);
    System::SharedPtr<GraphInfo> get_Top();
    void set_Top(System::SharedPtr<GraphInfo> value);
    System::SharedPtr<GraphInfo> get_Bottom();
    void set_Bottom(System::SharedPtr<GraphInfo> value);
    double get_RoundedBorderRadius();
    void set_RoundedBorderRadius(double value);
    
    BorderInfo(BorderSide borderSide, System::SharedPtr<Color> borderColor);
    BorderInfo();
    BorderInfo(BorderSide borderSide);
    BorderInfo(BorderSide borderSide, float borderWidth);
    BorderInfo(BorderSide borderSide, float borderWidth, System::SharedPtr<Color> borderColor);
    BorderInfo(BorderSide borderSide, System::SharedPtr<GraphInfo> info);
    
    System::SharedPtr<BorderInfo> Clone();
    
protected:

    bool get_IsSame();
    
    void SerializeGraphInfo(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String side, System::SharedPtr<GraphInfo> info);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BorderInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

#endif // _Aspose_Pdf_Generator_BorderInfo_h_

