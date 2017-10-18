#ifndef _Aspose_Pdf_Generator_Drawing_Arc_h_
#define _Aspose_Pdf_Generator_Drawing_Arc_h_
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
/// The <b>Aspose.Pdf.Drawing</b> namespace provides classes describing graphic primitives like arc, line, circle etc. 
/// Corresponding objects can be used for creating new documents.
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Represents arc.
/// </summary>
class ASPOSE_PDF_SHARED_API Arc FINAL : public Aspose::Pdf::Drawing::Shape
{
    typedef Arc ThisType;
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
    double get_Alpha();
    void set_Alpha(double value);
    double get_Beta();
    void set_Beta(double value);
    
    Arc(float posX, float posY, float radius, float alpha, float beta);
    
protected:

    Arc();
    
    virtual void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::ArrayPtr<float> GetStartPosition();
    System::ArrayPtr<float> GetEndPosition();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Arc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double posX;
    double posY;
    double radius;
    double alpha;
    double beta;
    static const double EPSILON;
    
    void CreateSmallArc(double r, double a1, double a2, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double curX, double curY);
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Drawing_Arc_h_

