#ifndef _aspose_xml_i_xml_namespace_resolver_h_
#define _aspose_xml_i_xml_namespace_resolver_h_

#include "system/object.h"
#include "system/collections/idictionary.h"
#include "xml/xml_namespace_scope.h"

using namespace System::Collections::Generic;
using namespace System;
namespace System {
	namespace Xml {
		class IXmlNamespaceResolver : public virtual Object{
			RTTI_INFO(IXmlNamespaceResolver, ::System::BaseTypesInfo<::System::Object>);
			public:
				virtual SharedPtr<IDictionary<System::String, System::String>> GetNamespacesInScope(System::Xml::XmlNamespaceScope scope) = 0;
			public:
				virtual SharedPtr<System::String> LookupNamespace(SharedPtr<System::String> prefix) = 0;
			public:
				virtual SharedPtr<System::String> LookupPrefix(SharedPtr<System::String> namespaceName) = 0;
		};
	}
}

#endif // _aspose_xml_i_xml_namespace_resolver_h_
