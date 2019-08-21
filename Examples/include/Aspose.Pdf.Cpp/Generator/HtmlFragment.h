#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Generator/FormattedFragment.h"

namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class HtmlLoadOptions; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class PdfPageInfo; } }
namespace Aspose { namespace Pdf { class Matrix; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents html fragment.
/// </summary>
class ASPOSE_PDF_SHARED_API HtmlFragment FINAL : public Aspose::Pdf::FormattedFragment
{
    typedef HtmlFragment ThisType;
    typedef Aspose::Pdf::FormattedFragment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets rectangle of the HtmlFragment
    /// </summary>
    System::Drawing::RectangleF get_Rectangle();
    /// <summary>
    /// Gets words break
    /// </summary>
    bool get_IsBreakWords();
    /// <summary>
    /// Sets words break
    /// </summary>
    void set_IsBreakWords(bool value);
    /// <summary>
    /// Gets font
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    /// <summary>
    /// Sets font
    /// </summary>
    void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets HtmlLoadOptions that will be used for loading (and rendering) of HTML into this instance of class.
    /// Please use it when it's necessary use specific setting for import of HTML for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported HTML or should use specific loader of external resources)
    /// If parameter is default (null), then standard HTML loading options will be used.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::HtmlLoadOptions> get_HtmlLoadOptions();
    /// <summary>
    /// Sets HtmlLoadOptions that will be used for loading (and rendering) of HTML into this instance of class.
    /// Please use it when it's necessary use specific setting for import of HTML for this or that instance
    ///  (f.e when this or that instance should use specific BasePath for imported HTML or should use specific loader of external resources)
    /// If parameter is default (null), then standard HTML loading options will be used.
    /// </summary>
    void set_HtmlLoadOptions(System::SharedPtr<Aspose::Pdf::HtmlLoadOptions> value);
    
    /// <summary>
    /// Initializes a new instance of the HtmlFragment class.
    /// </summary>
    /// <param name="text">The fragment text</param>
    HtmlFragment(System::String text);
    
    virtual System::SharedPtr<System::Object> Clone();
    
protected:

    virtual void ConvertToPages(System::SharedPtr<Page> page, double width, double firstHeight, double anyHeight, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<PdfPageInfo>>> pageInfos, System::SharedPtr<Matrix> matrix);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool pr_IsBreakWords;
    System::SharedPtr<Aspose::Pdf::Text::TextState> pr_TextState;
    System::SharedPtr<Aspose::Pdf::HtmlLoadOptions> pr_HtmlLoadOptions;
    
    System::String GetFontedText();
    
};

} // namespace Pdf
} // namespace Aspose


