#ifndef _Aspose_Pdf_Layer_h_
#define _Aspose_Pdf_Layer_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents page layer.
/// </summary>
class ASPOSE_PDF_SHARED_API Layer : public System::Object
{
    typedef Layer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Name();
    System::String get_Id();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Contents();
    
    Layer(System::String id, System::String name);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Layer"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String name;
    System::String id;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> contents;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Layer_h_

