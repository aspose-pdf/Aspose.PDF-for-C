#ifndef _aspose_system_security_crypto_asymmetric_algorithm_h_
#define _aspose_system_security_crypto_asymmetric_algorithm_h_

#include <defines.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <security/cryptography/key_sizes.h>

namespace System { namespace Security { namespace Cryptography {

class ABSTRACT AsymmetricAlgorithm : virtual public Object
{
    typedef AsymmetricAlgorithm ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();

public:
    virtual int get_KeySize();
    virtual void set_KeySize(int value);
    virtual ArrayPtr<SharedPtr<KeySizes> > get_LegalKeySizes();

    void Clear();

    virtual void FromXmlString(String xmlString) = 0;
    virtual String ToXmlString(bool includePrivateParameters) = 0;
    virtual String get_SignatureAlgorithm() = 0;
    virtual String get_KeyExchangeAlgorithm() = 0;

    static SharedPtr<AsymmetricAlgorithm> Create();
    static SharedPtr<AsymmetricAlgorithm> Create(String algName);

protected:
    AsymmetricAlgorithm();

    int                               m_key_size_value;
    std::vector<SharedPtr<KeySizes>>  m_legal_key_sizes;
};

}}}

#endif // _aspose_system_security_crypto_asymmetric_algorithm_h_


