#ifndef _IComparer_h_
#define _IComparer_h_

#include <detail.h>
#include <system/object.h>
#include <defines.h>

namespace System {
namespace Collections {
namespace Generic {

    template<typename T>
    class IComparer : virtual public Object
    {
        RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::IComparer<T>, System::BaseTypesInfo<System::Object>);
    public:

#ifdef ASPOSE_COMPARE_BY_REF
        typedef const T& args_type;
#else
        typedef T args_type;
#endif
        virtual int Compare(args_type x, args_type y) ASPOSE_CONST = 0;
    };

    template<class T>
    struct ComparerAdapter
    {
        ComparerAdapter()
        {}
        ComparerAdapter(SharedPtr<System::Collections::Generic::IComparer<T> > comparator)
            : m_comparator(comparator)
        {}

        void set_Comparator(SharedPtr<IComparer<T> > comparator)
        {
            m_comparator = comparator;
        }

        template <typename Q = T>
        typename std::enable_if<detail::has_operator_less<Q>::value, bool>::type operator()(const Q &x, const Q &y) const
        {
            // should be "<" operation !!! Not "<="
            return m_comparator ? m_comparator->Compare(x, y) < 0 : (x < y);
        }

        template <typename Q = T>
        typename std::enable_if<!detail::has_operator_less<Q>::value, bool>::type operator()(const Q &x, const Q &y) const
        {
            return m_comparator ? m_comparator->Compare(x, y) < 0 : false;
        }

    private:
        SharedPtr<System::Collections::Generic::IComparer<T> > m_comparator;
    };

}}}

#endif
