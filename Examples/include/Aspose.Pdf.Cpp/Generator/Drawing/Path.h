#ifndef _Aspose_Pdf_Generator_Drawing_Path_h_
#define _Aspose_Pdf_Generator_Drawing_Path_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/array.h>

#include "Generator/Drawing/Shape.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents arc.
/// </summary>
class ASPOSE_PDF_SHARED_API Path FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Path ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> get_Shapes();
    
    Path(System::ArrayPtr<System::SharedPtr<Shape>> shapes);
    Path();
    
protected:

    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Path"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> shapes;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Path_h_

