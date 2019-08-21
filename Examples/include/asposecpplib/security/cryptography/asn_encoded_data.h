/// @file security/cryptography/asn_encoded_data.h
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

/// ASN.1-encoded data. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS AsnEncodedData : public System::Object
{
    /// This type.
    typedef AsnEncodedData ThisType;
    /// Parent type.
    typedef System::Object BaseType;
    /// RTTI information.
    ASPOSECPP_SHARED_RTTI_INFO_DECL();
    /// Enables using MakeObject with non-public constructors.
    FRIEND_FUNCTION_System_MakeObject

public:
    /// Copy constructor.
    /// @param asnEncodedData Object to copy data from.
    ASPOSECPP_SHARED_API AsnEncodedData(const System::SharedPtr<AsnEncodedData>& asnEncodedData);
    /// Constructor.
    /// @param rawData Encoded data in raw byte format.
    ASPOSECPP_SHARED_API AsnEncodedData(const System::ArrayPtr<uint8_t>& rawData);
    /// Constructor.
    /// @param oid Object identifier of encoded data.
    /// @param rawData Encoded data in raw byte format.
    ASPOSECPP_SHARED_API AsnEncodedData(const System::SharedPtr<Oid>& oid, const System::ArrayPtr<uint8_t>& rawData);
    /// Constructor.
    /// @param oid Object identifier of encoded data.
    /// @param rawData Encoded data in raw byte format.
    ASPOSECPP_SHARED_API AsnEncodedData(const System::String& oid, const System::ArrayPtr<uint8_t>& rawData);

    /// Gets object identifier of encoded data.
    /// @return Object identifier object.
    ASPOSECPP_SHARED_API System::SharedPtr<Oid> get_Oid();
    /// Sets object identifier of encoded data.
    /// @param value Object identifier object.
    ASPOSECPP_SHARED_API void set_Oid(const System::SharedPtr<Oid>& value);
    /// Gets raw encoded data.
    /// @return Encoded data array in byte format.
    ASPOSECPP_SHARED_API System::ArrayPtr<uint8_t> get_RawData();
    /// Sets raw encoded data.
    /// @param value Encoded data array in byte format.
    ASPOSECPP_SHARED_API void set_RawData(const System::ArrayPtr<uint8_t>& value);

    /// Copies data from different object.
    /// @param asnEncodedData Object to copy data from.
    virtual ASPOSECPP_SHARED_API void CopyFrom(System::SharedPtr<AsnEncodedData> asnEncodedData);
    /// Formats data in human-readable form.
    /// @param multiLine Whether to use multiline output.
    /// @return Formatted data.
    virtual ASPOSECPP_SHARED_API System::String Format(bool multiLine);

protected:
    /// Default constructor.
    ASPOSECPP_SHARED_API AsnEncodedData();

private:
    /// Object identifier.
    System::SharedPtr<Oid> pr_Oid;
    /// Data in raw form.
    System::ArrayPtr<uint8_t> pr_RawData;
};

} // namespace Cryptography
} // namespace Security
} // namespace System

#endif // _security_asn_encoded_data_h_

