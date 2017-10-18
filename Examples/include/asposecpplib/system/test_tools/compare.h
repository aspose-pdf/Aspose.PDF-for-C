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

struct TestCompare
{
    // Array

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr<Array<T>>& arrA, const SharedPtr<Array<U>>& arrB)
    {
        return AreEqualData(arrA, arrB);
    }

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr<Array<SharedPtr<T>>>& arrA,
                         const SharedPtr<Array<SharedPtr<U>>>& arrB)
    {
        if ((void*)arrA.get() == (void*)arrB.get())
            return true;

        if (!arrA || !arrB)
            return false;

        return AreEqualContainerOfObjects(arrA->data(), arrB->data());
    }

    // List

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List<T> >& listA, const SharedPtr< SCG::List<U> >& listB)
    {
        return AreEqualData(listA, listB);
    }

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List< SharedPtr<T> > >& listA,
                         const SharedPtr< SCG::List< SharedPtr<U> > >& listB)
    {
        if ((void*)listA.get() == (void*)listB.get())
            return true;

        if (!listA || !listB)
            return false;

        return AreEqualContainerOfObjects(listA->data(), listB->data());
    }

    // List with Array

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List<T> >& listA, const System::ArrayPtr<U>& arrB)
    {
        return AreEqualData(listA, arrB);
    }

    template <typename T, typename U>
    static bool AreEqual(const System::ArrayPtr<T>& arrA, const SharedPtr< SCG::List<U> >& listB)
    {
        return AreEqualData(arrA, listB);
    }

    template <typename T, typename U>
    static bool AreEqual(const System::ArrayPtr< SharedPtr<T> >& arr,
                         const SharedPtr< SCG::List< SharedPtr<U> > >& list)
    {
        if ((void*)arr.get() == (void*)list.get())
            return true;

        if (!arr || !list)
            return false;

        return AreEqualContainerOfObjects(arr->data(), list->data());
    }

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::List< SharedPtr<T> > >& list,
                         const System::ArrayPtr< SharedPtr<U> >& arr)
    {
        if ((void*)list.get() == (void*)arr.get())
            return true;

        if (!list || !arr)
            return false;

        return AreEqualContainerOfObjects(list->data(), arr->data());
    }

    // Ditionary

    template <typename K, typename U>
    static bool AreEqual(const SharedPtr< SCG::Dictionary<K, U> >& dictA, const SharedPtr< SCG::Dictionary<K, U> >& dictB)
    {
        return AreEqualData(dictA, dictB);
    }

    template <typename K, typename U>
    static bool AreEqual(const SharedPtr< SCG::Dictionary<K, SharedPtr<U> > >& dictA,
                         const SharedPtr< SCG::Dictionary<K, SharedPtr<U> > >& dictB)
    {
        if ((void*)dictA.get() == (void*)dictB.get())
            return true;

        if (!dictA || !dictB)
            return false;

        return AreEqualMapOfObjects(dictA->data(), dictB->data());
    }

    template <typename K1, typename U1, typename K2, typename U2>
    static bool AreEqual(const SharedPtr< SCG::Dictionary<K1, U1> >& dictA, const SharedPtr< SCG::Dictionary<K2, U2> >& dictB)
    {
        return false;
    }

    // HashSet

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::HashSet<T> >& containerPtrA, const SharedPtr< SCG::HashSet<U> >& containerPtrB)
    {
        if ((void*)containerPtrA.get() == (void*)containerPtrB.get())
            return true;

        if (!containerPtrA || !containerPtrB)
            return false;

        if (containerPtrA->data().size() != containerPtrB->data().size())
            return false;

        return std::equal(containerPtrA->data().begin(), containerPtrA->data().end(), containerPtrB->data().begin());
    }

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::HashSet< SharedPtr<T> > >& contA,
                         const SharedPtr< SCG::HashSet< SharedPtr<U> > >& contB)
    {
        if ((void*)contA.get() == (void*)contB.get())
            return true;

        if (!contA || !contB)
            return false;

        return AreEqualContainerOfObjects(contA->data(), contB->data());
    }

    // Queue

    template <typename T, typename U>
    static bool AreEqual(const SCG::QueuePtr<T>& queueA, const SCG::QueuePtr<U>& queueB)
    {
        return AreEqualData(queueA, queueB);
    }

    template <typename T, typename U>
    static bool AreEqual(const SCG::QueuePtr< SharedPtr<T> >& queueA,
                         const SCG::QueuePtr< SharedPtr<U> >& queueB)
    {
        if ((void*)queueA.get() == (void*)queueB.get())
            return true;

        if (!queueA || !queueB)
            return false;

        return AreEqualContainerOfObjects(queueA->data(), queueB->data());
    }

    // Stack

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::Stack<T> >& stackA, const SharedPtr< SCG::Stack<U> >& stackB)
    {
        return AreEqualData(stackA, stackB);
    }

    template <typename T, typename U>
    static bool AreEqual(const SharedPtr< SCG::Stack< SharedPtr<T> > >& stackA,
                         const SharedPtr< SCG::Stack< SharedPtr<U> > >& stackB)
    {
        if ((void*)stackA.get() == (void*)stackB.get())
            return true;

        if (!stackA || !stackB)
            return false;

        return AreEqualContainerOfObjects(stackA->data(), stackB->data());
    }

    // SortedDitionary

    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedDictionary<K, U>>& dictA, const SharedPtr<SCG::SortedDictionary<K, U>>& dictB)
    {
        return AreEqualData(dictA, dictB);
    }

    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedDictionary<K, SharedPtr<U> >>& dictA,
                         const SharedPtr<SCG::SortedDictionary<K, SharedPtr<U> >>& dictB)
    {
        if ((void*)dictA.get() == (void*)dictB.get())
            return true;

        if (!dictA || !dictB)
            return false;

        return AreEqualMapOfObjects(dictA->data(), dictB->data());
    }

    template <typename K1, typename U1, typename K2, typename U2>
    static bool AreEqual(const SharedPtr<SCG::SortedDictionary<K1, U1>>& dictA, const SharedPtr<SCG::SortedDictionary<K2, U2>>& dictB)
    {
        return false;
    }

    // SortedList

    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedList<K, U>>& dictA, const SharedPtr<SCG::SortedList<K, U>>& dictB)
    {
        return AreEqualData(dictA, dictB);
    }

    template <typename K, typename U>
    static bool AreEqual(const SharedPtr<SCG::SortedList<K, SharedPtr<U> >>& dictA,
                         const SharedPtr<SCG::SortedList<K, SharedPtr<U> >>& dictB)
    {
        if ((void*)dictA.get() == (void*)dictB.get())
            return true;

        if (!dictA || !dictB)
            return false;

        return AreEqualMapOfObjects(dictA->data(), dictB->data());
    }

    template <typename K1, typename U1, typename K2, typename U2>
    static bool AreEqual(const SharedPtr<SCG::SortedList<K1, U1>>& dictA, const SharedPtr<SCG::SortedList<K2, U2>>& dictB)
    {
        return false;
    }

    // BitArray

    template <typename T, typename U>
    static bool AreEqual(const System::Collections::BitArrayPtr& arrA, const System::Collections::BitArrayPtr& arrB)
    {
        return AreEqualData(arrA, arrB);
    }

    // StringCollection

    template <typename T, typename U>
    static bool AreEqual(const System::Collections::Specialized::StringCollectionPtr& arrA, const System::Collections::Specialized::StringCollectionPtr& arrB)
    {
        return AreEqualData(arrA, arrB);
    }

    // ICollection

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

    template <typename T, typename U>
    static bool AreEqualData(const SharedPtr<T>& containerPtrA,
                             const SharedPtr<U>& containerPtrB)
    {
        if ((void*)containerPtrA.get() == (void*)containerPtrB.get())
            return true;

        if (!containerPtrA || !containerPtrB)
            return false;

        if (containerPtrA->data().size() != containerPtrB->data().size())
            return false;

        return std::equal(containerPtrA->data().begin(), containerPtrA->data().end(), containerPtrB->data().begin());
    }

    // test containers of SharedPtr<T>

    template <typename T, typename U>
    static bool AreEqualObjects(const T& ptrA, const U& ptrB)
    {
        return System::Object::Equals(ptrA, ptrB);
    }

    template <typename K, typename V>
    static bool AreEqualObjectPairs(const std::pair<K, V>& pairA, const std::pair<K, V>& pairB)
    {
        return pairA.first == pairB.first && System::Object::Equals(pairA.second, pairB.second);
    }

    template <typename Tvect, typename Uvect>
    static bool AreEqualContainerOfObjects(Tvect& contA, Uvect& contB)
    {
        if (contA.size() != contB.size())
            return false;

        return std::equal(contA.begin(), contA.end(), contB.begin(),
                          TestCompare::AreEqualObjects<typename Tvect::value_type, typename Uvect::value_type>);
    }

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