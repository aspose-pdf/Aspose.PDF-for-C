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

namespace System
{
    namespace TestPredicates
    {
        namespace TypeTraits
        {
            template<typename T1, typename T2>
            using AreFPandArithmetic = std::integral_constant<bool, (std::is_floating_point<T1>::value && std::is_arithmetic<T2>::value) || (std::is_arithmetic<T1>::value && std::is_floating_point<T2>::value) >;

            template<typename T1, typename T2>
            using AnyOfDecimal = std::integral_constant<bool, std::is_same<T1, System::Decimal>::value || std::is_same<T2, System::Decimal>::value>;

            template<typename T1, typename T2, typename Enable = void>
            struct LargestFPType {};

            template<typename T1, typename T2>
            struct LargestFPType<T1, T2, typename std::enable_if<std::is_floating_point<T1>::value && !std::is_floating_point<T2>::value>::type>
            {
                using type = T1;
            };

            template<typename T1, typename T2>
            struct LargestFPType<T1, T2, typename std::enable_if<std::is_floating_point<T2>::value && !std::is_floating_point<T1>::value>::type>
            {
                using type = T2;
            };

            template<typename T1, typename T2>
            struct LargestFPType<T1, T2, typename std::enable_if<std::is_floating_point<T1>::value && std::is_floating_point<T2>::value>::type>
            {
                using type = typename std::conditional<sizeof(T1) >= sizeof(T2), T1, T2>::type;
            };

            template<typename T, typename Enable = void>
            struct has_print_to_method : std::false_type {};

            template<typename T>
            struct has_print_to_method<
                T
                , decltype((void)(PrintTo(std::declval<T&>(), std::declval<std::ostream*>())))
            > : std::true_type {};

            template<typename T, typename Enable = void>
            struct has_data_method : std::false_type {};

            template<typename T>
            struct has_data_method<
                T
                , decltype((void)(std::declval<T>().data()))
            > : std::true_type {};

            template<>
            struct has_data_method<
                System::Collections::BitArray
                , void
            > : std::false_type {}; // Forcing to false as boost types ain't accessible there

            template<typename T>
            using IsArray = std::is_same<T, System::Array<typename T::ValueType>>;

            template<typename T>
            using IsList = std::is_same<T, System::Collections::Generic::List<typename T::ValueType>>;

            template<typename T1, typename T2>
            using BothArrayOrList = std::integral_constant<bool, (IsArray<T1>::value || IsList<T1>::value) && (IsArray<T2>::value || IsList<T2>::value)>;
       
            template<typename T, typename Enable = void>
            struct IsCppContainer : std::false_type {};

            template<typename T>
            struct IsCppContainer<
                T
                , decltype(std::declval<typename T::iterator>(), std::declval<typename T::const_iterator>(), void(0))
            > : std::true_type {};
        }

        namespace Details
        {
            template<typename T>
            std::string PrintToString(const T& value);

            template<typename T>
            typename std::enable_if<System::Details::HasToString<T>::value, std::string>::type
            PrintToStringImpl(const SharedPtr<T>& value, long long)
            {
                if (value)
                {
                    return value->ToString().ToUtf8String();
                }

                return "nullptr";
            }

            template<typename T>
            typename std::enable_if<System::Details::HasToString<T>::value, std::string>::type
            PrintToStringImpl(const WeakPtr<T>& value, long long)
            {
                if (auto ptr = value.lock())
                {
                    return ptr->ToString().ToUtf8String();
                }

                return "nullptr";
            }

            template<typename T>
            typename std::enable_if<!TypeTraits::has_print_to_method<T>::value && System::Details::HasToString<T>::value, std::string>::type
            PrintToStringImpl(const T& value, long long)
            {
                return const_cast<T&>(value).ToString().ToUtf8String();
            }

            template<typename T>
            typename std::enable_if<TypeTraits::has_print_to_method<T>::value, std::string>::type
            PrintToStringImpl(const T& value, long long)
            {
                return ::testing::PrintToString(value);
            }

            template<typename T>
            typename std::enable_if<TypeTraits::has_data_method<T>::value && !TypeTraits::IsCppContainer<T>::value, std::string>::type
            PrintToStringImpl(const T& value, long long)
            {
                return PrintToString(value.data());
            }

            template<typename T1, typename T2>
            std::string PrintToStringImpl(const std::pair<T1, T2>& value, long long)
            {
                std::ostringstream os;
                os << '(' << PrintToString(value.first) << ", " << PrintToString(value.second) << ')';
                return os.str();
            }

