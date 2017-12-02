#ifndef _Aspose_Pdf_BaseActionCollection_h_
#define _Aspose_Pdf_BaseActionCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Removes all actions of the annotation. 
    /// </summary>
    void RemoveActions();
    
protected:

    System::SharedPtr<Engine::Data::IPdfObject> Owner;
    
    /// <summary>
    /// Returns action by its name. 
    /// </summary>
    /// <param name="name">Name of action. </param>
    /// <returns></returns>
    System::SharedPtr<InteractiveFeatures::PdfAction> GetAction(System::String name);
    /// <summary>
    /// Sets action by its name.
    /// </summary>
    /// <param name="name">Action name.</param>
    /// <param name="action">Action to be insert.</param>
    void SetAction(System::String name, System::SharedPtr<InteractiveFeatures::PdfAction> action);
    
    BaseActionCollection(System::SharedPtr<Engine::Data::IPdfObject> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_BaseActionCollection_h_

