#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/eventhandler.h>

#include "Text/Interfaces/IFontOptions.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace OperatorHelpers { class ShowTextFontResolver; } } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class FontSubstitutionRegistrator; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class OpenTypeLayoutFont; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsCollector; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class FontUtilities; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentCIDType2FontContentUpdater; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfUaConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RedactionAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WatermarkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Substitution { class FontSubstitutor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class C128Barcode; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ListBoxField; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShowText; } } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontRepository; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextModel; } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontSubstitutorTests; } } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextFragmentTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DomFormTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontRepositoryTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class Resources_ViewFont_Tests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace TextShowing { class TextShowingTests; } } } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { class TestBase; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_11; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_3; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_10; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class IPdfFont; } } } } } }
namespace Aspose { namespace Fonts { class IFont; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font object.
/// </summary>
/// <example>
/// The example demonstrates how to search text on first page and change font of a first search occurrence.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// 
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// 
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// 
/// // Create font and mark it to be embedded
/// Font font = FontRepository.FindFont("Arial");
/// font.IsEmbedded = true;
/// 
/// // Change font of the first text occurrence
/// absorber.TextFragments[1].TextState.Font = font;
/// 
/// 
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
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::OperatorHelpers::ShowTextFontResolver;
    friend class Aspose::Pdf::Text::FontSubstitutionRegistrator;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::OpenTypeLayoutFont;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsCollector;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormattedText;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::C128Barcode;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::FontCollection;
    friend class Aspose::Pdf::Text::FontRepository;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Engine::CommonData::Text::Fonts::FontSubstitutorTests;
    friend class Aspose::Pdf::Tests::Text::TextFragmentTests;
    friend class Aspose::Pdf::Tests::Facades::DomFormTests;
    friend class Aspose::Pdf::Tests::Fonts::FontRepositoryTests;
    friend class Aspose::Pdf::Tests::Fonts::FontTests;
    friend class Aspose::Pdf::Tests::Fonts::Resources_ViewFont_Tests;
    friend class Aspose::Pdf::Tests::Engine::CommonData::PageContent::Operators::TextShowing::TextShowingTests;
    friend class Aspose::Pdf::Tests::TestBase;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    
private:

    class FontOptionsImplementor : public Aspose::Pdf::Text::IFontOptions
    {
        typedef FontOptionsImplementor ThisType;
        typedef Aspose::Pdf::Text::IFontOptions BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Sometimes it's not possible to embed desired font into document. There are many reasons, for example
        /// license restrictions or when desired font was not found on destination computer.
        /// When this situation comes it's not simply to detect, because desired font is embedded via set 
        /// of property flag Font.IsEmbedded = true; Of course it's possible to read this property immediately after it was set but
        /// it's not convenient approach. Flag NotifyAboutFontEmbeddingError manages an exceptions mechanism 
        /// for cases when attempt to embed font became failed. If this flag is set an exception of type
        /// <see cref="Aspose::Pdf::FontEmbeddingException"/> will be thrown. By default true.
        /// </summary>
        bool get_NotifyAboutFontEmbeddingError();
        /// <summary>
        /// Sometimes it's not possible to embed desired font into document. There are many reasons, for example
        /// license restrictions or when desired font was not found on destination computer.
        /// When this situation comes it's not simply to detect, because desired font is embedded via set 
        /// of property flag Font.IsEmbedded = true; Of course it's possible to read this property immediately after it was set but
        /// it's not convenient approach. Flag NotifyAboutFontEmbeddingError manages an exceptions mechanism 
        /// for cases when attempt to embed font became failed. If this flag is set an exception of type
        /// <see cref="Aspose::Pdf::FontEmbeddingException"/> will be thrown. By default true.
        /// </summary>
        void set_NotifyAboutFontEmbeddingError(bool value);
        
        FontOptionsImplementor(System::SharedPtr<Font> parent);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        bool _notifyAboutFontEmbeddingError;
        System::WeakPtr<Font> _parent;
        
    };
    
    
public:

