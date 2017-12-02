#ifndef _Aspose_Pdf_Text_Font_h_
#define _Aspose_Pdf_Text_Font_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
/// 
/// <code>
/// // Open document
/// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
/// // Accept the absorber for first page
/// doc->get_Pages()->idx_get(1)->Accept(absorber);
/// // Create font and mark it to be embedded
/// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
/// font->set_IsEmbedded(true);
/// // Change font of the first text occurrence
/// absorber->get_TextFragments()->idx_get(1)->get_TextState()->set_Font(font);
/// // Save document
/// doc->Save(L"D:\\Tests\\output.pdf");
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

    ///<summary>
    /// Gets font name of the <see cref="Font"/> object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search text on first page and view font name of a first text occurrence.
    /// 
    ///	<code>
    ///	// Open document
    ///	System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    ///	// Create TextFragmentAbsorber object to find all "hello world" text occurrences
    ///	System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    ///	// Accept the absorber for first page
    ///	doc->get_Pages()->idx_get(1)->Accept(absorber);
    ///	// View font name of first text occurrence
    ///	System::Console::get_Out()->WriteLine(absorber->get_TextFragments()->idx_get(1)->get_TextState()->get_Font()->get_FontName());
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    System::String get_FontName();
    /// <summary>
    /// Gets or sets a value that indicates whether the font is embedded.
    /// </summary>
    /// <example>
    /// The following example demonstrates how to find a font, mark it as embedded, search text on the document's page and replace the text font.
    /// 
    /// <code>
    /// // Create font and mark it to be embedded
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// font->set_IsEmbedded(true);
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // change font for the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->get_TextState()->set_Font(font);
    /// // save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example> 
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="FontRepository"/>
    /// <seealso cref="Document"/>
    bool get_IsEmbedded();
    /// <summary>
    /// Gets or sets a value that indicates whether the font is embedded.
    /// </summary>
    /// <example>
    /// The following example demonstrates how to find a font, mark it as embedded, search text on the document's page and replace the text font.
    /// 
    /// <code>
    /// // Create font and mark it to be embedded
    /// System::SharedPtr<Aspose::Pdf::Text::Font> font = Aspose::Pdf::Text::FontRepository::FindFont(L"Arial");
    /// font->set_IsEmbedded(true);
    /// // open document
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    /// // create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    /// // accept the absorber for first page
    /// doc->get_Pages()->idx_get(1)->Accept(absorber);
    /// // change font for the first text occurrence
    /// absorber->get_TextFragments()->idx_get(1)->get_TextState()->set_Font(font);
    /// // save document
    /// doc->Save(L"D:\\Tests\\output.pdf");
    /// </code>
    /// </example> 
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="FontRepository"/>
    /// <seealso cref="Document"/>
    void set_IsEmbedded(bool value);
    /// <summary>
    /// Gets or sets a value that indicates whether the font is a subset.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search text on first page and get the value that indicates whether the font is a subset.
    /// 
    ///	<code>
    ///	// Open document
    ///	System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    ///	// Create TextFragmentAbsorber object to find all "hello world" text occurrences
    ///	System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    ///	// Accept the absorber for first page
    ///	doc->get_Pages()->idx_get(1)->Accept(absorber);
    ///	// View font's IsSubset value of first text occurrence
    ///	if (absorber->get_TextFragments()->idx_get(1)->get_TextState()->get_Font()->get_IsSubset())
    ///	{
    ///	    System::Console::get_Out()->WriteLine(L"the font is a subset");
    ///	}
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    bool get_IsSubset();
    /// <summary>
    /// Gets or sets a value that indicates whether the font is a subset.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search text on first page and get the value that indicates whether the font is a subset.
    /// 
    ///	<code>
    ///	// Open document
    ///	System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    ///	// Create TextFragmentAbsorber object to find all "hello world" text occurrences
    ///	System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    ///	// Accept the absorber for first page
    ///	doc->get_Pages()->idx_get(1)->Accept(absorber);
    ///	// View font's IsSubset value of first text occurrence
    ///	if (absorber->get_TextFragments()->idx_get(1)->get_TextState()->get_Font()->get_IsSubset())
    ///	{
    ///	    System::Console::get_Out()->WriteLine(L"the font is a subset");
    ///	}
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    void set_IsSubset(bool value);
    /// <summary>
    /// Gets indicating whether the font is present (installed) in the system.
    /// </summary>
    /// <remarks>
    /// Some operations are not available with fonts that could not be found in the system.
    /// </remarks>
    /// <example>
    /// The example demonstrates how to search text on first page and get the value that indicates whether the font is installed in the system.
    /// 
    ///	<code>
    ///	// Open document
    ///	System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
    ///	// Create TextFragmentAbsorber object to find all "hello world" text occurrences
    ///	System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> absorber = System::MakeObject<Aspose::Pdf::Text::TextFragmentAbsorber>(L"hello world");
    ///	// Accept the absorber for first page
    ///	doc->get_Pages()->idx_get(1)->Accept(absorber);
    ///	// View font's IsSubset value of first text occurrence
    ///	if (absorber->get_TextFragments()->idx_get(1)->get_TextState()->get_Font()->get_IsAccessible())
    ///	{
    ///	    System::Console::get_Out()->WriteLine(L"the font is installed in the system");
    ///	}
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    bool get_IsAccessible();
    
    /// <summary>
    /// Saves the font into the stream.
    /// Note that the font is saved to intermediate TTF format intended to be used in a converted copy of the original document only.
    /// The font file is not intended to be used outside the original document context.
    /// </summary>
    /// <param name="stream">Stream to save the font.</param>
    void Save(System::SharedPtr<System::IO::Stream> stream);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_iPdfFont();
    void set_iPdfFont(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> value);
    System::SharedPtr<Aspose::Fonts::IFont> get_iFont();
    void set_iFont(System::SharedPtr<Aspose::Fonts::IFont> value);
    /// <summary>
    /// Pdf font object.
    /// </summary>
    /// <remarks>
    /// For internal usage only
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> get_IPdfFont();
    /// <summary>
    /// System font object.
    /// </summary>
    /// <remarks>
    /// For internal usage only
    /// </remarks>
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

