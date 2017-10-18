#ifndef _aspose_system_weak_ptr_counter_h_
#define _aspose_system_weak_ptr_counter_h_

#include "defines.h"
#include "system/refcount.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/thread/recursive_mutex.hpp>
#endif


namespace boost {
    ASPOSECPP_3RD_PARTY_CLASS(recursive_mutex);
}


namespace System
{

class Object;

class WeakPtrCounter
{
private:
    class LockContext_;
    typedef boost::recursive_mutex mutex;

public:
    Detail::RefCount m_nWeakRefs;
    Object* volatile m_object;
    mutex* m_mutex; // detached from m_object

    WeakPtrCounter(Object* ps, mutex* pm);
    ~WeakPtrCounter();
    static WeakPtrCounter* QueryCounter(Object* p);
    int AddRef();
    int ReleaseRef();
    Object* LockRawPointer() const;
    void DetachObject();
};

} // namespace System

#endif // _WeakPtrCounter_h_