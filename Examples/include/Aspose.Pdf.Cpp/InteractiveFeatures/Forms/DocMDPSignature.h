#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPSignature_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPSignature_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class DocMDPAccessPermissions; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Signature; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Represents the class of document MDP (modification detection and prevention) signature type.
/// </summary>
class ASPOSE_PDF_SHARED_API DocMDPSignature FINAL : public System::Object
{
    typedef DocMDPSignature ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    
public:

    DocMDPAccessPermissions get_AccessPermissions();
    
    DocMDPSignature(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> signature, DocMDPAccessPermissions accessPermissions);
    
protected:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> get_Signature();
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DocMDPSignature"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Signature> _signature;
    DocMDPAccessPermissions _accessPermissions;
    
    void InitializeSignatureReference(DocMDPAccessPermissions accessPermissions);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPSignature_h_

