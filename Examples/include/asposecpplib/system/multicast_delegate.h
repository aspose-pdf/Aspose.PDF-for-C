#ifndef _aspose_system_multicast_delegate_h_
#define _aspose_system_multicast_delegate_h_

#include "delegate.h"
#include "shared_ptr.h"
#include "async_callback.h"
#include "exceptions.h"
#include <list>
#include <functional>
#include <algorithm>

#define ASPOSE_REMOVE_EMPTY_CALLBACKS

#ifdef ASPOSE_THREADSAFE_DELEGATES
#include <mutex>
#endif

namespace System
{
    class IAsyncResult;

    template<class Unused>
    class MulticastDelegate;

    template <class ReturnType, class... ArgumentTypes>
    class MulticastDelegate<ReturnType(ArgumentTypes...)>
    {
    public:
        using Callback = Delegate<ReturnType(ArgumentTypes...)>;

        MulticastDelegate()
        {
            m_callbacks = std::make_shared<std::list<Callback>>();
        }

        ~MulticastDelegate()
        {
            if( m_callbacks )
                m_callbacks.reset();
        }

        MulticastDelegate(std::nullptr_t) : MulticastDelegate()
        {}

        MulticastDelegate(const MulticastDelegate& o)
            : m_callbacks(o.m_callbacks)
        {}

        MulticastDelegate& operator=(const MulticastDelegate& o)
        {
            if ( this == &o )
                return *this;

#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock(m_guard, o.m_guard);
            std::lock_guard<std::mutex> l1( m_guard, std::adopt_lock );
            std::lock_guard<std::mutex> l2( o.m_guard, std::adopt_lock );
#endif
            m_callbacks = o.m_callbacks;
            return *this;
        }

        // movable
        MulticastDelegate(MulticastDelegate&& o) : m_callbacks(std::move(o.m_callbacks)) {}
        MulticastDelegate& operator=(MulticastDelegate&& o)
        {
            m_callbacks = std::move(o.m_callbacks);
            o.m_callbacks.reset();
            return *this;
        }

        MulticastDelegate(Callback&& initial) : MulticastDelegate()
        {
             m_callbacks->push_back(std::move(initial));
        }

        template <class T>
        MulticastDelegate(T arg) : MulticastDelegate(Callback(arg))
        {
        }

        bool empty() const
        {
#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock_guard<std::mutex> lock(m_guard);
#endif

#ifdef ASPOSE_REMOVE_EMPTY_CALLBACKS
            bool res = true;
            if (m_callbacks)
            {
                for (auto it = m_callbacks->begin(); it != m_callbacks->end(); ++it)
                    res &= it->Empty();
            }
            return res;
#else
            return m_callbacks->empty();
#endif
        }

        bool IsNull() const { return empty(); }

        bool operator==(const std::nullptr_t&) const
        {
            return empty();
        }

        bool operator!=(const std::nullptr_t&) const
        {
            return !operator==(nullptr);
        }

        MulticastDelegate& connect(Callback callback)
        {
#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock_guard<std::mutex> lock(m_guard);
#endif

            m_callbacks->push_back(std::move(callback));

            return *this;
        }

        template <class R, class... Args>
        MulticastDelegate& connect(std::function<R(Args...)> f)
        {
            return connect(Callback(f));
        }

        MulticastDelegate& connect(MulticastDelegate& other)
        {
            connect(Callback(1, other));
            return *this;
        }

        template <class MemberType, class ClassType>
        MulticastDelegate& connect(MemberType ClassType::* member, ClassType * obj)
        {
            assert( obj != nullptr );
            return connect(Callback(member, obj));
        }

        template <class MemberType, class ClassType>
        MulticastDelegate& connect(MemberType ClassType::* member, const SharedPtr<ClassType> & obj)
        {
            assert(obj != nullptr);
            return connect(Callback(member, obj));
        }

        MulticastDelegate& operator +=(Callback callback)
        {
            return connect(std::move(callback));
        }

        MulticastDelegate& disconnect(Callback callback)
        {
#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock_guard<std::mutex> lock(m_guard);
#endif
            auto first = m_callbacks->cbegin();
            auto last = m_callbacks->cend();
            auto pos = std::find(first, last, callback);
            if( pos != last )
            {
                m_callbacks->erase(pos);
            }

            return *this;
        }

        template <class MemberType, class ClassType>
        MulticastDelegate& disconnect(MemberType ClassType::* member, ClassType * obj)
        {
            assert( obj != nullptr);
            return disconnect(Callback(member, obj));
        }

        template <class MemberType, class ClassType>
        MulticastDelegate& disconnect(MemberType ClassType::* member, const SharedPtr<ClassType> & obj)
        {
            assert(obj != nullptr);
            return disconnect(Callback(member, obj));
        }

        MulticastDelegate& disconnect(MulticastDelegate& other)
        {
            disconnect(Callback(1, other));
            return *this;
        }

        MulticastDelegate& operator -=(Callback callback)
        {
            return disconnect(std::move(callback));
        }

        bool operator == (const MulticastDelegate& other) const
        {
            return (m_callbacks == other.m_callbacks);
        }

        bool operator != (const MulticastDelegate& other) const
        {
            return (m_callbacks != other.m_callbacks);
        }

        MulticastDelegate& disconnect_all_slots()
        {
#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock_guard<std::mutex> lock(m_guard);
#endif
            m_callbacks->clear();

            return *this;
        }

        void remove_empty_callbacks()
        {
            if (m_callbacks && !m_callbacks->empty())
            {
                for (auto it = m_callbacks->begin(); it != m_callbacks->end();)
                {
                    if (it->Empty())
                        it = m_callbacks->erase(it);
                    else
                        ++it;
                }
            }
        }

        ReturnType emit(ArgumentTypes... args)
        {
#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock_guard<std::mutex> lock(m_guard);
#endif

#ifdef ASPOSE_REMOVE_EMPTY_CALLBACKS
            remove_empty_callbacks();
#endif
            if( m_callbacks && !m_callbacks->empty() )
            {
                auto last = std::prev(m_callbacks->end()); // always valid, m_callbacks is not empty
                for (auto it = m_callbacks->begin(); it != last; ++it)
                    (*it)(args...); // ignore result!

                return (*last)(args...);
            }

            throw NullReferenceException(L"MulticastDelegate: Object reference not set to an instance of an object.");
        }

        ReturnType operator()(ArgumentTypes... args)
        {
            return emit(args...);
        }

        template <typename CallbackArgumentType>
        SharedPtr<IAsyncResult> BeginInvoke(ArgumentTypes... args, const AsyncCallback& member, const CallbackArgumentType& obj)
        {
            throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

        ReturnType EndInvoke(SharedPtr<IAsyncResult>)
        {
            throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

    private:
        std::shared_ptr<std::list<Callback>> m_callbacks;

#ifdef ASPOSE_THREADSAFE_DELEGATES
        std::mutex          m_guard;
#endif
    };


    template <typename TTo> struct CastResult;
    template <typename T>
    struct CastResult<MulticastDelegate<T>>
    {
        typedef MulticastDelegate<T> type;
    };


} // namespace System
#endif // _aspose_system_multicast_delegate_h_
