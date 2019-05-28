/// @file security/cryptography/i_csp_asymmetric_algorithm.h
#ifndef _security_cryptography_i_csp_asymmetric_algorithm_h_
#define _security_cryptography_i_csp_asymmetric_algorithm_h_

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>

namespace System { namespace Security { namespace Cryptography {

/// Asymmetric algorithm base class.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS ICspAsymmetricAlgorithm : public virtual System::Object
{
    /// This type.
    typedef ICspAsymmetricAlgorithm ThisType;
    /// Base class.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    //virtual System::SharedPtr<System::Security::Cryptography::CspKeyContainerInfo> get_CspKeyContainerInfo() = 0;

    /// Exports blob with key information.
    /// @param includePrivateParameters True to include private key, false otherwise.
    /// @return Exported data blob.
    virtual ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> ExportCspBlob(bool includePrivateParameters) = 0;
    /// Imports key information from data blob.
    /// @param rawData Previously imported CSP data.
    virtual ASPOSECPP_SHARED_API void ImportCspBlob(System::ArrayPtr<uint8_t> rawData) = 0;

};

}}}

#endif // _security_cryptography_i_csp_asymmetric_algorithm_h_
