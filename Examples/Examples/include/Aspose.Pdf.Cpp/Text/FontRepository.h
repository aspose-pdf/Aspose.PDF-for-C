﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Exceptions;

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/enum_helpers.h>
#include <system/collections/list.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class FontSubstitutionCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontSourceCollection; } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { namespace Text { enum class FontStyles; } } }
namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }
namespace Aspose { namespace Pdf { namespace Text { enum class FontTypes; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Performs font search. Searches in system installed fonts and standard Pdf fonts.
/// Also provides functionality to open custom fonts.
/// </summary>
/// <example>
/// The example demonstrates how to find font and replace the font of text of first page.
/// <code lang="C#"> 
/// // Find font
/// Font font = FontRepository.FindFont("Arial");
/// 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// 
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// 
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// 
/// // Change font of the first text occurrence
/// absorber.TextFragments[1].TextState.Font = font;
/// 
/// // Save document
/// doc.Save(@"D:\Tests\output.pdf"); 
///	</code>
/// </example>
/// <seealso cref="TextFragmentAbsorber"/>
/// <seealso cref="Document"/>
class ASPOSE_PDF_SHARED_API FontRepository FINAL : public System::Object
{
    typedef FontRepository ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets font substitution strategies collection.
    /// </summary>
    static System::SharedPtr<FontSubstitutionCollection> get_Substitutions();
    /// <summary>
    /// Gets font sources collection.
    /// </summary>
    static System::SharedPtr<FontSourceCollection> get_Sources();
    
    /// <summary>
    /// Searches and returns font with specified font name.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find font and replace the font of text of first page.
    /// <code lang="C#"> 
    /// // Find font
    /// Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurrence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    ///	</code>
    /// </example>
    /// <param name="fontName">Font name.</param>
    /// <returns>Font object.</returns>
    static System::SharedPtr<Font> FindFont(System::String fontName);
    /// <summary>
    /// Searches and returns font with specified font name ignoring or honoring case sensitivity.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find font and replace the font of text of first page.
    /// <code lang="C#"> 
    /// // Find font
    /// Font font = FontRepository.FindFont("Arial");
    /// 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurrence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    ///	</code>
    /// </example>
    /// <param name="fontName">Font name.</param>
    /// <param name="ignoreCase">case sensitivity</param>
    /// <returns>Font object.</returns>
    static System::SharedPtr<Font> FindFont(System::String fontName, bool ignoreCase);
    /// <summary>
    /// Searches and returns font with specified font name and font style.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find font and replace the font of text of first page.
    /// <code lang="C#"> 
    /// // Find font
    /// Font font = FontRepository.FindFont("Arial", FontStyle.Italic);
    /// 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    ///	</code>
    /// </example>
    /// <param name="fontFamilyName">Font family name.</param>
    /// <param name="stl">Font style value.</param>
    /// <returns>Font object corresponding to search request parameters.</returns>
    static System::SharedPtr<Font> FindFont(System::String fontFamilyName, FontStyles stl);
    /// <summary>
    /// Searches and returns font with specified font name and font style 
    /// ignoring or honoring case sensitivity.
    /// </summary>
    /// <example>
    /// The example demonstrates how to find font and replace the font of text of first page.
    /// <code lang="C#"> 
    /// // Find font
    /// Font font = FontRepository.FindFont("Arial", FontStyle.Italic);
    /// 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    ///	</code>
    /// </example>
    /// <param name="fontFamilyName">Font family name.</param>
    /// <param name="stl">Font style value.</param>
    /// <param name="ignoreCase">case sensitivity</param>
    /// <returns>Font object corresponding to search request parameters.</returns>
    static System::SharedPtr<Font> FindFont(System::String fontFamilyName, FontStyles stl, bool ignoreCase);
    /// <summary>
    /// Opens font with specified font stream.
    /// </summary>
    /// <example>
    /// The example demonstrates how to open font and replace the font of text of first page.
    /// <code lang="C#">  
    /// // Open font
    /// using (FileStream fontStream = File.OpenRead(@"C:\WINDOWS\Fonts\arial.ttf"))
    /// {
    ///     Font font = FontRepository.OpenFont(fontStream, , FontTypes.TTF);
    /// 
    ///     // Open document
    ///     Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    ///     // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    ///     TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    ///     // Accept the absorber for first page
    ///     doc.Pages[1].Accept(absorber);
    /// 
    ///     // Change font of the first text occurrence
    ///     absorber.TextFragments[1].TextState.Font = font;
    /// 
    ///     // Save document
    ///     doc.Save(@"D:\Tests\output.pdf"); 
    /// }
    ///	</code>
    /// </example>
    /// <param name="fontStream">Font stream.</param>
    /// <param name="fontType">Font type value.</param>
    /// <returns>Font object.</returns>
    static System::SharedPtr<Font> OpenFont(System::SharedPtr<System::IO::Stream> fontStream, FontTypes fontType);
    /// <summary>
    /// Opens font with specified font file path.
    /// </summary>
    /// <example>
    /// The example demonstrates how to open font and replace the font of text of first page.
    /// <code lang="C#"> 
    /// // Open font
    /// Font font = FontRepository.OpenFont(@"C:\WINDOWS\Fonts\arial.ttf");
    /// 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurrence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    ///	</code>
    /// </example>
    /// <param name="fontFilePath">Font file path.</param>
    /// <returns>Font object.</returns>
    static System::SharedPtr<Font> OpenFont(System::String fontFilePath);
    /// <summary>
    /// Opens font with specified font file path and metrics file path.
    /// </summary>
    /// <example>
    /// The example demonstrates how to open Type1 font with metrics and replace the font of text of first page.
    /// <code lang="C#"> 
    /// // Open font
    /// Font font = FontRepository.OpenFont("courier.pfb", "courier.afm");
    /// 
    /// // Open document
    /// Document doc = new Document(@"D:\Tests\input.pdf");
    /// 
    /// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
    /// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
    /// 
    /// // Accept the absorber for first page
    /// doc.Pages[1].Accept(absorber);
    /// 
    /// // Change font of the first text occurrence
    /// absorber.TextFragments[1].TextState.Font = font;
    /// 
    /// // Save document
    /// doc.Save(@"D:\Tests\output.pdf"); 
    ///	</code>
    /// </example>
    /// <param name="fontFilePath">Font file path.</param>
    /// <param name="metricsFilePath">Font metrics file patrh.</param>
    /// <returns>Font object.</returns>
    static System::SharedPtr<Font> OpenFont(System::String fontFilePath, System::String metricsFilePath);
    /// <summary>
    /// Loads system installed fonts and standard Pdf fonts. This method was designed to speed up font loading process.
    /// By default fonts are loaded on first request for any font. Use of this method loads system and standard Pdf fonts
    /// immediately before any Pdf document was open.
    /// </summary>
    static void LoadFonts();
    
private:

    static System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> GetFontDefinition(System::SharedPtr<System::Collections::Generic::List<System::String>> realFontNames, bool IgnoreCase);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


