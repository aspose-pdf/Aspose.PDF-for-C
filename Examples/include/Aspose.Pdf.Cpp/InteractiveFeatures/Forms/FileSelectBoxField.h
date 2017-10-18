#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_FileSelectBoxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_FileSelectBoxField_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Forms/TextBoxField.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Field for file select box element.
/// </summary>
class ASPOSE_PDF_SHARED_API FileSelectBoxField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField
{
    typedef FileSelectBoxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
protected:

    FileSelectBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FileSelectBoxField"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_FileSelectBoxField_h_

