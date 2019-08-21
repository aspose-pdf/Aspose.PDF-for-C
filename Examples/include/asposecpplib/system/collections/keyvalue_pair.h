/// @file system/collections/keyvalue_pair.h
#ifndef _KeyValuePair_h_
#define _KeyValuePair_h_

#include "system/get_hash_code.h"
#include <system/boxed_value.h>

#include <utility>

namespace System {
namespace Collections {
namespace Generic {

/// Pair of key and value.
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
/// @param TKey Key type.
/// @param TValue Value type.
template<typename TKey, typename TValue>
class KeyValuePair
{
public:
    /// Internal data structure.
    std::pair<TKey, TValue> m_pair;

    /// Null key-value pair initializer.
    KeyValuePair() {}
    /// Constructor.
    /// @param key Key.
    /// @param value Value.
    KeyValuePair(const TKey& key, const TValue& value) : m_pair(key, value) {}
    /// Type conversion constructor.
    /// @tparam OtherK Other key type.
    /// @tparam OtherV Other value type.
    /// @param pair Pair value.
    template <typename OtherK, typename OtherV>
    KeyValuePair(const std::pair<OtherK, OtherV>& pair) : m_pair(pair) {}

    /// Gets key.
    /// @return Const reference to key.
    const TKey& get_Key() const { return m_pair.first; }
    /// Gets value.
    /// @return Const reference to value.
    const TValue& get_Value() const { return m_pair.second; }

    /// Always returns false.
    bool IsNull() const { return false; }
    
    /// Patch for classes inherited from IComparer<KeyValuePair<TKey, TValue>>, doesn't compare anything.
    /// @param kvp Dummy argument.
    /// @return Always returns false.
    bool operator < (const KeyValuePair& kvp) const
    {
        return false;
    }
    /// Converts key-value pair to string.
    /// @return String representation of key-value type.
    String ToString() const
    {
        return u"[" + ToStringHelper(get_Key()) + u", " + ToStringHelper(get_Value()) + u"]";
    }
    /// Calculates key-value pair hash by xoring key's and value's hashes.
    /// @return Resulting hash value.
    int GetHashCode() const
    {
        return (System::GetHashCode(get_Key()) ^ System::GetHashCode(get_Value()));
    }

private:
    /// Converts numeric key or value to string.
    /// @tparam C Argument type.
    /// @param value Item to convert.
    /// @return String representation of specified numeric value.
    template<class C>
    static typename std::enable_if<std::is_arithmetic<C>::value || std::is_enum<C>::value, String>::type
    ToStringHelper(const C& value)
    {
        return String::Format(u"{0}", value);
    }
    /// Converts value type object key or value to string.
    /// @tparam C Argument type.
    /// @param obj Item to convert.
    /// @return String representation of specified object.
    template<typename C>
    static typename std::enable_if<(!std::is_arithmetic<C>::value && !std::is_enum<C>::value && !IsSmartPtr<C>::value), String>::type
    ToStringHelper(const C& obj)
    {
        return obj.ToString();
    }
    /// Converts pointer type object key or value to string.
    /// @tparam C Argument type.
    /// @param obj Item to convert.
    /// @return String representation of specified object.
    template<typename C>
    static typename std::enable_if<IsSmartPtr<C>::value, String>::type
    ToStringHelper(const C& obj)
    {
        return obj->ToString();
    }
    /// Optimization for string to string conversion.
    /// @param s String to convert to string.
    /// @return Unchanged @p s value.
    static String ToStringHelper(const String& s)
    {
        return s;
    }

};

/// Compares two key-value pairs using 'equals' semantics. Uses operator == or EqualsTo method for both keys and values, whichever is defined.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
/// @param left LHS operand.
/// @param right RHS operand.
/// @return True if both keys and values match, false otherwise.
template<typename TKey, typename TValue>
bool operator==(const KeyValuePair<TKey,TValue>& left, const KeyValuePair<TKey,TValue>& right)
{
    return System::Details::AreEqual(left.get_Key(), right.get_Key()) && System::Details::AreEqual(left.get_Value(), right.get_Value());
}

/// Compares two key-value pairs using inverse 'equals' semantics.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
/// @param left LHS operand.
/// @param right RHS operand.
/// @return True if both keys and values don't match, false otherwise.
template<typename TKey, typename TValue>
bool operator!=(const KeyValuePair<TKey,TValue>& left, const KeyValuePair<TKey,TValue>& right)
{
    return ! (left == right);
}


} // namespace Generic
} // namespace Collections
} // namespace System


namespace System
{

/// Marks KeyValuePair as boxable type.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
template<typename TKey, typename TValue> struct IsBoxable<Collections::Generic::KeyValuePair<TKey, TValue>> : std::true_type {};

/// BoxedValue implementation for KeyValueType.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
template<typename TKey, typename TValue>
class BoxedValue<System::Collections::Generic::KeyValuePair<TKey, TValue>> : public DefaultBoxedValue<System::Collections::Generic::KeyValuePair<TKey, TValue>>
{
public:
    /// Boxing constructor.
    /// @param value Key-value pair to box.
    BoxedValue(const System::Collections::Generic::KeyValuePair<TKey, TValue>& value)
        : DefaultBoxedValue<System::Collections::Generic::KeyValuePair<TKey, TValue>>(value)
    {}
};

}

namespace std{

/// Hashing algorithm for KeyValuePair; xors individual hashes calculated for key and value.
/// @tparam TKey Key type.
/// @tparam TValue Value type.
template<typename TKey, typename TValue>
struct hash<System::Collections::Generic::KeyValuePair<TKey, TValue> >
{
    /// Actual hash function.
    /// @param kvp Key-value pair to calculate hash for.
    /// @return Joint hash value.
    std::size_t operator()(const System::Collections::Generic::KeyValuePair<TKey, TValue> & kvp) const
    {
        return (System::GetHashCode(kvp.get_Key()) ^ System::GetHashCode(kvp.get_Value()));
    }
};

}

#endif // _KeyValuePair_h_
