/// @file system/collections/base_enumerator.h
#ifndef _BaseEnumerator_h_
#define _BaseEnumerator_h_

#include "system/collections/ienumerator.h"

namespace System {
namespace Collections {
namespace Generic {

/// Enumerator definition to wrap STL-styled types for C#-styled usage.
/// Makes no assertions on container structure except for existance of sequental iterator.
/// Uses begin() and end() functions.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam Container STL-styled container type.
/// @tparam Element Element type.
template <typename Container, typename Element>
class BaseEnumerator : public virtual Object, public IEnumerator<Element>
{
protected:
    /// Pointer to owner container object to make sure it is not deleted before enumerator is.
    Object::ptr m_owner;
    /// Container inner data structure reference.
    Container& m_data;
    /// Actual STL iterator.
    typename Container::iterator m_it;
    /// Whether MoveNext() was ever called.
    bool m_inited;

public:

    /// Initializes iterator.
    /// @param owner Pointer to owner container.
    /// @param cont Actual container implementation reference.
    BaseEnumerator(Object::ptr owner, Container& cont) : m_owner(owner), m_data(cont), m_inited(false) {}
    // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class

    /// Checks whether MoveNext() was called and end was not reached.
    /// @return false if MoveNext() was not called at all or container end is hit; true otherwise.
    bool IsValid() const
    {
        return m_inited && m_it != m_data.end();
    }
    /// Enumerator-style increment.
    /// @return true if enumerator points to valid element, false if container end is hit.
    bool MoveNext() override
    {
        if (!m_inited)
        {
            m_it = m_data.begin();
            m_inited = true;
        }
        else if (m_it != m_data.end())
        {
            m_it++;
        }

        return m_it != m_data.end();
    }
    /// Resets enumerator to allow re-enumerating elements.
    void Reset() override { m_inited = false; }

protected:
    /// Implements loop reference lookup for enumerator object.
    virtual Object::shared_members_type GetSharedMembers() override
    {
        Object::shared_members_type result = Object::GetSharedMembers();
        result.Add("System::Collections::Generic::BaseEnumerator<Container,Element>::m_owner", m_owner);
        return result;
    }
};

/// Iterator class for simple containers holding elements directly using rbegin() and rend() functions.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam Container Container type to iterate through.
/// @tparam Element Element type.
template <typename Container, typename Element = typename Container::value_type>
class SimpleEnumerator : public BaseEnumerator<Container, Element>
{
public:
    /// Creates simple iterator.
    /// @param owner Owner object to hold while iterator lives.
    /// @param cont Container reference.
    SimpleEnumerator(Object::ptr owner, Container& cont) : BaseEnumerator<Container, Element>(owner, cont) {}

    /// Gets 'current' element.
    /// @return Current element (if any) or default-constructed item otherwise.
    virtual Element get_Current() ASPOSE_CONST
    {
        return this->IsValid() ? *(this->m_it) : Element();
    }
};


/// Adapting iterator, wraps std::pair into KVPair expected from Dictionary
/// @tparam KVPair Required return type
/// @tparam Container wrapped container type
template <typename KVPair, typename Container>
class KVPairIterator
{
public:
    using iterator_category = std::forward_iterator_tag;
    using value_type = KVPair;
    using difference_type = std::ptrdiff_t;
    using pointer = value_type * ;
    using reference = value_type & ;

    KVPairIterator(typename Container::iterator current) : mCurrent(std::move(current)) {}

    friend bool operator==(const KVPairIterator& lhs, const KVPairIterator& rhs)
    {
        return lhs.mCurrent == rhs.mCurrent;
    }

    friend bool operator!=(const KVPairIterator& lhs, const KVPairIterator& rhs)
    {
        return lhs.mCurrent != rhs.mCurrent;
    }

    KVPair operator*() const
    {
        return KVPair(*mCurrent);
    }

    KVPairIterator& operator++()
    {
        ++mCurrent;
        return *this;
    }
private:
    typename Container::iterator mCurrent;
};


/// Enumerator that reverse-iterates through container.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam Container Container to iterate through.
/// @tparam Element Element type.
template <typename Container, typename Element = typename Container::value_type>
class ReverseEnumerator : public virtual Object, public IEnumerator<Element>
{
protected:
    /// Pointer to owner container object to make sure it is not deleted before enumerator is.
    Object::ptr m_owner;
    /// Container inner data structure reference.
    Container& m_data;
    /// Actual STL iterator.
    typename Container::reverse_iterator m_it;
    /// Whether MoveNext() was ever called.
    bool m_inited;

public:

    /// Initializes iterator.
    /// @param owner Pointer to owner container.
    /// @param cont Actual container implementation reference.
    ReverseEnumerator(Object::ptr owner, Container& cont) : m_owner(owner), m_data(cont), m_inited(false) {}
    /// Destructor.
    virtual ~ReverseEnumerator() {}

    /// Checks whether MoveNext() was called and end was not reached.
    /// @return false if MoveNext() was not called at all or container end is hit; true otherwise.
    bool IsValid() const
    {
        return m_inited && m_it != m_data.rend();
    }
    /// Enumerator-style increment.
    /// @return true if enumerator points to valid element, false if container end is hit.
    bool MoveNext() override
    {
        if (!m_inited)
        {
            m_it = m_data.rbegin();
            m_inited = true;
        }
        else if (m_it != m_data.rend())
        {
            m_it++;
        }

        return m_it != m_data.rend();
    }
    /// Gets 'current' element.
    /// @return Current element (if any) or default-constructed item otherwise.
    virtual Element get_Current() ASPOSE_CONST override
    {
        return this->IsValid() ? *(this->m_it) : Element();
    }
    /// Resets enumerator to allow re-enumerating elements.
    void Reset() override { m_inited = false; }

protected:
    /// Implements loop reference lookup for enumerator object.
    virtual Object::shared_members_type GetSharedMembers() override
    {
        Object::shared_members_type result = Object::GetSharedMembers();
        result.Add("System::Collections::Generic::ReverseEnumerator<Container,Element>::m_owner", m_owner);
        return result;
    }
};

} // namespace Generic
} // namespace Collections
} // namespace System

#endif // _BaseEnumerator_h_
