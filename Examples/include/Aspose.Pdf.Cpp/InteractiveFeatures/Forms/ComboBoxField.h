#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_ComboBoxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_ComboBoxField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "InteractiveFeatures/Forms/ChoiceField.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing Combobox field of the form.
/// </summary>
class ASPOSE_PDF_SHARED_API ComboBoxField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField
{
    typedef ComboBoxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    
public:

    /// <summary>
    /// Gets or sets editable status of the field.
    /// </summary>
    bool get_Editable();
    /// <summary>
    /// Gets or sets editable status of the field.
    /// </summary>
    void set_Editable(bool value);
    /// <summary>
    /// Gets or sets spellchaeck activiity status.
    /// </summary>
    bool get_SpellCheck();
    /// <summary>
    /// Gets or sets spellchaeck activiity status.
    /// </summary>
    void set_SpellCheck(bool value);
    /// <summary>
    /// Gets or sets index of currently selected item in combo box list.
    /// </summary>
    virtual void set_Selected(int32_t value);
    
    /// <summary>
    /// Constructor for ComboBoxField to be used in Generator. 
    /// </summary>
    ComboBoxField();
    /// <summary>
    /// Constructor for Combobox Field. 
    /// </summary>
    /// <param name="page">Page where field will be placed. </param>
    /// <param name="rect">Rectangle which defines size and position of the field on the page.</param>
    ComboBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for Combobox field. 
    /// </summary>
    /// <param name="doc">Document where field should be created.</param>
    /// <param name="rect">Rectangle which defines size and position of the field. </param>
    ComboBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    ComboBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page object.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual bool AppearanceSupported();
    /// <summary>
    /// Returns sequence of the operators for draing of the combo box.
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation where appearance will be added.</param>
    /// <returns>Listof appearance operators.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_ComboBoxField_h_

