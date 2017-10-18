#ifndef _aspose_system_security_securityelement_h_
#define _aspose_system_security_securityelement_h_

#include "defines.h"
#include "system/string.h"
#include "system/collections/dictionary.h"
#include "system/collections/arraylist.h"

namespace System {
    namespace Security {

        // Summary:
        //     Represents the XML object model for encoding security objects. This class
        //     cannot be inherited.
        class SecurityElement final : public Object
        {
        public:
            // Summary:
            //     Initializes a new instance of the System.Security.SecurityElement class with
            //     the specified tag.
            //
            // Parameters:
            //   tag:
            //     The tag name of an XML element.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     The tag parameter is null.
            //
            //   System.ArgumentException:
            //     The tag parameter is invalid in XML.
            SecurityElement(String tag);
            //
            // Summary:
            //     Initializes a new instance of the System.Security.SecurityElement class with
            //     the specified tag and text.
            //
            // Parameters:
            //   tag:
            //     The tag name of the XML element.
            //
            //   text:
            //     The text content within the element.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     The tag parameter is null.
            //
            //   System.ArgumentException:
            //     The tag parameter or text parameter is invalid in XML.
            SecurityElement(String tag, String text);

            // Summary:
            //     Gets or sets the attributes of an XML element as name/value pairs.
            //
            // Returns:
            //     The System.Collections.Hashtable object for the attribute values of the XML
            //     element.
            //
            // Exceptions:
            //   System.InvalidCastException:
            //     The name or value of the System.Collections.Hashtable object is invalid.
            System::Collections::Generic::Dictionary<String, String> get_Attributes();
            void set_Attributes(System::Collections::Generic::Dictionary<String, String> value);
            //
            // Summary:
            //     Gets or sets the array of child elements of the XML element.
            //
            // Returns:
            //     The ordered child elements of the XML element as security elements.
            //
            // Exceptions:
            //   System.ArgumentException:
            //     A child of the XML parent node is null.
            System::Collections::Generic::ArrayList<SecurityElement> get_Children();
            void set_Children(System::Collections::Generic::ArrayList<SecurityElement> value);
            //
            // Summary:
            //     Gets or sets the tag name of an XML element.
            //
            // Returns:
            //     The tag name of an XML element.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     The tag is null.
            //
            //   System.ArgumentException:
            //     The tag is not valid in XML.
            String get_Tag();
            void set_Tag(String value);
            //
            // Summary:
            //     Gets or sets the text within an XML element.
            //
            // Returns:
            //     The value of the text within an XML element.
            //
            // Exceptions:
            //   System.ArgumentException:
            //     The text is not valid in XML.
            String get_Text();
            void set_Text(String value);

            // Summary:
            //     Adds a name/value attribute to an XML element.
            //
            // Parameters:
            //   name:
            //     The name of the attribute.
            //
            //   value:
            //     The value of the attribute.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     The name parameter or value parameter is null.
            //
            //   System.ArgumentException:
            //     The name parameter or value parameter is invalid in XML.-or- An attribute
            //     with the name specified by the name parameter already exists.
            void AddAttribute(String name, String value);
            //
            // Summary:
            //     Adds a child element to the XML element.
            //
            // Parameters:
            //   child:
            //     The child element to add.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     The child parameter is null.
            void AddChild(SecurityElement child);
            //
            // Summary:
            //     Finds an attribute by name in an XML element.
            //
            // Parameters:
            //   name:
            //     The name of the attribute for which to search.
            //
            // Returns:
            //     The value associated with the named attribute, or null if no attribute with
            //     name exists.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     The name parameter is null.
            String Attribute(String name);
            //
            // Summary:
            //     Creates and returns an identical copy of the current System.Security.SecurityElement
            //     object.
            //
            // Returns:
            //     A copy of the current System.Security.SecurityElement object.
            SecurityElement Copy();
            //
            // Summary:
            //     Compares two XML element objects for equality.
            //
            // Parameters:
            //   other:
            //     An XML element object to which to compare the current XML element object.
            //
            // Returns:
            //     true if the tag, attribute names and values, child elements, and text fields
            //     in the current XML element are identical to their counterparts in the other
            //     parameter; otherwise, false.
            bool Equal(SecurityElement other);
            //
            // Summary:
            //     Replaces invalid XML characters in a String with their valid XML equivalent.
            //
            // Parameters:
            //   str:
            //     The String within which to escape invalid characters.
            //
            // Returns:
            //     The input String with invalid characters replaced.
            static String Escape(String str){ return str.Replace(L"&", L"&amp;").Replace(L"<", L"&lt;").Replace(L">", L"&gt;").Replace(L"\"", L"&quot;").Replace(L"\'", L"&apos;"); }
            //
            // Summary:
            //     Creates a security element from an XML-encoded String.
            //
            // Parameters:
            //   xml:
            //     The XML-encoded String from which to create the security element.
            //
            // Returns:
            //     A System.Security.SecurityElement created from the XML.
            //
            // Exceptions:
            //   System.Security.XmlSyntaxException:
            //     xml contains one or more single quotation mark characters.
            //
            //   System.ArgumentNullException:
            //     xml is null.
            static SecurityElement FromString(String xml);
            //
            // Summary:
            //     Determines whether a String is a valid attribute name.
            //
            // Parameters:
            //   name:
            //     The attribute name to test for validity.
            //
            // Returns:
            //     true if the name parameter is a valid XML attribute name; otherwise, false.
            static bool IsValidAttributeName(String name);
            //
            // Summary:
            //     Determines whether a String is a valid attribute value.
            //
            // Parameters:
            //   value:
            //     The attribute value to test for validity.
            //
            // Returns:
            //     true if the value parameter is a valid XML attribute value; otherwise, false.
            static bool IsValidAttributeValue(String value);
            //
            // Summary:
            //     Determines whether a String is a valid tag.
            //
            // Parameters:
            //   tag:
            //     The tag to test for validity.
            //
            // Returns:
            //     true if the tag parameter is a valid XML tag; otherwise, false.
            static bool IsValidTag(String tag);
            //
            // Summary:
            //     Determines whether a String is valid as text within an XML element.
            //
            // Parameters:
            //   text:
            //     The text to test for validity.
            //
            // Returns:
            //     true if the text parameter is a valid XML text element; otherwise, false.
            static bool IsValidText(String text);
            //
            // Summary:
            //     Finds a child by its tag name.
            //
            // Parameters:
            //   tag:
            //     The tag for which to search in child elements.
            //
            // Returns:
            //     The first child XML element with the specified tag value, or null if no child
            //     element with tag exists.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     The tag parameter is null.
            SecurityElement SearchForChildByTag(String tag);
            //
            // Summary:
            //     Finds a child by its tag name and returns the contained text.
            //
            // Parameters:
            //   tag:
            //     The tag for which to search in child elements.
            //
            // Returns:
            //     The text contents of the first child element with the specified tag value.
            //
            // Exceptions:
            //   System.ArgumentNullException:
            //     tag is null.
            String SearchForTextOfTag(String tag);
            //
            // Summary:
            //     Produces a String representation of an XML element and its constituent attributes,
            //     child elements, and text.
            //
            // Returns:
            //     The XML element and its contents.
            String ToString() ASPOSE_CONST override;
        };
    }
}

#endif