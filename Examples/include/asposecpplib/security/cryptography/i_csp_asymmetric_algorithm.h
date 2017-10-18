#ifndef _security_cryptography_i_csp_asymmetric_algorithm_h_
#define _security_cryptography_i_csp_asymmetric_algorithm_h_

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

namespace System { namespace Security { namespace Cryptography {

class ICspAsymmetricAlgorithm : public virtual System::Object
{
    typedef ICspAsymmetricAlgorithm ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();

public:

    //virtual System::SharedPtr<System::Security::Cryptography::CspKeyContainerInfo> get_CspKeyContainerInfo() = 0;

    virtual System::ArrayPtr<uint8_t> ExportCspBlob(bool includePrivateParameters) = 0;
    virtual void ImportCspBlob(System::ArrayPtr<uint8_t> rawData) = 0;

};

}}}

#endif // _security_cryptography_i_csp_asymmetric_algorithm_h_