#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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

namespace Annotations {

/// <summary>
/// Collection of actions
/// </summary>
class ASPOSE_PDF_SHARED_API ActionCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
{
    typedef ActionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PdfAction;
    
private:

    class ActionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
    {
        typedef ActionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<PdfAction> get_Current() const;
        
        ActionsEnumerator(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> actions);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> actions;
        int32_t cursor;
        
    };
    
    
public:

    /// <summary>
    /// Count of actions on the collection.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Returns true if object is synchronized.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets synchronization object.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Returns true if collection is readonly.
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Adds new action into colleciton.
    /// </summary>
    /// <param name="action">Action which should be added.</param>
    void Add(System::SharedPtr<PdfAction> const &action);
    /// <summary>
    /// Removes action from collection by index.
    /// </summary>
    /// <param name="index">Index of action to remove.</param>
    void Delete(int32_t index);
    /// <summary>
    /// Delete all actions.
    /// </summary>
    void Delete();
    /// <summary>
    /// Copies actions array into collection.
    /// </summary>
    /// <param name="array">Array of actions which must be copied into collection.</param>
    /// <param name="index">Index starting from which array will be copied.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<PdfAction>> array, int32_t index);
    /// <summary>
    /// Returns enumerator for collection.
    /// </summary>
    /// <returns>Collection enumerator.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<PdfAction>>> GetEnumerator();
    /// <summary>
    /// Clear collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns true if give item presents in the collection.
    /// </summary>
    /// <param name="item"></param>
    /// <returns></returns>
    bool Contains(System::SharedPtr<PdfAction> const &item) const;
    /// <summary>
    /// Removes item from collection.
    /// </summary>
    /// <param name="item">Item to delete.</param>
    /// <returns></returns>
    bool Remove(System::SharedPtr<PdfAction> const &item);
    
    /// <summary>
    /// Gets action by its index.
    /// </summary>
    /// <param name="index">Index of action.</param>
    /// <returns>Retreived action.</returns>
    System::SharedPtr<PdfAction> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _actions;
    System::WeakPtr<PdfAction> _owner;
    
    ActionCollection(System::SharedPtr<PdfAction> owner);
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> createActions(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfAction>>> created;
    
    System::SharedPtr<PdfAction> get(int32_t index);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


