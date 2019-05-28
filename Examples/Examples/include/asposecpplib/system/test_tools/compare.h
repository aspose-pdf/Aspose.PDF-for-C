/// @file system/test_tools/compare.h
#ifndef _aspose_system_test_tools_compare_h_
#define _aspose_system_test_tools_compare_h_

#include "system/array.h"
#include "system/collections/list.h"
#include "system/collections/dictionary.h"
#include "system/collections/hashset.h"
#include "system/collections/queue.h"
#include "system/collections/stack.h"
#include "system/collections/sorted_dictionary.h"
#include "system/collections/sorted_list.h"
#include "system/collections/bitarray.h"
#include "system/collections/specialized/string_collection.h"

#include <system/boxed_value.h>

#include <system/date_time.h>
#include <system/timespan.h>
#include <system/decimal.h>
#include <system/guid.h>

#include <algorithm>

namespace SCG = System::Collections::Generic;

namespace System {

/// Service structure providing interface to compare collections.
struct TestCompare
{
    // Array
    /// Compares arrays of non-pointers.
    /// @tparam T First array element type.
    /// @tparam U Second array element type.
    /// @param arrA LHS array.
    /// @param arrB RHS array.
    /// @return true if arrays sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr<Array<T>>& arrA, const SharedPtr<Array<U>>& arrB)
    {
        return AreEqualData(arrA, arrB);
    }
    /// Compares arrays of pointers.
    /// @tparam T First array pointee type.
    /// @tparam U Second array pointee type.
    /// @param arrA LHS array.
    /// @param arrB RHS array.
    /// @return true if arrays sizes and objects match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr<Array<SharedPtr<T>>>& arrA,
                         const SharedPtr<Array<SharedPtr<U>>>& arrB)
    {
        if ((void*)arrA.GetObjectOrNull() == (void*)arrB.GetObjectOrNull())
            return true;

        if (!arrA || !arrB)
            return false;

        return AreEqualContainerOfObjects(arrA->data(), arrB->data());
    }

