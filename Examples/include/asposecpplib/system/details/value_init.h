#pragma once

// Reimplementation of Boost::value_init library - http://www.boost.org/doc/libs/1_64_0/libs/utility/value_init.htm

#include <type_traits>
#include <utility>

#ifdef _MSC_VER
#pragma warning(push)
// It is safe to ignore the following warning from MSVC 7.1 or higher:
// "warning C4351: new behavior: elements of array will be default initialized"
#pragma warning(disable: 4351)
// It is safe to ignore the following MSVC warning, which may pop up when T is 
// a const type: "warning C4512: assignment operator could not be generated".
#pragma warning(disable: 4512)
#endif

#ifdef _MSC_VER
// MSVC including version 14 has not yet completely
// implemented value-initialization, as is reported:
// "VC++ does not value-initialize members of derived classes without
// user-declared constructor", reported in 2009 by Sylvester Hesp:
// https://connect.microsoft.com/VisualStudio/feedback/details/484295
// "Presence of copy constructor breaks member class initialization",
// reported in 2009 by Alex Vakulenko:
// https://connect.microsoft.com/VisualStudio/feedback/details/499606
// "Value-initialization in new-expression", reported in 2005 by
// Pavel Kuznetsov (MetaCommunications Engineering):
// https://connect.microsoft.com/VisualStudio/feedback/details/100744
// Reported again by John Maddock in 2015 for VC14:
// https://connect.microsoft.com/VisualStudio/feedback/details/1582233/c-subobjects-still-not-value-initialized-correctly
// See also: http://www.boost.org/libs/utility/value_init.htm#compiler_issues
// (Niels Dekker, LKEB, May 2010)
#define ASPOSE_NO_COMPLETE_VALUE_INITIALIZATION
#endif

namespace System { namespace Details {

template<class T>
class initialized
{
private:
    struct wrapper
    {
        std::remove_const_t<T> data;

        wrapper() : data() {}
        wrapper(T const& arg) : data(arg) {}
    };

    mutable std::aligned_storage_t<sizeof(wrapper), std::alignment_of<wrapper>::value> x;

    wrapper * wrapper_address() const
    {
        return static_cast<wrapper *>(static_cast<void*>(&x));
    }
public:
    initialized()
    {
#ifdef ASPOSE_NO_COMPLETE_VALUE_INITIALIZATION
        std::memset(&x, 0, sizeof(x));
#endif
        new (wrapper_address()) wrapper();
    }

    initialized(initialized const & arg)
    {
        new (wrapper_address()) wrapper(static_cast<wrapper const &>(*(arg.wrapper_address())));
    }

    explicit initialized(T const & arg)
    {
        new (wrapper_address()) wrapper(arg);
    }

    initialized & operator=(initialized const & arg)
    {
        // Assignment is only allowed when T is non-const.
        static_assert(!std::is_const<T>::value);
        *wrapper_address() = static_cast<wrapper const &>(*(arg.wrapper_address()));
        return *this;
    }

    ~initialized()
    {
      wrapper_address()->wrapper::~wrapper();
    }

    T const & data() const
    {
      return wrapper_address()->data;
    }

    T& data()
    {
      return wrapper_address()->data;
    }

    void swap(initialized & arg) noexcept
    {
        ::std::swap(this->data(), arg.data() );
    }

    operator T const &() const
    {
      return wrapper_address()->data;
    }

    operator T&()
    {
      return wrapper_address()->data;
    }
};

class initialized_value_t
{
public:

    template <class T> operator T() const
    {
        return initialized<T>().data();
    }
};

initialized_value_t const initialized_value = {} ;
    
} }

#undef ASPOSE_NO_COMPLETE_VALUE_INITIALIZATION

#ifdef _MSC_VER
#pragma warning(pop)
#endif
