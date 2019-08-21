/// @file testing/test_predicates.h
#pragma once

#include <gtest/gtest.h>

#include "system/shared_ptr.h"
#include "system/decimal.h"
#include "system/array.h"
#include "system/collections/list.h"
#include "system/collections/dictionary.h"
#include "system/collections/sorted_dictionary.h"
#include "system/collections/sorted_list.h"
#include "system/collections/stack.h"
#include "system/collections/queue.h"
#include "system/collections/bitarray.h"
#include "system/collections/specialized/string_collection.h"
#include "system/collections/hashset.h"
#include "system/object_ext.h"

#include "system/test_tools/test_tools.h"

#include <algorithm>
#include <cmath>

namespace System
{
namespace TestPredicates
{
namespace TypeTraits
{

/// Checks that @p T1 is arithmetic and @p T2 is floating point, or vice versa.
/// If so, sets value member to true, otherwise it is false.
/// @tparam T1 First type to check.
/// @tparam T2 Second type to check.
template<typename T1, typename T2>
using AreFPandArithmetic = std::integral_constant<bool, (std::is_floating_point<T1>::value && std::is_arithmetic<T2>::value) || (std::is_arithmetic<T1>::value && std::is_floating_point<T2>::value) >;

/// Checks that at least one of type arguments is System::Decimal.
/// If so, sets value member to true, otherwise it is false.
/// @tparam T1 First type to check.
/// @tparam T2 Second type to check.
template<typename T1, typename T2>
using AnyOfDecimal = std::integral_constant<bool, std::is_same<T1, System::Decimal>::value || std::is_same<T2, System::Decimal>::value>;

/// Provides alias for longest floating point type provided. Ignores non-floating point types.
/// @tparam T1 First type to check.
/// @tparam T2 Second type to check.
/// @tparam Enable Formal argument for SFINAE to work.
template<typename T1, typename T2, typename Enable = void>
struct LargestFPType {};
/// Specialization for case when T1 is a floating point and T2 is not.
template<typename T1, typename T2>
struct LargestFPType<T1, T2, typename std::enable_if<std::is_floating_point<T1>::value && !std::is_floating_point<T2>::value>::type>
{
    /// An alias for the type of the first comparand.
    using type = T1;
};
/// Specialization for case when T2 is a floating point and T1 is not.
template<typename T1, typename T2>
struct LargestFPType<T1, T2, typename std::enable_if<std::is_floating_point<T2>::value && !std::is_floating_point<T1>::value>::type>
{
    /// An alias for the type of the second comparand.
    using type = T2;
};
/// Specialization for case when both T1 and T2 are floating point types.
template<typename T1, typename T2>
struct LargestFPType<T1, T2, typename std::enable_if<std::is_floating_point<T1>::value && std::is_floating_point<T2>::value>::type>
{
    /// An alias for the type whose size is the largest among the two.
    using type = typename std::conditional<sizeof(T1) >= sizeof(T2), T1, T2>::type;
};

/// Checks for overload of PrintTo function that accepts given type as first argument.
/// If an overload exists, inherits std::true_type, otherwise inheirts std::false_type.
/// @tparam T Type to check.
/// @tparam Enable Formal argument for SFINAE to work.
template<typename T, typename Enable = void>
struct has_print_to_method : std::false_type {};
/// Specialization for types having PrintTo specialization provided.
template<typename T>
struct has_print_to_method<
    T
    , decltype((void)(PrintTo(std::declval<T&>(), std::declval<std::ostream*>())))
> : std::true_type {};

/// Checks if a type has data() method. If it does, inherits std::true_type, otherwise inherits std::false_type.
/// @tparam T Type to check.
/// @tparam Enable Formal argument for SFINAE to work.
template<typename T, typename Enable = void>
struct has_data_method : std::false_type {};
/// Specialization for types having data() method.
template<typename T>
struct has_data_method<
    T
    , decltype((void)(std::declval<T>().data()))
> : std::true_type {};
/// Specialization for BitArray type which provides boost type which is inaccessible there.
template<>
struct has_data_method<
    System::Collections::BitArray
    , void
> : std::false_type {}; // Forcing to false as boost types ain't accessible there

/// Checks if type is a System::Array specialization. If so, value member is set to true, otherwise it is set to false.
/// @tparam T Type to check.
template<typename T>
using IsArray = std::is_same<T, System::Array<typename T::ValueType>>;

/// Checks if type is a System::Collections::Generic::List specialization. If so, value member is set to true, otherwise it is set to false.
/// @tparam T Type to check.
template<typename T>
using IsList = std::is_same<T, System::Collections::Generic::List<typename T::ValueType>>;

/// Checks if both type arguments are arrays or lists. If so, value member is set to true, otherwise it is set to false.
/// @tparam T Type to check.
/// @tparam T1 First type to check.
/// @tparam T2 Second type to check.
template<typename T1, typename T2>
using BothArrayOrList = std::integral_constant<bool, (IsArray<T1>::value || IsList<T1>::value) && (IsArray<T2>::value || IsList<T2>::value)>;
       
/// Checks if specific type is STL-style container. To do so, checks for iterator and const_iterator member types existance.
/// If both exist, inherits std::true_type, otherwise inherits std::false_type.
/// @tparam T Type to check.
/// @tparam Enable Formal argument for SFINAE to work.
template<typename T, typename Enable = void>
struct IsCppContainer : std::false_type {};
/// Specialization for types providing iterator and const_iterator member types.
template<typename T>
struct IsCppContainer<
    T
    , decltype(std::declval<typename T::iterator>(), std::declval<typename T::const_iterator>(), void(0))
> : std::true_type {};

} /// namespace TypeTraits

namespace Details
{
/// Prints value to std::string.
/// @tparam T Type to print.
/// @param value Value to print.
/// @return String equivalent of value passed.
template<typename T>
std::string PrintToString(const T& value);

/// Prints System::Object subclass to string using ToString() method.
/// @tparam T Final class type.
/// @param value Pointer to object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return String representation of object passed or "nullptr", if @p value is null.
template<typename T>
typename std::enable_if<System::Details::HasToString<T>::value, std::string>::type
PrintToStringImpl(const SharedPtr<T>& value, long long s)
{
    if (value)
    {
        return value->ToString().ToUtf8String();
    }

    return "nullptr";
}
/// Prints System::Object subclass to string using ToString() method.
/// @tparam T Final class type.
/// @param value Pointer to object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return String representation of object passed or "nullptr", if @p value is null.
template<typename T>
typename std::enable_if<System::Details::HasToString<T>::value, std::string>::type
PrintToStringImpl(const WeakPtr<T>& value, long long s)
{
    if (auto ptr = value.lock())
    {
        return ptr->ToString().ToUtf8String();
    }

    return "nullptr";
}
/// Prints object to string using ToString() method.
/// @tparam T Object type.
/// @param value Object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return String representation of object passed.
template<typename T>
typename std::enable_if<!TypeTraits::has_print_to_method<T>::value && System::Details::HasToString<T>::value, std::string>::type
PrintToStringImpl(const T& value, long long s)
{
    return const_cast<T&>(value).ToString().ToUtf8String();
}
/// Prints object to string using PrintTo method.
/// @tparam T Object type.
/// @param value Object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return String representation of object passed.
template<typename T>
typename std::enable_if<TypeTraits::has_print_to_method<T>::value, std::string>::type
PrintToStringImpl(const T& value, long long s)
{
    return ::testing::PrintToString(value);
}
/// Prints object to string using data() method. Handles wrappers set around STL-styled containers.
/// @tparam T Object type.
/// @param value Object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return String representation of data() method return value.
template<typename T>
typename std::enable_if<TypeTraits::has_data_method<T>::value && !TypeTraits::IsCppContainer<T>::value, std::string>::type
PrintToStringImpl(const T& value, long long s)
{
    return PrintToString(value.data());
}
/// Prints pair to string.
/// @tparam T1 First pair type argument.
/// @tparam T2 Second pair type argument.
/// @param value Object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return Joint string representations of both first and second pair components.
template<typename T1, typename T2>
std::string PrintToStringImpl(const std::pair<T1, T2>& value, long long s)
{
    std::ostringstream os;
    os << '(' << PrintToString(value.first) << ", " << PrintToString(value.second) << ')';
    return os.str();
}
/// Prints STL-style containers to string by printing their elements (not more than 32).
/// @tparam T Object type.
/// @param container Object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return Joint string representations of contained elements.
template<typename T>
typename std::enable_if<TypeTraits::IsCppContainer<T>::value, std::string>::type
PrintToStringImpl(const T& container, long long s)
{
    std::ostringstream ostr;
    const size_t kMaxCount = 32; // The maximum number of elements to print
    ostr << '{';

    size_t count = 0;
    for (auto it = container.begin();
        it != container.end(); ++it, ++count) {
        if (count > 0) {
            ostr << ',';
            if (count == kMaxCount) {  // Enough has been printed.
                ostr << " ...";
                break;
            }
        }
        ostr << ' ';
        ostr << PrintToString(*it);
    }

    if (count > 0) {
        ostr << ' ';
    }
    ostr << '}';

    return ostr.str();
}
/// Prints other types to string by using gtest-provided functions.
/// @tparam T Object type.
/// @param value Object to print.
/// @param s A service parameter which serves as a selector of function overload based on the type of this parameter; the value 
/// of the parameter is ignored
/// @return String representations of object passed.
template<typename T>
std::string PrintToStringImpl(const T& value, int s)
{
    return ::testing::PrintToString(value);
}
/// Prints object to string by selecting proper serializer function.
/// @tparam T Object type.
/// @param value Object to print.
/// @return String representations of object passed.
template<typename T>
std::string PrintToString(const T& value)
{
    return PrintToStringImpl(value, 1LL);
}
/// Prints nullptr to string.
/// @return "nullptr" string.
inline std::string PrintToString(std::nullptr_t)
{
    return "nullptr";
}
/// Prints ICollection-style containers to string by printing their elements (not more than 32).
/// @tparam T Object type.
/// @param value Object to print.
/// @return Joint string representations of contained elements.
template<typename T>
std::string PrintToString(System::Collections::Generic::ICollection<T>& value)
{
    std::ostringstream ostr;
    const size_t kMaxCount = 32; // The maximum number of elements to print
    if (!std::is_same<T, bool>::value)
        ostr << '{';
    size_t count = 0;

    auto enumerator = value.GetEnumerator();
    while (enumerator->MoveNext())
    {
        if (count > 0) {
            if (!std::is_same<T, bool>::value)
                ostr << ',';
            if (count == kMaxCount) {  // Enough has been printed.
                ostr << " ...";
                break;
            }
        }
        ++count;
        if (std::is_same<T, bool>::value)
            ostr << enumerator->get_Current();
        else
            ostr << ' ' << PrintToString(enumerator->get_Current());
    }

    if (!std::is_same<T, bool>::value)
    {
        if (count > 0) {
            ostr << ' ';
        }
        ostr << '}';
    }

    return ostr.str();
}

/// Formats == assertion failure for output.
/// @tparam T1 LHS value type.
/// @tparam T2 RHS value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return Object wrapping failure text.
template<typename T1, typename T2>
testing::AssertionResult EqFailure(const char* lhs_expr, const char* rhs_expr
    , T1& lhs
    , T2& rhs)
{
    return testing::internal::EqFailure(lhs_expr,
        rhs_expr,
        Details::PrintToString(lhs),
        Details::PrintToString(rhs),
        false);
}
/// Formats != assertion failure for output.
/// @tparam T1 LHS value type.
/// @tparam T2 RHS value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return Object wrapping failure text.
template<typename T1, typename T2>
testing::AssertionResult NotEqFailure(const char* lhs_expr, const char* rhs_expr
    , T1& lhs
    , T2& rhs)
{
    return testing::AssertionFailure() 
        << "Expected: (" << lhs_expr << ") != (" << rhs_expr
        << "), actual: " << Details::PrintToString(lhs)
        << " vs " << Details::PrintToString(rhs); 
}
/// Formats 'same' assertion failure for output.
/// @tparam T1 LHS value type.
/// @tparam T2 RHS value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return Object wrapping failure text.
template<typename T1, typename T2>
testing::AssertionResult SameFailure(const char* lhs_expr, const char* rhs_expr
    , T1& lhs
    , T2& rhs)
{
    return testing::AssertionFailure() 
        << "Expected: (" << lhs_expr << ") same (" << rhs_expr
        << "), actual: " << Details::PrintToString(lhs)
        << " vs " << Details::PrintToString(rhs); 
}
/// Formats 'not same' assertion failure for output.
/// @tparam T1 LHS value type.
/// @tparam T2 RHS value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return Object wrapping failure text.
template<typename T1, typename T2>
testing::AssertionResult NotSameFailure(const char* lhs_expr, const char* rhs_expr
    , T1& lhs
    , T2& rhs)
{
    return testing::AssertionFailure() 
        << "Expected: (" << lhs_expr << ") isn't same (" << rhs_expr
        << "), actual: " << Details::PrintToString(lhs)
        << " vs " << Details::PrintToString(rhs); 
}

namespace SharedPtrAsserts
{

/// Equal-compares two containers using operator == on elements. Works for non-SmartPtr elements.
/// @tparam T1 LHS container type.
/// @tparam T2 RHS container type.
/// @param lhs LHS container.
/// @param rhs RHS container.
/// @return True if contained elements and sizes match, false otherwise.
template<typename T1, typename T2>
typename std::enable_if<!System::IsSmartPtr<typename T1::value_type>::value && !System::IsSmartPtr<typename T2::value_type>::value
    ,bool>::type
AreEqualContainer(const T1& lhs, const T2& rhs)
{
    return std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}
/// Equal-compares two containers using System::Object::Equals on elements. Works for SmartPtr elements.
/// @tparam T1 LHS container type.
/// @tparam T2 RHS container type.
/// @param lhs LHS container reference.
/// @param rhs RHS container reference.
/// @return True if contained elements and sizes match, false otherwise.
template<typename T1, typename T2>
typename std::enable_if<System::IsSmartPtr<typename T1::value_type>::value && System::IsSmartPtr<typename T2::value_type>::value
    ,bool>::type
AreEqualContainer(const T1& lhs, const T2& rhs)
{
    return std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(),
        [](const typename T1::value_type &l, const typename T2::value_type &r)
        {
            return System::Object::Equals(l, r);
        }
    );
}

/// Equal-compares two containers using System::Object::Equals on elements. Works for SmartPtr elements.
/// @tparam T1 LHS container type.
/// @tparam T2 RHS container type.
/// @param lhs LHS container reference.
/// @param rhs RHS container reference.
/// @return True if contained elements and sizes match, false otherwise.
template<typename T1, typename T2>
typename std::enable_if<System::IsSmartPtr<typename T1::value_type>::value && System::IsSmartPtr<typename T2::value_type>::value
    ,bool>::type
AreEqualData(const T1& lhs, const T2& rhs)
{
    return std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end(),
        [](const typename T1::value_type &l, const typename T2::value_type &r)
        {
            return System::Object::Equals(l, r);
        }
    );
}
/// Equal-compares two containers using operator == on elements. Works for non-SmartPtr elements.
/// @tparam T1 LHS container type.
/// @tparam T2 RHS container type.
/// @param lhs LHS container.
/// @param rhs RHS container.
/// @return True if contained elements and sizes match, false otherwise.
template<typename T1, typename T2>
typename std::enable_if<!System::IsSmartPtr<typename T1::value_type>::value && !System::IsSmartPtr<typename T2::value_type>::value
    ,bool>::type
AreEqualData(const T1& lhs, const T2& rhs)
{
    return std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}
/// Equal-compares two containers of identical type. Works for non-SmartPtr elements.
/// @tparam T1 LHS container type.
/// @tparam T2 RHS container type.
/// @param lhs LHS container.
/// @param rhs RHS container.
/// @return True if contained elements and sizes match, false otherwise.
template<typename T>
typename std::enable_if<!System::IsSmartPtr<typename T::value_type>::value
    ,bool>::type
AreEqualData(const T& lhs, const T& rhs)
{
    return lhs == rhs;
}

/// Equal-compares two maps using System::Object::Equals on elements.
/// @tparam T Map type.
/// @param lhs LHS map.
/// @param rhs RHS map.
/// @return True if contained keys, values and sizes match, false otherwise.
template<typename T>
bool AreEqualMapOfObjects(const T& lhs, const T& rhs)
{
    return lhs.size() == rhs.size() && std::all_of(lhs.begin(), lhs.end(), 
        [&rhs](const typename T::value_type value)
        {
            auto it = rhs.find(value.first);
            return it != rhs.end() && System::Object::Equals(value.second, it->second);
    });
}

/// Equal-compares arrays or lists.
/// @tparam T1 LHS container type.
/// @tparam T2 RHS container type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
typename std::enable_if<TypeTraits::BothArrayOrList<typename T1::Pointee_, typename T2::Pointee_>::value
, testing::AssertionResult>::type
NotNullAreEqualImpl(const char* lhs_expr, const char* rhs_expr
    , const T1& lhs, const T2& rhs, long long s)
{
    if (AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}

/// Equal-compares dictionaries of value types.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Dictionary<K, V>>& lhs
    , const SharedPtr<System::Collections::Generic::Dictionary<K, V>>& rhs)
{
    if (AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares dictionaries of shared pointers.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Dictionary<K, SharedPtr<V>>>& lhs
    , const SharedPtr<System::Collections::Generic::Dictionary<K, SharedPtr<V>>>& rhs)
{
    if (AreEqualMapOfObjects(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares hashsets.
/// @tparam T1 LHS container element type.
/// @tparam T2 RHS container element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::HashSet<T1>>& lhs
    , const SharedPtr<System::Collections::Generic::HashSet<T2>>& rhs)
{
    if (AreEqualContainer(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares queues.
/// @tparam T1 LHS container element type.
/// @tparam T2 RHS container element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Queue<T1>>& lhs
    , const SharedPtr<System::Collections::Generic::Queue<T2>>& rhs)
{
    if (AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares stacks.
/// @tparam T1 LHS container element type.
/// @tparam T2 RHS container element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Stack<T1>>& lhs
    , const SharedPtr<System::Collections::Generic::Stack<T2>>& rhs)
{
    if (AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares sorted dictionaries of value types.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, V>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, V>>& rhs)
{
    if (AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares sorted dictionaries of shared pointers.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, SharedPtr<V>>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, SharedPtr<V>>>& rhs)
{
    if (AreEqualMapOfObjects(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares sorted lists of value types.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedList<K, V>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedList<K, V>>& rhs)
{
    if (AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares sorted lists of shared pointers.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedList<K, SharedPtr<V>>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedList<K, SharedPtr<V>>>& rhs)
{
    if (AreEqualMapOfObjects(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares bit arrays.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
inline testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::BitArray>& lhs
    , const SharedPtr<System::Collections::BitArray>& rhs)
{
    if (*lhs == *rhs)
    {
        return testing::AssertionSuccess();
    }

    return EqFailure(lhs_expr, 
                        rhs_expr, 
                        static_cast<System::Collections::Generic::ICollection<bool>&>(*lhs), 
                        static_cast<System::Collections::Generic::ICollection<bool>&>(*rhs)
    );
}
/// Equal-compares string collections.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
inline testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Specialized::StringCollection>& lhs
    , const SharedPtr<System::Collections::Specialized::StringCollection>& rhs)
{
    if (AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Equal-compares abstract collections.
/// @tparam T Element type.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T>
bool NotNullAreEqualHelper(const SharedPtr<System::Collections::Generic::ICollection<T>>& lhs
    , const SharedPtr<System::Collections::Generic::ICollection<T>>& rhs)
{
    static_assert(System::IsBoxable<T>::value, "Unsupported type for ICollection<T,_> compare");

    if (lhs->get_Count() != rhs->get_Count())
    {
        return false;
    }

    if (lhs->get_Count() == 0)
    {
        return true;
    }

    auto lhs_en = lhs->GetEnumerator();
    auto rhs_en = rhs->GetEnumerator();

    while (lhs_en->MoveNext() && rhs_en->MoveNext())
    {
        auto lhs_it = lhs_en->get_Current();
        auto rhs_it = rhs_en->get_Current();
        if (lhs_it != rhs_it)
        {
            return false;
        }
    }
                    
    return true;
}
/// Equal-compares abstract collections.
/// @tparam T Element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::ICollection<T>>& lhs
    , const SharedPtr<System::Collections::Generic::ICollection<T>>& rhs)
{
    if (NotNullAreEqualHelper(lhs, rhs))
    {
        return testing::AssertionSuccess();
    }

    return EqFailure(lhs_expr, rhs_expr, *lhs, *rhs);
}
/// Equal-compares unknown types using Equals method.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreEqualImpl(const char* lhs_expr, const char* rhs_expr
    , const T1& lhs, const T2& rhs, int32_t)
{
    if (lhs->Equals(rhs))
    {
        return ::testing::AssertionSuccess();
    }

    return EqFailure(lhs_expr, rhs_expr, *lhs, *rhs);
}
/// Equal-compares unknown types.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<T1>& lhs
    , const SharedPtr<T2>& rhs)
{
    return NotNullAreEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
}

/// Equal-compares arguments for AreEqual assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreEqual(const char* lhs_expr, const char* rhs_expr
    , const T1& lhs, const T2& rhs)
{
    if (static_cast<System::Object*>(lhs.GetObjectOrNull()) == static_cast<System::Object*>(rhs.GetObjectOrNull())) 
    {
        return testing::AssertionSuccess();
    }

    if (!lhs || !rhs)
    {
        if (!lhs)
        {
            return testing::internal::EqFailure(lhs_expr, rhs_expr,
                "nullptr",
                Details::PrintToString(*rhs),
                false);
        }
        return testing::internal::EqFailure(lhs_expr, rhs_expr,
            Details::PrintToString(*lhs),
            "nullptr",
            false);
    }

    return NotNullAreEqual(lhs_expr, rhs_expr, lhs, rhs);
}

// AreNotEqual for SharedPtr ==================================

/// Not-equal-compares arrays or lists.
/// @tparam T1 LHS container type.
/// @tparam T2 RHS container type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
typename std::enable_if<TypeTraits::BothArrayOrList<typename T1::Pointee_, typename T2::Pointee_>::value
, testing::AssertionResult>::type
NotNullAreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
    , const T1& lhs, const T2& rhs, long long s)
{
    if (!AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares dictionaries of value types.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Dictionary<K, V>>& lhs
    , const SharedPtr<System::Collections::Generic::Dictionary<K, V>>& rhs)
{
    if (!AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares dictionaries of shared pointers.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Dictionary<K, SharedPtr<V>>>& lhs
    , const SharedPtr<System::Collections::Generic::Dictionary<K, SharedPtr<V>>>& rhs)
{
    if (!AreEqualMapOfObjects(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares hashsets.
/// @tparam T1 LHS container element type.
/// @tparam T2 RHS container element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::HashSet<T1>>& lhs
    , const SharedPtr<System::Collections::Generic::HashSet<T2>>& rhs)
{
    if (!AreEqualContainer(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares queues.
/// @tparam T1 LHS container element type.
/// @tparam T2 RHS container element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Queue<T1>>& lhs
    , const SharedPtr<System::Collections::Generic::Queue<T2>>& rhs)
{
    if (!AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares stacks.
/// @tparam T1 LHS container element type.
/// @tparam T2 RHS container element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::Stack<T1>>& lhs
    , const SharedPtr<System::Collections::Generic::Stack<T2>>& rhs)
{
    if (!AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares sorted dictionaries of value types.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, V>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, V>>& rhs)
{
    if (!AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares sorted dictionaries of shared pointers.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, SharedPtr<V>>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedDictionary<K, SharedPtr<V>>>& rhs)
{
    if (!AreEqualMapOfObjects(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Npt=equal-compares sorted lists of value types.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedList<K, V>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedList<K, V>>& rhs)
{
    if (!AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares sorted lists of shared pointers.
/// @tparam K Key type.
/// @tparam V Value type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename K, typename V>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::SortedList<K, SharedPtr<V>>>& lhs
    , const SharedPtr<System::Collections::Generic::SortedList<K, SharedPtr<V>>>& rhs)
{
    if (!AreEqualMapOfObjects(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares bit arrays.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
inline testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::BitArray>& lhs
    , const SharedPtr<System::Collections::BitArray>& rhs)
{
    if (*lhs != *rhs)
    {
        return testing::AssertionSuccess();
    }

    return NotEqFailure(lhs_expr,
                        rhs_expr,
                        static_cast<System::Collections::Generic::ICollection<bool>&>(*lhs),
                        static_cast<System::Collections::Generic::ICollection<bool>&>(*rhs)
    );
}
/// Not-equal-compares string collections.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
inline testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Specialized::StringCollection>& lhs
    , const SharedPtr<System::Collections::Specialized::StringCollection>& rhs)
{
    if (!AreEqualData(lhs->data(), rhs->data()))
    {
        return testing::AssertionSuccess();
    }
    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
}
/// Not-equal-compares abstract collections.
/// @tparam T Element type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<System::Collections::Generic::ICollection<T>>& lhs
    , const SharedPtr<System::Collections::Generic::ICollection<T>>& rhs)
{
    if (!NotNullAreEqualHelper(lhs, rhs))
    {
        return testing::AssertionSuccess();
    }

    return NotEqFailure(lhs_expr, rhs_expr, *lhs, *rhs);
}
/// Not-equal-compares unknown types using Eqauals method.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
    , const T1& lhs, const T2& rhs, int32_t)
{
    if (!lhs->Equals(rhs))
    {
        return ::testing::AssertionSuccess();
    }

    return NotEqFailure(lhs_expr, rhs_expr, *lhs, *rhs);
}
/// Not-equal-compares unknown types.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const SharedPtr<T1>& lhs
    , const SharedPtr<T2>& rhs)
{
    return NotNullAreNotEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
}

/// Not-equal-compares arguments for AreNotEqual assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreNotEqual(const char* lhs_expr, const char* rhs_expr
    , const T1& lhs, const T2& rhs)
{
    // xor
    if (!lhs != !rhs)
    {
        // One of operands is nullptr
        return testing::AssertionSuccess();
    }

    // both are nullptr
    if (!lhs && !rhs)
    {
        return NotEqFailure(lhs_expr, rhs_expr, "nullptr", "nullptr");
    }

    if (static_cast<System::Object*>(lhs.GetObjectOrNull()) == static_cast<System::Object*>(rhs.GetObjectOrNull())) 
    {
        return NotEqFailure(lhs_expr, rhs_expr, *lhs, *rhs);
    }

    return NotNullAreNotEqual(lhs_expr, rhs_expr, lhs, rhs);
}

} /// namespace SharedPtrAssserts
} /// namespace Details

/// Checks that two floating point values are both NaNs.
/// Handles situation when non-signalling NaN is supported.
/// @tparam T1 First floating point type.
/// @tparam T2 Second floating point type.
/// @param lhs First floating point value.
/// @param rhs Second floating point value.
/// @return True if both @p lhs and @p rhs are floating point values, false otherwise.
template<typename T1, typename T2>
typename std::enable_if<std::numeric_limits<T1>::has_quiet_NaN && std::numeric_limits<T2>::has_quiet_NaN, bool>::type
    AreFPNaN(T1 lhs, T2 rhs) { return (std::isnan(lhs) && std::isnan(rhs)); }
/// Checks that two floating point values are both NaNs.
/// Handles situation when non-signalling NaN is not supported.
/// @tparam T1 First floating point type.
/// @tparam T2 Second floating point type.
/// @param lhs First floating point value.
/// @param rhs Second floating point value.
/// @return Always returns false as NaN value is not supported.
template<typename T1, typename T2>
typename std::enable_if<!std::numeric_limits<T1>::has_quiet_NaN || !std::numeric_limits<T2>::has_quiet_NaN, bool>::type
    AreFPNaN(T1 lhs, T2 rhs) { return false; }


// AreEqual ===========================================================
/// Equal-compares arguments for AreEqual assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs);

// FP and arithmetic types
/// Equal-compares floating point with arithmetic types.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T1, typename T2>
typename std::enable_if<TypeTraits::AreFPandArithmetic<T1, T2>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T1 lhs
        , const T2 rhs
        , long long s)
{
    return AreFPNaN(lhs, rhs) ? testing::AssertionSuccess() :
        testing::internal::CmpHelperFloatingPointEQ<typename TypeTraits::LargestFPType<T1, T2>::type>(lhs_expr, rhs_expr, 
        static_cast<typename TypeTraits::LargestFPType<T1, T2>::type>(lhs), static_cast<typename TypeTraits::LargestFPType<T1, T2>::type>(rhs));
}
/// Equal-compares values one or both of them being Decimal.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T1, typename T2>
typename std::enable_if<TypeTraits::AnyOfDecimal<T1, T2>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T1& lhs
        , const T2& rhs
        , long long s)
{
    return testing::internal::
        EqHelper::Compare<System::Decimal, System::Decimal>
        (lhs_expr, rhs_expr, lhs, rhs);
}
/// Equal-compares non-pointer types using Equals method provided.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<!IsSmartPtr<T>::value && detail::has_method_equals<T>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T& lhs
        , const T& rhs
        , long long s)
{
    if (lhs.Equals(rhs)) {
        return testing::AssertionSuccess();
    }

    return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
}
/// Equal-compares non-pointer types using Equals method provided.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<!IsSmartPtr<T>::value && detail::has_method_equals<T>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , T& lhs
        , const T& rhs
        , long long s)
{
    if (lhs.Equals(rhs)) {
        return testing::AssertionSuccess();
    }

    return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
}
/// Equal-compares non-pointer types using operator == provided.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<!IsSmartPtr<T>::value && std::is_class<T>::value && !detail::has_method_equals<T>::value && detail::has_operator_equal<T>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T& lhs
        , const T& rhs
        , long long s)
{
    if (lhs == rhs) {
        return testing::AssertionSuccess();
    }

    return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
}
/// Equal-compares boxable with SmartPtr values using unboxing.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<IsBoxable<T>::value && ! IsStringByteSequence<T, char16_t>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , T lhs
        , const System::SharedPtr<Object>& rhs
        , long long s)
{
    return AreEqual(lhs_expr, rhs_expr, lhs, System::ObjectExt::Unbox<T>(rhs));
}
/// Equal-compares boxable with SmartPtr values using unboxing.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<IsBoxable<T>::value && ! IsStringByteSequence<T, char16_t>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const System::SharedPtr<Object>& lhs
        , T rhs
        , long long s)
{
    return AreEqual(lhs_expr, rhs_expr, System::ObjectExt::Unbox<T>(lhs), rhs);
}
/// Equal-compares string literal with SmartPtr values using unboxing.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
inline testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const char16_t* lhs
        , const System::SharedPtr<Object>& rhs
        , long long s)
{
    return AreEqual(lhs_expr, rhs_expr, System::String(lhs), System::ObjectExt::Unbox<System::String>(rhs));
}
/// Equal-compares string literal with SmartPtr values using unboxing.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
inline testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const System::SharedPtr<Object>& lhs
        , const char16_t* rhs
        , long long s)
{
    return AreEqual(lhs_expr, rhs_expr, System::ObjectExt::Unbox<System::String>(lhs), System::String(rhs));
}
/// Equal-compares random type wiht nullptr.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , T lhs
        , std::nullptr_t
        , long long s)
{
    if (System::TestTools::IsNull(lhs))
    {
        return testing::AssertionSuccess();
    }

    return testing::internal::EqFailure(lhs_expr, rhs_expr,
        Details::PrintToString(lhs),
        "nullptr",
        false);
}
/// Equal-compares random type with nullptr.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , std::nullptr_t
        , T rhs
        , long long s)
{
    if (System::TestTools::IsNull(rhs))
    {
        return testing::AssertionSuccess();
    }

    return testing::internal::EqFailure(lhs_expr, rhs_expr,
        "nullptr",
        Details::PrintToString(rhs),
        false);
}
/// Equal-compares pointer types.
/// @tparam T1 LHS type.
/// @tparam T2 RHS type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
typename std::enable_if<IsSmartPtr<T1>::value && IsSmartPtr<T2>::value
    , testing::AssertionResult>::type
    AreEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T1& lhs
        , const T2& rhs
        , long long s)
{
    return Details::SharedPtrAsserts::AreEqual(lhs_expr, rhs_expr, lhs, rhs);
}
/// Equal-compares random types using gtest altorithms.
/// @tparam T1 LHS type.
/// @tparam T2 RHS type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr, T1 lhs, T2 rhs, int)
{
    return ::testing::internal::EqHelper::Compare(lhs_expr, rhs_expr, lhs, rhs);
}
/// Equal-compares arguments for AreEqual assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs)
{
    return AreEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
}

// AreNotEqual ========================================================
/// Not-equal-compares arguments for AreEqual assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreNotEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs);

/// Not-equal-compares values one or both of them being Decimal.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T1, typename T2>
typename std::enable_if<TypeTraits::AnyOfDecimal<T1, T2>::value
    , testing::AssertionResult>::type
    AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T1& lhs
        , const T2& rhs
        , long long s)
{
    if (System::Decimal(lhs) != System::Decimal(rhs))
    {
        return testing::AssertionSuccess();
    }

    return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, rhs);
}
/// Not-equal-compares non-pointer types using Equals method provided.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<!IsSmartPtr<T>::value && detail::has_method_equals<T>::value
    , testing::AssertionResult>::type
    AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T& lhs
        , const T& rhs
        , long long s)
{
    if (! lhs.Equals(rhs)) {
        return testing::AssertionSuccess();
    }

    return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, rhs);
}
/// Not-equal-compares non-pointer types using Equals method provided.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<!IsSmartPtr<T>::value && detail::has_method_equals<T>::value
    , testing::AssertionResult>::type
    AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , T& lhs
        , const T& rhs
        , long long s)
{
    if (!lhs.Equals(rhs)) {
        return testing::AssertionSuccess();
    }

    return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, rhs);
}
/// Not-equal-compares non-pointer types using operator != provided.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<!IsSmartPtr<T>::value && std::is_class<T>::value && !detail::has_method_equals<T>::value && detail::has_operator_equal<T>::value
    , testing::AssertionResult>::type
    AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T& lhs
        , const T& rhs
        , long long s)
{
    if (lhs != rhs) {
        return testing::AssertionSuccess();
    }

    return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
}
/// Not-equal-compares boxable with SmartPtr values using unboxing.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<IsBoxable<T>::value
    , testing::AssertionResult>::type
    AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , T lhs
        , const System::SharedPtr<Object>& rhs
        , long long s)
{
    return AreNotEqual(lhs_expr, rhs_expr, lhs, System::ObjectExt::Unbox<T>(rhs));
}
/// Not-equal-compares boxable with SmartPtr values using unboxing.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
typename std::enable_if<IsBoxable<T>::value
    , testing::AssertionResult>::type
    AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const System::SharedPtr<Object>& lhs
        , T rhs
        , long long s)
{
    return AreNotEqual(lhs_expr, rhs_expr, System::ObjectExt::Unbox<T>(lhs), rhs);
}
/// Not-equal-compares random type with nullptr.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
testing::AssertionResult AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , T lhs
        , std::nullptr_t
        , long long s)
{
    if (!System::TestTools::IsNull(lhs))
    {
        return testing::AssertionSuccess();
    }

    return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, "nullptr");
}
/// Not-equal-compares random type with nullptr.
/// @tparam T Object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template <typename T>
testing::AssertionResult AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , std::nullptr_t
        , T rhs
        , long long s)
{
    if (!System::TestTools::IsNull(rhs))
    {
        return testing::AssertionSuccess();
    }

    return Details::NotEqFailure(lhs_expr, rhs_expr, "nullptr", rhs);
}
/// Equal-compares pointer types.
/// @tparam T1 LHS type.
/// @tparam T2 RHS type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
typename std::enable_if<IsSmartPtr<T1>::value && IsSmartPtr<T2>::value
    , testing::AssertionResult>::type
    AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
        , const T1& lhs
        , const T2& rhs
        , long long s)
{
    return Details::SharedPtrAsserts::AreNotEqual(lhs_expr, rhs_expr, lhs, rhs);
}
/// Equal-compares random types using gtest altorithms.
/// @tparam T1 LHS type.
/// @tparam T2 RHS type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr, T1 lhs, T2 rhs, int)
{
    return ::testing::internal::CmpHelperNE(lhs_expr, rhs_expr, lhs , rhs);
}
/// Not-equal-compares arguments for AreEqual assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreNotEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs)
{
    return AreNotEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
}

