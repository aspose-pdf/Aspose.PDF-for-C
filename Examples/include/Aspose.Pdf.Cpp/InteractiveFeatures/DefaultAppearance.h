#ifndef _Aspose_Pdf_InteractiveFeatures_DefaultAppearance_h_
#define _Aspose_Pdf_InteractiveFeatures_DefaultAppearance_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <drawing/color.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { class PageContentCommandProcessor; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Describes default appearance of field (font, text size and color).
/// </summary>
class ASPOSE_PDF_SHARED_API DefaultAppearance FINAL : public System::Object
{
    typedef DefaultAppearance ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    
public:

    /// <summary>
    /// Gets font size in default apperance.
    /// </summary>
    double get_FontSize();
    /// <summary>
    /// Gets font size in default apperance.
    /// </summary>
    void set_FontSize(double value);
    /// <summary>
    /// Gets or sets the color of text in the default appearance.
    /// </summary>
    System::Drawing::Color get_TextColor();
    /// <summary>
    /// Gets or sets the color of text in the default appearance.
    /// </summary>
    void set_TextColor(System::Drawing::Color value);
    /// <summary>
    /// Gets font name in the default appearance.
    /// </summary>
    System::String get_FontName();
    /// <summary>
    /// Gets font name in the default appearance.
    /// </summary>
    void set_FontName(System::String value);
    /// <summary>
    /// Gets font specified as default for text.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    /// <summary>
    /// Gets the list of pdf operators which represent appearence. 
    /// </summary>
    System::String get_Text();
    
    /// <summary>
    /// Constructor of DefaultAppearance.
    /// </summary>
    DefaultAppearance();
    /// <summary>
    /// Constructor of DefaultAppearance.
    /// </summary>
    /// <param name="fontName">Font name.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="textColor">Color of text.</param>
    DefaultAppearance(System::String fontName, double fontSize, System::Drawing::Color textColor);
    /// <summary>
    /// Constructor of Default Appearance. Previously created font may be specified as default font. 
    /// </summary>
    /// <param name="font">Font which will be used as default.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="textColor">Color of text.</param>
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Text::Font> font, double fontSize, System::Drawing::Color textColor);
    
protected:

    /// <summary>
    /// Gets or sets the color of border in the default appearance.
    /// </summary>
    System::Drawing::Color get_BorderColor();
    /// <summary>
    /// Gets or sets the color of border in the default appearance.
    /// </summary>
    void set_BorderColor(System::Drawing::Color value);
    
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> appearance);
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetProgram(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
private:

    System::Drawing::Color _textColor;
    System::Drawing::Color _borderColor;
    double _fontSize;
    System::String _resourceName;
    System::SharedPtr<Aspose::Pdf::Text::Font> _font;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict;
    static System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::PageContentCommandProcessor> processor;
    
    void UpdateDict();
    void ReadAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> appearance);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators();
    System::String GetProgramText();
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_DefaultAppearance_h_

