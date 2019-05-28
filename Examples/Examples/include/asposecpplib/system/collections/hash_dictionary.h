/// @file system/collections/hash_dictionary.h
#ifndef _HashDictionary_h_
#define _HashDictionary_h_

namespace System {
namespace Collections {
namespace Generic {

/// Stub for HashDictionary class (not implemented currently).
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @param T Key type.
/// @param T2 Value type.
template<typename T, typename T2>
class HashDictionary {
    /// Dummy enum.
    enum dummy {};
public:
    /// Accessor method stub.
    /// @param key Dictionary key; ignored.
    /// @return Dummy value.
    T2 operator[](const T &key) const { return T2(); }
};

}}}

#endif