// AreSame ============================================================
/// Are-same-compares arguments for AreSame assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs);

/// Are-same-compares smart pointers.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
typename std::enable_if<IsSmartPtr<T1>::value && IsSmartPtr<T2>::value
    , testing::AssertionResult>::type
    AreSameImpl(const char* lhs_expr, const char* rhs_expr
        , const T1& lhs
        , const T2& rhs
        , long long s)
{
    // xor
    if (!lhs != !rhs)
    {
        if (!lhs)
        {
            auto rhs_addr = reinterpret_cast<std::ptrdiff_t>(rhs.GetObjectOrNull());
            return Details::SameFailure(lhs_expr, rhs_expr, "nullptr", rhs_addr);
        }
        auto lhs_addr = reinterpret_cast<std::ptrdiff_t>(lhs.GetObjectOrNull());
        return Details::SameFailure(lhs_expr, rhs_expr, lhs_addr, "nullptr");
    }

    // both are nullptr
    if (!lhs && !rhs)
    {
        return testing::AssertionSuccess();
    }

    if (static_cast<System::Object*>(lhs.GetObjectOrNull()) == static_cast<System::Object*>(rhs.GetObjectOrNull()))
    {
        return testing::AssertionSuccess();
    }

    auto rhs_addr = reinterpret_cast<std::ptrdiff_t>(rhs.GetObjectOrNull());
    auto lhs_addr = reinterpret_cast<std::ptrdiff_t>(lhs.GetObjectOrNull());
    return Details::SameFailure(lhs_expr, rhs_expr, lhs_addr, rhs_addr);
}
/// Are-same-compares non-pointer values.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreSameImpl(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs, int)
{
    if (&lhs == &rhs)
    {
        return testing::AssertionSuccess();
    }

    std::ptrdiff_t lhs_addr = reinterpret_cast<std::ptrdiff_t>(&lhs);
    std::ptrdiff_t rhs_addr = reinterpret_cast<std::ptrdiff_t>(&rhs);
    return Details::SameFailure(lhs_expr, rhs_expr, lhs_addr, rhs_addr);
}

