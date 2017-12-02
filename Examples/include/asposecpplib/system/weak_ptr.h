#ifndef _aspose_system_weak_ptr_h_
#define _aspose_system_weak_ptr_h_

#include "system/weak_ptr_base.h"
#include "detail.h"

namespace System
{
    template<class T> class SharedPtr;

    template<class PointeeT>
    class WeakPtr: public WeakPtrBase
    {
    public:
        typedef PointeeT Pointee_;
        typedef SharedPtr<Pointee_> SharedPtr_;
        typedef WeakPtr<Pointee_> WeakPtr_;

        SharedPtr_ lock() const
        {
            return SharedPtr_(static_cast<Pointee_*>(LockRawPointer()), false);
        }

        SharedPtr_ lock_dynamic_cast() const
        {
            return SharedPtr_(dynamic_cast<Pointee_*>(LockRawPointer()), false);
        }

        SharedPtr_ lock_best_cast() const
        {
            return SharedPtr_(detail::cast_statically_or_dynamically<Object, Pointee_>::cast(LockRawPointer()), false);
        }

        void reset()
        {
            WeakPtr_ tmp;
            swap(tmp);
        }

        WeakPtr()
        {
        }

        WeakPtr(SharedPtr_ const& x): WeakPtrBase(x.get())
        {
        }

        WeakPtr(WeakPtr_ const& x): WeakPtrBase(x)
        {
        }

        WeakPtr(Pointee_* x) : WeakPtrBase(x)
        {
        }

        template<class T>
        WeakPtr(WeakPtr<T> const& x, typename detail::sp_enable_if_convertible<T, Pointee_>::type = detail::sp_empty()) : WeakPtrBase(x)
        {
        }

        template<class T>
        WeakPtr(SharedPtr<T> const& x, typename detail::sp_enable_if_convertible<T, Pointee_>::type = detail::sp_empty()) : WeakPtrBase(x.get())
        {
        }

        template<class T>
        typename std::enable_if<System::IsSharedPtr<T>::value, WeakPtr_&>::type operator = (const SharedPtr_& x)
        {
            if (this->get() != x.get())
            {
                WeakPtr_ tmp(x);
                swap(tmp);
            }
            return *this;
        }

        WeakPtr_& operator = (WeakPtr_ const& x)
        {
            if (*this != x)
            {
                WeakPtr_ tmp(x);
                swap(tmp);
            }
            return *this;
        }

        Pointee_ * operator -> () const
        {
            auto ptr = RawPointer();
#ifdef ASPOSE_NULLREFCHECK
            if (ptr == nullptr)
                NullReferenceError();
#endif
            return detail::cast_statically_or_dynamically<Object, Pointee_>::cast(ptr);
        }

        Pointee_& operator *() const
        {
            auto ptr = detail::cast_statically_or_dynamically<Object, Pointee_>::cast(RawPointer());
#ifdef ASPOSE_NULLREFCHECK
            if (ptr == nullptr)
                NullReferenceError();
#endif
            return *ptr;
        }

        operator SharedPtr_ () const
        {
            return lock_best_cast();
        }

        bool operator !() const
        {
            return this->get() == nullptr;
        }

        operator bool() const
        {
            return this->get() != nullptr;
        }

        bool Is(const System::TypeInfo &target) const
        {
            return this->get() ? this->get()->Is(target) : false;
        }

        void swap(WeakPtr_& x)
        {
            WeakPtrBase::swap(x);
        }

        ~WeakPtr()
        {
        }
    };

    template<class X>
    bool operator ==(WeakPtr<X> const& x, std::nullptr_t)
    {
        return x.operator==(nullptr);
    }

    template<class X>
    bool operator ==(std::nullptr_t, WeakPtr<X> const& x)
    {
        return x.operator==(nullptr);
    }

    template<class X>
    bool operator !=(WeakPtr<X> const& x, std::nullptr_t)
    {
        return x.operator!=(nullptr);
    }

    template<class X>
    bool operator !=(std::nullptr_t, WeakPtr<X> const& x)
    {
        return x.operator!=(nullptr);
    }

    template <class T>
    using IsWeakPtr = System::detail::is_a<T, System::WeakPtr>;

    template<class Y, class X>
    SharedPtr<Y> static_pointer_cast(const WeakPtr<X>& x)
    {
        return x.lock_best_cast().template static_pointer_cast<Y>();
    }

    template<class Y, class X>
    SharedPtr<Y> dynamic_pointer_cast(const WeakPtr<X>& x)
    {
        return x.lock_best_cast().template dynamic_pointer_cast<Y>();
    }

    template<class Y, class X>
    SharedPtr<Y> const_pointer_cast(const WeakPtr<X>& x)
    {
        return x.lock_best_cast().template const_pointer_cast<Y>();
    }

} // namespace System

#endif // _aspose_system_weak_ptr_h_
