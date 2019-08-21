/// @file xml/xml_namespace_scope.h
#ifndef _aspose_xml_xml_namespace_scope_h_
#define _aspose_xml_xml_namespace_scope_h_

namespace System {
	namespace Xml {
        /// Specifies the namespace scope.
		enum class XmlNamespaceScope{
            /// The scope includes all namespaces defined in the scope of the current XML node.
			All,
            /// The scope includes all namespaces defined in the scope of the current XML node excluding xmlns:xml.
			ExcludeXml,
            /// The scope includes all namespaces defined locally at the current XML node.
			Local
		};
	}
}

#endif //_aspose_xml_xml_namespace_scope_h_