/// Are-same-compares arguments for AreSame assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs)
{
    return AreSameImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
}

// AreNotSame =========================================================
/// Are-not-same-compares arguments for AreSame assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreNotSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs);

/// Are-not-same-compares smart pointers.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @param s A service parameter that serves as a selector of the implementation of the function; the value 
/// of the parameter is ignored
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
typename std::enable_if<IsSmartPtr<T1>::value && IsSmartPtr<T2>::value
    , testing::AssertionResult>::type
    AreNotSameImpl(const char* lhs_expr, const char* rhs_expr
        , const T1& lhs
        , const T2& rhs
        , long long s)
{
    // xor
    if (!lhs != !rhs)
    {
        return testing::AssertionSuccess();
    }

    // both are nullptr
    if (!lhs && !rhs)
    {
        return Details::NotSameFailure(lhs_expr, rhs_expr, "nullptr", "nullptr");
    }

    if (static_cast<System::Object*>(lhs.GetObjectOrNull()) != static_cast<System::Object*>(rhs.GetObjectOrNull()))
    {
        return testing::AssertionSuccess();
    }

    auto rhs_addr = reinterpret_cast<std::ptrdiff_t>(rhs.GetObjectOrNull());
    auto lhs_addr = reinterpret_cast<std::ptrdiff_t>(lhs.GetObjectOrNull());
    return Details::NotSameFailure(lhs_expr, rhs_expr, lhs_addr, rhs_addr);
}
/// Are-not-same-compares non-pointer values.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreNotSameImpl(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs, int)
{
    if (&lhs != &rhs)
    {
        return testing::AssertionSuccess();
    }

    std::ptrdiff_t lhs_addr = reinterpret_cast<std::ptrdiff_t>(&lhs);
    std::ptrdiff_t rhs_addr = reinterpret_cast<std::ptrdiff_t>(&rhs);
    return Details::NotSameFailure(lhs_expr, rhs_expr, lhs_addr, rhs_addr);
}

