/// @file system/globalization/compare_info.h
#ifndef compare_info_h
#define compare_info_h

#include "system/object.h"
#include "system/string.h"
#include <system/globalization/compare_options.h>
#include <system/details/culture_data_ptr.h>

namespace System { namespace Globalization {

/// Makes culture-sensitive string comparison.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CompareInfo: public System::Object//public IDeserializationCallback
{
    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;
public:
    /// Compares strings. Not implemented.
    /// @param string1 LHS string.
    /// @param string2 RHS string.
    /// @return Negative value if LHS string preceeds RHS one, zero if they match, positive value otherwise.
    ASPOSECPP_SHARED_API int Compare(const String& string1, const String& string2);
    /// Compares strings. Only Ordinal and OrdinalIgnoreCase modes are supported.
    /// @param a LHS string.
    /// @param b RHS string.
    /// @param opt String comparison type.
    /// @return Negative value if LHS string preceeds RHS one, zero if they match, positive value otherwise.
    ASPOSECPP_SHARED_API int Compare(const String& a, const String& b, System::Globalization::CompareOptions opt);

    /// Looks for substring. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value, CompareOptions options);
    /// Looks for substring. Only Ordinal mode is supported.
    /// @param source Source string.
    /// @param value Lookup value.
    /// @param startIndex Lookup start index in source string.
    /// @param options Lookup options.
    /// @return Index of lookup value in source string or -1 if not found.
    ASPOSECPP_SHARED_API int IndexOf(const String& source, const String& value, int startIndex, CompareOptions options);

    /// Name of the culture associated with comparer.
    ASPOSECPP_SHARED_API String get_Name();

private:
    /// Friendship for implementation access.
    friend class CultureInfo;
    /// Constructor.
    /// @param cultureData Culture to use.
    CompareInfo(Details::CultureDataPtr cultureData);
    /// Culture name.
    String m_name;
};

}} // namespace System::Globalization
#endif // compare_info_h
