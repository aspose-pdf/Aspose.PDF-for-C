/// @file system/string_comparer.h
#ifndef _string_comparer_h_
#define _string_comparer_h_
#include "system/collections/icomparer.h"
#include "system/collections/iequality_comparer.h"
#include "system/object.h"
#include "system/string.h"
#include "system/globalization/culture_info.h"
#include "defines.h"

namespace System
{

class StringComparer;
/// An alias for a shared pointer to an instance of StringComparer class.
typedef SharedPtr<StringComparer> StringComparerPtr;

/// Compares strings using different comparison modes.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS StringComparer
    : virtual public System::Object
    , public Collections::Generic::IComparer<String>
    , public Collections::Generic::IEqualityComparer<String>
{
    /// This type.
    typedef StringComparer ThisType;
    /// Base type.
    typedef System::Object BaseType;

    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

#ifdef ASPOSE_COMPARE_BY_REF
    /// Argument type.
    typedef const String& args_type;
#else
    /// Argument type.
    typedef String args_type;
#endif

    /// Ordinal comparer singleton.
    /// @return Pointer to ordinal comparer.
    static ASPOSECPP_SHARED_API StringComparerPtr get_Ordinal();
    /// Ordinal case-ignoring comparer singleton.
    /// @return Pointer to ordinal case-ignoring comparer.
    static ASPOSECPP_SHARED_API StringComparerPtr get_OrdinalIgnoreCase();

    /// Invariant culture comparer singleton.
    /// @return Pointer to invariant culture comparer.
    static ASPOSECPP_SHARED_API StringComparerPtr get_InvariantCulture();
    /// Invariant culture case-ignoring comparer singleton.
    /// @return Pointer to invariant culture case-ignoring comparer.
    static ASPOSECPP_SHARED_API StringComparerPtr get_InvariantCultureIgnoreCase();

    /// Current culture comparer singleton.
    /// @return Pointer to current culture comparer.
    static ASPOSECPP_SHARED_API StringComparerPtr get_CurrentCulture();
    /// Current culture case-ignoring comparer singleton.
    /// @return Pointer to current culture case-ignoring comparer.
    static ASPOSECPP_SHARED_API StringComparerPtr get_CurrentCultureIgnoreCase();

    /// Creates culture-specific comparer.
    /// @param culture Culture to create comparer for.
    /// @param ignoreCase Whether the comparer should ignore case.
    /// @return Pointer to newly created comparer object.
    static ASPOSECPP_SHARED_API StringComparerPtr Create(const System::SharedPtr<System::Globalization::CultureInfo>& culture, bool ignoreCase);

    // IComparer<String>
    /// Compares two strings using current settings.
    /// @param x LHS string value.
    /// @param y RHS string value.
    /// @return Negative value if @p x preceeds @p y, zero if they are equal and positive value otherwise.
    virtual ASPOSECPP_SHARED_API int Compare(args_type x, args_type y) ASPOSE_CONST override;

    // IEqualityComparer<String>
    /// Checks if two strings are equal using current settings.
    /// @param x LHS string value.
    /// @param y RHS string value.
    /// @return True if strings are equal, false otherwise.
    virtual ASPOSECPP_SHARED_API bool Equals(String x, String y) ASPOSE_CONST override;
    /// Gets string's hash code.
    /// @param obj String to calculate hash code for.
    /// @return Hash code calculated for @p obj.
    virtual ASPOSECPP_SHARED_API int GetHashCode(String obj) const override;
};

} // namespace System

#endif // _string_comparer_h_