/// Are-not-same-compares arguments for AreSame assertion translation.
/// @tparam T1 LHS object type.
/// @tparam T2 RHS object type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param lhs LHS value.
/// @param rhs RHS value.
/// @return gtest-styled assertion result.
template<typename T1, typename T2>
testing::AssertionResult AreNotSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs)
{
    return AreNotSameImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
}

/// Is-instance-of-compares arguments for IsInstanceOf assertion translation.
/// @tparam T Argument type.
/// @param lhs_expr LHS expression.
/// @param rhs_expr RHS expression.
/// @param typeInfo A typeInfo object that represents a type against which the type of @p obj is to be compared
/// @param obj An object whose type to compare with the specified type
/// @return gtest-styled assertion result.
template<typename T>
testing::AssertionResult IsInstanceOf(const char* lhs_expr, const char* rhs_expr, const TypeInfo& typeInfo, const T& obj)
{
    if (obj->Is(typeInfo))
    {
        return ::testing::AssertionSuccess();
    }
            
    return testing::AssertionFailure()
        << "Expected: " << rhs_expr << " is " << lhs_expr
        << ", actual: " << obj->GetType().ToString().ToUtf8String()
        << " vs " << typeInfo.ToString().ToUtf8String();
}

} // namespace TestPredicates
} // namespace System

