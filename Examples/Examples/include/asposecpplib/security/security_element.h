/// @file security/security_element.h
#ifndef _aspose_system_security_securityelement_h_
#define _aspose_system_security_securityelement_h_

#include "defines.h"
#include "system/string.h"
#include "system/collections/dictionary.h"
#include "system/collections/arraylist.h"

namespace System {
namespace Security {

/// XML object model for encoding security object.
/// Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SecurityElement final : public Object
{
public:
    /// Constructor.
    /// @param tag XML tag name.
    ASPOSECPP_SHARED_API SecurityElement(const String& tag);
    /// Constructor.
    /// @param tag XML tag name.
    /// @param text XML text inside given tag.
    ASPOSECPP_SHARED_API SecurityElement(const String& tag, const String& text);

    /// Gets tag attributes.
    /// @return Attributes keys and values collection.
    ASPOSECPP_SHARED_API System::Collections::Generic::Dictionary<String, String> get_Attributes();
    /// Sets tag attributes.
    /// @param value Attributes keys and values collection.
    ASPOSECPP_SHARED_API void set_Attributes(System::Collections::Generic::Dictionary<String, String> value);
    /// Gets tag child objects.
    /// @return List of child elements.
    ASPOSECPP_SHARED_API System::Collections::Generic::ArrayList<SecurityElement> get_Children();
    /// Sets tag child objects.
    /// @param value List of child elements.
    ASPOSECPP_SHARED_API void set_Children(System::Collections::Generic::ArrayList<SecurityElement> value);
    /// Gets tag name.
    /// @return Tag name.
    ASPOSECPP_SHARED_API String get_Tag();
    /// Sets tag name.
    /// @param value Tag name.
    ASPOSECPP_SHARED_API void set_Tag(const String& value);
    /// Gets tag inner text.
    /// @return Tag inner text.
    ASPOSECPP_SHARED_API String get_Text();
    /// Sets tag inner text.
    /// @param value Tag inner text.
    ASPOSECPP_SHARED_API void set_Text(const String& value);

    /// Adds attribute to tag.
    /// @param name Attribute name.
    /// @param value Attribute value.
    ASPOSECPP_SHARED_API void AddAttribute(const String& name, const String& value);
    /// Adds child tag.
    /// @param child Tag to add as a child.
    ASPOSECPP_SHARED_API void AddChild(SecurityElement child);
    /// Gets attribute value.
    /// @return Attribute value or null if not found.
    ASPOSECPP_SHARED_API String Attribute(const String& name);

    /// Clones tag.
    /// @return Tag copy.
    ASPOSECPP_SHARED_API SecurityElement Copy();
    /// Checks for parameters equality.
    /// @param other Tag to compare to.
    /// @return True if tags match, false otherwise.
    ASPOSECPP_SHARED_API bool Equal(SecurityElement other);

    /// Escapes characters in XML string.
    /// @param str String to escape.
    /// @return Escaped string.
    static String Escape(const String& str){ return str.Replace(u"&", u"&amp;").Replace(u"<", u"&lt;").Replace(u">", u"&gt;").Replace(u"\"", u"&quot;").Replace(u"\'", u"&apos;"); }
    /// Creates element from XML code.
    /// @param xml XML code.
    /// @return Newly created element.
    static ASPOSECPP_SHARED_API SecurityElement FromString(const String& xml);
    /// Checks if attribute name is valid.
    /// @param name Name to check.
    /// @return True if name is valid, false otherwise.
    static ASPOSECPP_SHARED_API bool IsValidAttributeName(const String& name);
    /// Checks if attribute value is valid.
    /// @param value Value to check.
    /// @return True if value is valid, false otherwise.
    static ASPOSECPP_SHARED_API bool IsValidAttributeValue(const String& value);
    /// Checks if tag is valid.
    /// @param tag Tag to test.
    /// @return True if tag is valid, false otherwise.
    static ASPOSECPP_SHARED_API bool IsValidTag(const String& tag);
    /// Checks if text is valid.
    /// @param text Text to test.
    /// @return True if text is valid, false otherwise.
    static ASPOSECPP_SHARED_API bool IsValidText(const String& text);

    /// Gets child tag by name.
    /// @param tag Tag name to look for.
    /// @return Child element or null if not found.
    ASPOSECPP_SHARED_API SecurityElement SearchForChildByTag(const String& tag);
    /// Gets child tag inner text by tag name.
    /// @param tag Tag name to look for.
    /// @return Text of the first tag with specified name or null if not found.
    ASPOSECPP_SHARED_API String SearchForTextOfTag(const String& tag);
    /// Converts tag to string.
    /// @return XML code.
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
};

}
}

#endif
