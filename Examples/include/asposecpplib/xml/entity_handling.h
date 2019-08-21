/// @file xml/entity_handling.h
#ifndef _aspose_xml_entity_handling_h_
#define _aspose_xml_entity_handling_h_

namespace System { namespace Xml {

/// Specifies how the entities are handled by XmlTextReader or XmlValidatingReader objects.
enum class EntityHandling
{
    /// Expand all entities.
    ExpandEntities = 1,
    /// Expand character entities and return general entities as nodes of EntityReference type.
    ExpandCharEntities = 2,
};

}} // namespace System::Xml

#endif // _aspose_xml_entity_handling_h_
