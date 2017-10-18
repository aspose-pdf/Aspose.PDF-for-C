#ifndef _Aspose_Pdf_Text_Font_h_
#define _Aspose_Pdf_Text_Font_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class RedactionAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Substitution { class FontSubstitutor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class C128Barcode; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ComboBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShowText; } } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontRepository; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace XfaRenderer { class XfaTextRenderer; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextModel; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontSubstitutorTests; } } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextFragmentTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DomFormTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontRepositoryTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class Resources_ViewFont_Tests; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFont; } } } } } }
namespace Aspose { namespace Fonts { class IFont; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

///<summary>
/// Represents font object.
/// </summary>
/// <example>
/// The example demonstrates how to search text on first page and change font of a first search occurrence.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// // Create font and mark it to be embedded
/// Font font = FontRepository.FindFont("Arial");
/// font.IsEmbedded = true;
/// // Change font of the first text occurrence
/// absorber.TextFragments[1].TextState.Font = font;
/// // Save document
/// doc.Save(@"D:\Tests\output.pdf"); 
/// </code>
/// </example>
/// <seealso cref="TextFragmentAbsorber"/>
/// <seealso cref="FontRepository"/>
/// <seealso cref="Document"/>
class ASPOSE_PDF_SHARED_API Font FINAL : public System::Object
{
    typedef Font ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormattedText;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::C128Barcode;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ComboBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::FontCollection;
    friend class Aspose::Pdf::Text::FontRepository;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::XfaRenderer::XfaTextRenderer;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextModel;
    friend class Aspose::Pdf::Tests::Engine::CommonData::Text::Fonts::FontSubstitutorTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    friend class Aspose::Pdf::Tests::Fonts::FontRepositoryTests;
    friend class Aspose::Pdf::Tests::Fonts::FontTests;
    friend class Aspose::Pdf::Tests::Fonts::Resources_ViewFont_Tests;
    
public:

    System::String get_FontName();
    bool get_IsEmbedded();
    void set_IsEmbedded(bool value);
    bool get_IsSubset();
    void set_IsSubset(bool value);
    bool get_IsAccessible();
    
    void Save(System::SharedPtr<System::IO::Stream> stream);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_iPdfFont();
    void set_iPdfFont(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> value);
    System::SharedPtr<Aspose::Fonts::IFont> get_iFont();
    void set_iFont(System::SharedPtr<Aspose::Fonts::IFont> value);
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_IPdfFont();
    System::SharedPtr<Aspose::Fonts::IFont> get_IFont();
    System::String get_UniqueId();
    
    System::EventHandler<System::SharedPtr<System::EventArgs>> FontPropertiesChanged;
    
    Font(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> fontObj);
    Font(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont);
    Font(System::SharedPtr<Aspose::Fonts::IFont> font);
    Font(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont);
    
    void InitWithIPdfFont(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> iPdfFont);
    System::SharedPtr<Font> Clone();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Font"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String fontName;
    bool isEmbedded;
    bool isSubset;
    bool isAccessible;
    bool isAttached;
    System::String subsetTag;
    System::WeakPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> pr_iPdfFont;
    System::SharedPtr<Aspose::Fonts::IFont> pr_iFont;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_Font_h_