    // List
    /// Compares lists of non-pointers.
    /// @tparam T First list element type.
    /// @tparam U Second list element type.
    /// @param listA LHS list.
    /// @param listB RHS list.
    /// @return true if sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List<T> >& listA, const SharedPtr< SCG::List<U> >& listB)
    {
        return AreEqualData(listA, listB);
    }
    /// Compares lists of pointers.
    /// @tparam T First list pointee type.
    /// @tparam U Second list pointee type.
    /// @param listA LHS list.
    /// @param listB RHS list.
    /// @return true if lists sizes and objects match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List< SharedPtr<T> > >& listA,
                         const SharedPtr< SCG::List< SharedPtr<U> > >& listB)
    {
        if ((void*)listA.GetObjectOrNull() == (void*)listB.GetObjectOrNull())
            return true;

        if (!listA || !listB)
            return false;

        return AreEqualContainerOfObjects(listA->data(), listB->data());
    }

    // List with Array
    /// Compares lists with arrays in non-pointers elements case.
    /// @tparam T List element type.
    /// @tparam U Array element type.
    /// @param listA List.
    /// @param arrB Array.
    /// @return true if sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List<T> >& listA, const System::ArrayPtr<U>& arrB)
    {
        return AreEqualData(listA, arrB);
    }
    /// Compares lists with arrays in non-pointers elements case.
    /// @tparam T Array element type.
    /// @tparam U List element type.
    /// @param arrA Array.
    /// @param listB List.
    /// @return true if sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const System::ArrayPtr<T>& arrA, const SharedPtr< SCG::List<U> >& listB)
    {
        return AreEqualData(arrA, listB);
    }
    /// Compares lists with arrays in pointers elements case.
    /// @tparam T Array pointee type.
    /// @tparam U List pointee type.
    /// @param arr Array.
    /// @param list List.
    /// @return true if sizes and objects match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const System::ArrayPtr< SharedPtr<T> >& arr,
                         const SharedPtr< SCG::List< SharedPtr<U> > >& list)
    {
        if ((void*)arr.GetObjectOrNull() == (void*)list.GetObjectOrNull())
            return true;

        if (!arr || !list)
            return false;

        return AreEqualContainerOfObjects(arr->data(), list->data());
    }
    /// Compares lists with arrays in pointers elements case.
    /// @tparam T List pointee type.
    /// @tparam U Array pointee type.
    /// @param list List.
    /// @param arr Array.
    /// @return true if sizes and objects match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List< SharedPtr<T> > >& list,
                         const System::ArrayPtr< SharedPtr<U> >& arr)
    {
        if ((void*)list.GetObjectOrNull() == (void*)arr.GetObjectOrNull())
            return true;

        if (!list || !arr)
            return false;

        return AreEqualContainerOfObjects(list->data(), arr->data());
    }

    // Ditionary
    /// Compares dictionaries of non-pointer mapped types.
    /// @tparam K Key type.
    /// @tparam U Mapped type.
    /// @param dictA LHS dictionary.
    /// @param dictB RHS dictionary.
    /// @return true if dictionaries sizes and data match, false otherwise.
    template <typename K, typename U>
    static bool AreEqual(const SharedPtr< SCG::Dictionary<K, U> >& dictA, const SharedPtr< SCG::Dictionary<K, U> >& dictB)
    {
        return AreEqualData(dictA, dictB);
    }
    /// Compares dictionaries of pointer mapped types.
    /// @tparam K Key type.
    /// @tparam U Mapped pointee type.
    /// @param dictA LHS dictionary.
    /// @param dictB RHS dictionary.
    /// @return true if dictionaries sizes and data match, false otherwise.
    template <typename K, typename U>
    static bool AreEqual(const SharedPtr< SCG::Dictionary<K, SharedPtr<U> > >& dictA,
                         const SharedPtr< SCG::Dictionary<K, SharedPtr<U> > >& dictB)
    {
        if ((void*)dictA.GetObjectOrNull() == (void*)dictB.GetObjectOrNull())
            return true;

        if (!dictA || !dictB)
            return false;

        return AreEqualMapOfObjects(dictA->data(), dictB->data());
    }
    /// Compares dictionaries of different types.
    /// @tparam K1 LHS dictionary key type.
    /// @tparam U1 LHS dictionary mapped type.
    /// @tparam K2 RHS dictionary key type.
    /// @tparam U2 RHS dictionary mapped type.
    /// @param dictA LHS dictionary.
    /// @param dictB RHS dictionary.
    /// @return Always returns false as type conversion is forbidden here.
    template <typename K1, typename U1, typename K2, typename U2>
    static bool AreEqual(const SharedPtr< SCG::Dictionary<K1, U1> >& dictA, const SharedPtr< SCG::Dictionary<K2, U2> >& dictB)
    {
        return false;
    }

    // HashSet
    /// Compares hashsets of non-pointers.
    /// @tparam T First hashset element type.
    /// @tparam U Second hashset element type.
    /// @param containerPtrA LHS hashset.
    /// @param containerPtrB RHS hashset.
    /// @return true if hashsets sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::HashSet<T> >& containerPtrA, const SharedPtr< SCG::HashSet<U> >& containerPtrB)
    {
        if ((void*)containerPtrA.GetObjectOrNull() == (void*)containerPtrB.GetObjectOrNull())
            return true;

        if (!containerPtrA || !containerPtrB)
            return false;

        if (containerPtrA->data().size() != containerPtrB->data().size())
            return false;

        return std::equal(containerPtrA->data().begin(), containerPtrA->data().end(), containerPtrB->data().begin());
    }
    /// Compares hashsets of pointers.
    /// @tparam T First hashset pointee type.
    /// @tparam U Second hashset pointee type.
    /// @param contA LHS hashset.
    /// @param contB RHS hashset.
    /// @return true if hashsets sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::HashSet< SharedPtr<T> > >& contA,
                         const SharedPtr< SCG::HashSet< SharedPtr<U> > >& contB)
    {
        if ((void*)contA.GetObjectOrNull() == (void*)contB.GetObjectOrNull())
            return true;

        if (!contA || !contB)
            return false;

        return AreEqualContainerOfObjects(contA->data(), contB->data());
    }

    // Queue
    /// Compares queues of non-pointers.
    /// @tparam T First queue element type.
    /// @tparam U Second queue element type.
    /// @param queueA LHS queue.
    /// @param queueB RHS queue.
    /// @return true if queues sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SCG::QueuePtr<T>& queueA, const SCG::QueuePtr<U>& queueB)
    {
        return AreEqualData(queueA, queueB);
    }
    /// Compares queues of pointers.
    /// @tparam T First queue pointee type.
    /// @tparam U Second queue pointee type.
    /// @param queueA LHS queue.
    /// @param queueB RHS queue.
    /// @return true if queues sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SCG::QueuePtr< SharedPtr<T> >& queueA,
                         const SCG::QueuePtr< SharedPtr<U> >& queueB)
    {
        if ((void*)queueA.GetObjectOrNull() == (void*)queueB.GetObjectOrNull())
            return true;

        if (!queueA || !queueB)
            return false;

        return AreEqualContainerOfObjects(queueA->data(), queueB->data());
    }

    // Stack
    /// Compares stacks of non-pointers.
    /// @tparam T First stack element type.
    /// @tparam U Second stack element type.
    /// @param stackA LHS stack.
    /// @param stackB RHS stack.
    /// @return true if stacks sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::Stack<T> >& stackA, const SharedPtr< SCG::Stack<U> >& stackB)
    {
        return AreEqualData(stackA, stackB);
    }
    /// Compares stacks of pointers.
    /// @tparam T First stack pointee type.
    /// @tparam U Second stack pointee type.
    /// @param stackA LHS stack.
    /// @param stackB RHS stack.
    /// @return true if stacks sizes and data match, false otherwise.
    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::Stack< SharedPtr<T> > >& stackA,
                         const SharedPtr< SCG::Stack< SharedPtr<U> > >& stackB)
    {
        if ((void*)stackA.GetObjectOrNull() == (void*)stackB.GetObjectOrNull())
            return true;

        if (!stackA || !stackB)
            return false;

        return AreEqualContainerOfObjects(stackA->data(), stackB->data());
    }

    // SortedDitionary
    /// Compares sorted dictionaries of non-pointer mapped types.
    /// @tparam K Key type.
    /// @tparam U Mapped type.
    /// @param dictA LHS dictionary.
    /// @param dictB RHS dictionary.
    /// @return true if dictionaries sizes and data match, false otherwise.
    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedDictionary<K, U>>& dictA, const SharedPtr<SCG::SortedDictionary<K, U>>& dictB)
    {
        return AreEqualData(dictA, dictB);
    }
    /// Compares sorted dictionaries of pointer mapped types.
    /// @tparam K Key type.
    /// @tparam U Mapped pointee type.
    /// @param dictA LHS dictionary.
    /// @param dictB RHS dictionary.
    /// @return true if dictionaries sizes and data match, false otherwise.
    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedDictionary<K, SharedPtr<U> >>& dictA,
                         const SharedPtr<SCG::SortedDictionary<K, SharedPtr<U> >>& dictB)
    {
        if ((void*)dictA.GetObjectOrNull() == (void*)dictB.GetObjectOrNull())
            return true;

        if (!dictA || !dictB)
            return false;

        return AreEqualMapOfObjects(dictA->data(), dictB->data());
    }
    /// Compares sorted dictionaries of different types.
    /// @tparam K1 LHS dictionary key type.
    /// @tparam U1 LHS dictionary mapped type.
    /// @tparam K2 RHS dictionary key type.
    /// @tparam U2 RHS dictionary mapped type.
    /// @param dictA LHS dictionary.
    /// @param dictB RHS dictionary.
    /// @return Always returns false as type conversion is forbidden here.
    template <typename K1, typename U1, typename K2, typename U2>
    static bool AreEqual(const SharedPtr<SCG::SortedDictionary<K1, U1>>& dictA, const SharedPtr<SCG::SortedDictionary<K2, U2>>& dictB)
    {
        return false;
    }

    // SortedList
    /// Compares sorted lists of non-pointer mapped types.
    /// @tparam K Key type.
    /// @tparam U Mapped type.
    /// @param dictA LHS list.
    /// @param dictB RHS list.
    /// @return true if lists sizes and data match, false otherwise.
    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedList<K, U>>& dictA, const SharedPtr<SCG::SortedList<K, U>>& dictB)
    {
        return AreEqualData(dictA, dictB);
    }
    /// Compares sorted lists of pointer mapped types.
    /// @tparam K Key type.
    /// @tparam U Mapped pointee type.
    /// @param dictA LHS list.
    /// @param dictB RHS list.
    /// @return true if lists sizes and data match, false otherwise.
    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedList<K, SharedPtr<U> >>& dictA,
                         const SharedPtr<SCG::SortedList<K, SharedPtr<U> >>& dictB)
    {
        if ((void*)dictA.GetObjectOrNull() == (void*)dictB.GetObjectOrNull())
            return true;

        if (!dictA || !dictB)
            return false;

        return AreEqualMapOfObjects(dictA->data(), dictB->data());
    }
    /// Compares sorted lists of different types.
    /// @tparam K1 LHS list key type.
    /// @tparam U1 LHS list mapped type.
    /// @tparam K2 RHS list key type.
    /// @tparam U2 RHS list mapped type.
    /// @param dictA LHS list.
    /// @param dictB RHS list.
    /// @return Always returns false as type conversion is forbidden here.
    template <typename K1, typename U1, typename K2, typename U2>
    static bool AreEqual(const SharedPtr<SCG::SortedList<K1, U1>>& dictA, const SharedPtr<SCG::SortedList<K2, U2>>& dictB)
    {
        return false;
    }

    // StringCollection
    /// Compares string collections.
    /// @param arrA LHS collection.
    /// @param arrB RHS collection.
    /// @returns True if sizes and data match, false otherwise.
    inline static bool AreEqual(const System::Collections::Specialized::StringCollectionPtr& arrA, const System::Collections::Specialized::StringCollectionPtr& arrB)
    {
        return AreEqualData(arrA, arrB);
    }

    // ICollection
    /// Compares two collections of unknown type.
    /// @tparam T Collection element type.
    /// @param collA LHS collection.
    /// @param collB RHS collection.
    /// @return true if collections match (e. g. both are null), or if sizes match and elements match, false otherwise.
    template <typename T>
    static bool AbstractEqual(SCG::ICollection<T>* const collA, SCG::ICollection<T>* const collB)
    {
        static_assert(System::IsBoxable<T>::value, "Unsupported type for ICollection<T,_> compare");

        if (collA == collB)
            return true;

        if (!collA || !collB)
            return false;

        if (collA->get_Count() != collB->get_Count())
            return false;

        if (collA->get_Count() == 0)
            return true;

        auto enA = collA->GetEnumerator();
        decltype(enA->get_Current()) itA;

        auto enB = collB->GetEnumerator();
        decltype(enB->get_Current()) itB;

        while (enA->MoveNext() && (itA = enA->get_Current(), true) &&
               enB->MoveNext() && (itB = enB->get_Current(), true))
        {
            if (itA != itB)
                return false;
        }

        return true;
    }

