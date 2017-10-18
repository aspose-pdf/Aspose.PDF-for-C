#ifndef _Aspose_Pdf_Generator_Drawing_Circle_h_
#define _Aspose_Pdf_Generator_Drawing_Circle_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents circle.
/// </summary>
class ASPOSE_PDF_SHARED_API Circle FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Circle ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    double get_PosX();
    void set_PosX(double value);
    double get_PosY();
    void set_PosY(double value);
    double get_Radius();
    void set_Radius(double value);
    
    Circle(float posX, float posY, float radius);
    
protected:

    Circle();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Circle"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double posX;
    double posY;
    double radius;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Circle_h_