    /// <summary>
    /// Gets font name of the <see cref="Font"/> object.
    /// </summary>
    /// <example>
    /// The example demonstrates how to search text on first page and view font name of a first text occurrence.
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // View font name of first text occurrence
    /// Console.Out.WriteLine(absorber.TextFragments[1].TextState.Font.FontName); 
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    System::String get_FontName();
    /// <summary>
    /// Sometimes PDF fonts(usually Chinese/Japanese/Korean fonts) could have specificical font name.
    /// This name is value of PDF font property "BaseFont" and sometimes this property
    /// could be represented in hexademical form. If read this name directly it could be represented
    /// in non-readable form. To get readable form it's necessary to decode font's name by
    /// rules specifical for this font. 
    /// This property returns decoded font name, so use it for cases when you meet 
    /// with a non-readable <see cref="FontName"/>.
    /// If property <see cref="FontName"/> has readable form this property will be the same as 
    /// <see cref="FontName"/>, so you can use this property for any cases when you need to
    /// get font name in a readable form.
    /// </summary>
    System::String get_DecodedFontName();
    /// <summary>
    /// Gets or sets a value that indicates whether the font is embedded.
    /// </summary>
    /// <example>
    /// The following example demonstrates how to find a font, mark it as embedded, search text on the document's page and replace the text font.
    /// <code lang="C#">
    /// // Create font and mark it to be embedded
    /// Font font = FontRepository.FindFont("Arial");
    /// font.IsEmbedded = true;
    /// 
    /// // open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// // accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // change font for the first text occurrence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
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
    /// <code lang="C#">
    /// // Create font and mark it to be embedded
    /// Font font = FontRepository.FindFont("Arial");
    /// font.IsEmbedded = true;
    /// 
    /// // open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// // accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // change font for the first text occurrence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
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
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // View font's IsSubset value of first text occurrence
    /// if(absorber.TextFragments[1].TextState.Font.IsSubset)
    ///    Console.Out.WriteLine("the font is a subset");
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
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // View font's IsSubset value of first text occurrence
    /// if(absorber.TextFragments[1].TextState.Font.IsSubset)
    ///    Console.Out.WriteLine("the font is a subset");
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
    /// <code lang="C#"> 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // View font's IsSubset value of first text occurrence
    /// if(absorber.TextFragments[1].TextState.Font.IsAccessible)
    ///    Console.Out.WriteLine("the font is installed in the system");
    ///	</code>
    /// </example>
    /// <seealso cref="TextFragmentAbsorber"/>
    /// <seealso cref="Document"/>
    bool get_IsAccessible();
    /// <summary>
    /// Useful properties to tune Font behaviour
    /// </summary>
    System::SharedPtr<IFontOptions> get_FontOptions();
    
    /// <summary>
    /// An objective of this method - to return description of error if an attempt
    /// to embed font was failed. If there are no error cases it returns empty string. 
    /// </summary>
    /// <returns>Error description</returns>
    System::String GetLastFontEmbeddingError();
    /// <summary>
    /// Saves the font into the stream.
    /// Note that the font is saved to intermediate TTF format intended to be used in a converted copy of the original document only.
    /// The font file is not intended to be used outside the original document context.
    /// </summary>
    /// <param name="stream">Stream to save the font.</param>
    void Save(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Measures the string.
    /// </summary>
    /// <param name="str">The string.</param>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Width of the string represented with this font and the specified size.</returns>
    double MeasureString(System::String str, float fontSize);
    
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
    
    System::EventHandler<> FontPropertiesChanged;
    
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
    System::SharedPtr<Font::FontOptionsImplementor> _fontOptions;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> pr_iPdfFont;
    System::SharedPtr<Aspose::Fonts::IFont> pr_iFont;
    
    System::SharedPtr<Font::FontOptionsImplementor> GetFontOptions();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


