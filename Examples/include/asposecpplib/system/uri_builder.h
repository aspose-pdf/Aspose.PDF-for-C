#ifndef _uri_builder_h
#define _uri_builder_h

#include "fwd.h"
#include "system/object.h"
#include "system/string.h"
#include "system/uri.h"
#include "system/exceptions.h"

namespace System {

    // implemented only methods used in aspose libs
    class UriBuilder : public Object
    {
    public:
        UriBuilder(const String& uri);
        UriBuilder(SharedPtr<Uri> uri);

        String get_Scheme() const;
        void set_Scheme(const String& value);

        String ToString() ASPOSE_CONST override;

        SharedPtr<Uri> get_Uri();

    private:
        SharedPtr<Uri> m_uri;
    };
}

#endif // _uri_builder_h