private:
    // test containers of primitive type
    /// Compares data of two containers.
    /// @tparam T Contaier type.
    /// @param containerPtrA LHS container.
    /// @param containerPtrB RHS container.
    /// @return true if sizes and elements match, false otherwise.
    template <typename T>
    static bool AreEqualData(const SharedPtr<T>& containerPtrA,
                             const SharedPtr<T>& containerPtrB)
    {
        if (containerPtrA == containerPtrB)
            return true;

        if (!containerPtrA || !containerPtrB)
            return false;

        return containerPtrA->data() == containerPtrB->data();
    }
    /// Compares data of two containers.
    /// @tparam T LHS contaier type.
    /// @tparam U RHS contaier type.
    /// @param containerPtrA LHS container.
    /// @param containerPtrB RHS container.
    /// @return true if sizes and elements match, false otherwise.
    template <typename T, typename U>
    static bool AreEqualData(const SharedPtr<T>& containerPtrA,
                             const SharedPtr<U>& containerPtrB)
    {
        if ((void*)containerPtrA.GetObjectOrNull() == (void*)containerPtrB.GetObjectOrNull())
            return true;

        if (!containerPtrA || !containerPtrB)
            return false;

        if (containerPtrA->data().size() != containerPtrB->data().size())
            return false;

        return std::equal(containerPtrA->data().begin(), containerPtrA->data().end(), containerPtrB->data().begin());
    }

    // test containers of SharedPtr<T>
    /// Compares two pointer type container elements.
    /// @tparam T LHS element type.
    /// @tparam U RHS element type.
    /// @param ptrA LHS object.
    /// @param ptrB RHS object.
    /// @return True if elements are considered equal, false otherwise.
    template <typename T, typename U>
    static bool AreEqualObjects(const T& ptrA, const U& ptrB)
    {
        return System::Object::Equals(ptrA, ptrB);
    }
    /// Compares two pairs.
    /// @tparam K Key type.
    /// @tparam V Value type.
    /// @param pairA LHS pair.
    /// @param pariB RHS pair.
    /// @return True if both keys and values match, false otherwise.
    template <typename K, typename V>
    static bool AreEqualObjectPairs(const std::pair<K, V>& pairA, const std::pair<K, V>& pairB)
    {
        return pairA.first == pairB.first && System::Object::Equals(pairA.second, pairB.second);
    }
    /// Compares containers of objects.
    /// @tparam Tvect LHS container type.
    /// @tparam Uvect RHS container type.
    /// @param contA LHS container.
    /// @param contB RHS container.
    /// @return True if sizes match and elements are considered equal, false otherwise.
    template <typename Tvect, typename Uvect>
    static bool AreEqualContainerOfObjects(Tvect& contA, Uvect& contB)
    {
        if (contA.size() != contB.size())
            return false;

        return std::equal(contA.begin(), contA.end(), contB.begin(),
                          TestCompare::AreEqualObjects<typename Tvect::value_type, typename Uvect::value_type>);
    }
    /// Compares maps.
    /// @tparam Tmap Map type.
    /// @param contA LHS map.
    /// @param contB RHS map.
    /// @return True if sizes match and elements are considered equal, false otherwise.
    template <typename Tmap>
    static bool AreEqualMapOfObjects(const Tmap& mapA, const Tmap& mapB)
    {
        if (mapA.size() != mapB.size())
            return false;

#if 0
        // for ordered map
        return std::equal(mapA.begin(), mapA.end(), mapB.begin(),
                          TestCompare::AreEqualObjectPairs<Tmap::key_type, Tmap::mapped_type>);
#else
        // for ordered and unordered maps

        for (typename Tmap::const_iterator itA = mapA.begin(); itA != mapA.end(); ++itA)
        {
            typename Tmap::const_iterator itF = mapB.find(itA->first);
            if (itF == mapB.end() || !itF->second->Equals(itA->second))
                return false;
        }

        return true;
    }
#endif

}; // struct TestCompare

} // namespace System

#endif // _aspose_system_test_tools_compare_h_
