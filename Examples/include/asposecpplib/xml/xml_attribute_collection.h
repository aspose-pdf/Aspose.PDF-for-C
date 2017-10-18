#ifndef _aspose_xml_xml_attribute_collection_h_
#define _aspose_xml_xml_attribute_collection_h_

#include "xml/xml_attribute.h"
#include "xml/xml_named_node_map.h"

#include <system/collections/ienumerable.h>
#include <system/collections/ienumerator.h>

namespace System { namespace Xml {

typedef System::Collections::Generic::IEnumerable<XmlAttribute::Ptr> IAttributeEnumerable;
typedef System::Collections::Generic::IEnumerator<XmlAttribute::Ptr> IAttrubuteEnumerator;

typedef SharedPtr<IAttributeEnumerable> IAttrubuteEnumerablePtr;
typedef SharedPtr<IAttrubuteEnumerator> IAttributeEnumeratorPtr;

class XmlElement;

class XmlAttributeCollection : public XmlNamedNodeMap, public IAttributeEnumerable
{
    RTTI_INFO(XmlAttributeCollection, ::System::BaseTypesInfo<IAttributeEnumerable>);

public:
    typedef SharedPtr<XmlAttributeCollection> Ptr;

    XmlAttributeCollection(SharedPtr<XmlElement> owner) : m_owner(owner) {}

    // IEnumerable interface

    class Enumerator : public IAttrubuteEnumerator
    {
        RTTI_INFO(XmlAttributeCollection::Enumerator, ::System::BaseTypesInfo<IAttrubuteEnumerator>);

    public:
        Enumerator(SharedPtr<XmlAttributeCollection> owner);
        XmlAttribute::Ptr get_Current() ASPOSE_CONST override;
        bool MoveNext() override;

    private:
        SharedPtr<XmlAttributeCollection> m_owner;
        int m_counter;
        int m_size;
    };

    IAttributeEnumeratorPtr GetEnumerator() override
    {
        return MakeObject<Enumerator>(System::MakeSharedPtr(this));
    }

    // XmlAttributeCollction interface

    int get_Count() const override;

    // Gets the attribute with the specified index.
    XmlAttribute::Ptr idx_get(int i) const;
    XmlAttribute::Ptr operator[] (int i) const { return idx_get(i); }

    // Gets the attribute with the specified name.
    XmlAttribute::Ptr idx_get(String name) const;
    XmlAttribute::Ptr operator[] (String name) const { return idx_get(name); }

    XmlNode::Ptr Item(int index) override { return idx_get(index); }

    XmlAttribute::Ptr Append(XmlAttribute::Ptr attribute);

    virtual XmlNode::Ptr SetNamedNode(XmlNode::Ptr node);

    XmlNode::Ptr GetNamedItem(String name) override { return idx_get(name); }

protected:

    SharedPtr<XmlElement> m_owner;
};

} } // namespace System::Xml

#endif // _aspose_xml_xml_attribute_collection_h_