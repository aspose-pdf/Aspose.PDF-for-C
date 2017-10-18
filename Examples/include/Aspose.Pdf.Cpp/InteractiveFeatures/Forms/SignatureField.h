#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_SignatureField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_SignatureField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Signature; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents signature form field.
/// </summary>
class ASPOSE_PDF_SHARED_API SignatureField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef SignatureField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> get_Signature();
    
    void Sign(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> signature, System::SharedPtr<System::IO::Stream> pfx, System::String pass);
    
    SignatureField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    SignatureField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    void Sign(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> signature);
    System::SharedPtr<System::IO::Stream> ExtractImage();
    System::SharedPtr<System::IO::Stream> ExtractCertificate();
    
protected:

    SignatureField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    void Clear();
    void AddImage(System::SharedPtr<System::IO::Stream> image);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SignatureField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> _signature;
    
    void AddImageToAppearance(System::SharedPtr<XForm> appearance, System::SharedPtr<System::IO::Stream> image, System::ArrayPtr<double> position);
    System::ArrayPtr<double> CalculateImagePosition(double width, double height);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_SignatureField_h_

