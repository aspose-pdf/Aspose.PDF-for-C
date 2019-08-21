/// @file system/smart_ptr_counter.h
#ifndef _aspose_system_smart_ptr_counter_h_
#define _aspose_system_smart_ptr_counter_h_


#include "refcount.h"


namespace System {

class Object;

}


namespace System { namespace Detail { 

/// Out-of-object reference counting structure.
/// If ENABLE_EXTERNAL_REFCOUNT macro is enabled, holds both weak and shared reference counter and is created alongside with the object.
/// Otherwise, holds weak reference counter only and is created on request.
class SmartPtrCounter
{
public:
    /// Defines whether object should be deleted when last shared pointer to it gets deleted.
    enum ObjectOwnershipState {
        /// Object is on construction stage yet, need to add Object::ThisProtector sentry variable or use auto_ctor_self_reference pointer option to do it automatically.
        BeingConstructed,
        /// Object was created successfully and now is owned by pointers.
        OwnedByPointers,
        /// Object is deleted, but pointers to it still exist.
        Deleted
    };

    /// Creates counter of references to specified object.
    /// @param o Object to track references to.
    SmartPtrCounter(Object *o)
        : m_object(o)
#ifdef ENABLE_EXTERNAL_REFCOUNT
        // A little messy logic here.
        // OwnedByPointers flag shows whether the object should be deleted when the reference count reaches zero.
        // When the object is created by MakeObject(), it is false at the beginning and then turns true when all constructors succeed (no exception thrown).
        // Both global (NextOwnedByPointers) and object-local (m_ownedByPointers) flags are explicitly modified by MakeObject() in this case.
        // But, if the object is created by operator new, no such control is possible, so it is considered owned by pointers from the beginning.
        // That's why we can only set NextOwnedByPointers value to false for a short time (until the next object gets created).
        // The better approach is to forbid creating objects with operator new() rather than with MakeObject() call, but this requires revising the whole asposecpp library and will
        // inevitably be broken again anyway.
        // So, this messy magic seems the most reliable way to allow for what we want.
        , m_ownership(NextOwnership())
#endif
    {}

    /// Gets referenced object.
    /// @return Raw pointer to referenced object.
    Object* GetObject() const 
    { 
        return m_object; 
    }
    /// Increments weak reference counter; don't call directly, use SmartPtr, WeakPtr or DynamicWeakPtr class instead.
    /// @return Self pointer.
    SmartPtrCounter* WeakRefAdded()
    {
        ++m_pointers;
        return this;
    }
    /// Decrements weak reference counter and drops counter object if neccessary; don't call directly, use SmartPtr, WeakPtr or DynamicWeakPtr class instead.
    void WeakRefRemoved()
    {
        if (--m_pointers == 0 && m_object == nullptr)
            delete this;
    }

#ifdef ENABLE_EXTERNAL_REFCOUNT
    /// Increments shared reference counter; don't call directly, use SmartPtr class instead.
    /// @return Referenced object pointer.
    Object* SharedRefAdded()
    {
        ++m_pointers;
        ++m_shared_pointers;
        return m_object;
    }
    /// Decrements shared reference counter; don't call directly, use SmartPtr class instead.
    /// @return Decremented shared reference counter value.
    int SharedRefRemovedSafe()
    {
        const int result = --m_shared_pointers;
        --m_pointers;
        return result;
    }
    /// Decreases shared reference counter; don't call directly, use SmartPtr class instead.
    /// @param count Number to decrease counter by.
    /// @return Decreased shared reference counter value.
    int DecreaseSharedRef(int count)
    {
        const int shared_pointers_left = m_shared_pointers -= count;
        m_pointers -= count;
        return shared_pointers_left;
    }
    /// Gets actual shared reference counter value.
    /// @return Current shared reference counter value.
    int SharedCount() const
    {
        return m_shared_pointers;
    }
    /// Gets or sets ownership state to create next counter with; see constructor comment for more info.
    /// @return Reference to thread-local variable holding ownership state.
    ASPOSECPP_SHARED_API static ObjectOwnershipState& NextOwnership();
    /// Makes pointers own the object after all constructors succeed; called by MakeObject().
    void CreatedSuccessfully()
    {
        m_ownership = OwnedByPointers;
    }
    ObjectOwnershipState GetOwnershipState() const
    {
        return m_ownership;
    }
#endif

    /// Throws NullReferenceException.
    ASPOSECPP_SHARED_API static void ThrowNullReferenceException();

    /// Increases shared reference counter.
    /// @return Referenced object raw pointer.
    ASPOSECPP_SHARED_API Object* Lock();

    /// Checks if reference counter can be deleted.
    /// @return true if no more references to this counter exist, false otherwise.
    bool CanBeDeleted() const
    {
        return m_pointers == 0;
    }
    /// Detaches reference counter from Object which is deleted and can't be accessed any more.
    void Detach()
    {
        m_object = nullptr;
#ifdef ENABLE_EXTERNAL_REFCOUNT
        m_ownership = Deleted;
#endif
    }

private:
    /// Referenced object (not a const pointer for Detach() to work).
    Object *m_object;
    /// If ENABLE_EXTERNAL_REFCOUNT is enabled, total number of weak and shared poiters to the object, otherwise number of weak pointers to object.
    RefCount m_pointers;
#ifdef ENABLE_EXTERNAL_REFCOUNT
    /// Number of shared pointers to referenced object.
    RefCount m_shared_pointers;
    /// Defines whether pointers own object and whether object owns counter.
    ObjectOwnershipState m_ownership;
#endif

    // Explicitly deleting some members to avoid warnings.
    SmartPtrCounter(const SmartPtrCounter&) = delete;
    SmartPtrCounter(SmartPtrCounter&&) = delete;
    SmartPtrCounter& operator = (const SmartPtrCounter&) = delete;
    SmartPtrCounter& operator = (SmartPtrCounter&&) = delete;
};


} } //namespace System::Detail


#endif //_aspose_system_smart_ptr_counter_h_
