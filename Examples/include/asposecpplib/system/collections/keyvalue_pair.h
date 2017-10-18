#ifndef _KeyValuePair_h_
#define _KeyValuePair_h_

#include "system/get_hash_code.h"
#include <system/boxed_value.h>

#include <utility>

namespace System {
namespace Collections {
namespace Generic {

    template<typename TKey, typename TValue>
    class KeyValuePair
    {
    public:

        std::pair<TKey, TValue> m_pair;

        KeyValuePair() : m_is_null(true) {}
        KeyValuePair(const TKey& key, const TValue& value) : m_pair(key, value), m_is_null(false)  {}

        template <typename OtherK, typename OtherV>
        KeyValuePair(const std::pair<OtherK, OtherV>& pair) : m_pair(pair), m_is_null(false) {}

        const TKey& get_Key() const { return m_pair.first; }
        const TValue& get_Value() const { return m_pair.second; }

        operator bool()
        {
            return m_is_null;
        }

        const bool operator<(const KeyValuePair& kvp) const  //Patch for classes inherited from IComparer<KeyValuePair<TKey, TValue>>
        {
            return false;
        }

        String ToString() const
        {
            return L"[" + ToStringHelper(get_Key()) + L", " + ToStringHelper(get_Value()) + L"]";
        }

        int GetHashCode() const
        {
            return (System::GetHashCode(get_Key()) ^ System::GetHashCode(get_Value()));
        }

    private:
        template<class C>
        static typename std::enable_if<std::is_arithmetic<C>::value || std::is_enum<C>::value, String>::type
        ToStringHelper(const C& value)
        {
            return String::Format(L"{0}", value);
        }
        template<typename C>
        static typename std::enable_if<(!std::is_arithmetic<C>::value && !std::is_enum<C>::value && !std::is_base_of<ObjectHolder, C>::value), String>::type
        ToStringHelper(const C& obj)
        {
            return obj.ToString();
        }
        template<typename C>
        static typename std::enable_if<std::is_base_of<ObjectHolder, C>::value, String>::type
        ToStringHelper(const C& obj)
        {
            return obj->ToString();
        }
        static String ToStringHelper(const String& s)
        {
            return s;
        }

        bool m_is_null;
    };

    template<typename TKey, typename TValue>
    bool inline operator==(const KeyValuePair<TKey,TValue>& left, const KeyValuePair<TKey,TValue>& right)
    {
        return left.get_Key() == right.get_Key() && left.get_Value() == right.get_Value();
    }


} // namespace Generic
} // namespace Collections
} // namespace System


namespace System
{
    template<typename TKey, typename TValue>
    class BoxedValue<System::Collections::Generic::KeyValuePair<TKey, TValue>> : public DefaultBoxedValue<System::Collections::Generic::KeyValuePair<TKey, TValue>>
    {
    public:
        BoxedValue(const System::Collections::Generic::KeyValuePair<TKey, TValue>& value)
            : DefaultBoxedValue<System::Collections::Generic::KeyValuePair<TKey, TValue>>(value)
        {}
    };
}

namespace std{
    template<typename TKey, typename TValue>
    struct hash<System::Collections::Generic::KeyValuePair<TKey, TValue> >
    {
        std::size_t operator()(const System::Collections::Generic::KeyValuePair<TKey, TValue> & kvp) const
        {
            return (System::GetHashCode(kvp.get_Key()) ^ System::GetHashCode(kvp.get_Value()));
        }
    };
}

#endif // _KeyValuePair_h_
