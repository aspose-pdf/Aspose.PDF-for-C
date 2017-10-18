#ifndef _Aspose_Pdf_Point__h_
#define _Aspose_Pdf_Point__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/point_f.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent point with fractional coordinates.
/// </summary>
class ASPOSE_PDF_SHARED_API Point FINAL : public System::Object
{
    typedef Point ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    double get_X();
    void set_X(double value);
    double get_Y();
    void set_Y(double value);
    static System::SharedPtr<Point> get_Trivial();
    
    Point(double x, double y);
    
    System::Drawing::PointF ToPoint();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Point"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double x, y;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Point__h_

