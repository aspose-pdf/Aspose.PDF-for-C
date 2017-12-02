#ifndef _aspose_system_constrains_h_
#define _aspose_system_constrains_h_

#include <system/shared_ptr.h>
#include <type_traits>

namespace System { namespace Constraints {

template <class Base, class Derived>
struct IsBaseOf : std::is_base_of<Base, Derived> {};

template <class Base, class Derived>
struct IsBaseOf<Base, SharedPtr<Derived>> : std::is_base_of<Base, Derived> {};


template <class T>
struct IsDefaultConstructible : std::is_default_constructible<T> {};

template <class T>
struct IsDefaultConstructible<SharedPtr<T>> : std::is_default_constructible<T> {};


template <typename T>
struct IsCsPointer : std::false_type{};

template <class T>
struct IsCsPointer<SharedPtr<T> > : std::true_type {};

template <class T>
struct IsCsPointer<WeakPtr<T> > : std::true_type {};

}} // namespace System::Constrains


namespace System {
    class String;
    class DateTime;
    class TimeSpan;
}

namespace System { namespace Constraints {
    template<> struct IsCsPointer<System::String> : std::true_type {};
    template<> struct IsCsPointer<System::DateTime> : std::true_type {};
    template<> struct IsCsPointer<System::TimeSpan> : std::true_type {};
}}


// for translate "where T: A"
#define assert_is_base_of(Base, Derived) \
    static_assert(System::Constraints::IsBaseOf<Base, Derived>::value, "typename " #Derived " mast be child of " #Base)

// for translate "where T: new()"
#define assert_is_constructable(T) \
    static_assert(System::Constraints::IsDefaultConstructible<T>::value, "typename " #T " mast be default-constructible")

// for translate "where T: class"
#define assert_is_cs_class(T) \
    static_assert(System::Constraints::IsCsPointer<T>::value, \
        "typename " #T " mast be System::SharedPtr<> or 'force-valued' type")

// for translate "where T: struct"
#define assert_is_cs_struct(T) \
    static_assert(!System::Constraints::IsCsPointer<T>::value, \
        "typename " #T " mast not be System::SharedPtr<> or 'force-valued' type")

#endif // _aspose_system_constrains_h_

