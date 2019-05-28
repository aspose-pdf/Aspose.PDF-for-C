/// @file system/details/equality_helper.h
#ifndef _aspose_system_details_equality_helper_h_
#define _aspose_system_details_equality_helper_h_

#include <system/object.h>
#include <detail.h>

namespace System { namespace Details {

/// Predicate to check if any of two types is not a smart pointer.
/// @tparam X First type to check.
/// @tparam Y Second type to check.
template <typename X, typename Y>
using NOrIsSmartPtr = std::integral_constant<bool, !IsSmartPtr<X>::value || !IsSmartPtr<Y>::value>;

/// Compares non-pointers using operator ==.
/// @tparam X LHS operand type.
/// @tparam Y RHS operand type.
/// @param x LHS operand.
/// @param y RHS operand.
/// @return True if items are considered equal, false otherwise.
template <typename X, typename Y>
static typename std::enable_if<NOrIsSmartPtr<X, Y>::value && detail::has_operator_equal<X>::value, bool>::type AreEqual(const X& x, const Y& y)
{
    return x == y;
}

/// Compares non-pointers using Equals method.
/// @tparam X LHS operand type.
/// @tparam Y RHS operand type.
/// @param x LHS operand.
/// @param y RHS operand.
/// @return True if items are considered equal, false otherwise.
template <typename X, typename Y>
static typename std::enable_if<NOrIsSmartPtr<X, Y>::value && detail::has_only_method_equals<X>::value, bool>::type AreEqual(const X& x, const Y& y)
{
    return x.Equals(y);
}

/// Compares pointers Equals method.
/// @tparam X LHS operand type.
/// @tparam Y RHS operand type.
/// @param x LHS operand.
/// @param y RHS operand.
/// @return True if items are considered equal, false otherwise.
template <typename X, typename Y>
static typename std::enable_if<IsSmartPtr<X>::value && IsSmartPtr<Y>::value, bool>::type AreEqual(const X& x, const Y& y)
{
    Object *const lhs = x.GetObjectOrNull();
    if (lhs == nullptr)
        return y == nullptr;
    return lhs->Equals(y.ToObjectPtr());
}

}} // System::Details

#endif // _aspose_system_details_equality_helper_h_
