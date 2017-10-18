#ifndef _security_asn_encoded_data_h_
#define _security_asn_encoded_data_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <security/cryptography/oid.h>

namespace System {

namespace Security {

namespace Cryptography {

class AsnEncodedData : public System::Object
{
    typedef AsnEncodedData ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();
    FRIEND_FUNCTION_System_MakeObject
public:

    AsnEncodedData(System::SharedPtr<AsnEncodedData> asnEncodedData);
    AsnEncodedData(System::ArrayPtr<uint8_t> rawData);
    AsnEncodedData(System::SharedPtr<Oid> oid, System::ArrayPtr<uint8_t> rawData);
    AsnEncodedData(System::String oid, System::ArrayPtr<uint8_t> rawData);

    System::SharedPtr<Oid> get_Oid();
    void set_Oid(System::SharedPtr<Oid> value);
    System::ArrayPtr<uint8_t> get_RawData();
    void set_RawData(System::ArrayPtr<uint8_t> value);

    virtual void CopyFrom(System::SharedPtr<AsnEncodedData> asnEncodedData);
    virtual System::String Format(bool multiLine);

protected:

    AsnEncodedData();

private:

    System::SharedPtr<Oid> pr_Oid;
    System::ArrayPtr<uint8_t> pr_RawData;

};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_asn_encoded_data_h_

