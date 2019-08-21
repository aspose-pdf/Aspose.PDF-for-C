/// @file system/details/shared_members_t.h
#ifndef _shared_members_t_h_
#define _shared_members_t_h_

#include <system/smart_ptr.h>

#include <list>
#include <utility>
#include <type_traits>


namespace System
{
    class Object;
}


namespace System { namespace Details {


/// @brief structure to keep list of shared pointers contained in object.
struct SharedMembersType {
    /// @brief List of non-null shared pointers contained in object, with member names.
    std::list<std::pair<const char*, SmartPtrInfo>> m_sharedMembers;
    /// @brief List of value type Object subclasses contaned in object, with member names.
    std::list<std::pair<const char*, System::Object*>> m_valueMembers;
    /// @brief Adds object to list. Non-specific version which ignores its arguments,
    /// @tparam T Random type of field.
    template <class T>
    typename std::enable_if<!IsSmartPtr<T>::value && !std::is_base_of<Object, T>::value, void>::type Add(const char*, T&)
    {}
    /// @brief Adds Object subclass to list.
    /// @tparam T Value type Object subclass.
    /// @param name Field name.
    /// @param member Field reference.
    template <class T>
    typename std::enable_if<!IsSmartPtr<T>::value && std::is_base_of<Object, T>::value, void>::type Add(const char* name, T &member)
    {
        m_valueMembers.push_back(std::make_pair(name, (Object*)&member));
    }
    /// @brief Adds smart pointer to list.
    /// @tparam T Pointee type.
    /// @param name Field name.
    /// @param member Field reference.
    template <class T>
    void Add(const char* name, const SmartPtr<T> &member)
    {
        if (member.get_Mode() == SmartPtrMode::Weak)
            return;
        SmartPtrInfo info((SmartPtr<T>&)member); //A workaround for const members
        if (info)
            m_sharedMembers.push_back(std::make_pair(name, info));
    }
    /// @brief Forms full list of contained references, both direct and indirect.
    /// @return Full list of smart pointers contained in collection.
    ASPOSECPP_SHARED_API std::list<std::pair<const char*, SmartPtrInfo>> GetDirectAndIndirectHolders() const;

    /// Populates contents of STL-style container to shared members data structure. This overload handles containers with no smart pointers in them.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<!System::IsSmartPtr<Value>::value && !System::detail::is_a<Value, std::pair>::value, void>::type
        PopulateSharedMembers(const char* /*name*/, Container& /*container*/)
    {
        /* Nothing to do here, see specialization below */
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers with smart pointers in them.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::IsSmartPtr<Value>::value, void>::type PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
            Add(name, item);
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with no smart pointers in them.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && !System::IsSmartPtr<typename Value::first_type>::value && !System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* /*name*/, Container& /*container*/)
    {
        /* Nothing to do here - we have map with neither key nor value being a shared ptr */
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with first item being smart pointer.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && System::IsSmartPtr<typename Value::first_type>::value && !System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
        {
            Add(name, item.first);
        }
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with second item being smart pointer.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && !System::IsSmartPtr<typename Value::first_type>::value && System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
        {
            Add(name, item.second);
        }
    }
    /// Populates contents of STL-style container to shared members data structure. This overload handles containers of pairs with both items being smart pointers.
    /// @tparam Container Container type
    /// @tparam Value Contained type
    /// @param data Shared members list to add values into
    /// @param name Member name
    /// @param container Container to get elements from
    template <class Container, typename Value = typename Container::value_type>
    typename std::enable_if<System::detail::is_a<Value, std::pair>::value && System::IsSmartPtr<typename Value::first_type>::value && System::IsSmartPtr<typename Value::second_type>::value, void>::type
        PopulateSharedMembers(const char* name, Container& container)
    {
        for (auto& item : container)
        {
            Add(name, item.first);
            Add(name, item.second);
        }
    }

};

} } // namespace System::Details


#endif // _shared_members_t_h_
