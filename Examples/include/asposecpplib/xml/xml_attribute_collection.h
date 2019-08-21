/// @file xml/xml_attribute_collection.h
#ifndef _aspose_xml_xml_attribute_collection_h_
#define _aspose_xml_xml_attribute_collection_h_

#include "xml/xml_attribute.h"
#include "xml/xml_named_node_map.h"

#include <system/collections/ienumerable.h>
#include <system/collections/ienumerator.h>

namespace System { namespace Xml {

/// An alias for IEnumerabe that points to a collection of shared pointers to instances of XmlAttribute.
typedef System::Collections::Generic::IEnumerable<XmlAttribute::Ptr> IAttributeEnumerable;
/// An alias for IEnumerator that points to a collection of shared pointers to instances of XmlAttribute.
typedef System::Collections::Generic::IEnumerator<XmlAttribute::Ptr> IAttrubuteEnumerator;

/// An alias for a shared pointer to an instance of IAttributeEnumerable.
typedef SharedPtr<IAttributeEnumerable> IAttrubuteEnumerablePtr;
/// An alias for a shared pointer to an instance of IAttributeEnumerator.
typedef SharedPtr<IAttrubuteEnumerator> IAttributeEnumeratorPtr;

class XmlElement;

/// Represents a collection of XML attributes.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS XmlAttributeCollection : public XmlNamedNodeMap, public IAttributeEnumerable
{
    RTTI_INFO(XmlAttributeCollection, ::System::BaseTypesInfo<IAttributeEnumerable>);

public:
    /// An alias for a shared pointer to an instance of this class.
    typedef SharedPtr<XmlAttributeCollection> Ptr;

    /// Constructs an XmlAttribtueCollection object representing a collection of attributes belonging to the specified owner.
    XmlAttributeCollection(const SharedPtr<XmlElement>& owner) : m_owner(owner) {}

    // IEnumerable interface
    /// Implements the IAttributeEnumerator interface.
    class ASPOSECPP_SHARED_CLASS Enumerator : public IAttrubuteEnumerator
    {
        RTTI_INFO(XmlAttributeCollection::Enumerator, ::System::BaseTypesInfo<IAttrubuteEnumerator>);

    public:
        /// Constructs an Enumerator object that allows enumerating over the specified attribute collection object.
        /// @param owner The object representing a collection elements of which the object being constructed enumerates
        ASPOSECPP_SHARED_API Enumerator(const SharedPtr<XmlAttributeCollection>& owner);
        /// Returns a shared pointer to an element of the collection at the current position.
        ASPOSECPP_SHARED_API XmlAttribute::Ptr get_Current() ASPOSE_CONST override;
        /// Advances the enumerator pointer to he next element of the collection.
        /// @returns True if after pointer advancement the end of the collection has not been reached, otherwise - false 
        ASPOSECPP_SHARED_API bool MoveNext() override;

    private:
        /// The collection.
        SharedPtr<XmlAttributeCollection> m_owner;
        /// The current position of the enumerator's pointer.
        int m_counter;
        /// The number of elements in the collection.
        int m_size;
    };

    /// Returns the enumerator object that allows enumerating over the elements of the 
    /// attribute collection represented by the current object.
    IAttributeEnumeratorPtr GetEnumerator() override
    {
        return MakeObject<Enumerator>(System::MakeSharedPtr(this));
    }

    // XmlAttributeCollction interface
    /// Returns the number of elements in the collection.
    ASPOSECPP_SHARED_API int get_Count() const override;

    // Gets the attribute with the specified index.
    /// Returns a shared pointer of the element at the specified position.
    /// @param i A position of the element to return
    /// @returns Shared pointer of the element at position @p i in the collection
    ASPOSECPP_SHARED_API XmlAttribute::Ptr idx_get(int i) const;

    /// Returns a shared pointer of the element at the specified position.
    /// @param i A position of the element to return
    /// @returns Shared pointer of the element at position @p i in the collection
    XmlAttribute::Ptr operator[] (int i) const { return idx_get(i); }

    // Gets the attribute with the specified name.
    /// Returns a shared pointer to the XmlAttribute object representing an attribute with the specified name.
    /// @param name The name of the attribute
    /// @returns A shared pointer to the XmlAttribute object representing an attribute with the specified name; 
    /// null-pointer if an attribute with the specified name is not found in the collection
    ASPOSECPP_SHARED_API XmlAttribute::Ptr idx_get(const String& name) const;

    /// Returns a shared pointer to the XmlAttribute object representing an attribute with the specified name.
    /// @param name The name of the attribute
    /// @returns A shared pointer to the XmlAttribute object representing an attribute with the specified name; 
    /// null-pointer if an attribute with the specified name is not found in the collection
    XmlAttribute::Ptr operator[] (const String& name) const { return idx_get(name); }

    /// Returns a shared pointer of the element of the collection at the specified position.
    /// @param index A position of the element to return
    /// @returns Shared pointer of the element at position @p i in the collection
    XmlNode::Ptr Item(int index) override { return idx_get(index); }

    /// Adds the specified attribute at the end of the collection.
    /// @param attribute The XmlAttribute object to add
    /// @returns The appended attribute
    ASPOSECPP_SHARED_API XmlAttribute::Ptr Append(XmlAttribute::Ptr attribute);

    /// Adds the specified node to the collection.
    /// @param node The node to add; the node must be of XmlNodeType::Attribute type
    /// @returns The added node
    virtual ASPOSECPP_SHARED_API XmlNode::Ptr SetNamedNode(XmlNode::Ptr node);
    /// Returns a shared pointer to the XmlNode object representing an attribute with the specified name.
    /// @param name The name of the attribute
    /// @returns A shared pointer to the XmlNode object representing an attribute with the specified name; 
    /// null-pointer if an attribute with the specified name is not found in the collection
    XmlNode::Ptr GetNamedItem(String name) override { return idx_get(name); }

protected:
    /// XmlElement owning the attributes in the collection.
    SharedPtr<XmlElement> m_owner;
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_attribute_collection_h_
