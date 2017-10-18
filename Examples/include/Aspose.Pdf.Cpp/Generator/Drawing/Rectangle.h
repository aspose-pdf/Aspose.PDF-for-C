#ifndef _Aspose_Pdf_Generator_Drawing_Rectangle_h_
#define _Aspose_Pdf_Generator_Drawing_Rectangle_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_API Rectangle FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Rectangle ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    float get_RadiusForRoundCorner();
    void set_RadiusForRoundCorner(float value);
    float get_Left();
    void set_Left(float value);
    float get_Bottom();
    void set_Bottom(float value);
    float get_Width();
    void set_Width(float value);
    float get_Height();
    void set_Height(float value);
    
    Rectangle(float left, float bottom, float width, float height);
    
protected:

    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Rectangle"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    float bottom;
    float height;
    float left;
    float width;
    float radiusForRoundCorner;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Rectangle_h_

