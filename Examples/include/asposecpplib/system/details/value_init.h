#pragma once

// Reimplementation of Boost::value_init library - http://www.boost.org/doc/libs/1_64_0/libs/utility/value_init.htm

#include <type_traits>
#include <utility>

#ifdef _MSC_VER
#pragma warning(push)
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

/// Wrapper to guarantee initialization of held value either using default constructors (on non-MSVS platforms) or with zeroes (MSVS has bugs impacting default construction).
/// @tparam T Stored type.
template<class T>
class initialized
{
private:
    /// Structure that actually holds data and calls constructors/destructors.
    struct wrapper
    {
        /// Stored data.
        std::remove_const_t<T> data;
        /// Default constructor.
        wrapper() : data() {}
        /// Initializes data member with given value.
        /// @param arg Data member initializer.
        wrapper(T const& arg) : data(arg) {}
    };

    /// Structure that actually holds the data. Not of wrapper type to disable auto-calling data member default constructor.
    mutable std::aligned_storage_t<sizeof(wrapper), std::alignment_of<wrapper>::value> x;
    /// Gets wrapper structure, actually held by object.
    /// @return Pointer to wrapper structure contained in x member.
    wrapper * wrapper_address() const
    {
        return static_cast<wrapper *>(static_cast<void*>(&x));
    }

public:
    /// Default constructor.
    initialized()
    {
#ifdef ASPOSE_NO_COMPLETE_VALUE_INITIALIZATION
        std::memset(&x, 0, sizeof(x));
#endif
        new (wrapper_address()) wrapper();
    }
    /// Copy constructor.
    /// @param arg Object to copy value from.
    initialized(initialized const & arg)
    {
        new (wrapper_address()) wrapper(static_cast<wrapper const &>(*(arg.wrapper_address())));
    }
    /// Copy constructor.
    /// @param arg Value to initialize stored one with.
    explicit initialized(T const & arg)
    {
        new (wrapper_address()) wrapper(arg);
    }
    /// Assignment operator.
    /// @param arg RHS value.
    /// @return Self reference.
    initialized & operator=(initialized const & arg)
    {
        // Assignment is only allowed when T is non-const.
        static_assert(!std::is_const<T>::value, "T is constant type");
        *wrapper_address() = static_cast<wrapper const &>(*(arg.wrapper_address()));
        return *this;
    }
    /// Destructor. Calls destructor of stored value (if any).
    ~initialized()
    {
        wrapper_address()->wrapper::~wrapper();
    }
    /// Data accessor.
    /// @return Const reference to stored value.
    T const & data() const
    {
        return wrapper_address()->data;
    }
    /// Data accessor.
    /// @return Reference to stored value.
    T& data()
    {
        return wrapper_address()->data;
    }
    /// Swaps data with other instance.
    void swap(initialized & arg) noexcept
    {
        ::std::swap(this->data(), arg.data() );
    }
    /// Implicit conversion to stored type.
    /// @return Const reference to stored value.
    operator T const &() const
    {
        return wrapper_address()->data;
    }
    /// Implicit conversion to stored type.
    /// @return Reference to stored value.
    operator T&()
    {
        return wrapper_address()->data;
    }
};

/// Wrapper class to get value of primitive type which is guaranteed to be zero-initialized.
class initialized_value_t
{
public:
    /// Gets value which is either zero-initialized or default-initialized.
    /// @tparam T Target type.
    /// @return Initialized value of specific type.
    template <class T> operator T() const
    {
        return initialized<T>().data();
    }
};
/// Dummy instance to get initialized values from.
initialized_value_t const initialized_value = {} ;
    
} }

#undef ASPOSE_NO_COMPLETE_VALUE_INITIALIZATION

#ifdef _MSC_VER
#pragma warning(pop)
#endif
