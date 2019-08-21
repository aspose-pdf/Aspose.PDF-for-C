/// @file system/boxed_value.h
/// Contains declaration of System::BoxedValue class.
#ifndef _aspose_system_boxed_value_h_
#define _aspose_system_boxed_value_h_

#include <fwd.h>
#include <system/get_hash_code.h>
#include <system/object.h>
#include <system/boxable_traits.h>
#include <system/timespan.h>
#include <system/decimal.h>
#include <system/guid.h>
#include <system/value_type.h>
#include <system/type_code.h>

#include <typeinfo>
#include <type_traits>

namespace System
{
    /// Forward declaration.
    template <typename T> class Nullable;

    namespace BoxedValueDetail
    {
        // Although two floating point NaNs are defined by IEC 60559:1989 to always compare as unequal, the contract for System.Object.Equals,
        // requires that overrides must satisfy the requirements for an equivalence operator. Therefore, System.Double.Equals and System.Single.Equals
        // return True when comparing two NaNs, while the equality operator returns False in that case, as required by the standard.
        /// Determines the equality of the specified value using operator==().
        /// @param value1 The first comparand
        /// @param value2 The second comparand
        /// @returns True if the specified value are equal as determined by operator==(), otherwise - false
        /// @tparam The type of the values being compared
        template<typename T>
        typename std::enable_if<detail::has_operator_equal<T>::value, bool>::type
        Equals(T value1, T value2)
        {
            return value1 == value2;
        }

        /// Determines the equality of the specified value using method System::Object::Equals().
        /// @param value1 The first comparand
        /// @param value2 The second comparand
        /// @returns True if the specified value are equal as determined by method Equals(), otherwise - false
        /// @tparam The type of the values being compared 
        template<typename T>
        typename std::enable_if<detail::has_only_method_equals<T>::value, bool>::type
        Equals(T value1, T value2)
        {
            return value1.Equals(value2);
        }

        /// Compares two single-precision floating-point values.
        /// @param value1 The first value to compare
        /// @param value2 The second value to compare
        /// @returns True if both values are NAN or are equal, otherwise - false
        template<>
        inline bool Equals<float>(float value1, float value2)
        {
            return (std::isnan(value1) && std::isnan(value2)) ? true : value1 == value2;
        }

        /// Compares two double-precision floating-point values.
        /// @param value1 The first value to compare
        /// @param value2 The second value to compare
        /// @returns True if both values are NAN or are equal, otherwise - false
        template<>
        inline bool Equals<double>(double value1, double value2)
        {
            return (std::isnan(value1) && std::isnan(value2)) ? true : value1 == value2;
        }
    }

    /// A base class that defines an interface and implements some fundamental 
    /// methods of a descendant class that represents a boxed value.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS BoxedValueBase : public Object
    {
        RTTI_INFO(System::BoxedValueBase, ::System::BaseTypesInfo<System::Object>);

    public:
        /// Determines if current object represents a boxed value of enum type.
        /// @returns True if current object represents a boxed value of enum type, otherwise - false
        virtual ASPOSECPP_SHARED_API bool IsBoxedEnum() = 0;

        /// Converts the boxed represented by the current object to 64-bit integer value.
        /// @returns 64-bit integer value equivalent to the boxed value represented by the current object
        virtual ASPOSECPP_SHARED_API uint64_t GetUnsignedLongLongValue() = 0;

        /// Returns the value representing the type of the boxed value represented by the current object.
        /// @returns Value of TypeCode enum representing the type of the boxed value represented by the current object
        virtual ASPOSECPP_SHARED_API TypeCode GetTypeCode() const = 0;

        // Parsing enums
        /// Boxes the value of enumeration constant of the specified enumeration 
        /// with the specified name. A parameter specifies if the case should be 
        /// ignored when interpreting the string specifying the name of the enumeration 
        /// constant.
        /// @param type Specifies the type of the enumeration
        /// @param str The name of the enumeration constant, value of which is to be boxed
        /// @param ignoreCase Specifies if case should be ignored when interpreting the string representing the name of the enumeration constant
        /// @returns A shared pointer to the object representing boxed value of the specified enumeration constant
        /// @throws InvalidEnumArgumentException If the specified enumeration constant was not found in the specified enumeration
        static ASPOSECPP_SHARED_API SharedPtr<Object> Parse(const TypeInfo& type, const String& str, bool ignoreCase);
        /// Boxes the value of enumeration constant of the specified enumeration 
        /// with the specified name. 
        /// @param type Specifies the type of the enumeration
        /// @param str The name of the enumeration constant, value of which is to be boxed
        /// @returns A shared pointer to the object representing boxed value of the specified enumeration constant
        /// @throws InvalidEnumArgumentException If the specified enumeration constant was not found in the specified enumeration
        static ASPOSECPP_SHARED_API SharedPtr<Object> Parse(const TypeInfo& type, const String& str);
    };

