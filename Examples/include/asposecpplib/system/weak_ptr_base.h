#ifndef _WeakPtrBase_h_
#define _WeakPtrBase_h_

#include "../defines.h"
#include "weak_ptr_counter.h"
#include <cstddef>

namespace System
{
    class Object;

    class ABSTRACT WeakPtrBase
    {
    public:
        bool expired() const;

        const Object* get() const;
        Object* get();

        bool operator == (WeakPtrBase const& x) const;
        bool operator != (WeakPtrBase const& x) const;

        bool operator == (std::nullptr_t) const;
        bool operator != (std::nullptr_t) const;

    protected:
        WeakPtrBase();
        WeakPtrBase(WeakPtrBase const& x);
        WeakPtrBase(Object* obj);
        WeakPtrBase& operator = (WeakPtrBase const& x);
        void swap(WeakPtrBase& x);
        ~WeakPtrBase();

        Object* LockRawPointer() const;
        Object* RawPointer() const;

        static void NullReferenceError();

    private:
        WeakPtrCounter* m_counter;
    };

} // namespace System

#endif // _WeakPtrBase_h_