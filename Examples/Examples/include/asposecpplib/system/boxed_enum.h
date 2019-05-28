/// @file system/boxed_enum.h
/// Contains declaration of System::BoxedEnum class.
#ifndef _aspose_system_boxed_enum_h_
#define _aspose_system_boxed_enum_h_

#include <system/boxed_value.h>
#include <system/reflection.h>
#include <system/details/is_defined.h>
#include <cstdint>

namespace System
{
    template<class T>
    static bool IsEnumMetaInfoDefined(T value);

    template <class T>
    static System::String EnumGetName(T value);

    /// Represents boxed enumeration value.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    /// @tparam E Type of the enumeration value
    /// @tparam UT The underlying type of enumeration @p E
    template<typename E, typename UT = typename std::underlying_type<E>::type>
    class BoxedEnum : public System::BoxedValue<UT>
    {
        RTTI_INFO_TEMPLATE_CLASS(BoxedEnum, System::BaseTypesInfo<System::BoxedValue<UT>>);

    public:
        /// Constructs an instance that represents the specified enumeration value.
        /// @param e Enumeration value to be boxed and represented by the constructed instance.
        BoxedEnum(E e) : System::BoxedValue<UT>(static_cast<UT>(e)) {}

        /// Determines whether the current object represents a boxed value of enum type.
        /// @returns Always true
        bool IsBoxedEnum() override
        {
            return true;
        }

        /// Converts the value of the boxed enumeration constant to 64-bit integer value.
        /// @returns 64-bit integer value equivalent to the value of enumeration constant represented by the current object
        uint64_t GetUnsignedLongLongValue() override
        {
            return static_cast<uint64_t>(System::BoxedValue<UT>::unbox());
        }

        /// Converts boxed value represented by the current object to string.
        /// @returns String representation of the boxed value
        System::String ToString() ASPOSE_CONST override
        {
            return MakeEnumString();
        }

    private:
        template<typename T = E>
        typename std::enable_if<!Details::IsDefined<EnumMetaInfo<T>>::value, System::String>::type
        MakeEnumString() ASPOSE_CONST
        {
            return String::Format(u"{0}", System::BoxedValue<UT>::unbox());
        }

        template<typename T = E>
        typename std::enable_if<Details::IsDefined<EnumMetaInfo<T>>::value, System::String>::type
        MakeEnumString() ASPOSE_CONST
        {
            const UT& underlyingValue = System::BoxedValue<UT>::unbox();
            const T& enumValue = static_cast<T>(underlyingValue);
            System::String res = EnumGetName(enumValue);
            if (System::String::IsNullOrEmpty(res))
                res = System::String::Format(u"{0}", underlyingValue);
            return res;
        }

    };
}

#endif //_aspose_system_boxed_enum_h_
