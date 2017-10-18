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

template<class T>
struct EnumMetaInfo; // declared out of System namespace

namespace System
{
    template <class E>
    bool HasFlag(E value, E mask)
    {
        using UnderlyingType = typename std::underlying_type<E>::type;
        return (static_cast<UnderlyingType>(value) & static_cast<UnderlyingType>(mask)) == static_cast<UnderlyingType>(mask);
    }

    template <class E, class Guard = void>
    struct EnumGetNameHelper
    {
        template<class T>
        static String GetName(T value)
        {
            const auto& values = EnumMetaInfo<E>::values();
            for (auto val : values)
            {
                if (static_cast<E>(value) == val.first)
                    return val.second;
            }

            return String();
        }
    };

    template <class E>
    struct EnumGetNameHelper<E, typename EnumMetaInfo<E>::Flags>
    {
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
                if (static_cast<UnderlyingType>(val.first)) {
                    if (HasFlag(static_cast<E>(value), val.first))
                    {
                        if (!first) {
                            result += L",";
                        }
                        else
                        {
                            first = false;
                        }
                        result += val.second;
                    }
                } else if (!static_cast<UnderlyingType>(value)) {
                    return val.second;
                }
            }
            return result;
        }
    };

    template<class E, class Guard = typename std::enable_if<std::is_enum<E>::value>::type>
    struct Enum
    {
        using UnderlyingType = typename std::underlying_type<E>::type;

        static bool HasFlag(E value, E mask)
        {
            return (static_cast<UnderlyingType>(value) & static_cast<UnderlyingType>(mask)) == static_cast<UnderlyingType>(mask);
        }

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

        template<class T>
        static typename std::enable_if< std::is_convertible<T, UnderlyingType>::value, bool>::type IsDefined(T value)
        {
            return IsDefined(static_cast<E>(value));
        }

        static bool IsDefined(const String& name)
        {
            E result;
            return TryParse(name, result);
        }

        template<class T>
        static typename std::enable_if< std::is_same<T,E>::value || std::is_convertible<T, UnderlyingType>::value, String>::type GetName(T value)
        {
            // If you got error here it means that enum E was translated without metainformation
            // Add [CsToCppPorter.CppEnumEnableMetadata] attribute to fix the problem.
            return EnumGetNameHelper<E>::GetName(value);
        }

        static E Parse(const String& str, bool ignoreCase = false)
        {
            E result;
            if( !TryParse(str, result, ignoreCase) )
                throw ArgumentException(String::Format(L"Requested value '{0}' was not found.", str));

            return result;
        }

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

        template <typename T, typename _ = typename std::enable_if<std::is_arithmetic<T>::value || std::is_enum<T>::value>::type>
        static int Compare(E a, T b)
        {
            return static_cast<UnderlyingType>(a) < static_cast<UnderlyingType>(b) ? -1 :
                (static_cast<UnderlyingType>(a) > static_cast<UnderlyingType>(b) ? 1 : 0);
        }
    };


    class EnumValuesBase
    {
    protected:
        EnumValuesBase(const TypeInfo &type);
        virtual ~EnumValuesBase();
        virtual ArrayPtr<int64_t> GetValues() const = 0;
        virtual SharedPtr<Object> GetValueOf(const String& str, bool ignoreCase) const = 0;

    public:
        static ArrayPtr<int64_t> GetValues(const TypeInfo& type);
        static SharedPtr<Object> Parse(const TypeInfo& type, const String& str, bool ignoreCase);

    private:
        struct value_enumerators {
            std::unordered_map<std::wstring, const EnumValuesBase*> m_enumerators;
        };
        static value_enumerators& GetEnumerators();
    };

    template <typename E, class Guard = typename std::enable_if<std::is_enum<E>::value>::type>
    class EnumValues : public EnumValuesBase
    {
    public:
        EnumValues() : EnumValuesBase(TypeInfo::BoxedValueType<E>()) {}
        virtual ~EnumValues() {}
        virtual ArrayPtr<int64_t> GetValues() const override
        {
            auto res = MakeObject<Array<int64_t>>();
            ArrayPtr<E> values = Enum<E>::GetValues();
            for (auto v : values->data())
                res->data().push_back((int64_t)v);
            return res;
        }
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
                auto wcs = str.ToWCS();
                for (auto v : values)
                    if (v.second == wcs)
                        return MakeObject<BoxedEnum<E>>(v.first);
            }
            throw System::ComponentModel::InvalidEnumArgumentException();
        }
    };

} // namespace System

#endif // _aspose_system_enum_h_
