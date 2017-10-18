#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_TimestampSettings_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_TimestampSettings_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_ServerUrl();
    void set_ServerUrl(System::String value);
    System::String get_BasicAuthCredentials();
    void set_BasicAuthCredentials(System::String value);
    
    TimestampSettings(System::String serverUrl, System::String basicAuthCredentials);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TimestampSettings"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _serverUrl;
    System::String _basicAuthCredentials;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_TimestampSettings_h_

