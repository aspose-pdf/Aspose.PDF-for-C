#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_PKCS7Detached_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_PKCS7Detached_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "InteractiveFeatures/Forms/Signature_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents the PKCS#7 object that conform to the PKCS#7 specification in Internet RFC 2315, 
/// PKCS #7: Cryptographic Message Syntax, Version 1.5.
/// The original signed message digest over the document's byte range is incorporated as the normal PKCS#7 SignedData field. 
/// No data shall is encapsulated in the PKCS#7 SignedData field.
/// </summary>
class ASPOSE_PDF_SHARED_API PKCS7Detached FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Signature
{
    typedef PKCS7Detached ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Signature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    
public:

    PKCS7Detached(System::SharedPtr<System::IO::Stream> image);
    PKCS7Detached();
    PKCS7Detached(System::String pfx, System::String password);
    PKCS7Detached(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    
protected:

    PKCS7Detached(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Engine::IPdfDocument> document);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PKCS7Detached"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_PKCS7Detached_h_

