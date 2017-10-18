#ifndef _security_cryptography_csp_parameters_h_
#define _security_cryptography_csp_parameters_h_

#include <system/string.h>
#include <system/object.h>

namespace System { namespace Security { namespace Cryptography {

class CspParameters FINAL : public System::Object
{
    typedef CspParameters ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();

public:

    System::String KeyContainerName;
    int KeyNumber;
    System::String ProviderName;
    int ProviderType;

    CspParameters();
    CspParameters(int dwTypeIn);
    CspParameters(int dwTypeIn, System::String strProviderNameIn);
    CspParameters(int dwTypeIn, System::String strProviderNameIn, System::String strContainerNameIn);

};

}}}

#endif // _security_cryptography_csp_parameters_h_

