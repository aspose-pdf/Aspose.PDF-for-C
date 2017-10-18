#ifndef _Aspose_Pdf_InteractiveFeatures_ActionCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_ActionCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Collection of actions
/// </summary>
//<<--REFACTORING: Old code: public sealed class ActionCollection : ICollection
class ASPOSE_PDF_SHARED_API ActionCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::PdfAction>>
{
    typedef ActionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::PdfAction>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    
private:

    class ASPOSE_PDF_SHARED_API ActionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::PdfAction>>
    {
        typedef ActionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::PdfAction>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<PdfAction> get_Current() const;
        
        ActionsEnumerator(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> actions);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~ActionsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ActionsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> actions;
        int32_t cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    
    void Add(System::SharedPtr<PdfAction> const &action);
    void Delete(int32_t index);
    void Delete();
    void CopyTo(System::ArrayPtr<System::SharedPtr<PdfAction>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<PdfAction>>> GetEnumerator();
    
    System::SharedPtr<PdfAction> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _actions;
    System::WeakPtr<PdfAction> _owner;
    
    ActionCollection(System::SharedPtr<PdfAction> owner);
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> createActions(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ActionCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfAction>>> created;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<PdfAction> const &item);
    bool Contains(System::SharedPtr<PdfAction> const &item) const;
    void Clear();
    System::SharedPtr<PdfAction> get(int32_t index);
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_ActionCollection_h_