            template<typename T>
            typename std::enable_if<TypeTraits::IsCppContainer<T>::value, std::string>::type
            PrintToStringImpl(const T& container, long long)
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

            // Default impl
            template<typename T>
            std::string PrintToStringImpl(const T& value, int)
            {
                return ::testing::PrintToString(value);
            }

            template<typename T>
            std::string PrintToString(const T& value)
            {
                return PrintToStringImpl(value, 1LL);
            }

            inline std::string PrintToString(std::nullptr_t)
            {
                return "nullptr";
            }

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
                template<typename T1, typename T2>
                typename std::enable_if<!System::IsSharedPtr<typename T1::value_type>::value && !System::IsSharedPtr<typename T2::value_type>::value
                    ,bool>::type
                AreEqualContainer(const T1& lhs, const T2& rhs)
                {
                    return std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
                }

                template<typename T1, typename T2>
                typename std::enable_if<System::IsSharedPtr<typename T1::value_type>::value && System::IsSharedPtr<typename T2::value_type>::value
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

                // Containers with SharedPtr with different T
                template<typename T1, typename T2>
                typename std::enable_if<System::IsSharedPtr<typename T1::value_type>::value && System::IsSharedPtr<typename T2::value_type>::value
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

                // Containers' value type isn't SharedPtr, but types are different
                template<typename T1, typename T2>
                typename std::enable_if<!System::IsSharedPtr<typename T1::value_type>::value && !System::IsSharedPtr<typename T2::value_type>::value
                    ,bool>::type
                AreEqualData(const T1& lhs, const T2& rhs)
                {
                    return std::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
                }

                // Containers with same types, but not SharedPtr
                template<typename T>
                typename std::enable_if<!System::IsSharedPtr<typename T::value_type>::value
                    ,bool>::type
                AreEqualData(const T& lhs, const T& rhs)
                {
                    return lhs == rhs;
                }

                // Maps
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

                // Arraies or Lists
                template<typename T1, typename T2>
                typename std::enable_if<TypeTraits::BothArrayOrList<typename T1::Pointee_, typename T2::Pointee_>::value
                , testing::AssertionResult>::type
                NotNullAreEqualImpl(const char* lhs_expr, const char* rhs_expr
                    , const T1& lhs, const T2& rhs, long long)
                {
                    if (AreEqualData(lhs->data(), rhs->data()))
                    {
                        return testing::AssertionSuccess();
                    }
                    return EqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
                }

                // Dictionaries of value type
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

                // Dictionaries of SharedPtr
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

                // Assert.AreEqual for HashSet calls object.Equal and it has different behavior than C++
                // unordered_set::opertor==
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

                // Queues
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

                // Stacks
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

                // SortedDictionaries
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

                // SortedDictionaries of SharedPtr
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

                // SortedLists
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

                // SortedLists of SharedPtr
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

                // BitArraies
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

                // StringCollections
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

                // ICollections Helper
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

                // ICollections
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


                // Default NotNullAreEqualImpl
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

                // Entry point for NotNullAreEqual
                template<typename T1, typename T2>
                testing::AssertionResult NotNullAreEqual(const char* lhs_expr, const char* rhs_expr
                    , const SharedPtr<T1>& lhs
                    , const SharedPtr<T2>& rhs)
                {
                    return NotNullAreEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
                }

                // Entry point for AreEqual for SharedPtr
                template<typename T1, typename T2>
                testing::AssertionResult AreEqual(const char* lhs_expr, const char* rhs_expr
                    , const T1& lhs, const T2& rhs)
                {
                    if (static_cast<System::Object*>(lhs.get()) == static_cast<System::Object*>(rhs.get())) 
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

                // Arraies or Lists
                template<typename T1, typename T2>
                typename std::enable_if<TypeTraits::BothArrayOrList<typename T1::Pointee_, typename T2::Pointee_>::value
                , testing::AssertionResult>::type
                NotNullAreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                    , const T1& lhs, const T2& rhs, long long)
                {
                    if (!AreEqualData(lhs->data(), rhs->data()))
                    {
                        return testing::AssertionSuccess();
                    }
                    return NotEqFailure(lhs_expr, rhs_expr, lhs->data(), rhs->data());
                }

                // Dictionaries of value type
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