    namespace TypeCodeHelper
    {
        /// A template function that returns an enum value representing the function's template type argument.
        /// @tparam A type represented by the value returned by the function
        /// @returns Enum value that represents the function template type parameter 
        template<typename T>
        TypeCode GetTypeCodeFor()
        {
            return TypeCode::Object;
        }

        /// Template specialization for bool.
        template<> inline TypeCode GetTypeCodeFor<bool>() { return TypeCode::Boolean; }
        /// Template specialization for char_t.
        template<> inline TypeCode GetTypeCodeFor<char_t>() { return TypeCode::Char; }
        /// Template specialization for int8_t.
        template<> inline TypeCode GetTypeCodeFor<int8_t>() { return TypeCode::SByte; }
        /// Template specialization for uint8_t.
        template<> inline TypeCode GetTypeCodeFor<uint8_t>() { return TypeCode::Byte; }
        /// Template specialization for int16_t.
        template<> inline TypeCode GetTypeCodeFor<int16_t>() { return TypeCode::Int16; }
        /// Template specialization for uint16_t.
        template<> inline TypeCode GetTypeCodeFor<uint16_t>() { return TypeCode::UInt16; }
        /// Template specialization for int32_t.
        template<> inline TypeCode GetTypeCodeFor<int32_t>() { return TypeCode::Int32; }
        /// Template specialization for uint32_t.
        template<> inline TypeCode GetTypeCodeFor<uint32_t>() { return TypeCode::UInt32; }
        /// Template specialization for int64_t.
        template<> inline TypeCode GetTypeCodeFor<int64_t>() { return TypeCode::Int64; }
        /// Template specialization for uint64_t.
        template<> inline TypeCode GetTypeCodeFor<uint64_t>() { return TypeCode::UInt64; }
        /// Template specialization for float.
        template<> inline TypeCode GetTypeCodeFor<float>() { return TypeCode::Single; }
        /// Template specialization for double.
        template<> inline TypeCode GetTypeCodeFor<double>() { return TypeCode::Double; }
        /// Template specialization for System::Decimal.
        template<> inline TypeCode GetTypeCodeFor<Decimal>() { return TypeCode::Decimal; }
        /// Template specialization for System::DateTime.
        template<> inline TypeCode GetTypeCodeFor<DateTime>() { return TypeCode::DateTime; }
        /// Template specialization for System::String.
        template<> inline TypeCode GetTypeCodeFor<String>() { return TypeCode::String; }
    }

    /// Represents a boxed value.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    /// @tparam T Type of the boxed value represented by the class
    template<class T>
    class BoxedValue : public BoxedValueBase
    {
        // BoxedValue now takes TypeInfo from TypeInfo. It is required that BoxedValue<T> and EnumValues<T> use the same.
        /// TypeInfo structure describing current class.
        typedef TypeInfo::BoxedValue<T> ThisTypeInfo;
        
        RTTI_INFO_CUSTOM(System::BoxedValue<T>, System::BaseTypesInfo<System::Object>);
        
        friend class System::Nullable<T>;

    public:
        /// Constructs an object that represents the specified value boxed.
        /// @param value The value to be boxed
        BoxedValue(const T& value)
          : m_original_typeid_hash( typeid(T).hash_code() )
          , m_value_holder(value)
        {
            static_assert(System::IsBoxable<T>::value,
                "Only arithmetic, enums and specified in IsBoxable<> types are supported, use specializations to extend");
        }

        /// Unboxes the value represented by the current object.
        /// @returns The unboxed value
        const T& unbox() const
        {
            return m_value_holder;
        }

        /// Determines if the type of the boxed value represented by the current object
        /// is @p V.
        /// @returns True if the type of the boxed value represented by the current object is @p V, otherwise - false
        /// @tparam V The type that is comared with the type of boxed value represented by the current object
        template<class V>
        bool is() const
        {
            return typeid(V).hash_code() == m_original_typeid_hash;
        }

        /// Determines the equality of the boxed values represented by the current and specified objects.
        /// @param obj The object that represent the boxed value to be compared with the boxed value represented by the current object
        /// @returns True if the boxed value represented by the current object and @p obj are equal, otherwise - false
        bool Equals(ptr obj) override
        {
            if( !obj || !obj->Is(Type()) )
                return false;

            auto boxed = StaticCast< BoxedValue<T> >(obj);
            return BoxedValueDetail::Equals(m_value_holder, boxed->m_value_holder);
        }

        /// Returns a hash code for the current object.
        int GetHashCode() const override
        {
            return System::GetHashCode<T>(m_value_holder);
        }

        /// Converts boxed value represented by current object to string
        /// @returns String representation of the boxed value represented by current object
        String ToString() ASPOSE_CONST override
        {
            return ToStringHelper(m_value_holder);
        }

