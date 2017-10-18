#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_PKCS1__h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_PKCS1__h_
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
/// Represents signature object regarding PKCS#1 standard.
/// RSA encryption algorithm and SHA-1 digest method are used for signing.
/// </summary>
class ASPOSE_PDF_SHARED_API PKCS1 FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Signature
{
    typedef PKCS1 ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Signature BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    
public:

    PKCS1(System::SharedPtr<System::IO::Stream> image);
    PKCS1();
    PKCS1(System::String pfx, System::String password);
    PKCS1(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    
protected:

    PKCS1(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PKCS1"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_PKCS1__h_

