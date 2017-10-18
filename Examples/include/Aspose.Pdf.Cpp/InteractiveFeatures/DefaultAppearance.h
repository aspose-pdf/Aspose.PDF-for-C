#ifndef _Aspose_Pdf_InteractiveFeatures_DefaultAppearance_h_
#define _Aspose_Pdf_InteractiveFeatures_DefaultAppearance_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    double get_FontSize();
    void set_FontSize(double value);
    System::Drawing::Color get_TextColor();
    void set_TextColor(System::Drawing::Color value);
    System::String get_FontName();
    void set_FontName(System::String value);
    System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    System::String get_Text();
    
    DefaultAppearance();
    DefaultAppearance(System::String fontName, double fontSize, System::Drawing::Color textColor);
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Text::Font> font, double fontSize, System::Drawing::Color textColor);
    
protected:

    System::Drawing::Color get_BorderColor();
    void set_BorderColor(System::Drawing::Color value);
    
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    DefaultAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> appearance);
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetProgram(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DefaultAppearance"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

