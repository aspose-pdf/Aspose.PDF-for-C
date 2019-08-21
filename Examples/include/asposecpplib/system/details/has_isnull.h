/// @file system/details/has_isnull.h
#ifndef _has_isnull_h_
#define _has_isnull_h_


#include <type_traits>
#include <utility>


namespace System { namespace Details {

/// Helper structure to check if specific type has IsNull() method.
struct HasIsNullImpl
{
    /// Specialization for types providing IsNull.
    /// @tparam T Type to check.
    template <typename T, typename = decltype(std::declval<T&>().IsNull())>
    static std::true_type Has(T*);
    /// Specialization for types not providing IsNull.
    static std::false_type Has(...);
};
        
/// Has value member set to true if tested type has IsNull method and to false otherwise.
/// @param T Type to test.
template <typename T> 
struct HasIsNull : std::integral_constant<bool, std::is_same<std::true_type, decltype(HasIsNullImpl::Has(std::declval<T*>()))>::value>
{};


} } // namespace System


#endif // _has_isnull_h_
