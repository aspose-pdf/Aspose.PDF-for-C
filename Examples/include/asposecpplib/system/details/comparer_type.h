#ifndef _aspose_system_details_comparer_type_h
#define _aspose_system_details_comparer_type_h


#include "system/icomparable.h"
#include "system/shared_ptr.h"
#include <type_traits>


namespace System {
namespace Collections {
namespace Generic {
namespace Details {


    template <typename T>
    struct ComparerType
    {
        template <typename Q>
        typename std::enable_if<std::is_base_of<System::IComparable<Q>, Q>::value, bool>::type operator () (const Q &a, const Q &b)
        {
            return a.CompareTo(b) < 0;
        }
        template <typename Q>
        typename std::enable_if<!std::is_base_of<System::IComparable<Q>, Q>::value, bool>::type operator () (const Q &a, const Q &b)
        {
            return a < b;
        }
    };

    template <typename T>
    struct ComparerType<SharedPtr<T>>
    {
        template <typename Q>
        typename std::enable_if<std::is_base_of<System::IComparable<System::SharedPtr<Q>>, Q>::value, bool>::type operator () (const System::SharedPtr<Q> &a, const System::SharedPtr<Q> &b)
        {
            return a->CompareTo(b) < 0;
        }
        template <typename Q>
        typename std::enable_if<!std::is_base_of<System::IComparable<System::SharedPtr<Q>>, Q>::value, bool>::type operator () (const System::SharedPtr<Q> &a, const System::SharedPtr<Q> &b)
        {
            return a < b;
        }
    };

} //namespace Details
} //namespace Generic
} //namespace Collections
} //namespace System


#endif //_aspose_system_details_comparer_type_h
