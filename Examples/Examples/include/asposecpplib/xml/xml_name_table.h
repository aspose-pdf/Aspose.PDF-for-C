/// @file xml/xml_name_table.h
#ifndef _aspose_xml_xml_name_table_h_
#define _aspose_xml_xml_name_table_h_

#include <system/string.h>
#include <system/array.h>

namespace System { namespace Xml {

/// Represents a table of string objects.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlNameTable : public System::Object
{
public:
    /// Alias for a shared pointer to an instance of XmlNameTable. 
    typedef SharedPtr<XmlNameTable> Ptr;

    /// Adds the specified string to the table.
    /// @param arr The string to add to the table
    /// @returns The added string or the existing one if the specified string is alrady present in the table
    virtual ASPOSECPP_SHARED_API String Add(const String& arr) = 0;

    /// Adds the specified string consinting of the elements of the specified subrange of the specified character array to the table.
    /// @param arr The Unicode characters array
    /// @param offset The offset in the @p arr of the first element of the range
    /// @param length The number of elements in the range
    /// @returns The added string or the existing one if the specified string is alrady present in the table
    virtual ASPOSECPP_SHARED_API String Add(const ArrayPtr<char_t>& arr, int offset, int length) = 0;

    /// Determines if the specified string is already in the table.
    /// @param arr The string to look for in the table
    /// @returns The specified string if it was found in the table, otherwise - null string
    virtual ASPOSECPP_SHARED_API String Get(const String& arr) const = 0;

    /// Determines if the string formed by a range of elements of the specified array is present in the table.
    /// @param arr The Unicode characters array
    /// @param offset The offset in the @p arr of the first element of the range
    /// @param length The number of elements in the range
    /// @returns The specified string if it was found in the table, otherwise - null string
    virtual ASPOSECPP_SHARED_API String Get(const ArrayPtr<char_t>& arr, int offset, int length) const = 0;

protected:

    /// Constructor.
    XmlNameTable() {}
};


} } // namespace System::Xml

#endif // _aspose_xml_xml_name_table_h_
