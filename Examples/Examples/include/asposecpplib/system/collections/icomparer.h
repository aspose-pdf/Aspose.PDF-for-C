/// @file system/collections/icomparer.h
#ifndef _IComparer_h_
#define _IComparer_h_

#include <detail.h>
#include <system/object.h>
#include <defines.h>

namespace System {
namespace Collections {
namespace Generic {

/// Interface that compares two objects in greater-equal-less sense.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @param T Type being compared.
template<typename T>
class IComparer : virtual public Object
{
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(System::Collections::Generic::IComparer<T>, System::BaseTypesInfo<System::Object>);
public:

#ifdef ASPOSE_COMPARE_BY_REF
    /// Comparison argument type
    typedef const T& args_type;
#else
    /// Comparison argument type
    typedef T args_type;
#endif
    /// Comparison function.
    /// @param x First object to compare.
    /// @param y Second object to compare.
    /// @return Negative value if @p x is less than @p y; zero if they are equal; positive value if @p x is greater than @p y.
    virtual int Compare(args_type x, args_type y) ASPOSE_CONST = 0;
};

/// Adapter to use IComparer within STL environment.
/// Uses IComparer if set; otherwise, uses operator < (if available) or returns false (if not).
/// @tparam T Type being compared.
template<class T>
struct ComparerAdapter
{
    /// Constructs adapter without any comparator available.
    ComparerAdapter()
    {}
    /// Constructs adapter.
    /// @param comparator Comparator object to use.
    ComparerAdapter(const SharedPtr<System::Collections::Generic::IComparer<T> >& comparator)
        : m_comparator(comparator)
    {}

    /// Sets comparator object.
    /// @param comparator Comparator to use.
    void set_Comparator(const SharedPtr<IComparer<T> >& comparator)
    {
        m_comparator = comparator;
    }

    /// Comparison function for types with operator < available.
    /// @tparam Q Type being compared; template for type conversion availability.
    /// @param x First value to compare.
    /// @param y Second value to compare.
    /// @return True if @p x is considered less than @p y, false otherwise.
    template <typename Q = T>
    typename std::enable_if<detail::has_operator_less<Q>::value, bool>::type operator()(const Q &x, const Q &y) const
    {
        // should be "<" operation !!! Not "<="
        return m_comparator ? m_comparator->Compare(x, y) < 0 : (x < y);
    }

    /// Comparison function for types with operator < not available.
    /// @tparam Q Type being compared; template for type conversion availability.
    /// @param x First value to compare.
    /// @param y Second value to compare.
    /// @return True if comparator is set and @p x is considered less than @p y, false otherwise.
    template <typename Q = T>
    typename std::enable_if<!detail::has_operator_less<Q>::value, bool>::type operator()(const Q &x, const Q &y) const
    {
        return m_comparator ? m_comparator->Compare(x, y) < 0 : false;
    }

private:
    /// Comparator to use.
    SharedPtr<System::Collections::Generic::IComparer<T> > m_comparator;
};
    
/// Default comparator class.
/// Uses operator < and operator == to compare values.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
/// @tparam T Type being compared.
template<class T>
class DefaultComparer : public IComparer<T>
{
public:
    /// Interface implemented.
    using BaseType = IComparer<T>;
    /// Curent type.
    using ThisType = DefaultComparer<T>;

private:
    /// RTTI information.
    RTTI_INFO_TEMPLATE_CLASS(ThisType, System::BaseTypesInfo<BaseType>);

public:
    /// Actual data comparison.
    /// @param x LHS operand.
    /// @param y RHS operand.
    /// @return Negative value if @p x is less than @p y, 0 if operands are equal and positive value otherwise.
    virtual int Compare(typename ThisType::args_type x, typename ThisType::args_type y) ASPOSE_CONST OVERRIDE
    {
        if (x == y)
            return 0;

        if (x < y)
            return -1;

        return 1;
    }
};

}}}

#endif