/// Assert.AreEqual predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_ASSERT_EQ(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreEqual, val1, val2)

/// Expect.AreEqual predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_EXPECT_EQ(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreEqual, val1, val2)

/// Assert.AreNotEqual predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_ASSERT_NE(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreNotEqual, val1, val2)

/// Expect.AreNotEqual predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_EXPECT_NE(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreNotEqual, val1, val2)

/// Assert.AreSame predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_ASSERT_SAME(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreSame, val1, val2)

/// Expect.AreSame predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_EXPECT_SAME(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreSame, val1, val2)

/// Assert.AreNotSameSame predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_ASSERT_NS(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreNotSame, val1, val2)

/// Expect.AreNotSameSame predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_EXPECT_NS(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreNotSame, val1, val2)

/// Assert.IsInstanceOf predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_ASSERT_ISINSTANCEOF(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::IsInstanceOf, val1, val2)

/// Expect.IsInstanceOf predicate support.
/// @param val1 LHS expression.
/// @param val2 RHS expression.
#define ASPOSE_EXPECT_ISINSTANCEOF(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::IsInstanceOf, val1, val2)

/// Helper macros for copy object exception
/// Originally copy from: GTEST_TEST_THROW_
#define ASPOSE_GTEST_TEST_THROW_(statement, expected_exception, exception_ref, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::ConstCharPtr gtest_msg = "") { \
    bool gtest_caught_expected = false; \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (expected_exception const& e) { \
      gtest_caught_expected = true; \
      static_assert(std::is_same<std::remove_pointer<decltype(&ex)>::type, System::Exception>::value, "Should be System::Exception"); \
      *exception_ref = e; \
    } \
    catch (...) { \
      gtest_msg.value = \
          "Expected: " #statement " throws an exception of type " \
          #expected_exception ".\n  Actual: it throws a different type."; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
    if (!gtest_caught_expected) { \
      gtest_msg.value = \
          "Expected: " #statement " throws an exception of type " \
          #expected_exception ".\n  Actual: it throws nothing."; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__): \
      fail(gtest_msg.value)

/// Wraper for Exception ex = Assert.Throws(typeof(MyException), () => { code that can raise exception });
/// @param statement lambda.
/// @param expected_exception expected exception.
/// @param exception_ref pointer to copy exception object.
#define ASPOSE_ASSERT_THROW(statement, expected_exception, exception_ref) \
    ASPOSE_GTEST_TEST_THROW_(statement, expected_exception, exception_ref, GTEST_FATAL_FAILURE_);