        /// Determines if current object represents a boxed value of enum type
        /// @returns Always false
        bool IsBoxedEnum() override
        {
            return false;
        }

        /// Always returns 0.
        uint64_t GetUnsignedLongLongValue() override
        {
            return 0;
        }

        /// Returns the value representing the type of the boxed value represented by the current object.
        /// @returns Value of TypeCode enum representing the type of the boxed value represented by the current object
        TypeCode GetTypeCode() const override
        {
            return TypeCodeHelper::GetTypeCodeFor<T>();
        }

    private:

    //  Do not make m_original_typeid_hash public!
    //  The particular values returned by typeid(T).hash_code() are implementation-defined and may vary between executions of the same program
        /// The typeid hash representing the type of the boxed value represented by the current object.
        size_t m_original_typeid_hash;

        /// The boxed value represented by the current object.
        T m_value_holder;

        /// Converts values of enum types and arithmetic types to string.
        /// @param value Value to convert to string
        /// @returns String representation of the specified value
        template<class C>
        static typename std::enable_if<
                std::is_arithmetic<C>::value || std::is_enum<C>::value, String>::type
        ToStringHelper(const C& value)
        {
            return String::Format(u"{0}", value);
        }

        /// Converts objects that are not instances of SmartPtr<C> to string.
        /// @param obj Object to convert to string
        /// @returns String representation of the specified object
        template<typename C>
        static typename std::enable_if<
            (!std::is_arithmetic<C>::value && !std::is_enum<C>::value && !IsSmartPtr<C>::value), String>::type
        ToStringHelper(ASPOSE_CONST C& obj)
        {
            return obj.ToString();
        }

        /// Converts objects pointed to by SmartPtr<C> to string.
        /// @param obj SmartPtr pointing to an object to convert to string
        /// @returns String representation of the object pointed to by obj
        template<typename C>
        static typename std::enable_if<
            IsSmartPtr<C>::value, String>::type
        ToStringHelper(ASPOSE_CONST C& obj)
        {
            return obj->ToString();
        }

        /// Converts values of bool type to string.
        /// @param b Value to convert to string
        /// @returns String representation of the specified value
        static String ToStringHelper(bool b)
        {
            return b ? u"True" : u"False";
        }
    };

    /// BoxedValue class implementation. Allows it BoxingValue specializations to be declared without duplicating common code.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    template <class T>
    class DefaultBoxedValue : public Object
    {
        RTTI_INFO_TEMPLATE_CLASS(System::BoxedValue<T>, System::BaseTypesInfo<System::Object>)
    public:
        /// Constructs a new instance of DefaultBoxedValue class that represents
        /// the specified value.
        /// @param value The value to box
        DefaultBoxedValue(const T& value)
            : m_original_typeid_hash(typeid(T).hash_code())
            , m_value_holder(value)
        {
        }

        /// Unboxes the boxed value.
        /// @returns A constant reference to the boxed value represented by the current object.
        const T& unbox() const
        {
            return m_value_holder;
        }

        /// Determines if the type of the boxed value represented by the current object
        /// is @p V.
        /// @returns True if the type of the boxed value represented by the current object is @p V, otherwise - false
        /// @tparam V The type that is comared with the type of boxed value represented by the current object
        template<class V>
        bool is() const
        {
            return typeid(V).hash_code() == m_original_typeid_hash;
        }

        /// Determines the equality of the boxed values represented by the current and specified objects.
        /// @param obj The object that represent the boxed value to be compared with the boxed value represented by the current object
        /// @returns True if the boxed value represented by the current object and @p obj are equal, otherwise - false
        bool Equals(ptr obj) override
        {
            if (!obj || !obj->Is(Type()))
                return false;

            auto boxed = StaticCast<BoxedValue<T>>(obj);
            return m_value_holder == boxed->unbox();
        }

        /// Returns a hash code for the current object.
        int GetHashCode() const override
        {
            return m_value_holder.GetHashCode();
        }

        /// Returns the string representation of the boxed value.
        String ToString() ASPOSE_CONST override
        {
            return m_value_holder.ToString();
        }

    private:
        //  Do not make m_original_typeid_hash public!
        //  The particular values returned by typeid(T).hash_code() are implementation-defined and may vary between executions of the same program
        /// The typeid hash representing the type of the boxed value represented by the current object.
        size_t m_original_typeid_hash;
        /// The boxed value.
        T m_value_holder;
    };

    /// A template predicate the specifed type is BoxedValue class.
    /// @tparam T The type to check
    template <typename T>
    struct IsBoxedValue : std::false_type {};

    /// A template predicate the specifed type @p T is BoxedValue class.
    /// @tparam T The type to check
    template <typename T>
    struct IsBoxedValue<BoxedValue<T>> : std::true_type {};

} // namespace System

#endif // _aspose_system_boxed_value_h_
