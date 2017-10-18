#ifndef _aspose_system_comparison_h_
#define _aspose_system_comparison_h_

#include "system/multicast_delegate.h"

namespace System {
template<typename T>
class Comparison : public System::MulticastDelegate<int(T, T)>
{
public:
    template<typename Y>
    Comparison(Y arg) : System::MulticastDelegate<int(T, T)>(arg) { }
    bool operator()(T a, T b) { return this->emit(a, b) < 0; }
};
}

#endif