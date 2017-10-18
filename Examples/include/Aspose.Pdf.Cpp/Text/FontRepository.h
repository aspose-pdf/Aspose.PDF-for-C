#ifndef _Aspose_Pdf_Text_FontRepository_h_
#define _Aspose_Pdf_Text_FontRepository_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

///<summary>
/// Performs font search. Searches in system installed fonts and standard Pdf fonts.
/// Also provides functionality to open custom fonts.
/// </summary>
/// <example>
/// The example demonstrates how to find font and replace the font of text of first page.
/// <code lang="C#"> 
/// // Find font
/// Font font = FontRepository.FindFont("Arial");
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// // Create TextFragmentAbsorber object to find all "hello world" text occurrences
/// TextFragmentAbsorber absorber = new TextFragmentAbsorber("hello world");
/// // Accept the absorber for first page
/// doc.Pages[1].Accept(absorber);
/// // Change font of the first text occurrence
/// absorber.TextFragments[1].TextState.Font = font;
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

    static System::SharedPtr<FontSubstitutionCollection> get_Substitutions();
    static System::SharedPtr<FontSourceCollection> get_Sources();
    
    static System::SharedPtr<Font> FindFont(System::String fontName);
    static System::SharedPtr<Font> FindFont(System::String fontName, bool ignoreCase);
    static System::SharedPtr<Font> FindFont(System::String fontFamilyName, FontStyles stl);
    static System::SharedPtr<Font> FindFont(System::String fontFamilyName, FontStyles stl, bool ignoreCase);
    static System::SharedPtr<Font> OpenFont(System::SharedPtr<System::IO::Stream> fontStream, FontTypes fontType);
    static System::SharedPtr<Font> OpenFont(System::String fontFilePath);
    static System::SharedPtr<Font> OpenFont(System::String fontFilePath, System::String metricsFilePath);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontRepository"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static System::SharedPtr<Aspose::Fonts::Sources::FontDefinition> GetFontDefinition(System::SharedPtr<System::Collections::Generic::List<System::String>> realFontNames, bool IgnoreCase);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_FontRepository_h_

