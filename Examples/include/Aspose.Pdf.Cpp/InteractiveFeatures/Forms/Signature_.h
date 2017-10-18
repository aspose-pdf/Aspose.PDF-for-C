#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_Signature__h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_Signature__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/date_time.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class DocMDPSignature; } } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PKCS1; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PKCS7; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class PKCS7Detached; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class SignatureField; } } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Security { class ISignature; } } } }
namespace Aspose { namespace Pdf { class TimestampSettings; } }
namespace Aspose { namespace Pdf { class OcspSettings; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Security { namespace Impl { namespace Signatures { class SignatureReference; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Security { namespace Impl { namespace Signatures { class FieldLockDictionary; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// An abstract class which represents signature object in the pdf document. 
/// Signatures are fields with values of signature objects, the last contain data which is used to
/// verify the document validity.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Signature : public System::Object
{
    typedef Signature ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::DocMDPSignature;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PKCS1;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PKCS7;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::PKCS7Detached;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::SignatureField;
    
public:

    System::String get_Authority();
    void set_Authority(System::String value);
    System::DateTime get_Date();
    void set_Date(System::DateTime value);
    System::String get_Location();
    void set_Location(System::String value);
    System::String get_Reason();
    void set_Reason(System::String value);
    System::String get_ContactInfo();
    void set_ContactInfo(System::String value);
    System::ArrayPtr<int32_t> get_ByteRange();
    System::SharedPtr<Aspose::Pdf::TimestampSettings> get_TimestampSettings();
    void set_TimestampSettings(System::SharedPtr<Aspose::Pdf::TimestampSettings> value);
    bool get_ShowProperties();
    void set_ShowProperties(bool value);
    
    bool Verify();
    
    Signature();
    Signature(System::String pfx, System::String password);
    Signature(System::SharedPtr<System::IO::Stream> pfx, System::String password);
    
    virtual ~Signature();
    
protected:

    System::SharedPtr<System::IO::Stream> _pfx;
    System::String _password;
    System::SharedPtr<System::IO::Stream> _image;
    System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> _document;
    System::SharedPtr<Aspose::Pdf::Engine::Security::ISignature> _signature;
    System::String _name;
    System::ArrayPtr<int32_t> _byteRange;
    
    System::SharedPtr<Aspose::Pdf::OcspSettings> get_OcspSettings();
    void set_OcspSettings(System::SharedPtr<Aspose::Pdf::OcspSettings> value);
    System::SharedPtr<System::IO::Stream> get_Image();
    void set_Image(System::SharedPtr<System::IO::Stream> value);
    System::SharedPtr<System::IO::Stream> get_Pfx();
    System::SharedPtr<Aspose::Pdf::Engine::Security::ISignature> get_Value();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_Reference();
    void set_Reference(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> value);
    System::String get_Password();
    void set_Password(System::String value);
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> get_SignatureReferences();
    void set_SignatureReferences(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> value);
    System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> get_FieldsLock();
    void set_FieldsLock(System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> value);
    
    void Sign(System::String sigName, System::SharedPtr<System::IO::Stream> pfx, System::String pass);
    void Clear();
    
    Signature(System::SharedPtr<System::IO::Stream> image);
    Signature(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> signature, System::SharedPtr<Aspose::Pdf::Engine::IPdfDocument> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Signature"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _authority;
    System::DateTime _date;
    System::String _location;
    System::String _reason;
    System::String _contactInfo;
    bool mustClose;
    bool _showProperties;
    System::SharedPtr<Aspose::Pdf::TimestampSettings> _timestampSettings;
    System::SharedPtr<Aspose::Pdf::OcspSettings> _ocspSettings;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _reference;
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::SignatureReference>>> _signatureReferences;
    System::SharedPtr<Aspose::Pdf::Engine::Security::Impl::Signatures::FieldLockDictionary> _fieldLockDictionary;
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_Signature__h_

