/// @file system/collections/hashset.h
#ifndef _aspose_system_collections_hashset_h_
#define _aspose_system_collections_hashset_h_

#include "system/object.h"
#include "system/collections/iset.h"
#include "system/collections/base_enumerator.h"
#include "system/cycles_detection.h"
#include "system/collections/iequality_comparer.h"

#include <unordered_set>

namespace System {
namespace Collections {
namespace Generic {

/// Forward declaration of HashSet class.
template<typename T> class HashSet;

/// Pointer to keep HashSet references.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
/// @param T Hashed type.
template<typename T>
class HashSetPtr : public SharedPtr<HashSet<T> >
{
public:
    /// Null pointer constructor.
    HashSetPtr() {}
    /// Copy constructor.
    /// @param obj Pointer to copy.
    HashSetPtr(const SharedPtr<HashSet<T> >& obj) : SharedPtr<HashSet<T> >(obj) { }
};

/// Set implementation based on hashing.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @param T Element type.
template<typename T>
class HashSet
    : virtual public System::Object
    , public ICollection<T>
{
public:
    /// Self type.
    using ThisType = System::Collections::Generic::HashSet<T>;
    /// Pointer type.
    using ThisPtr = SharedPtr<ThisType>;
    /// Underlying data type.
    using set_t = std::unordered_set<T, EqualityComparerHashAdapter<T>, EqualityComparerAdapter<T>, typename System::Details::CollectionHelpers::ContainerPointerMode<T>::allocator_type>;
    /// Iterator type.
    using setIt_t = typename set_t::iterator;
private:
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(ThisType, System::BaseTypesInfo<System::Object>);

protected:
    /// Keeps information on pointer mode (weak/shared) of stored items (if applicable).
    System::Details::CollectionHelpers::ContainerPointerMode<T> m_pointer_mode;
    /// Internal data structure.
    set_t m_data;

public:
    /// Value type.
    using ValueType = T;
    /// Implemented interface.
    using BaseType = ICollection<T>;
    /// Enumerable interface pointer.
    using IEnumerablePtr = SharedPtr<IEnumerable<T>>;
    /// Enumerator pointer.
    using IEnumeratorPtr = SharedPtr<IEnumerator<T>>;

    /// Enumerator class.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class Enumerator : virtual public Object, public SimpleEnumerator<set_t>
    {
    public:
        /// Creates enumerator iterating through @p set object.
        /// @param set Set to iterate through.
        Enumerator(const ThisPtr& set) : SimpleEnumerator<set_t>(set, set->m_data) { }
        /// RTTI information.
        RTTI_INFO_TEMPLATE_CLASS(HashSet<T>::Enumerator, System::BaseTypesInfo<System::Object>);
    };

    /// Creates empty set.
    HashSet() : m_data(m_pointer_mode.GetAllocator()) {}

    /// Creates enumerator.
    /// @return Newly created enumerator.
    IEnumeratorPtr GetEnumerator() override
    {
        return MakeObject<Enumerator>(MakeSharedPtr(this));
    }

    /// Gets number of elements in set.
    /// @return Actual number of elements.
    int get_Count() const override { return ASPOSECPP_CHECKED_CAST(int, m_data.size()); }

    /// Adds element into set.
    /// @param item Element to add.
    void Add(const T& item) override
    {
        TryAdd(item);
    }
    /// Adds element into set.
    /// @param item Item to add.
    /// @return True if element was added, false if already exists.
    bool TryAdd(const T& item)
    {
        if (m_data.find(item) != m_data.end())
            return false;

        m_data.insert(item);
        return true;
    }
    /// Removes element from set.
    /// @param item Element to remove.
    /// @return True if element was found and deleted, false otherwise.
    bool Remove(const T& item) override
    {
        auto it = m_data.find(item);
        if (it == m_data.end())
            return false;

        m_data.erase(it);
        return true;
    }
    /// Deletes all elements in set.
    void Clear() override
    {
        m_data.clear();
    }
    /// Checks if element is present in set.
    /// @param item Item to look for.
    /// @return True if item is present in set, false otherwise.
    bool Contains(const T& item) const override
    {
        return m_data.find(item) != m_data.end();
    }

    /// Underlying data structure accessor.
    /// @return Reference to underlying data structure.
    set_t& data() { return m_data; }
    /// Underlying data structure accessor.
    /// @return Const reference to underlying data structure.
    const set_t& data() const { return m_data; }
    /// C++ specific
    /// @param list Range to insert into container.
    void _add_range(std::initializer_list<T> list)
    {
        std::for_each(list.begin(), list.end(), [this](const T &v) { m_data.insert(v); });
    }

    /// Keeping get_Count() from hiding.
    using BaseType::get_Count;
        
    /// Copies hash contents into existing array elements.
    /// @param arr Destination array.
    /// @param index Destination array beginning index.
    void CopyTo(ArrayPtr<T> arr, int index) override
    {
        if (!arr)
            throw ArgumentNullException();

        if (index < 0)
            throw ArgumentOutOfRangeException();

        if (index + get_Count() > arr->get_Length())
            throw ArgumentException();

        SharedPtr<IEnumerator<T>> e = this->GetEnumerator();
        while (e->MoveNext())
            (*arr)[index++] = e->get_Current();
    }

    /// Makes stored pointers to be treated as weak (if applicable).
    /// @param argument Should be 0 to refer the only template argument.
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        m_pointer_mode.SetWeak(argument, m_data);
    }

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Makes container and elements accept visitor.
    /// @param visitor Visitor to accept.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        visitor.add_self(this);
        DBG::for_each_of_Object(this, m_data, visitor);
    }
    /// Returns class name.
    /// @return String literal pointer.
    const char* DBG_class_name() const override { return "HashSet<T>"; }
    /// Marks class as known.
    /// @return Always returns false.
    bool DBG_unknown_type() const override { return false; }
#endif

protected:
    /// Implements loop reference detection mechanism for container.
    DEFINE_GET_SHARED_MEMBERS(m_data);
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _aspose_system_collections_hashset_h_
