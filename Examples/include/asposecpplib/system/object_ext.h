#ifndef _aspose_system_object_ext_h_
#define _aspose_system_object_ext_h_

#include <system/object.h>
#include <system/shared_ptr.h>
#include <system/weak_ptr.h>
#include <system/boxed_enum.h>
#include <system/text/string_builder.h>
#include <system/convert.h>
#include <system/decimal.h>
#include <system/enum.h>
#include <system/nullable.h>

#include <system/get_hash_code.h>

#include <initializer_list>

namespace System
{
    class ObjectExt
    {
    public:
        // External GetType
        template<typename T>
        static inline typename std::enable_if<IsSharedPtr<T>::value, const System::TypeInfo&>::type GetType(const T& obj)
        {
            return obj->GetType();
        }

        template<typename T>
        static inline typename std::enable_if<!IsSharedPtr<T>::value && !std::is_fundamental<T>::value && !std::is_enum<T>::value, const System::TypeInfo&>::type GetType(const T& obj)
        {
            return obj.GetType();
        }

        template<typename T>
        static inline typename std::enable_if<std::is_fundamental<T>::value || std::is_enum<T>::value, const System::TypeInfo&>::type GetType(const T)
        {
            return GetType<T>();
        }

        template <typename T>
        static inline typename std::enable_if<std::is_fundamental<T>::value || std::is_enum<T>::value, const System::TypeInfo&>::type GetType()
        {
            return BoxedValue<T>::Type();
        }

        template <typename T>
        static inline typename std::enable_if<!std::is_fundamental<T>::value && !std::is_enum<T>::value && !IsBoxable<T>::value, const System::TypeInfo&>::type GetType()
        {
            return T::Type(); // Works for pointers as well - they redirect Type() call to Pointee_::Type()
        }

        template <typename T>
        static inline typename std::enable_if<!std::is_fundamental<T>::value && !std::is_enum<T>::value && IsBoxable<T>::value, const System::TypeInfo&>::type GetType()
        {
            return BoxedValue<T>::Type(); // Works for pointers as well - they redirect Type() call to Pointee_::Type()
        }

        static inline const System::TypeInfo& GetType(const String& obj)
        {
            static TypeInfo stype(L"String");
            return stype;
        }

        // External GetHashCode
        template <typename T>
        static int GetHashCode(const T& obj)
        {
            return System::GetHashCode<T>(obj);
        }

        // External Equals
        template<typename T, typename T2>
        static typename std::enable_if<IsSharedPtr<T>::value, bool>::type Equals(const T& obj, const T2& another)
        {
            return obj->Equals(another);
        }

        template<typename T, typename T2>
        static typename std::enable_if<IsWeakPtr<T>::value, bool>::type Equals(const T& obj, const T2& another)
        {
            return obj.lock_best_cast()->Equals(another);
        }

        template<typename T, typename T2>
        static typename std::enable_if<!IsSharedPtr<T>::value && !IsWeakPtr<T>::value && !std::is_scalar<T>::value, bool>::type Equals(T obj, const T2& another)
        {
            return obj.Equals(another);
        }

        template<typename T, typename T2>
        static typename std::enable_if<!IsSharedPtr<T>::value && std::is_scalar<T>::value, bool>::type Equals(const T& obj, const T2& another)
        {
            return (obj == another);
        }

        template<size_t N>
        static bool Equals(const wchar_t (&obj)[N], String another)
        {
            return another == obj;
        }


        // External ToString
        static inline String ToString(const wchar_t * obj)
        {
            return String(obj);
        }

        template<typename T>
        static inline String ToString(const Nullable<T> & obj)
        {
            return (obj.IsNull() ? L"" : ToString(obj.get_Value()));
        }

        template<typename T>
        static typename std::enable_if<std::is_enum<T>::value, String>::type ToString(const T& obj)
        {
            return Enum<T>::GetName(obj);
        }

        template<typename T>
        static typename std::enable_if<IsSharedPtr<T>::value, String>::type ToString(const T& obj)
        {
            return obj->ToString();
        }

        template<typename T>
        static typename std::enable_if<IsSharedPtr<T>::value || std::is_pointer<T>::value, String>::type ToString(T& obj)
        {
            return obj->ToString();
        }

