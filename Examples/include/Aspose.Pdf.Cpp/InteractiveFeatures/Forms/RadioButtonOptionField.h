#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Forms/Field.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { enum class BoxShape; } } }
namespace Aspose { namespace Pdf { namespace Forms { enum class BoxStyle; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XForm; } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class represents item of RadioButton field.
/// </summary>
class ASPOSE_PDF_SHARED_API RadioButtonOptionField FINAL : public Aspose::Pdf::Forms::Field
{
    typedef RadioButtonOptionField ThisType;
    typedef Aspose::Pdf::Forms::Field BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    
public:

    /// <summary>
    /// Gets name of the option.
    /// </summary>
    System::String get_OptionName();
    /// <summary>
    /// Sets name of the option.
    /// </summary>
    void set_OptionName(System::String value);
    /// <summary>
    /// Gets caption.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_Caption();
    /// <summary>
    /// Sets caption.
    /// </summary>
    void set_Caption(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    /// <summary>
    /// Gets style of check box.
    /// </summary>
    BoxStyle get_Style();
    /// <summary>
    /// Sets style of check box.
    /// </summary>
    void set_Style(BoxStyle value);
    
    /// <summary>
    /// Create new RadioButtonOptionField instance.
    /// </summary>
    RadioButtonOptionField();
    /// <summary>
    /// Creates radiobutton in the specified recangle on specified page. 
    /// </summary>
    /// <param name="page">Page where RadioButton will be placed;</param>
    /// <param name="rect">Recangle of RadioButton.</param>
    RadioButtonOptionField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    System::WeakPtr<RadioButtonField> owner;
    
    /// <summary>
    /// Shape of Radio Button border. May be circle or square. If this value set to Default, shape depends of box style (circle for circle style and square for others).
    /// This property is for internal use only.
    /// </summary>
    BoxShape get_Shape();
    /// <summary>
    /// Shape of Radio Button border. May be circle or square. If this value set to Default, shape depends of box style (circle for circle style and square for others).
    /// This property is for internal use only.
    /// </summary>
    void set_Shape(BoxShape value);
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    System::String get_NormalCaption();
    /// <summary>
    /// Gets normal caption of the field.
    /// </summary>
    void set_NormalCaption(System::String value);
    
    /// <summary>
    /// Initializes RadioButtonOptionField.
    /// </summary>
    /// <param name="annotation"></param>
    /// <param name="document"></param>
    RadioButtonOptionField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    virtual void AttachToPage(System::SharedPtr<Aspose::Pdf::Page> page);
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual bool AppearanceSupported();
    /// <summary>
    /// Creates sequence of the operators to show radio button option. 
    /// </summary>
    /// <param name="parameters">Appearance parameters (state of element).</param>
    /// <param name="annotation">Annotation where appearance is created.</param>
    /// <returns>Operator list of the apperance operators.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    System::SharedPtr<XForm> createXForm(bool check, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    void setOptionName(System::String value);
    System::String getOptionName();
    virtual System::SharedPtr<Field> CreateCopy();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String optionName;
    static System::String fontName;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> caption;
    BoxShape _shape;
    
    void circle(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> op, double x, double y, double r);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircularFrame(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation, System::SharedPtr<Rectangle> rect, double r);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


