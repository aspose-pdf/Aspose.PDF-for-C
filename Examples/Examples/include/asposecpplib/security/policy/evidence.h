/// @file security/policy/evidence.h
#ifndef evidence_h
#define evidence_h

#include "system/object.h"

namespace System{ namespace Security{ namespace Policy{

/// Stub class for ported code that uses Evidence class to compile.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Evidence FINAL: public System::Object // public ICollection, public IEnumerable
{};

}}} // namespace System{ namespace Security{ namespace Policy{

#endif // evidence_h
