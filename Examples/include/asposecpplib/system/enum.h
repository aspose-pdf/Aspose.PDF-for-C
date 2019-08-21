/// @file system/enum.h
/// Contains the definition of System::Enum class and related classes.
#ifndef _aspose_system_enum_h_
#define _aspose_system_enum_h_
#include <type_traits>
#include <system/string.h>
#include <system/array.h>
#include <system/exceptions.h>
#include <system/type_info.h>
#include <system/boxed_enum.h>

#include <unordered_map>
#include <string>
#include <cctype>

template<class T>
struct EnumMetaInfo; // declared out of System namespace

namespace System
{
    template<class E, class G>
    struct Enum;

    /// Helper class that provides functionality of geting the strting name of enum constant.
    /// @tparam E The type of the enum with which the class' methods operate
    /// @tparam G Not used
    /// @tparam Guard Not used
    template <class E, class G, class Guard = void>
    struct EnumGetNameHelper
    {
        /// Returns the string name of the specified enum constant value.
        /// @param value The enum constant value whose string name is to be obained
        /// @returns A string name of the specified enum constant value
        /// @tparam T The type of enum values that are accepted by the method; @p T must be convertible to @p E
        template<class T>
        static String GetName(T value)
        {
            const auto& values = EnumMetaInfo<E>::values();
            for (auto val : values)
            {
                if (static_cast<E>(value) == val.first)
                    return String(val.second);
            }

            return String();
        }
    };

    /// Specialization for @p Guard = EnumMetaInfo<E>::Flags
    template <class E, class G>
    struct EnumGetNameHelper<E, G, typename EnumMetaInfo<E>::Flags>
    {
        /// Returns the string name of the specified enum constant value.
        /// @param value The enum constant value whose string name is to be obained
        /// @returns A string name of the specified enum constant value
        /// @tparam T The type of enum values that are accepted by the method; @p T must be convertible to @p E
        template<class T>
        static String GetName(T value)
        {
            using UnderlyingType = typename std::underlying_type<E>::type;
            // If you got error here it means that enum E was translated without metainformation
            // Add [CsToCppPorter.CppEnumEnableMetadata] attribute to fix the problem.
            String result;
            const auto& values = EnumMetaInfo<E>::values();
            bool first = true;
            for (auto val : values)
            {
                if (static_cast<UnderlyingType>(val.first))
                {
                    if (static_cast<E>(value) == val.first)
                        return val.second;

                    if (Enum<E,G>::HasFlag(static_cast<E>(value), val.first))
                    {
                        if (!first)
                        {
                            result += u", ";
                        }
                        else
                        {
                            first = false;
                        }
                        result += val.second;
                    }
                } 
                else if (!static_cast<UnderlyingType>(value)) 
                {
                    return val.second;
                }
            }
            return result;
        }
    };

    /// Helper class that provides functionality of converting a string representation of enum consnant into equivalent enum value.
    /// @tparam E The type of the enum with which the class' methods operate
    /// @tparam G Second formal argument of System::Enum to use.
    /// @tparam Guard Formal template argument to select parsing algorithm available.
    template <class E, class G, class Guard = void>
    struct EnumParseHelper {
        /// Converts the specfied string into equivalent enum constant value.
        /// @param str String that is interpreted as containing the name of enum constant
        /// @param ignoreCase Specifies if the case should be ignored when interpreting the string
        /// @returns The enumeration constant whose name is specified in @p str
        /// @throws ArgumentException If the enum constant with name specifed in @p str was not found aboung the members of enum @p E.
        static E Parse(const String& str, bool ignoreCase = false)
        {
            E result;
            if (!Enum<E,G>::TryParse(str, result, ignoreCase))
                throw ArgumentException(String::Format(u"Requested value '{0}' was not found.", str));

            return result;
        }
    };

    /// Specialization for @p Guard = EnumMetaInfo<E>::Flags
    template <class E, class G>
    struct EnumParseHelper<E, G, typename EnumMetaInfo<E>::Flags>{
        /// Converts the specfied string into equivalent enum constant value.
        /// @param str String that is interpreted as containing the name of enum constant
        /// @param ignoreCase Specifies if the case should be ignored when interpreting the string
        /// @returns The enumeration constant whose name is specified in @p str
        /// @throws ArgumentException If the enum constant with name specifed in @p str was not found aboung the members of enum @p E.
        static E Parse(const String& str, bool ignoreCase = false)
        {
            E result = (E)0;
            const auto& vals = str.Split(u',');
            for (int i = 0; i < vals->get_Count(); ++i)
            {
                E val;
                if (!Enum<E, G>::TryParse(vals[i].Trim(), val, ignoreCase))
                {
                    if (vals->get_Count() == 1)
                    {
                        std::string s = vals[0].ToAsciiString();
                        if (!s.empty() && std::all_of(s.begin(), s.end(), ::isdigit))
                            return (E)std::stoi(s);
                    }
                    throw ArgumentException(String::Format(u"Requested value '{0}' was not found.", str));
                }
                result = result | val;
            }
            return result;
        }
    };

