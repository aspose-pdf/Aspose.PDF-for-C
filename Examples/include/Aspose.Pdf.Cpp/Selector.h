#ifndef _Aspose_Pdf_Selector_h_
#define _Aspose_Pdf_Selector_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>

namespace Aspose {

namespace Pdf {

///<summary>
/// Base abstract class for selecting routines which are defined in concrete descendants.
/// </summary>
template<typename T>
class ABSTRACT Selector : public virtual System::Object
{
    typedef Selector<T> ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
public:

    System::SharedPtr<System::Collections::Generic::IList<T>> get_Selected()
    {
        return selected;
    }
    
    Selector()
    {
        selected = System::MakeObject<System::Collections::Generic::List<T>>();
    }
    
    
protected:

    System::SharedPtr<System::Collections::Generic::List<T>> selected;
    
    System::Object::shared_members_type GetSharedMembers() override
    {
        auto result = System::Object::GetSharedMembers();
        
        result.Add("Aspose::Pdf::Selector::selected", this->selected);
        
        return std::move(result);
    }
    
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override
    {
        System::Object::DBG_for_each_member(visitor);
        
        visitor.add_self(this);
        visitor.add_template_member(this, &selected, "selected");
    }
    const char* DBG_class_name() const override { return "Selector"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Selector_h_

