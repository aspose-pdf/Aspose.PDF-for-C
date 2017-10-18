#ifndef _aspose_system_details_is_defined_h_
#define _aspose_system_details_is_defined_h_

#include <type_traits>

namespace System { namespace Details {

template <class T, typename = void>
struct IsDefined : std::false_type
{
};

template <class T>
struct IsDefined<T, typename std::enable_if<std::is_object<T>::value &&
                                            !std::is_pointer<T>::value &&
                                            (sizeof(T) > 0)>::type > : std::true_type
{
};

}} // namespace System::Details

#endif // _aspose_system_details_is_defined_h_
