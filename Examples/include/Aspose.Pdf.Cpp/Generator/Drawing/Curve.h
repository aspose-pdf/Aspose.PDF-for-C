#ifndef _Aspose_Pdf_Generator_Drawing_Curve_h_
#define _Aspose_Pdf_Generator_Drawing_Curve_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    float get_Position1X();
    void set_Position1X(float value);
    float get_Position1Y();
    void set_Position1Y(float value);
    float get_Position2X();
    void set_Position2X(float value);
    float get_Position2Y();
    void set_Position2Y(float value);
    float get_Position3X();
    void set_Position3X(float value);
    float get_Position3Y();
    void set_Position3Y(float value);
    float get_Position4X();
    void set_Position4X(float value);
    float get_Position4Y();
    void set_Position4Y(float value);
    
    Curve(System::ArrayPtr<float> positionArr);
    
protected:

    Curve();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Curve"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    float xPos1;
    float yPos1;
    float xPos2;
    float yPos2;
    float xPos3;
    float yPos3;
    float xPos4;
    float yPos4;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Curve_h_