    /// Provides methods that perform some operations on values of enum type.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    /// @tparam E The type of enum on values of which the class handles
    /// @tparam Guard Service type argument whose purpose is to ensure that @p E is enumerable type
    template<class E, class Guard = typename std::enable_if<std::is_enum<E>::value>::type>
    struct Enum
    {
        /// Alias for the enum's underlying type.
        using UnderlyingType = typename std::underlying_type<E>::type;

        /// Determines if the specified bits are set in a bitary representation of the specified enum value.
        /// @param value The enum value to test
        /// @param mask The mask to check value's bits against
        /// @returns True if bits that are set in @p mask are also set in @p value, otherwise - false
        static bool HasFlag(E value, E mask)
        {
            return (static_cast<UnderlyingType>(value) & static_cast<UnderlyingType>(mask)) == static_cast<UnderlyingType>(mask);
        }

        /// Determines whether the specified value is a member of enumeration type @p E.
        /// @param value The value to check
        /// @returns True if @p value is a member of enumeration @p E, otherwise - false
        static bool IsDefined(E value)
        {
            const auto& values = EnumMetaInfo<E>::values();
            for( auto val : values )
            {
                if( value == val.first )
                    return true;
            }
            return false;
        }

        /// Determines whether the specified value is a member of enumeration type @p T.
        /// @param value The value to check
        /// @returns True if @p value is a member of enumeration @p T, otherwise - false 
        template<class T>
        static typename std::enable_if< std::is_convertible<T, UnderlyingType>::value, bool>::type IsDefined(T value)
        {
            return IsDefined(static_cast<E>(value));
        }

        /// Determines if the value with the specified name is among members of enum @p E.
        /// @param name The name to check
        /// @returns True if a member of enum @p E with the specified name exists.
        static bool IsDefined(const String& name)
        {
            E result;
            return TryParse(name, result);
        }

        /// Returns the name of the enumeration constant that has the specified value.
        /// @param value The value of enum constant whose name is to be returned
        /// @returns The name of the specified enum constant
        template<class T>
        static typename std::enable_if< std::is_same<T,E>::value || std::is_convertible<T, UnderlyingType>::value, String>::type GetName(T value)
        {
            // If you got error here it means that enum E was translated without metainformation
            // Add [CsToCppPorter.CppEnumEnableMetadata] attribute to fix the problem.
            return EnumGetNameHelper<E, Guard>::GetName(value);
        }

        /// Returns the name of the enumeration constant that has the specified value.
        /// @param value The value of enum constant whose name is to be returned
        /// @returns The name of the specified enum constant
        template <class T>
        static typename std::enable_if<std::is_same<T, E>::value || std::is_convertible<T, UnderlyingType>::value,  String>::type GetDescription(T value)
        {
            // If you got error here it means that enum E was translated without metainformation
            // Enable option "generate_enum_descriptions"
            // and add [CsToCppPorter.CppEnumEnableMetadata] attribute to fix the problem.
            const auto& values = EnumMetaInfo<E>::descriptions();
            for (auto val : values)
            {
                if (static_cast<E>(value) == val.first)
                    return val.second == nullptr ? String() : String(val.second);
            }
            return String();
        }

        /// Converts the specfied string into equivalent enum constant.
        /// @param str String that is interpreted as containing the name of enum constant
        /// @param ignoreCase Specifies if the case should be ignored when interpreting the string
        /// @returns The enumeration constant whose name is specified in @p str
        /// @throws ArgumentException If the enum constant with name specifed in @p str was not found aboung the members of enum @p E.
        static E Parse(const String& str, bool ignoreCase = false)
        {
            return EnumParseHelper<E, Guard>::Parse(str, ignoreCase);
        }

        /// Tries to convert the specified string into equivalent enum constant.
        /// @param str String that is interpreted as containing the name of enum constant
        /// @param result The output parameter that if conversion succeeds contains the result of conversion on function return
        /// @param ignoreCase Specifies if the case should be ignored when interpreting the string
        /// @returns True if conversion succeeded, otherwise - false
        static bool TryParse(const String& str, E& result, bool ignoreCase = false)
        {
            const auto& values = ::EnumMetaInfo<E>::values();
            for( auto val : values )
            {
                if (str.Equals(val.second, ignoreCase ? StringComparison::OrdinalIgnoreCase : StringComparison::Ordinal))
                {
                    result = val.first;
                    return true;
                }
            }

            return false;
        }
       
        /// Returns an array containing all members of enumeration @p E.
        static ArrayPtr<E> GetValues()
        {
            auto res = MakeObject<Array<E>>();
            const auto& values = ::EnumMetaInfo<E>::values();
            for( auto val : values )
            {
                res->data().push_back( val.first );
            }

            return res;
        }

