#ifndef _Aspose_Pdf_BaseActionCollection_h_
#define _Aspose_Pdf_BaseActionCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageActionCollection; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationActionCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class incapsulates basic actions wuth page/annotation/field interactive actions
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT BaseActionCollection : public System::Object
{
    typedef BaseActionCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationActionCollection;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    void RemoveActions();
    
protected:

    System::SharedPtr<Engine::Data::IPdfObject> Owner;
    
    System::SharedPtr<InteractiveFeatures::PdfAction> GetAction(System::String name);
    void SetAction(System::String name, System::SharedPtr<InteractiveFeatures::PdfAction> action);
    
    BaseActionCollection(System::SharedPtr<Engine::Data::IPdfObject> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BaseActionCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_BaseActionCollection_h_

