#ifndef _Aspose_Pdf_Generator_GraphInfo_h_
#define _Aspose_Pdf_Generator_GraphInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Shape; } } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { class Color; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents graphics info.
/// </summary>
class ASPOSE_PDF_SHARED_API GraphInfo FINAL : public System::Object
{
    typedef GraphInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::BorderInfo;
    friend class Aspose::Pdf::Table;
    
public:

    float get_LineWidth();
    void set_LineWidth(float value);
    System::SharedPtr<Aspose::Pdf::Color> get_Color();
    void set_Color(System::SharedPtr<Aspose::Pdf::Color> value);
    System::ArrayPtr<int32_t> get_DashArray();
    void set_DashArray(System::ArrayPtr<int32_t> value);
    int32_t get_DashPhase();
    void set_DashPhase(int32_t value);
    System::SharedPtr<Aspose::Pdf::Color> get_FillColor();
    void set_FillColor(System::SharedPtr<Aspose::Pdf::Color> value);
    bool get_IsDoubled();
    void set_IsDoubled(bool value);
    
    System::SharedPtr<GraphInfo> Clone();
    
    GraphInfo();
    
protected:

    bool get_IsDefault();
    double get_Ratio();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GraphInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Color> color;
    System::ArrayPtr<int32_t> dashArray;
    int32_t dashPhase;
    System::SharedPtr<Aspose::Pdf::Color> fillColor;
    float lineWidth;
    bool isDoubled;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_GraphInfo_h_

