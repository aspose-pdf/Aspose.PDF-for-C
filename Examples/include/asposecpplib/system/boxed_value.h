#ifndef _aspose_system_boxed_value_h_
#define _aspose_system_boxed_value_h_

#include <fwd.h>
#include <system/get_hash_code.h>
#include <system/object.h>
#include <system/timespan.h>
#include <system/decimal.h>
#include <system/guid.h>
#include <system/value_type.h>
#include <system/exception.h>
#include <system/type_code.h>

#include <typeinfo>
#include <type_traits>

namespace System
{
    template <typename T>
    struct IsBoxable : std::integral_constant<bool,
        std::is_arithmetic<T>::value || std::is_enum<T>::value || IsException<T>::value> {};

    class DateTime;

    template<> struct IsBoxable<String> : std::true_type {};
    template<> struct IsBoxable<DateTime> : std::true_type {};
    template<> struct IsBoxable<TimeSpan> : std::true_type {};
    template<> struct IsBoxable<Decimal> : std::true_type {};
    template<> struct IsBoxable<Guid> : std::true_type {};
    template<> struct IsBoxable<ValueType> : std::true_type {};

    template <typename T> class Nullable;
    template <typename T>
    struct IsBoxable<Nullable<T>> : std::true_type {};

    namespace BoxedValueDetail
    {
        // Although two floating point NaNs are defined by IEC 60559:1989 to always compare as unequal, the contract for System.Object.Equals,
        // requires that overrides must satisfy the requirements for an equivalence operator. Therefore, System.Double.Equals and System.Single.Equals
        // return True when comparing two NaNs, while the equality operator returns False in that case, as required by the standard.
        template<typename T1, typename T2>
        inline bool Equals(T1 value1, T2 value2)
        {
            return value1 == value2;
        }
        template<>
        inline bool Equals<float, float>(float value1, float value2)
        {
            return (std::isnan(value1) && std::isnan(value2)) ? true : value1 == value2;
        }
        template<>
        inline bool Equals<double, double>(double value1, double value2)
        {
            return (std::isnan(value1) && std::isnan(value2)) ? true : value1 == value2;
        }
    }

    class BoxedValueBase : public Object
    {
        RTTI_INFO(System::BoxedValueBase, ::System::BaseTypesInfo<System::Object>);

    public:
        virtual bool IsBoxedEnum() = 0;
        virtual uint64_t GetUnsignedLongLongValue() = 0;

        virtual TypeCode GetTypeCode() const = 0;

        // Parsing enums
        static SharedPtr<Object> Parse(const TypeInfo& type, const String& str, bool ignoreCase);
        static SharedPtr<Object> Parse(const TypeInfo& type, const String& str);
    };

    namespace TypeCodeHelper
    {
        template<typename T>
        TypeCode GetTypeCodeFor()
        {
            return TypeCode::Object;
        }

        template<> inline TypeCode GetTypeCodeFor<bool>() { return TypeCode::Boolean; }
        template<> inline TypeCode GetTypeCodeFor<wchar_t>() { return TypeCode::Char; }
        template<> inline TypeCode GetTypeCodeFor<int8_t>() { return TypeCode::SByte; }
        template<> inline TypeCode GetTypeCodeFor<uint8_t>() { return TypeCode::Byte; }
        template<> inline TypeCode GetTypeCodeFor<int16_t>() { return TypeCode::Int16; }
        template<> inline TypeCode GetTypeCodeFor<uint16_t>() { return TypeCode::UInt16; }
        template<> inline TypeCode GetTypeCodeFor<int32_t>() { return TypeCode::Int32; }
        template<> inline TypeCode GetTypeCodeFor<uint32_t>() { return TypeCode::UInt32; }
        template<> inline TypeCode GetTypeCodeFor<int64_t>() { return TypeCode::Int64; }
        template<> inline TypeCode GetTypeCodeFor<uint64_t>() { return TypeCode::UInt64; }
        template<> inline TypeCode GetTypeCodeFor<float>() { return TypeCode::Single; }
        template<> inline TypeCode GetTypeCodeFor<double>() { return TypeCode::Double; }
        template<> inline TypeCode GetTypeCodeFor<Decimal>() { return TypeCode::Decimal; }
        template<> inline TypeCode GetTypeCodeFor<DateTime>() { return TypeCode::DateTime; }
        template<> inline TypeCode GetTypeCodeFor<String>() { return TypeCode::String; }
    }

