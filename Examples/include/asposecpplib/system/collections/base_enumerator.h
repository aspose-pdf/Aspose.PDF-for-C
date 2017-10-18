#ifndef _BaseEnumerator_h_
#define _BaseEnumerator_h_

#include "system/collections/ienumerator.h"

namespace System {
namespace Collections {
namespace Generic {

    template <typename Container, typename Element>
    class BaseEnumerator : public virtual Object, public IEnumerator<Element>
    {
    protected:

        Object::ptr m_owner;
        Container& m_data;
        typename Container::iterator m_it;
        bool m_inited;

    public:

        BaseEnumerator(Object::ptr owner, Container& cont) : m_owner(owner), m_data(cont), m_inited(false) {}
        // There no need to define an empty virtual dtor, virtual dtor for inheritance already defined in the Object class

        bool IsValid() const
        {
            return m_inited && m_it != m_data.end();
        }

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

        void Reset() override { m_inited = false; }

    protected:
        virtual Object::shared_members_type GetSharedMembers() override
        {
            Object::shared_members_type result = Object::GetSharedMembers();
            result.Add("System::Collections::Generic::BaseEnumerator<Container,Element>::m_owner", m_owner);
            return result;
        }
    };

    template <typename Container, typename Element = typename Container::value_type>
    class SimpleEnumerator : public BaseEnumerator<Container, Element>
    {
    public:
        SimpleEnumerator(Object::ptr owner, Container& cont) : BaseEnumerator<Container, Element>(owner, cont) {}

        virtual Element get_Current() ASPOSE_CONST
        {
            return this->IsValid() ? *(this->m_it) : Element();
        }
    };

    template <typename Container, typename Element = typename Container::value_type>
    class ReverseEnumerator : public virtual Object, public IEnumerator<Element>
    {
    protected:

        Object::ptr m_owner;
        Container& m_data;
        typename Container::reverse_iterator m_it;
        bool m_inited;

    public:

        ReverseEnumerator(Object::ptr owner, Container& cont) : m_owner(owner), m_data(cont), m_inited(false) {}
        virtual ~ReverseEnumerator() {}

        bool IsValid() const
        {
            return m_inited && m_it != m_data.rend();
        }

        bool MoveNext()
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

        virtual Element get_Current() ASPOSE_CONST
        {
            return this->IsValid() ? *(this->m_it) : Element();
        }

        void Reset() { m_inited = false; }

    protected:
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
