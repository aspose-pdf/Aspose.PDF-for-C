/// @file xml/i_xml_namespace_resolver.h
#ifndef _aspose_xml_i_xml_namespace_resolver_h_
#define _aspose_xml_i_xml_namespace_resolver_h_

#include "system/object.h"
#include "system/collections/idictionary.h"
#include "xml/xml_namespace_scope.h"

using namespace System::Collections::Generic;
using namespace System;
namespace System {
	namespace Xml {
        /// Provides read access to a set of namespace and prefix mappings.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
		class ASPOSECPP_SHARED_CLASS IXmlNamespaceResolver : public virtual Object{
			RTTI_INFO(IXmlNamespaceResolver, ::System::BaseTypesInfo<::System::Object>);
			public:
                /// Returns a collection of defined prefix-namespace mappings that are currently in scope.
                /// @param scope Specifies the type of namespace nodes to return
                /// @returns A dictionary containing the current in-scope namespaces
				virtual ASPOSECPP_SHARED_API SharedPtr<IDictionary<System::String, System::String>> GetNamespacesInScope(System::Xml::XmlNamespaceScope scope) = 0;
			public:
                /// Returns the namespace URI mapped to the specified prefix.
                /// @param prefix The prefix whose namespace URI is to look for
                /// @returns String object containing the namespace URI that is mapped to @p prefix; null if the prefix is not mapped to a namespace URI.
				virtual ASPOSECPP_SHARED_API SharedPtr<System::String> LookupNamespace(SharedPtr<System::String> prefix) = 0;
			public:
                /// Returns the prefix that is mapped to the specified namespace URI.
                /// @param namespaceName The namespace URI whose prefix to look for
                /// @returns String object containing the prefix that is mapped to the spacefied namespace URI; null if the specified namespace URI is not mapped to a prefix 
				virtual ASPOSECPP_SHARED_API SharedPtr<System::String> LookupPrefix(SharedPtr<System::String> namespaceName) = 0;
		};
	}
}

#endif // _aspose_xml_i_xml_namespace_resolver_h_
