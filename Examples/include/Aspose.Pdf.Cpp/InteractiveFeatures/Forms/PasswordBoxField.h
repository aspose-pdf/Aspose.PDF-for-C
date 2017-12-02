#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_PasswordBoxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_PasswordBoxField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Forms/TextBoxField.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class descibes text field for entering password.
/// </summary>
class ASPOSE_PDF_SHARED_API PasswordBoxField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField
{
    typedef PasswordBoxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
protected:

    /// <summary>
    /// Constructor for PasswordBoxField class.
    /// </summary>
    /// <param name="annotation"></param>
    /// <param name="document"></param>
    PasswordBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_PasswordBoxField_h_