        /// Returns an array containing names of all members of enumeration @p E.
        static ArrayPtr<String> GetNames()
        {
            auto res = MakeObject<Array<String>>();
            const auto& values = ::EnumMetaInfo<E>::values();
            for( auto val : values )
            {
                res->data().push_back( val.second );
            }

            return res;
        }

        /// Performs the arithmetic comparison of the values of the specified enumeration constants.
        /// @param a The first comparand
        /// @param b The second comparand
        /// @returns -1 if @p a is less than @p b; 0 if the values are equal; 1 if @p a is greater than @p b
        template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value || std::is_enum<T>::value>::type>
        static int Compare(E a, T b)
        {
            return static_cast<UnderlyingType>(a) < static_cast<UnderlyingType>(b) ? -1 :
                (static_cast<UnderlyingType>(a) > static_cast<UnderlyingType>(b) ? 1 : 0);
        }
    };

    /// A base class for a class that represents meta information of enumeration type.
    class ASPOSECPP_SHARED_CLASS EnumValuesBase
    {
    protected:
        /// Constructs an instance that represents metainformation for enum of the specified type.
        ASPOSECPP_SHARED_API EnumValuesBase(const TypeInfo &type);
        /// Destructor.
        virtual ASPOSECPP_SHARED_API ~EnumValuesBase();
        /// Returns an array containing all values of enumeration @p E.
        virtual ASPOSECPP_SHARED_API ArrayPtr<int64_t> GetValues() const = 0;
        /// Returns boxed value of the enum constant with the specified name.
        /// @param str The name of the enum constant
        /// @param ignoreCase Specifeis if the case should be ignored when interpreting the name of the enum constant
        /// @returns A boxed value of the enum constant whose name is specified in @p str.
        virtual ASPOSECPP_SHARED_API SharedPtr<Object> GetValueOf(const String& str, bool ignoreCase) const = 0;

    public:
        /// Returns an array containing all values of the specified enumeration type.
        /// @param type The TypeInfo object representing the type of the enumeration whose values to return
        /// @returns An array containing values of all enumeration constants of the enumeration type specified by @p type.
        static ASPOSECPP_SHARED_API ArrayPtr<int64_t> GetValues(const TypeInfo& type);
        /// Returns an object that represents a value of enumeration constant of the specified enumeration type with the specified name.
        /// @param type The TypeInfo object representing the type of the enumeration value to return
        /// @param str The name of the enum constant
        /// @param ignoreCase Specifeis if the case should be ignored when interpreting the name of the enum constant
        /// @returns An object that represents the value of the enum constant whose name is specified in @p str.
        static ASPOSECPP_SHARED_API SharedPtr<Object> Parse(const TypeInfo& type, const String& str, bool ignoreCase);

    private:
        /// Type to hold register "enum type name => list of named values".
        struct value_enumerators {
            /// Register 'enum type name => list of named values'.
            std::unordered_map<std::u16string, const EnumValuesBase*> m_enumerators;
        };
        /// Access function to get global register of known named enum values per enum type name.
        static value_enumerators& GetEnumerators();
    };

    /// Provides meta information about enumeration constants of enum type @p E.
    /// @tparam E The type of enumeration
    template <typename E, class Guard = typename std::enable_if<std::is_enum<E>::value>::type>
    class EnumValues : public EnumValuesBase
    {
    public:
        /// Constructs an instance.
        EnumValues() : EnumValuesBase(TypeInfo::BoxedValueType<E>()) {}
        /// Destructor.
        virtual ~EnumValues() {}
        /// Returns an array containing all values of enumeration @p E.
        virtual ArrayPtr<int64_t> GetValues() const override
        {
            auto res = MakeObject<Array<int64_t>>();
            ArrayPtr<E> values = Enum<E>::GetValues();
            for (auto v : values->data())
                res->data().push_back((int64_t)v);
            return res;
        }

        /// Returns boxed value of the enum constant with the specified name.
        /// @param str The name of the enum constant
        /// @param ignoreCase Specifeis if the case should be ignored when interpreting the name of the enum constant
        /// @returns A boxed value of the enum constant whose name is specified in @p str.
        virtual SharedPtr<Object> GetValueOf(const String& str, bool ignoreCase) const override
        {
            auto values = ::EnumMetaInfo<E>::values();
            if (ignoreCase)
            {
                auto lower = str.ToLower();
                for (auto v : values)
                    if (System::String(v.second).ToLower() == lower)
                        return MakeObject<BoxedEnum<E>>(v.first);
            }
            else
            {
                auto wcs = str.ToU16Str();
                for (auto v : values)
                    if (v.second == wcs)
                        return MakeObject<BoxedEnum<E>>(v.first);
            }
            throw System::ComponentModel::InvalidEnumArgumentException();
        }
    };

    template<class T>
    static bool IsEnumMetaInfoDefined(T value) {
        return Enum<T>::IsDefined(value);
    }

    template <class T>
    static System::String EnumGetName(T value) {
        return Enum<T>::GetName(value);
    }
} // namespace System

#endif // _aspose_system_enum_h_
