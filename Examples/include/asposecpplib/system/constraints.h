/// @file system/constraints.h
/// Contains declarations of template predicates that determine types' properties and some asserts that check if types conform to certain requirements.

#ifndef _aspose_system_constrains_h_
#define _aspose_system_constrains_h_

#include <system/shared_ptr.h>
#include <system/weak_ptr.h>
#include <type_traits>

namespace System { namespace Constraints {

/// A template predicate that determines if type @p Derived is derived from @p Base.
template <class Base, class Derived>
struct IsBaseOf : std::is_base_of<Base, Derived> {};

/// A template predicate that determines if type @p Derived is derived from @p Base.
template <class Base, class Derived>
struct IsBaseOf<Base, SharedPtr<Derived>> : std::is_base_of<Base, Derived> {};

/// A template predicate that determines if type @p T is default constructible.
template <class T>
struct IsDefaultConstructible : std::is_default_constructible<T> {};

/// A template predicate that determines if type SharedPtr<@p T> is default-constructible.
template <class T>
struct IsDefaultConstructible<SharedPtr<T>> : std::is_default_constructible<T> {};

/// A template predicate that determines if the specified type is a pointer type.
/// By default any type is considered non-pointer type.
template <typename T>
struct IsCsPointer : std::false_type{};

/// A template predicate that determines if the specified type is a pointer type.
/// SharedPtr is a pointer type.
template <class T>
struct IsCsPointer<SharedPtr<T> > : std::true_type {};

/// A template predicate that determines if the specified type is a pointer type.
/// WeakPtr is a pointer type.
template <class T>
struct IsCsPointer<WeakPtr<T> > : std::true_type {};

/// A template predicate that determines if the specified type is a tuple type.
template <typename>
struct IsStdTuple : std::false_type {};

/// A template predicate that determines if the specified type is a tuple type.
template <typename T>
struct IsStdTuple<std::tuple<T>> : std::true_type {};

}} // namespace System::Constrains


namespace System {
    class String;
    class DateTime;
    class TimeSpan;
}

namespace System { namespace Constraints {
    /// String is a pointer type.
    template<> struct IsCsPointer<System::String> : std::true_type {};
    /// DateTime is a pointer type.
    template<> struct IsCsPointer<System::DateTime> : std::true_type {};
    /// TimeSpan is a pointer type.
    template<> struct IsCsPointer<System::TimeSpan> : std::true_type {};
}}


// for translate "where T: A"
/// The assert that checks if @p Derived is derived from @p Base.
#define assert_is_base_of(Base, Derived) \
    static_assert(System::Constraints::IsBaseOf<Base, Derived>::value, "typename " #Derived " mast be child of " #Base)

// for translate "where T: new()"
/// The assert that checks if @p T is default-constructible.
#define assert_is_constructable(T) \
    static_assert(System::Constraints::IsDefaultConstructible<T>::value, "typename " #T " mast be default-constructible")

// for translate "where T: class"
/// The assert that checks if @p T is a pointer-type.
#define assert_is_cs_class(T) \
    static_assert(System::Constraints::IsCsPointer<T>::value, \
        "typename " #T " mast be System::SharedPtr<> or 'force-valued' type")

// for translate "where T: struct"
/// The assert that checks if @p T is a non-pointer type.
#define assert_is_cs_struct(T) \
    static_assert(!System::Constraints::IsCsPointer<T>::value, \
        "typename " #T " mast not be System::SharedPtr<> or 'force-valued' type")

#endif // _aspose_system_constrains_h_

