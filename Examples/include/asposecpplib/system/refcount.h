#ifndef _refcount_h_
#define _refcount_h_


#include <atomic>
#include <cassert>


namespace System { namespace Detail {


class RefCount
{
public:
    inline RefCount(int value = 0)
        : m_count(value)
    {}
    inline ~RefCount()
    {}

    inline int operator ++ ()
    {
        return ++m_count;
    }
    inline int operator -- ()
    {
        return --m_count;
    }
    inline int operator -= (int diff)
    {
        return m_count -= diff;
    }
    inline int get() const
    {
#ifdef ASPOSE_NO_ATOMIC_REFCOUNT
        return m_count;
#else
        return m_count.load();
#endif
    }
    inline operator int() const
    {
        return get();
    }

    inline RefCount& operator = (int value)
    {
#ifdef ASPOSE_NO_ATOMIC_REFCOUNT
        m_count = value;
#else
        m_count.store(value);
#endif
        return *this;
    }

    inline bool operator == (int value) const
    {
        return get() == value;
    }

private:
#ifdef ASPOSE_NO_ATOMIC_REFCOUNT
    int volatile m_count;
#else
    std::atomic<int> m_count;
#endif
};


} } // System::Detail


inline bool operator == (int value, const System::Detail::RefCount &rc)
{
    return rc == value;
}


#endif
