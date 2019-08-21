/// @file system/uri_builder.h
/// Contains the declaration System::UriBuilder class.
#ifndef _uri_builder_h
#define _uri_builder_h

#include "fwd.h"
#include "system/object.h"
#include "system/string.h"
#include "system/uri.h"
#include "system/exceptions.h"

namespace System {

/// Provides methods to construct and modify universial resource identifiers (URIs).
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UriBuilder : public Object
{
public:
    /// Constructs a UriBuilder object that represents that represents the specified URI.
    ASPOSECPP_SHARED_API UriBuilder(const String& uri);
    /// Constructs a UriBuilder object that represents that represents the specified URI.
    ASPOSECPP_SHARED_API UriBuilder(const SharedPtr<Uri>& uri);
    /// Returns the scheme of the URI constructed by the current object.
    ASPOSECPP_SHARED_API String get_Scheme() const;
    /// Sets the scheme of the URI constructed by the current object to the specified value.
    /// @param value The string representation of the scheme to set
    ASPOSECPP_SHARED_API void set_Scheme(const String& value);
    /// Returns the string representation of the URI constructed by the current object.
    ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;
    /// Returns the Uri object constructed by the current object.
    ASPOSECPP_SHARED_API SharedPtr<Uri> get_Uri() const;

private:
    /// The Uri object constructed by the current UriBuilder object.
    SharedPtr<Uri> m_uri;
};

}

#endif // _uri_builder_h
