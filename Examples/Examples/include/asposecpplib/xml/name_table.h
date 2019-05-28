/// @file xml/name_table.h
#ifndef _aspose_xml_name_table_h_
#define _aspose_xml_name_table_h_

#include "xml_name_table.h"
#include "xml_typedefs.h"
#include "xml/detail/xml_3rd_party_types.h"

namespace System { namespace Xml {

class XmlDocument;
class XmlTextReader;

/// Provides single-threaded implementation of XmlNameTable.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS NameTable : public XmlNameTable
{
    FRIEND_FUNCTION_System_MakeObject;
    friend class XmlDocument;
    friend class XmlTextReader;

public:
    /// Alias for a shared pointer to an instance of this class. 
    typedef SharedPtr<NameTable> Ptr;
    /// Constructs a new instance of NameTable.
    /// @param postponed Specifies if the constructed name table is postponed
    ASPOSECPP_SHARED_API NameTable(bool postponed = false);
    /// Destructor
    virtual ASPOSECPP_SHARED_API ~NameTable();

    /// Adds the specified string to the table.
    /// @param key The string to add to the table
    /// @returns The added string or the existing one if the specified string is alrady present in the table
    ASPOSECPP_SHARED_API String Add(const String& key) override;

    /// Adds the specified string consinting of the elements of the specified subrange of the specified character array to the table.
    /// @param key The Unicode characters array
    /// @param start The index of the element in the @p arr at which the range begins
    /// @param len The number of elements in the range
    /// @returns The added string or the existing one if the specified string is alrady present in the table
    ASPOSECPP_SHARED_API String Add(const ArrayPtr<char_t>& key, int start, int len) override;

    /// Adds the specified UTF-8 string to the table.
    /// @param key_utf8 The string to add to the table
    /// @returns The added string or the existing one if the specified string is alrady present in the table
    ASPOSECPP_SHARED_API String Add(const std::string& key_utf8);

    /// Determines if the specified string is already in the table.
    /// @param key The string to look for in the table
    /// @returns The specified string if it was found in the table, otherwise - null string
    ASPOSECPP_SHARED_API String Get(const String& key) const override;

    /// Determines if the string formed by a range of elements of the specified array is present in the table.
    /// @param key The Unicode characters array
    /// @param start The index of the element in the @p arr at which the range begins
    /// @param len The number of elements in the range
    /// @returns The specified string if it was found in the table, otherwise - null string
    ASPOSECPP_SHARED_API String Get(const ArrayPtr<char_t>& key, int start, int len) const override;

    /// Determines if the specified UTF-8 string is present in the table.
    /// @param key_utf8 The string to look for in the table
    /// @returns The specified string if it was found in the table, otherwise - null string
    ASPOSECPP_SHARED_API String Get(const std::string& key_utf8) const;

protected:
    /// The dictionary where the strings are stored.
    xmlDict* m_dict;

    /// Indicates if the name table is postponed.
    bool m_is_postponed;

    // internal tools
    /// Constructs a new instance of NameTable that uses the xmlDict object that inherts strings from the specified xmlDict object to store strings.
    /// @param base_dict The xmlDict object to inherit strings from
    ASPOSECPP_SHARED_API NameTable(xmlDict* base_dict);
    
    /// Replaces the current dictionary object with the new one that inherits strings from the specified dictionary. 
    /// The strings from the old dictionary are copied to the new one.
    /// @param new_sub The dictionary to inherit the strings from
    ASPOSECPP_SHARED_API void Reassign(xmlDict* new_sub);
    
    /// Copies all strings from one dictionary and all dictionaries it inherits directly or indirectly to another dictionary.
    /// @param from The dictionary to copy the strings from
    /// @param to The dictionary to copy the strings to
    static ASPOSECPP_SHARED_API void Merge(xmlDict* from, xmlDict* to);
    
    /// Indicates whether the name table represented by the current object is postponed.
    inline bool IsPostponed() const { return m_is_postponed; }

private:
    /// Copy constructor.
    NameTable(const NameTable& table);
    /// Assignment operator.
    NameTable& operator=(const NameTable& table);
};

} } // namespace System::Xml

#endif // _aspose_xml_name_table_h_
