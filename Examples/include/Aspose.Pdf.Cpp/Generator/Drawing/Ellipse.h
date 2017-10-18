#ifndef _Aspose_Pdf_Generator_Drawing_Ellipse_h_
#define _Aspose_Pdf_Generator_Drawing_Ellipse_h_
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
/// Represents ellipse.
/// </summary>
class ASPOSE_PDF_SHARED_API Ellipse FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Ellipse ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    double get_Left();
    void set_Left(double value);
    double get_Bottom();
    void set_Bottom(double value);
    double get_Width();
    void set_Width(double value);
    double get_Height();
    void set_Height(double value);
    
    Ellipse(float left, float bottom, float width, float height);
    
protected:

    Ellipse();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Ellipse"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double left;
    double bottom;
    double width;
    double height;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Ellipse_h_