        template<typename T>
        static typename std::enable_if<IsWeakPtr<T>::value, String>::type ToString(T& obj)
        {
            return obj.lock_best_cast()->ToString();
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value && !IsWeakPtr<T>::value && std::is_scalar<T>::value && !std::is_enum<T>::value, String>::type ToString(T& obj)
        {
            return System::Convert::ToString(obj);
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value && !IsWeakPtr<T>::value && std::is_scalar<T>::value && !std::is_enum<T>::value, String>::type ToString(T&& obj)
        {
            return System::Convert::ToString(obj);
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value && !IsWeakPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value, String>::type ToString(T& obj)
        {
            return obj.ToString();
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value && !IsWeakPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value, String>::type ToString(const T& obj)
        {
            return obj.ToString();
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value && !IsWeakPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value && !std::is_reference<T>::value, String>::type ToString(T&& obj)
        {
            return obj.ToString();
        }

        // Boxing

        template<class T>
        static SharedPtr<Object> Box(const T& value)
        {
            return MakeObject<BoxedValue<T>>(value);
        }

        template<class T>
        static T Unbox(const SharedPtr<Object>& obj)
        {
            if (obj && obj->Is(BoxedValue<T>::Type()))
            {
                auto boxed = StaticCast< BoxedValue<T> >(obj);
                return boxed->unbox();
            }

            throw InvalidCastException();
        }

        template<class T, class E>
        static typename std::enable_if<std::is_enum<E>::value && std::numeric_limits<T>::is_integer, T>::type Unbox(E e)
        {
            return static_cast<T>(e);
        }

        template<class T, class E>
        static typename std::enable_if<std::is_enum<E>::value && std::is_enum<T>::value, T>::type Unbox(E e)
        {
            return static_cast<T>(e);
        }

        static String UnboxStringSafe(const SharedPtr<Object>& obj);

        template<class T>
        static Nullable<T> UnboxToNullable(const SharedPtr<Object>& obj, bool safe = true)
        {
            if (obj)
            {
                if (obj->Is(BoxedValue<Nullable<T>>::Type()))
                {
                    auto boxed = StaticCast<BoxedValue<Nullable<T>>>(obj);
                    return boxed->unbox();
                }

                if (obj->Is(BoxedValue<T>::Type()))
                {
                    auto boxed = StaticCast<BoxedValue<T>>(obj);
                    return Nullable<T>(boxed->unbox());
                }
            }

            if (safe)
                return Nullable<T>(nullptr);

            throw InvalidCastException();
        }

        // external Is
        template<class T, class U>
        static typename std::enable_if<std::is_convertible<T, Object>::value && !System::IsBoxable<T>::value && System::IsSharedPtr<U>::value,
            bool>::type Is(const U& obj)
        {
            if (!obj)
                return false;

            return obj->Is(T::Type());
        }

        template<class T, class U>
        static typename std::enable_if<std::is_convertible<T, Object>::value && !System::IsBoxable<T>::value && System::IsWeakPtr<U>::value,
            bool>::type Is(const U& obj)
        {
            if (!obj)
                return false;

            return obj->Is(T::Type());
        }

        template<class T>
        static typename std::enable_if<std::is_convertible<T, Object>::value,
            bool>::type Is(const Object& obj)
        {
            return obj.Is(T::Type());
        }

        template<class T>
        static typename std::enable_if<!std::is_convertible<T, Object>::value,
            bool>::type Is(const Object& obj)
        {
            return false;
        }

        template<class T>
        static typename std::enable_if<IsSharedPtr<T>::value, bool>::type Is(const SharedPtr<Object>& obj)
        {
            if (!obj)
                return false;

            return obj->Is(T::Pointee_::Type());
        }

        template<class T>
        static typename std::enable_if<IsWeakPtr<T>::value, bool>::type Is(const WeakPtr<Object>& obj)
        {
            if (!obj)
                return false;

            return obj->Is(T::Pointee_::Type());
        }

        template<class T>
        static typename std::enable_if<IsNullable<T>::value, bool>::type Is(const SharedPtr<Object>& obj)
        {
            if (!obj)
                return false;

            if (obj->Is(System::BoxedValue<typename T::ValueType>::Type()))
                return true;

            return false;
        }

        template<class T>
        static typename std::enable_if<
            System::IsBoxable<T>::value && !IsNullable<T>::value && !std::is_enum<T>::value,
            bool
        >::type Is(const SharedPtr<Object>& obj)
        {
            if (!obj)
                return false;

            if (obj->Is(System::BoxedValue<T>::Type()))
            {
                return true;
            }

            return false;
        }

        template<class T>
        static typename std::enable_if<std::is_enum<T>::value, bool>::type Is(const SharedPtr<Object>& obj)
        {
            if (!obj)
                return false;

            if (obj->Is(System::BoxedValue<T>::Type()))
                return Enum<T>::IsDefined(Unbox<T>(obj));

            return false;
        }

        template<class T>
        static typename std::enable_if<std::is_enum<T>::value, bool>::type Is(const WeakPtr<Object>& obj)
        {
            if (!obj)
                return false;

            if (obj->Is(System::BoxedValue<T>::Type()))
                return Enum<T>::IsDefined(Unbox<T>(obj));

            return false;
        }

        static bool IsBoxedValue(const SharedPtr<Object>& obj);

        template<typename T>
        static typename std::enable_if<IsSharedPtr<T>::value, System::SharedPtr<Object> >::type UnknownToObject(T obj)
        {
            return System::StaticCast<System::Object>(obj);
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value, System::SharedPtr<Object> >::type UnknownToObject(const T& obj)
        {
            return Box<T>(obj);
        }

        template<typename T>
        static typename std::enable_if<IsSharedPtr<T>::value, T>::type ObjectToUnknown(SharedPtr<Object> obj)
        {
            return System::StaticCast<typename T::Pointee_>(obj);
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value, T>::type ObjectToUnknown(SharedPtr<Object> obj)
        {
            return System::ObjectExt::Unbox<T>(obj);
        }

        template<typename T0, typename T1>
        static T0 Coalesce(T0 value, T1 func)
        {
            return value != nullptr ? value : func();
        }

        template<typename T0, typename T1>
        static T0 Coalesce(System::Nullable<T0> value, T1 func)
        {
            return !value.IsNull() ? value.get_Value() : func();
        }

        template<typename T>
        static SharedPtr<System::BoxedValueBase> BoxEnum(T enumValue)
        {
            return SharedPtr<System::BoxedValueBase>(new System::BoxedEnum<T>(enumValue));
        }

        template<typename To, typename ...From>
        static typename std::enable_if<(std::is_fundamental<To>::value), std::initializer_list<To>>::type ArrayInitializerCast(From ...args)
        {
            return { static_cast<To>(args)... };
        }
    };

    // Although two floating point NaNs are defined by IEC 60559:1989 to always compare as unequal, the contract for System.Object.Equals,
    // requires that overrides must satisfy the requirements for an equivalence operator. Therefore, System.Double.Equals and System.Single.Equals
    // return True when comparing two NaNs, while the equality operator returns False in that case, as required by the standard.
    template<>
    inline bool ObjectExt::Equals<float, float>(const float& obj, const float& another)
    {
        return (std::isnan(obj) && std::isnan(another)) ? true : obj == another;
    }

    template<>
    inline bool ObjectExt::Equals<double, double>(const double& obj, const double& another)
    {
        return (std::isnan(obj) && std::isnan(another)) ? true : obj == another;
    }

    template<>
    inline SharedPtr<Object> ObjectExt::Box<String>(const String& value)
    {
        return value.IsNull() ? nullptr : MakeObject<BoxedValue<String>>(value);
    }

    template<>
    inline String ObjectExt::Unbox<String>(const SharedPtr<Object>& obj)
    {
        if (obj == nullptr)
            return String();

        if (obj && obj->Is(BoxedValue<String>::Type()))
        {
            auto boxed = StaticCast< BoxedValue<String> >(obj);
            return boxed->unbox();
        }

        throw InvalidCastException();
    }
}

#endif // _aspose_system_object_ext_h_
