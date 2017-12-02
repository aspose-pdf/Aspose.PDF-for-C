#ifndef _aspose_system_details_equality_helper_h_
#define _aspose_system_details_equality_helper_h_

#include <system/shared_ptr.h>
#include <system/weak_ptr.h>

namespace System { namespace Details {

template<typename... Ts> struct make_void { typedef void type;};
template<typename... Ts> using void_t = typename make_void<Ts...>::type;

template<typename T, typename = void>
struct IsArrayPtrT : std::false_type {};

template<typename T>
struct IsArrayPtrT<T, void_t<typename T::ArrayType>> : std::integral_constant<bool, std::is_base_of<SharedPtr<typename T::ArrayType>, T>::value> {};

template <typename T>
using IsSmartPtr = std::integral_constant<bool, IsSharedPtr<T>::value || IsWeakPtr<T>::value || IsArrayPtrT<T>::value>;

template <typename X, typename Y>
static typename std::enable_if<!IsSmartPtr<X>::value || !IsSmartPtr<Y>::value, bool>::type AreEqual(const X& x, const Y& y)
{
    return x == y;
}

template <typename X, typename Y>
static typename std::enable_if<IsSmartPtr<X>::value && (IsSharedPtr<Y>::value || IsArrayPtrT<Y>::value), bool>::type AreEqual(const X& x, const Y& y)
{
    if (x == nullptr)
        return y == nullptr;
    return static_pointer_cast<Object>(x)->Equals(y);
}

template <typename X, typename Y>
static typename std::enable_if<IsSmartPtr<X>::value && IsWeakPtr<Y>::value, bool>::type AreEqual(const X& x, const Y& y)
{
    return AreEqual(x, y.lock_best_cast());
}

}} // System::Details

#endif // _aspose_system_details_equality_helper_h_
