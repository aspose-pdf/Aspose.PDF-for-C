/// @file system/multicast_delegate.h
/// Contains the declaration of System::MulticastDelegate class.
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

    /// Represents a collection of delegates.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    /// @tparam ReturnType Return type of the invokable entities pointed to by each delegate in the collection
    /// @tparam ArgumentTypes Argument list of the invokable entities pointed to by each delegate in the collection
    template <class ReturnType, class... ArgumentTypes>
    class MulticastDelegate<ReturnType(ArgumentTypes...)>
    {
    public:
        /// The type of the delegates represented by the MulticastDelegate class.
        using Callback = Delegate<ReturnType(ArgumentTypes...)>;

        /// Constructs an empty collection.
        MulticastDelegate()
        {
            m_callbacks = std::make_shared<std::list<Callback>>();
        }

        /// Destructor.
        ~MulticastDelegate()
        {
            if( m_callbacks )
                m_callbacks.reset();
        }

        /// Equivalent to defalt constructor.
        MulticastDelegate(std::nullptr_t) : MulticastDelegate()
        {}

        /// Performs a shallow copy of the delegate collection.
        /// @param o An instance of MulticastDelegate class to copy the collection of delegates from.
        MulticastDelegate(const MulticastDelegate& o)
            : m_callbacks(o.m_callbacks)
        {}

        /// Assigns the collection of delegates represented by the specified object to the current object. As a result both objects point to the same collection of delegates.
        /// @param o An instance of MulticastDelegate class containing the collection of delegates to be assigned to the current object.
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
        /// Moving constructor.
        /// @param o An instance of MulticastDelegate class to move the collection of delegates from.
        MulticastDelegate(MulticastDelegate&& o) : m_callbacks(std::move(o.m_callbacks)) {}

        /// Moving assignment operator.
        /// @param o An instance of MulticastDelegate class to move the collection of delegates from.
        MulticastDelegate& operator=(MulticastDelegate&& o)
        {
            m_callbacks = std::move(o.m_callbacks);
            o.m_callbacks.reset();
            return *this;
        }

        /// Constructs an instance and puts the specified delegate to the delegates collection.
        /// @param initial A delegate to put to the delegate collection
        MulticastDelegate(Callback&& initial) : MulticastDelegate()
        {
             m_callbacks->push_back(std::move(initial));
        }

        /// Constructs an instance and puts the specified value to the delegates collection.
        /// @param arg A value to put to the delegate collection
        /// @tparam Type of the value to put to the delegate collection of the newly constructed instance; the type must be convertible to Callback type.
        template <class T>
        MulticastDelegate(T arg) : MulticastDelegate(Callback(arg))
        {
        }

        /// Determines whether the delegate collection is empty.
        /// @returns True if the delegate collection is empty, otherwise - false
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

        /// Determines whether the delegate collection is empty.
        /// @returns True if the delegate collection is empty, otherwise - false
        bool IsNull() const { return empty(); }

        /// Determines whether the delegate collection is empty.
        /// @returns True if the delegate collection is empty, otherwise - false
        bool operator==(const std::nullptr_t&) const
        {
            return empty();
        }

        /// Determines whether the delegate collection is not empty.
        /// @returns True if the delegate collection is not empty, otherwise - false
        bool operator!=(const std::nullptr_t&) const
        {
            return !operator==(nullptr);
        }

        /// Adds the specified delegate to the collection.
        /// @param callback The delegate to add to the collection
        /// @returns A reference to the self
        MulticastDelegate& connect(Callback callback)
        {
#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock_guard<std::mutex> lock(m_guard);
#endif

            m_callbacks->push_back(std::move(callback));

            return *this;
        }

        /// Adds the specified function object to the delegate collection. The function object is converted to the Callback delegate type before being added to the collection.
        /// @param f The function object to add to the collection
        /// @returns A reference to the self
        /// @tparam R The return type of the function object to add to the collection
        /// @tparam Args The argument list of the function object to add to the collection
        template <class R, class... Args>
        MulticastDelegate& connect(std::function<R(Args...)> f)
        {
            return connect(Callback(f));
        }

        /// Adds the specified MulticastDelegate object to the delegate collection.
        /// @param other An instance of the MulticastDelegate class to add to the delegate collection
        /// @returns A reference to the self
        MulticastDelegate& connect(MulticastDelegate& other)
        {
            connect(Callback(1, other));
            return *this;
        }

        /// Adds the specified non-static method of the specified object to the delegate collection.
        /// @param member A pointer to the non-static method of the specified object
        /// @param obj A pointer to an object member method of which is to be added to the delegate collection
        /// @returns A reference to the self
        /// @tparam MemberType The type of the non-static method that is to be added to the delegate collection
        /// @tparam ClassType The type of the object method of which is to be added to the delegate
        template <class MemberType, class ClassType>
        MulticastDelegate& connect(MemberType ClassType::* member, ClassType * obj)
        {
            assert( obj != nullptr );
            return connect(Callback(member, obj));
        }

        /// Adds the specified non-static method of the specified object to the delegate collection.
        /// @param member A pointer to the non-static method of the specified object
        /// @param obj A shared pointer to an object member method of which is to be added to the delegate collection
        /// @returns A reference to the self
        /// @tparam MemberType The type of the non-static method that is to be added to the delegate collection
        /// @tparam ClassType The type of the object method of which is to be added to the delegate collection
        template <class MemberType, class ClassType>
        MulticastDelegate& connect(MemberType ClassType::* member, const SharedPtr<ClassType> & obj)
        {
            assert(obj != nullptr);
            return connect(Callback(member, obj));
        }

        /// Adds the specified delegate to the collection.
        /// @param callback The delegate to add to the collection
        /// @returns A reference to the self
        MulticastDelegate& operator +=(Callback callback)
        {
            return connect(std::move(callback));
        }

        /// Removes the specified delegate from the delegate collection.
        /// @param callback The delegate to remove from the collection
        /// @returns A reference to the self
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

        /// Removes the specified non-static method of the specified object from the delegate collection.
        /// @param member A pointer to the non-static method of the specified object
        /// @param obj A pointer to an object member method of which is to be removed from the delegate collection
        /// @returns A reference to the self
        /// @tparam MemberType The type of the non-static method that is to be removed from the delegate collection
        /// @tparam ClassType The type of the object method of which is to be removed from the delegate collection
        template <class MemberType, class ClassType>
        MulticastDelegate& disconnect(MemberType ClassType::* member, ClassType * obj)
        {
            assert( obj != nullptr);
            return disconnect(Callback(member, obj));
        }

        /// Removes the specified non-static method of the specified object from the delegate collection.
        /// @param member A pointer to the non-static method of the specified object
        /// @param obj A shared pointer to an object member method of which is to be removed from the delegate collection
        /// @returns A reference to the self
        /// @tparam MemberType The type of the non-static method that is to be removed from the delegate collection
        /// @tparam ClassType The type of the object method of which is to be removed from the delegate collection
        template <class MemberType, class ClassType>
        MulticastDelegate& disconnect(MemberType ClassType::* member, const SharedPtr<ClassType> & obj)
        {
            assert(obj != nullptr);
            return disconnect(Callback(member, obj));
        }

        /// Removes the specified MulticastDelegate object from the delegate collection.
        /// @param other An instance of the MulticastDelegate class to remove from the delegate collection
        /// @returns A reference to the self
        MulticastDelegate& disconnect(MulticastDelegate& other)
        {
            disconnect(Callback(1, other));
            return *this;
        }

        /// Removes the specified delegate from the delegate collection.
        /// @param callback The delegate to remove from the collection
        /// @returns A reference to the self
        MulticastDelegate& operator -=(Callback callback)
        {
            return disconnect(std::move(callback));
        }

        /// Determines whether two instances of MulticastDelegate - the current object and the specified object - point to the same delegates collection.
        /// @param other The MulticastDelegate object to compare with
        /// @returns True if both objects represent the same delegates collection, otherwise - false
        bool operator == (const MulticastDelegate& other) const
        {
            return (m_callbacks == other.m_callbacks);
        }

        /// Determines whether two instances of MulticastDelegate - the current object and the specified object - point to different delegates collection.
        /// @param other The MulticastDelegate object to compare with
        /// @returns True if both objects represent the same delegates collection, otherwise - false
        bool operator != (const MulticastDelegate& other) const
        {
            return (m_callbacks != other.m_callbacks);
        }

        /// Removes all delegates from the delegate collection.
        /// @returns A reference to the self
        MulticastDelegate& disconnect_all_slots()
        {
#ifdef ASPOSE_THREADSAFE_DELEGATES
            std::lock_guard<std::mutex> lock(m_guard);
#endif
            m_callbacks->clear();

            return *this;
        }

        /// Cleans out contained callbacks that are empty (not actually calling anything).
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

        /// Invokes all delegates currently present in the delegates collection. Delegates are invoked in the same order as they were added to the collection. The method blocks while the delegates are executed.
        /// @param args Arguments to pass to the delegates to be invoked
        /// @returns Return value of the last invoked delegate
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

            throw NullReferenceException(u"MulticastDelegate: Object reference not set to an instance of an object.");
        }

        /// Invokes all delegates currently present in the delegates collection. Delegates are invoked in the same order as they were added to the collection. The operator blocks while the delegates are executed.
        /// @param args Arguments to pass to the delegates to be invoked
        /// @returns Return value of the last invoked delegate
        ReturnType operator()(ArgumentTypes... args)
        {
            return emit(args...);
        }

        /// NOT IMPLEMENTED
        /// @throws NotImplementedException Always
        template <typename CallbackArgumentType>
        SharedPtr<IAsyncResult> BeginInvoke(ArgumentTypes... args, const AsyncCallback& member, const CallbackArgumentType& obj)
        {
            throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

        /// NOT IMPLEMENTED
        /// @throws NotImplementedException Always
        ReturnType EndInvoke(const SharedPtr<IAsyncResult>&)
        {
            throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

    private:
        /// The collection of delegates represented by the current object.
        std::shared_ptr<std::list<Callback>> m_callbacks;

#ifdef ASPOSE_THREADSAFE_DELEGATES
        std::mutex          m_guard;
#endif
    };

    /// Forward declatation of CastResult used by System::StaticCast, System::DynamicCast and alike functions.
    template <typename TTo> struct CastResult;

    /// Specialization of CastResult structure making sure MulticastResult remains value type instead of wrapping it into SmartPtr.
    /// @tparam T MulticastDelegate argument.
    template <typename T>
    struct CastResult<MulticastDelegate<T>>
    {
        /// An alias for a MusticastDelegate\<T\> type.
        typedef MulticastDelegate<T> type;
    };


} // namespace System
#endif // _aspose_system_multicast_delegate_h_
