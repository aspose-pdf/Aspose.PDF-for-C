#ifndef _aspose_system_casts_h_
#define _aspose_system_casts_h_

#include <system/collections/ienumerable.h>
#include <system/collections/list.h>
#include <system/object_ext.h>
#include <system/shared_ptr.h>
#include <system/weak_ptr.h>
#include <system/array.h>

namespace System {

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

    template<class To, class From>
    typename std::enable_if<(System::IsSharedPtr<To>::value || System::IsWeakPtr<To>::value), Collections::Generic::ListPtr<To>>::type DynamicCastEnumerableTo(const From& enumerable)
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

    template<class To, class From>
    typename std::enable_if<(!System::IsSharedPtr<To>::value && !System::IsWeakPtr<To>::value), Collections::Generic::ListPtr<To>>::type DynamicCastEnumerableTo(const From& enumerable)
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

    template<class To, class From>
    SharedPtr<Array<To>> StaticCastArray(const SharedPtr<Array<From>>& from)
    {
        if (!from)
            return ArrayPtr<To>();

        auto result = MakeArray<To>(from->data().size());

        size_t i = 0;
        for (auto it = from->data().cbegin(); it != from->data().cend(); ++it)
            result->data()[i++] = it->get() ? StaticCast<typename To::Pointee_>(*it) : To();

        return result;
    }

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