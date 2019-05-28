/// @file system/special_casts.h
/// Contains the declarations of functions that perform dynamic and static type casting of elements of collections and arrays.
#ifndef _aspose_system_casts_h_
#define _aspose_system_casts_h_

#include <system/collections/ienumerable.h>
#include <system/collections/list.h>
#include <system/object_ext.h>
#include <system/shared_ptr.h>
#include <system/weak_ptr.h>
#include <system/array.h>

namespace System {

/// Performs the static casting of elements of the specified enumerable object to different type.
/// @param enumerable Enumerable object containing the elements to cast
/// @returns A pointer to a new collection containing elements of type @p To equivalent to the elements of @p enumerable
/// @tparam To The type to statically cast the elements of the enumerable object to
/// @tparam From The type of enumerable object
template<class To, class From>
Collections::Generic::ListPtr<To> CastEnumerableTo(const From& enumerable)
{
    auto result = MakeObject<Collections::Generic::List<To>>();

    auto enumerator = enumerable->GetEnumerator();
    while (enumerator->MoveNext())
    {
        const auto& item = StaticCast<typename To::Pointee_>(enumerator->get_Current());
        result->Add(item);
    }

    return result;
}

/// Performs the dynamic casting of elements of the specified enumerable object to different type.
/// @param enumerable Enumerable object containing the elements to cast
/// @returns A pointer to a new collection containing elements of type @p To equivalent to the elements of @p enumerable
/// @tparam To The type to statically cast the elements of the enumerable object to
/// @tparam From The type of enumerable object
template<class To, class From>
typename std::enable_if<(System::IsSmartPtr<To>::value), Collections::Generic::ListPtr<To>>::type DynamicCastEnumerableTo(const From& enumerable)
{
    auto result = MakeObject<Collections::Generic::List<To>>();

    auto enumerator = enumerable->GetEnumerator();
    while (enumerator->MoveNext())
    {
        const auto& item = DynamicCast<typename To::Pointee_>(enumerator->get_Current());
        result->Add(item);
    }

    return result;
}

/// Performs the dynamic casting of elements of the specified enumerable object to different type.
/// @param enumerable Enumerable object containing the elements to cast
/// @returns A pointer to a new collection containing elements of type @p To equivalent to the elements of @p enumerable
/// @tparam To The type to statically cast the elements of the enumerable object to
/// @tparam From The type of enumerable object
template<class To, class From>
typename std::enable_if<(!System::IsSmartPtr<To>::value), Collections::Generic::ListPtr<To>>::type DynamicCastEnumerableTo(const From& enumerable)
{
    auto result = MakeObject<Collections::Generic::List<To>>();

    auto enumerator = enumerable->GetEnumerator();
    while (enumerator->MoveNext())
    {
        const auto& item = System::ObjectExt::Unbox<To>(enumerator->get_Current());
        result->Add(item);
    }

    return result;
}

/// Performs the static casting of elements of the specified array to different type.
/// Override for cases then From is SmartPtr obj
/// @param from Shared pointer to the array containing the elements to cast
/// @returns A pointer to a new array containing elements of type @p To equivalent to the elements of @p from
/// @tparam To The type to cast the elements of the specified array to
/// @tparam From The type of elements of the elements of the arry elements of which to cast
template<typename To, typename From>
std::enable_if_t<System::IsSmartPtr<From>::value, System::SharedPtr<System::Array<To>>>
StaticCastArray(const System::SharedPtr<System::Array<From>>& from)
{
    if (!from)
    {
        return System::ArrayPtr<To>();
    }

    auto result = System::MakeArray<To>(from->data().size());
    std::transform(from->begin(), from->end(), result->begin(),
        [](const From& value)
    {
        return (value != nullptr) ? System::StaticCast<typename To::Pointee_>(value) : To();
    });

    return result;
}

/// Performs the static casting of elements of the specified array to different type.
/// Override for cases then From is Boxable and To is Object[]
/// @param from Shared pointer to the array containing the elements to cast
/// @returns A pointer to a new array containing elements of type @p To equivalent to the elements of @p from
/// @tparam To The type to cast the elements of the specified array to
/// @tparam From The type of elements of the elements of the arry elements of which to cast
template<typename To, typename From>
std::enable_if_t<!System::IsSmartPtr<From>::value && System::IsBoxable<From>::value && std::is_same<To, System::SharedPtr<Object>>::value, System::SharedPtr<System::Array<To>>>
StaticCastArray(const System::SharedPtr<System::Array<From>>& from)
{
    if (!from)
    {
        return System::ArrayPtr<To>();
    }

    auto result = System::MakeArray<To>(from->data().size());
    std::transform(from->begin(), from->end(), result->begin(),
        [](const From& value)
    {
        return System::ObjectExt::Box(value);
    });

    return result;
}

/// Performs the dynamic casting of elements of the specified array to different type.
/// @param from Shared pointer to the array containing the elements to cast
/// @returns A pointer to a new array containing elements of type @p To equivalent to the elements of @p from
/// @tparam To The type to cast the elements of the specified array to
/// @tparam From The type of elements of the elements of the arry elements of which to cast
template<class To, class From>
SharedPtr<Array<To>> DynamicCastArray(const SharedPtr<Array<From>>& from)
{
    if (!from)
        return ArrayPtr<To>();

    auto result = MakeArray<To>(from->data().size());

    size_t i = 0;
    for (auto it = from->data().cbegin(); it != from->data().cend(); ++it)
        result->data()[i++] = it->get() ? DynamicCast<typename To::Pointee_>(*it) : To();

    return result;
}

} // namespace System

#endif // _aspose_system_casts_h_
