/// @file system/object_ext.h
#ifndef _aspose_system_object_ext_h_
#define _aspose_system_object_ext_h_

#include <system/details/has_isnull.h>
#include <system/object.h>
#include <system/smart_ptr.h>
#include <system/weak_ptr.h>
#include <system/boxed_enum.h>
#include <system/text/string_builder.h>
#include <system/convert.h>
#include <system/decimal.h>
#include <system/enum.h>
#include <system/nullable.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/get_hash_code.h>

#include <initializer_list>


namespace System
{

/// Provides static methods that emulate C# Object methods called for non-Object C++ types (strings, numbers, etc.).
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class ObjectExt
{
public:
    /// Implements typeof() translation.
    /// Overload for smart pointers.
    /// @tparam T Pointer object type.
    /// @param obj Object to get TypeInfo for.
    /// @return Const reference to TypeInfo structure describing the final class of object passed.
    template<typename T>
    static inline typename std::enable_if<IsSmartPtr<T>::value, const System::TypeInfo&>::type GetType(const T& obj)
    {
        return obj->GetType();
    }

    /// Implements typeof() translation.
    /// Overload for structures.
    /// @tparam T Structure type.
    /// @param obj Object to get TypeInfo for.
    /// @return Const reference to TypeInfo structure describing the final class of object passed.
    template<typename T>
    static inline typename std::enable_if<!IsSmartPtr<T>::value && !std::is_fundamental<T>::value && !std::is_enum<T>::value, const System::TypeInfo&>::type GetType(const T& obj)
    {
        return obj.GetType();
    }

    /// Implements typeof() translation.
    /// Overload for primitive types.
    /// @tparam T Primitive type.
    /// @param obj IGNORED
    /// @return Const reference to TypeInfo structure describing the type of object passed.
    template<typename T>
    static inline typename std::enable_if<std::is_fundamental<T>::value || std::is_enum<T>::value, const System::TypeInfo&>::type GetType(const T obj)
    {
        return GetType<T>();
    }

    /// Implements typeof() translation.
    /// Overload for primitive types.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing the type specified.
    template <typename T>
    static inline typename std::enable_if<std::is_fundamental<T>::value || std::is_enum<T>::value, const System::TypeInfo&>::type GetType()
    {
        return BoxedValue<T>::Type();
    }

    /// Implements typeof() translation.
    /// Overload for structures and pointers.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing the strcture specified.
    template <typename T>
    static inline typename std::enable_if<(!std::is_fundamental<T>::value && !std::is_enum<T>::value && !IsBoxable<T>::value) || IsException<T>::value, const System::TypeInfo&>::type GetType()
    {
        return T::Type(); // Works for pointers as well - they redirect Type() call to Pointee_::Type()
    }

    /// Implements typeof() translation.
    /// Overload for structures and pointers.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing the strcture specified or pointee type if called for SmartPtr.
    template <typename T>
    static inline typename std::enable_if<!std::is_fundamental<T>::value && !std::is_enum<T>::value && IsBoxable<T>::value && !IsException<T>::value, const System::TypeInfo&>::type GetType()
    {
        return BoxedValue<T>::Type(); // Works for pointers as well - they redirect Type() call to Pointee_::Type()
    }

    /// Implements typeof() translation.
    /// Overload for string type.
    /// @tparam T Primitive type.
    /// @return Const reference to TypeInfo structure describing String type.
    static inline const System::TypeInfo& GetType(const String& obj)
    {
        static TypeInfo stype(u"String");
        return stype;
    }

    /// Implements GetHashCode() calls; works on both Object subclasses and unrelated types.
    /// @tparam T Type to calculate hash code for.
    /// @param obj Object to calculate hash code for.
    /// @return Hash code calculated for object passed.
    template <typename T>
    static int GetHashCode(const T& obj)
    {
        return System::GetHashCode<T>(obj);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for smart pointer types.
    /// @tparam T First object type.
    /// @tparam T2 Second object type.
    /// @param obj First object.
    /// @param another Second object.
    /// @return True if objects are considered equal, false otherwise.
    template<typename T, typename T2>
    static typename std::enable_if<IsSmartPtr<T>::value, bool>::type Equals(const T& obj, const T2& another)
    {
        return obj->Equals(another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for structure types without IsNull methods.
    /// @tparam T First object type.
    /// @tparam T2 Second object type.
    /// @param obj First object.
    /// @param another Second object.
    /// @return True if objects are considered equal, false otherwise.
    template<typename T, typename T2>
    static typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value && !::System::Details::HasIsNull<T>::value, bool>::type Equals(T obj, const T2& another)
    {
        return obj.Equals(another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for structure types with IsNull method implemented.
    /// @tparam T First object type.
    /// @tparam T2 Second object type.
    /// @param obj First object.
    /// @param another Second object.
    /// @return True if objects are considered equal, false otherwise.
    /// @throw NullReferenceException if @p obj is null.
    template<typename T, typename T2>
    static typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value && ::System::Details::HasIsNull<T>::value, bool>::type Equals(T obj, const T2& another)
    {
        if (obj.IsNull())
            System::Detail::SmartPtrCounter::ThrowNullReferenceException();
        return obj.Equals(another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for scalar types.
    /// @tparam T First object type.
    /// @tparam T2 Second object type.
    /// @param obj First object.
    /// @param another Second object.
    /// @return True if objects are considered equal, false otherwise.
    template<typename T, typename T2>
    static typename std::enable_if<!IsSmartPtr<T>::value && std::is_scalar<T>::value, bool>::type Equals(const T& obj, const T2& another)
    {
        return (obj == another);
    }

    /// Substitution for C# Object.Equals calls working for any type in C++.
    /// Overload for string literal with string comparison.
    /// @tparam N String literal size.
    /// @param obj String literal.
    /// @param another String.
    /// @return True if strings match, false otherwise.
    template<size_t N>
    static bool Equals(const char_t (&obj)[N], String another)
    {
        return another == obj;
    }


    /// Substitution for C# ToString method to work on any C++ type.
    /// @param obj String literal to convert to string.
    /// @return String representation of @p obj.
    static inline String ToString(const char_t * obj)
    {
        return String(obj);
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Nullable type.
    /// @param obj Nullable object to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static inline String ToString(const Nullable<T> & obj)
    {
        return (obj.IsNull() ? u"" : ToString(obj.get_Value()));
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Enum type.
    /// @param obj Enum value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<std::is_enum<T>::value, String>::type ToString(const T& obj)
    {
        String str = Enum<T>::GetName(obj);
        return !str.IsNullOrEmpty() ? str : System::Convert::ToString(static_cast<typename std::underlying_type<T>::type>(obj));
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Smart pointer type.
    /// @param obj SmartPtr value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value, String>::type ToString(const T& obj)
    {
        return obj->ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Smart pointer type.
    /// @param obj Smart pointer to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value || std::is_pointer<T>::value, String>::type ToString(T& obj)
    {
        return obj->ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Scalar type.
    /// @param obj Scalar value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && std::is_scalar<T>::value && !std::is_enum<T>::value, String>::type ToString(T& obj)
    {
        return System::Convert::ToString(obj);
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Scalar type.
    /// @param obj Scalar value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && std::is_scalar<T>::value && !std::is_enum<T>::value, String>::type ToString(T&& obj)
    {
        return System::Convert::ToString(obj);
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Structure type.
    /// @param obj Structure value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value, String>::type ToString(T& obj)
    {
        return obj.ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Structure type.
    /// @param obj Structure value to convert to string.
    /// @return String representation of @p obj.
    template <typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value, String>::type ToString(const T& obj)
    {
        return obj.ToString();
    }

    /// Substitution for C# ToString method to work on any C++ type.
    /// @tparam T Scalar type.
    /// @param obj Scalar value to convert to string.
    /// @return String representation of @p obj.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value && !std::is_scalar<T>::value && !IsNullable<T>::value && !std::is_reference<T>::value, String>::type ToString(T&& obj)
    {
        return obj.ToString();
    }

    /// Boxes value types for converting to Object.
    /// Implementation for enum types.
    /// @tparam T Enum type.
    /// @param value Enum value to box.
    /// @return Smart pointer to object keeping boxed value.
    template<typename T>
    static typename std::enable_if<std::is_enum<T>::value, System::SmartPtr<System::Object>>::type Box(const T& value)
    {
        return System::MakeObject<BoxedEnum<T>>(value);
    }

    /// Boxes value types for converting to Object.
    /// Implementation for non-enum types.
    /// @tparam T Value type.
    /// @param value Value to box.
    /// @return Smart pointer to object keeping boxed value.
    template<typename T>
    static typename std::enable_if<!std::is_enum<T>::value, System::SmartPtr<System::Object>>::type Box(const T& value)
    {
        return System::MakeObject<BoxedValue<T>>(value);
    }

    /// Unboxes value types after converting to Object.
    /// Implementation for enum types.
    /// @tparam T Enum type.
    /// @param obj Object to unbox.
    /// @return Enum value.
    template<typename T>
    static typename std::enable_if<std::is_enum<T>::value, T>::type Unbox(const SmartPtr<Object>& obj)
    {
        using UT = typename std::underlying_type<T>::type;

        if (obj && obj->Is(BoxedValue<UT>::Type()))
        {
            auto boxed = StaticCast< BoxedValue<UT> >(obj);
            return static_cast<T>(boxed->unbox());
        }

        throw InvalidCastException();
    }

    /// Unboxes value types after converting to Object.
    /// Implementation for non-enum types.
    /// @tparam T Value type.
    /// @param obj Object to unbox.
    /// @return Unboxed value.
    template<class T>
    static typename std::enable_if<!std::is_enum<T>::value, T>::type Unbox(const SmartPtr<Object>& obj)
    {
        if (obj && obj->Is(BoxedValue<T>::Type()))
        {
            auto boxed = StaticCast< BoxedValue<T> >(obj);
            return boxed->unbox();
        }

        throw InvalidCastException();
    }

    /// Unboxes enum types to integer.
    /// @tparam T Destination integer type.
    /// @tparam E Source enum type.
    /// @param e Value to unbox.
    /// @return Integer representation of enum.
    template<class T, class E>
    static typename std::enable_if<std::is_enum<E>::value && std::numeric_limits<T>::is_integer, T>::type Unbox(E e)
    {
        return static_cast<T>(e);
    }

    /// Converts enum types.
    /// @tparam T Destination enum type.
    /// @tparam E Source enum type.
    /// @param e Value to unbox.
    /// @return Converted enum value.
    template<class T, class E>
    static typename std::enable_if<std::is_enum<E>::value && std::is_enum<T>::value, T>::type Unbox(E e)
    {
        return static_cast<T>(e);
    }

    /// Unboxes string from boxed value.
    /// @throw Nothing.
    /// @param obj Boxed string value.
    /// @return If @p obj is a boxed string, returns unboxed value, otherwise returns empty string.
    static ASPOSECPP_SHARED_API String UnboxStringSafe(const SmartPtr<Object>& obj);

    /// Unboxes object to nullable type.
    /// @tparam T Destination type.
    /// @param obj Object to unbox.
    /// @param safe If true, return nullptr on failure, otherwise throw InvalidCastException.
    /// @return Unboxed nullable value (could be null).
    template<class T>
    static Nullable<T> UnboxToNullable(const SmartPtr<Object>& obj, bool safe = true)
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

    /// Implements 'is' operator translation.
    /// Specialization for pointer types.
    /// @tparam T Target type.
    /// @tparam U Tested type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T, class U>
    static typename std::enable_if<std::is_convertible<T, Object>::value && !System::IsBoxable<T>::value && System::IsSmartPtr<U>::value,
        bool>::type Is(const U& obj)
    {
        if (!obj)
            return false;

        return dynamic_cast<T*>(obj.get()) != nullptr;
    }

    /// Implements 'is' operator translation.
    /// Specialization for value types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<std::is_convertible<T, Object>::value,
        bool>::type Is(const Object& obj)
    {
        return obj.Is(T::Type());
    }

    /// Implements 'is' operator translation.
    /// Specialization for unconvertible types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return Always returns false as types are unconvertible.
    template<class T>
    static typename std::enable_if<!std::is_convertible<T, Object>::value,
        bool>::type Is(const Object& obj)
    {
        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for pointer types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T, class U>
    static typename std::enable_if<IsSmartPtr<T>::value, bool>::type Is(const SmartPtr<U>& obj)
    {
        if (!obj)
            return false;

        return dynamic_cast<typename T::Pointee_*>(obj.get()) != nullptr;
    }

    /// Implements 'is' operator translation.
    /// Specialization for nullable types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<IsNullable<T>::value, bool>::type Is(const SmartPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::BoxedValue<typename T::ValueType>::Type()))
            return true;

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for boxable types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<
        System::IsBoxable<T>::value && !IsNullable<T>::value && !std::is_enum<T>::value,
        bool
    >::type Is(const SmartPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::BoxedValue<T>::Type()))
        {
            return true;
        }

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for enum types.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<std::is_enum<T>::value, bool>::type Is(const SmartPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::BoxedEnum<T>::Type()))
            return Enum<T>::IsDefined(Unbox<T>(obj));

        return false;
    }

    /// Implements 'is' operator translation.
    /// Specialization for enum types vs weak pointers.
    /// @tparam T Target type.
    /// @param obj Object to test for 'is' operator.
    /// @return True if 'is' returns true, false otherwise.
    template<class T>
    static typename std::enable_if<std::is_enum<T>::value, bool>::type Is(const WeakPtr<Object>& obj)
    {
        if (!obj)
            return false;

        if (obj->Is(System::BoxedEnum<T>::Type()))
            return Enum<T>::IsDefined(Unbox<T>(obj));

        return false;
    }

    /// Checks if object is a boxed value.
    /// @param obj Object to test for being boxed value.
    /// @return True if @p obj is a boxed value, false otherwise.
    static ASPOSECPP_SHARED_API bool IsBoxedValue(const SmartPtr<Object>& obj);

    /// Converts unknown type to Object, handling both smart pointer type and value type situations.
    /// @tparam T Type to convert to Object.
    /// @param obj Object to convert.
    /// @return Smart pointer to Object being either converted pointer or boxed value.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value, System::SmartPtr<Object> >::type UnknownToObject(T obj)
    {
        return System::StaticCast<System::Object>(obj);
    }

    /// Converts unknown type to Object, handling both smart pointer type and value type situations.
    /// @tparam T Type to convert to Object.
    /// @param obj Object to convert.
    /// @return Smart pointer to Object being either converted pointer or boxed value.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value, System::SmartPtr<Object> >::type UnknownToObject(const T& obj)
    {
        return Box<T>(obj);
    }

    /// Converts Object to unknown type, handling both smart pointer type and bpxed value situations.
    /// @tparam T Type to convert Object to.
    /// @param obj Object to convert.
    /// @return Either unboxed value or converted pointer.
    template<typename T>
    static typename std::enable_if<IsSmartPtr<T>::value, T>::type ObjectToUnknown(SmartPtr<Object> obj)
    {
        return System::StaticCast<typename T::Pointee_>(obj);
    }

    /// Converts Object to unknown type, handling both smart pointer type and bpxed value situations.
    /// @tparam T Type to convert Object to.
    /// @param obj Object to convert.
    /// @return Either unboxed value or converted pointer.
    template<typename T>
    static typename std::enable_if<!IsSmartPtr<T>::value, T>::type ObjectToUnknown(SmartPtr<Object> obj)
    {
        return System::ObjectExt::Unbox<T>(obj);
    }

    /// Implementation of '?' operator translation for non-nullable types.
    /// @tparam T0 LHS value type.
    /// @tparam T1 Type of lambda encapsulating RHS expression.
    /// @param value LHS value.
    /// @param func RHS expression.
    /// @return If LHS value is not null, returns LHS, otherwise calculates RHS expression and returns result.
    template<typename T0, typename T1>
    static T0 Coalesce(T0 value, T1 func)
    {
        return value != nullptr ? value : func();
    }

    /// Implementation of '?' operator translation for nullable types.
    /// @tparam T0 LHS value type.
    /// @tparam T1 Type of lambda encapsulating RHS expression.
    /// @param value LHS value.
    /// @param func RHS expression.
    /// @return If LHS value is not null, returns LHS, otherwise calculates RHS expression and returns result.
    template<typename T0, typename T1>
    static T0 Coalesce(System::Nullable<T0> value, T1 func)
    {
        return !value.IsNull() ? value.get_Value() : func();
    }

    /// Boxes enum types for being propagated as Object.
    /// @tparam T Enum type to box.
    /// @param enumValue Enum value to box.
    /// @return Boxed enum value.
    template<typename T>
    static SmartPtr<System::BoxedValueBase> BoxEnum(T enumValue)
    {
        return SmartPtr<System::BoxedValueBase>(new System::BoxedEnum<T>(enumValue));
    }

    /// Converts array fundamental values (which C# does implicitly but C++ apparently does not).
    /// @tparam To Target type.
    /// @tparam From Source types.
    /// @param args Values to convert and push to target array.
    /// @return Array containing converted copies of all arguments in the same order.
    template<typename To, typename ...From>
    static typename std::enable_if<(std::is_fundamental<To>::value), std::initializer_list<To>>::type ArrayInitializerCast(From ...args)
    {
        return { static_cast<To>(args)... };
    }
};

/// Emulates C#-style floating point comparison where two NaNs are considered equal even though according to IEC 60559:1989 NaN is not equal to any value,
/// including NaN.
/// @param obj LHS floating point value.
/// @param another RHS floating point value.
/// @return True if @p obj and @p another are both NaN or equal, false otherwise.
template<>
inline bool ObjectExt::Equals<float, float>(const float& obj, const float& another)
{
    return (std::isnan(obj) && std::isnan(another)) ? true : obj == another;
}

/// Emulates C#-style floating point comparison where two NaNs are considered equal even though according to IEC 60559:1989 NaN is not equal to any value,
/// including NaN.
/// @param obj LHS floating point value.
/// @param another RHS floating point value.
/// @return True if @p obj and @p another are both NaN or equal, false otherwise.
template<>
inline bool ObjectExt::Equals<double, double>(const double& obj, const double& another)
{
    return (std::isnan(obj) && std::isnan(another)) ? true : obj == another;
}

/// Boxes string values.
/// @param value Value to box.
/// @return Boxed value or null, if source string is null.
template<>
inline SmartPtr<Object> ObjectExt::Box<String>(const String& value)
{
    return value.IsNull() ? nullptr : MakeObject<BoxedValue<String>>(value);
}

/// Unboxes string values.
/// @param obj Object to unbox
/// @return String representation of boxed string, can be null if boxed string was null.
template<>
inline String ObjectExt::Unbox<String>(const SmartPtr<Object>& obj)
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

} // namespace System

#endif // _aspose_system_object_ext_h_