    template<class T>
    class BoxedValue : public BoxedValueBase
    {
        // BoxedValue now takes TypeInfo from TypeInfo. It is required that BoxedValue<T> and EnumValues<T> use the same.
        typedef TypeInfo::BoxedValue<T> ThisTypeInfo;
        RTTI_INFO_CUSTOM(System::BoxedValue<T>, System::BaseTypesInfo<System::Object>);

        friend class System::Nullable<T>;

    public:
        BoxedValue(const T& value)
          : m_original_typeid_hash( typeid(T).hash_code() )
          , m_value_holder(value)
        {
            static_assert(System::IsBoxable<T>::value,
                "Only arithmetic, enums and specified in IsBoxable<> types are supported, use specializations to extend");
        }

        const T& unbox() const
        {
            return m_value_holder;
        }

        template<class V>
        bool is() const
        {
            return typeid(V).hash_code() == m_original_typeid_hash;
        }

        bool Equals(ptr obj) override
        {
            if( !obj || !obj->Is(Type()) )
                return false;

            auto boxed = StaticCast< BoxedValue<T> >(obj);
            return BoxedValueDetail::Equals(m_value_holder, boxed->m_value_holder);
        }

        int GetHashCode() const override
        {
            return System::GetHashCode<T>(m_value_holder);
        }

        String ToString() ASPOSE_CONST override
        {
            return ToStringHelper(m_value_holder);
        }

        bool IsBoxedEnum() override
        {
            return false;
        }

        uint64_t GetUnsignedLongLongValue()
        {
            return 0;
        }

        TypeCode GetTypeCode() const override
        {
            return TypeCodeHelper::GetTypeCodeFor<T>();
        }

    private:

    //  Do not make m_original_typeid_hash public!
    //  The particular values returned by typeid(T).hash_code() are implementation-defined and may vary between executions of the same program
        size_t m_original_typeid_hash;
        T m_value_holder;

        template<class C>
        static typename std::enable_if<
                std::is_arithmetic<C>::value || std::is_enum<C>::value, String>::type
        ToStringHelper(const C& value)
        {
            return String::Format(L"{0}", value);
        }

        template<typename C>
        static typename std::enable_if<
            (!std::is_arithmetic<C>::value && !std::is_enum<C>::value && !std::is_base_of<ObjectHolder, C>::value), String>::type
        ToStringHelper(ASPOSE_CONST C& obj)
        {
            return obj.ToString();
        }

        template<typename C>
        static typename std::enable_if<
            std::is_base_of<ObjectHolder, C>::value, String>::type
        ToStringHelper(ASPOSE_CONST C& obj)
        {
            return obj->ToString();
        }

        static String ToStringHelper(bool b)
        {
            return b ? L"True" : L"False";
        }
    };


    template <class T>
    class DefaultBoxedValue : public Object
    {
        RTTI_INFO_TEMPLATE_CLASS(System::BoxedValue<T>, System::BaseTypesInfo<System::Object>)
    public:
        DefaultBoxedValue(const T& value)
            : m_original_typeid_hash(typeid(T).hash_code())
            , m_value_holder(value)
        {
        }

        const T& unbox() const
        {
            return m_value_holder;
        }

        template<class V>
        bool is() const
        {
            return typeid(V).hash_code() == m_original_typeid_hash;
        }

        bool Equals(ptr obj) override
        {
            if (!obj || !obj->Is(Type()))
                return false;

            auto boxed = StaticCast<BoxedValue<T>>(obj);
            return m_value_holder == boxed->unbox();
        }

        int GetHashCode() const override
        {
            return m_value_holder.GetHashCode();
        }

        String ToString() ASPOSE_CONST override
        {
            return m_value_holder.ToString();
        }

    private:
        //  Do not make m_original_typeid_hash public!
        //  The particular values returned by typeid(T).hash_code() are implementation-defined and may vary between executions of the same program
        size_t m_original_typeid_hash;
        T m_value_holder;
    };


    template <typename T>
    struct IsBoxedValue : std::false_type {};

    template <typename T>
    struct IsBoxedValue<BoxedValue<T>> : std::true_type {};

} // namespace System

#endif // _aspose_system_boxed_value_h_
