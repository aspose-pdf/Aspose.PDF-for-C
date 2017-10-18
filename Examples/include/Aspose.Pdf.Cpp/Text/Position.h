#ifndef _Aspose_Pdf_Text_Position_h_
#define _Aspose_Pdf_Text_Position_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a position object
/// </summary>
class ASPOSE_PDF_SHARED_API Position FINAL : public System::Object
{
    typedef Position ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    double get_XIndent();
    void set_XIndent(double value);
    double get_YIndent();
    void set_YIndent(double value);
    
    Position(double xIndent, double yIndent);
    
    virtual System::String ToString();
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Position"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double xIndent;
    double yIndent;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_Position_h_

