#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_TimestampSettings_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_TimestampSettings_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the ocsp settings using during signing process.
/// </summary>
class ASPOSE_PDF_SHARED_API TimestampSettings : public System::Object
{
    typedef TimestampSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets/sets the timestamp server url.
    /// </summary>
    System::String get_ServerUrl();
    /// <summary>
    /// Gets/sets the timestamp server url.
    /// </summary>
    void set_ServerUrl(System::String value);
    /// <summary>
    /// Gets/sets the basic authentication credentials, Username and password are combined into a string "username:password".
    /// </summary>
    System::String get_BasicAuthCredentials();
    /// <summary>
    /// Gets/sets the basic authentication credentials, Username and password are combined into a string "username:password".
    /// </summary>
    void set_BasicAuthCredentials(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TimestampSettings"/> class.
    /// <param name="serverUrl">The timestamp server url.</param>
    /// <param name="basicAuthCredentials">The basic authentication credentials, username and password are combined into a string "username:password".</param>
    /// </summary>
    TimestampSettings(System::String serverUrl, System::String basicAuthCredentials);
    
private:

    System::String _serverUrl;
    System::String _basicAuthCredentials;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_TimestampSettings_h_

