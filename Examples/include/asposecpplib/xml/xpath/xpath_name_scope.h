/// @file xml/xpath/xpath_name_scope.h
namespace System {
	namespace Xml {
		namespace XPath {
            /// Defines the namespace scope.
			enum class XPathNamespaceScope{
                /// The scope includes all namespaces defined in the scope of the current XML node.
				All,
                /// The scope includes all namespaces defined in the scope of the current node excluding xmlns:xml.
				ExcludeXml,
                /// All namespaces that are defined locally at the current node.
				Local
			};
		}
	}
}
