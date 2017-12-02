#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_CheckboxField_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_CheckboxField_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class BoxStyle; } } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing checkbox field
/// </summary>
class ASPOSE_PDF_SHARED_API CheckboxField FINAL : public Aspose::Pdf::InteractiveFeatures::Forms::Field
{
    typedef CheckboxField ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    
public:

    /// <summary>
    /// Returns list of allowed states. 
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::String>> get_AllowedStates();
    /// <summary>
    /// Gets or sets style of check box.
    /// </summary>
    BoxStyle get_Style();
    /// <summary>
    /// Gets or sets style of check box.
    /// </summary>
    void set_Style(BoxStyle value);
    /// <summary>
    /// Gets or sets current annotation appearance state.
    /// </summary>
    virtual System::String get_ActiveState();
    /// <summary>
    /// Gets or sets current annotation appearance state.
    /// </summary>
    virtual void set_ActiveState(System::String value);
    /// <summary>
    /// Gets or sets state of check box.  
    /// </summary>
    bool get_Checked();
    /// <summary>
    /// Gets or sets state of check box.  
    /// </summary>
    void set_Checked(bool value);
    /// <summary>
    /// Gets or sets value of check box field.
    /// </summary>
    virtual System::String get_Value();
    /// <summary>
    /// Gets or sets value of check box field.
    /// </summary>
    virtual void set_Value(System::String value);
    
    /// <summary>
    /// Constructor for CheckboxField class.
    /// </summary>
    /// <param name="page">Page where check box will be placed.</param>
    /// <param name="rect">Position and size of the check box.</param>
    CheckboxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for CheckboxField class.
    /// </summary>
    /// <param name="doc">Document where will be new field created.</param>
    /// <param name="rect">Rectangle where new field will be created.</param>
    CheckboxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Create instance of CheckboxField.
    /// </summary>
    CheckboxField();
    
protected:

    /// <summary>
    /// Returns name of state which is "Checked" state of checkbox. This is "Yes" if presents 
    /// or any other  value other then "Off" and "No";
    /// </summary>
    /// <returns></returns>
    System::String get_OnState();
    /// <summary>
    /// Returns name of non-checked state; This is "no" if presents or "Off" in common state.
    /// </summary>
    /// <returns></returns>
    System::String get_OffState();
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    System::String get_NormalCaption();
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    void set_NormalCaption(System::String value);
    
    static BoxStyle GetStyle(System::SharedPtr<XForm> xform, BoxStyle defaultStyle);
    static void SetStyle(System::SharedPtr<XForm> xform, BoxStyle style);
    
    CheckboxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">Aspose.Pdf.page object.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    virtual bool AppearanceSupported();
    /// <summary>
    /// Creates sequense of operators for drawing appearance of the check box. 
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation for which appearance will be generated</param>
    /// <returns>List of the operators.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::String>> _allowedStates;
    static System::String fontName;
    
    System::String ExtractStateName(System::String stateKey);
    System::String GetString(System::String entry);
    static void SetString(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annot, System::String entry, System::String value);
    void SetString(System::String entry, System::String value);
    BoxStyle GetStyle(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    System::String GetNormalCaption(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    System::SharedPtr<XForm> CreateItemXForm(bool check, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    bool SetActiveState(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation, System::String value, bool throwExcpetion);
    System::String TranslateStyle(BoxStyle style);
    BoxStyle TranslateCaption(System::String caption);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_CheckboxField_h_