                // Dictionaries of SharedPtr
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

                // Assert.AreEqual for HashSet calls object.Equal and it has different behavior than C++
                // unordered_set::opertor==
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

                // Queues
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

                // Stacks
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

                // SortedDictionaries
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

                // SortedDictionaries of SharedPtr
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

                // SortedLists
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

                // SortedLists of SharedPtr
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

                // BitArraies
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

                // StringCollections
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

                // ICollections
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

                // Default NotNullAreNotEqualImpl
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

                // Entry point for NotNullAreEqual
                template<typename T1, typename T2>
                testing::AssertionResult NotNullAreNotEqual(const char* lhs_expr, const char* rhs_expr
                    , const SharedPtr<T1>& lhs
                    , const SharedPtr<T2>& rhs)
                {
                    return NotNullAreNotEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
                }

                // Entry point for AreNotEqual for SharedPtr
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

                    if (static_cast<System::Object*>(lhs.get()) == static_cast<System::Object*>(rhs.get())) 
                    {
                        return NotEqFailure(lhs_expr, rhs_expr, *lhs, *rhs);
                    }

                    return NotNullAreNotEqual(lhs_expr, rhs_expr, lhs, rhs);
                }
            }
        }

        // AreEqual ===========================================================
        template<typename T1, typename T2>
        testing::AssertionResult AreEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs);

        // FP and arithmetic types
        template <typename T1, typename T2>
        typename std::enable_if<TypeTraits::AreFPandArithmetic<T1, T2>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T1 lhs
                , const T2 rhs
                , long long)
        {
            return testing::internal::CmpHelperFloatingPointEQ<typename TypeTraits::LargestFPType<T1, T2>::type>
                (lhs_expr, rhs_expr, lhs, rhs);
        }

        // Decimal
        template <typename T1, typename T2>
        typename std::enable_if<TypeTraits::AnyOfDecimal<T1, T2>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T1& lhs
                , const T2& rhs
                , long long)
        {
            return testing::internal::
                EqHelper<GTEST_IS_NULL_LITERAL_(lhs)>::template Compare<System::Decimal, System::Decimal>
                (lhs_expr, rhs_expr, lhs, rhs);
        }

        // Not SharedPtr and has const Equals method
        template <typename T>
        typename std::enable_if<!IsSharedPtr<T>::value && detail::has_method_equals<T>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T& lhs
                , const T& rhs
                , long long)
        {
            if (lhs.Equals(rhs)) {
                return testing::AssertionSuccess();
            }

            return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
        }

        // Not SharedPtr and has Equals method
        template <typename T>
        typename std::enable_if<!IsSharedPtr<T>::value && detail::has_method_equals<T>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , T& lhs
                , const T& rhs
                , long long)
        {
            if (lhs.Equals(rhs)) {
                return testing::AssertionSuccess();
            }

            return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
        }

        // Not SharedPtr class without Equals method but with operator==
        template <typename T>
        typename std::enable_if<!IsSharedPtr<T>::value && std::is_class<T>::value && !detail::has_method_equals<T>::value && detail::has_operator_equal<T>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T& lhs
                , const T& rhs
                , long long)
        {
            if (lhs == rhs) {
                return testing::AssertionSuccess();
            }

            return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
        }

        // lhs is boxable, rhs is SharedPtr
        template <typename T>
        typename std::enable_if<IsBoxable<T>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , T lhs
                , const System::SharedPtr<Object>& rhs
                , long long)
        {
            return AreEqual(lhs_expr, rhs_expr, lhs, System::ObjectExt::Unbox<T>(rhs));
        }

        // rhs is boxable, lhs is SharedPtr
        template <typename T>
        typename std::enable_if<IsBoxable<T>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const System::SharedPtr<Object>& lhs
                , T rhs
                , long long)
        {
            return AreEqual(lhs_expr, rhs_expr, System::ObjectExt::Unbox<T>(lhs), rhs);
        }

        // rhs is nullptr
        template <typename T>
        testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , T lhs
                , std::nullptr_t
                , long long)
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

        // lhs is nullptr
        template <typename T>
        testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , std::nullptr_t
                , T rhs
                , long long)
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

        // SharedPtr
        template<typename T1, typename T2>
        typename std::enable_if<IsSharedPtr<T1>::value && IsSharedPtr<T2>::value
            , testing::AssertionResult>::type
            AreEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T1& lhs
                , const T2& rhs
                , long long)
        {
            return Details::SharedPtrAsserts::AreEqual(lhs_expr, rhs_expr, lhs, rhs);
        }
        

        // Default implementation
        template<typename T1, typename T2>
        testing::AssertionResult AreEqualImpl(const char* lhs_expr, const char* rhs_expr, T1 lhs, T2 rhs, int)
        {
            return ::testing::internal::EqHelper<GTEST_IS_NULL_LITERAL_(lhs)>::Compare(lhs_expr, rhs_expr, lhs, rhs);
        }

        // Entry AreEqual predicate
        template<typename T1, typename T2>
        testing::AssertionResult AreEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs)
        {
            return AreEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
        }

        // AreNotEqual ========================================================

        template<typename T1, typename T2>
        testing::AssertionResult AreNotEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs);

        // Decimal
        template <typename T1, typename T2>
        typename std::enable_if<TypeTraits::AnyOfDecimal<T1, T2>::value
            , testing::AssertionResult>::type
            AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T1& lhs
                , const T2& rhs
                , long long)
        {
            if (System::Decimal(lhs) != System::Decimal(rhs))
            {
                return testing::AssertionSuccess();
            }

            return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, rhs);
        }

        // NotSharedPtr with const Equals method
        template <typename T>
        typename std::enable_if<!IsSharedPtr<T>::value && detail::has_method_equals<T>::value
            , testing::AssertionResult>::type
            AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T& lhs
                , const T& rhs
                , long long)
        {
            if (! lhs.Equals(rhs)) {
                return testing::AssertionSuccess();
            }

            return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, rhs);
        }

        // NotSharedPtr with Equals method
        template <typename T>
        typename std::enable_if<!IsSharedPtr<T>::value && detail::has_method_equals<T>::value
            , testing::AssertionResult>::type
            AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , T& lhs
                , const T& rhs
                , long long)
        {
            if (!lhs.Equals(rhs)) {
                return testing::AssertionSuccess();
            }

            return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, rhs);
        }

        // Not SharedPtr class without Equals method but with operator==
        template <typename T>
        typename std::enable_if<!IsSharedPtr<T>::value && std::is_class<T>::value && !detail::has_method_equals<T>::value && detail::has_operator_equal<T>::value
            , testing::AssertionResult>::type
            AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T& lhs
                , const T& rhs
                , long long)
        {
            if (lhs != rhs) {
                return testing::AssertionSuccess();
            }

            return Details::EqFailure(lhs_expr, rhs_expr, lhs, rhs);
        }

        // lhs is boxable, rhs is SharedPtr
        template <typename T>
        typename std::enable_if<IsBoxable<T>::value
            , testing::AssertionResult>::type
            AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , T lhs
                , const System::SharedPtr<Object>& rhs
                , long long)
        {
            return AreNotEqual(lhs_expr, rhs_expr, lhs, System::ObjectExt::Unbox<T>(rhs));
        }

        // rhs is boxable, lhs is SharedPtr
        template <typename T>
        typename std::enable_if<IsBoxable<T>::value
            , testing::AssertionResult>::type
            AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const System::SharedPtr<Object>& lhs
                , T rhs
                , long long)
        {
            return AreNotEqual(lhs_expr, rhs_expr, System::ObjectExt::Unbox<T>(lhs), rhs);
        }

        // rhs is nullptr
        template <typename T>
        testing::AssertionResult AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , T lhs
                , std::nullptr_t
                , long long)
        {
            if (!System::TestTools::IsNull(lhs))
            {
                return testing::AssertionSuccess();
            }

            return Details::NotEqFailure(lhs_expr, rhs_expr, lhs, "nullptr");
        }

        // lhs is nullptr
        template <typename T>
        testing::AssertionResult AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , std::nullptr_t
                , T rhs
                , long long)
        {
            if (!System::TestTools::IsNull(rhs))
            {
                return testing::AssertionSuccess();
            }

            return Details::NotEqFailure(lhs_expr, rhs_expr, "nullptr", rhs);
        }

        // SharedPtr
        template<typename T1, typename T2>
        typename std::enable_if<IsSharedPtr<T1>::value && IsSharedPtr<T2>::value
            , testing::AssertionResult>::type
            AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr
                , const T1& lhs
                , const T2& rhs
                , long long)
        {
            return Details::SharedPtrAsserts::AreNotEqual(lhs_expr, rhs_expr, lhs, rhs);
        }

        // Default implementation
        template<typename T1, typename T2>
        testing::AssertionResult AreNotEqualImpl(const char* lhs_expr, const char* rhs_expr, T1 lhs, T2 rhs, int)
        {
            return ::testing::internal::CmpHelperNE(lhs_expr, rhs_expr, lhs , rhs);
        }

        // Entry AreNotEqual predicate
        template<typename T1, typename T2>
        testing::AssertionResult AreNotEqual(const char* lhs_expr, const char* rhs_expr, T1&& lhs, T2&& rhs)
        {
            return AreNotEqualImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
        }

        // AreSame ============================================================
        template<typename T1, typename T2>
        testing::AssertionResult AreSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs);

        // SharedPtr
        template<typename T1, typename T2>
        typename std::enable_if<IsSharedPtr<T1>::value && IsSharedPtr<T2>::value
            , testing::AssertionResult>::type
            AreSameImpl(const char* lhs_expr, const char* rhs_expr
                , const T1& lhs
                , const T2& rhs
                , long long)
        {
            // xor
            if (!lhs != !rhs)
            {
                if (!lhs)
                {
                    auto rhs_addr = reinterpret_cast<std::ptrdiff_t>(rhs.get());
                    return Details::SameFailure(lhs_expr, rhs_expr, "nullptr", rhs_addr);
                }
                auto lhs_addr = reinterpret_cast<std::ptrdiff_t>(lhs.get());
                return Details::SameFailure(lhs_expr, rhs_expr, lhs_addr, "nullptr");
            }

            // both are nullptr
            if (!lhs && !rhs)
            {
                return testing::AssertionSuccess();
            }

            if (static_cast<System::Object*>(lhs.get()) == static_cast<System::Object*>(rhs.get()))
            {
                return testing::AssertionSuccess();
            }

            auto rhs_addr = reinterpret_cast<std::ptrdiff_t>(rhs.get());
            auto lhs_addr = reinterpret_cast<std::ptrdiff_t>(lhs.get());
            return Details::SameFailure(lhs_expr, rhs_expr, lhs_addr, rhs_addr);
        }

        // Default implementation
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

        // Entry AreSame predicate
        template<typename T1, typename T2>
        testing::AssertionResult AreSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs)
        {
            return AreSameImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
        }

        // AreNotSame =========================================================
        template<typename T1, typename T2>
        testing::AssertionResult AreNotSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs);

        // SharedPtr
        template<typename T1, typename T2>
        typename std::enable_if<IsSharedPtr<T1>::value && IsSharedPtr<T2>::value
            , testing::AssertionResult>::type
            AreNotSameImpl(const char* lhs_expr, const char* rhs_expr
                , const T1& lhs
                , const T2& rhs
                , long long)
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

            if (static_cast<System::Object*>(lhs.get()) != static_cast<System::Object*>(rhs.get()))
            {
                return testing::AssertionSuccess();
            }

            auto rhs_addr = reinterpret_cast<std::ptrdiff_t>(rhs.get());
            auto lhs_addr = reinterpret_cast<std::ptrdiff_t>(lhs.get());
            return Details::NotSameFailure(lhs_expr, rhs_expr, lhs_addr, rhs_addr);
        }

        // Default implementation
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

        // Entry AreSame predicate
        template<typename T1, typename T2>
        testing::AssertionResult AreNotSame(const char* lhs_expr, const char* rhs_expr, const T1& lhs, const T2& rhs)
        {
            return AreNotSameImpl(lhs_expr, rhs_expr, lhs, rhs, 1LL);
        }

    }
}

#define ASPOSE_ASSERT_EQ(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreEqual, val1, val2)

#define ASPOSE_EXPECT_EQ(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreEqual, val1, val2)

#define ASPOSE_ASSERT_NE(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreNotEqual, val1, val2)

#define ASPOSE_EXPECT_NE(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreNotEqual, val1, val2)

#define ASPOSE_ASSERT_SAME(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreSame, val1, val2)

#define ASPOSE_EXPECT_SAME(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreSame, val1, val2)

#define ASPOSE_ASSERT_NS(val1, val2) \
  ASSERT_PRED_FORMAT2(System::TestPredicates::AreNotSame, val1, val2)

#define ASPOSE_EXPECT_NS(val1, val2) \
  EXPECT_PRED_FORMAT2(System::TestPredicates::AreNotSame, val1, val2)
