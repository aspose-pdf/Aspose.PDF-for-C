#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "InteractiveFeatures/Forms/ChoiceField.h"

namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class represents ListBox field.
/// </summary>
class ASPOSE_PDF_SHARED_API ListBoxField FINAL : public Aspose::Pdf::Forms::ChoiceField
{
    typedef ListBoxField ThisType;
    typedef Aspose::Pdf::Forms::ChoiceField BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Forms::Field;
    
public:

    /// <summary>
    /// Gets index of the top visible element of the list.
    /// </summary>
    int32_t get_TopIndex();
    /// <summary>
    /// Sets index of the top visible element of the list.
    /// </summary>
    void set_TopIndex(int32_t value);
    /// <summary>
    /// Sets index of the selected item. Items are numbered from 1.
    /// </summary>
    virtual void set_Selected(int32_t value);
    /// <summary>
    /// Sets array of the selected items in the multiselect list. For single-select list returns array with single item.
    /// </summary>
    virtual void set_SelectedItems(System::ArrayPtr<int32_t> value);
    
    /// <summary>
    /// Constructor for ListBoxField to be used in Generator.
    /// </summary>
    ListBoxField();
    /// <summary>
    /// Creates new ListBox field.
    /// </summary>
    /// <param name="page">Page where list box will be placed.</param>
    /// <param name="rect">Rectangle where list box will be placed on the page.</param>
    ListBoxField(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Constructor for ListBox field.
    /// </summary>
    /// <param name="doc">Document to which this field will belong.</param>
    /// <param name="rect">Rectangle where list box will be placed. </param>
    ListBoxField(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
protected:

    /// <summary>
    /// Constructor for ListBoxField class.
    /// </summary>
    /// <param name="annotation">List box annotation.</param>
    /// <param name="document">Document which contains list box.</param>
    ListBoxField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="page">The Aspose.Pdf.Page object where the field should be located.</param>
    virtual void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    virtual void UpdateAppearance(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    virtual bool AppearanceSupported();
    /// <summary>
    /// Returns sequence of operators which are appearance of ListBox.
    /// </summary>
    /// <param name="parameters">Appearance parameters.</param>
    /// <param name="annotation">Annotation for which appearance will be generated.</param>
    /// <returns></returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Aspose::Pdf::Annotations::Annotation::AppearanceParameters> parameters, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    virtual System::SharedPtr<Field> CreateCopy();
    
private:

    double GetTextWidth(System::String text, System::SharedPtr<Aspose::Pdf::Text::Font> font, double fontSize);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


