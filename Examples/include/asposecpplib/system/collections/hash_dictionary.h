#ifndef _HashDictionary_h_
#define _HashDictionary_h_

namespace System {
namespace Collections {
namespace Generic {

template<typename T, typename T2>
class HashDictionary {
    enum dummy {};
public:
    T2 operator[](const T &key) const { return T2(); }
};

}}}

#endif
