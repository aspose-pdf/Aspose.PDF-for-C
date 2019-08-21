/// @file drawing/font_family.h
#ifndef _aspose_drawing_font_family_h_
#define _aspose_drawing_font_family_h_

#include "system/object.h"
#include "drawing/text/font_collection.h"
#include "drawing/font_style.h"
#include "drawing/text/generic_font_families.h"
#include "system/string.h"
#include "system/array.h"

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkTypeface.h>
#include <core/SkPaint.h>
#include <core/SkFontStyle.h>
#endif

#include <vector>

/// Forward declaration of SkFontStyle class.
ASPOSECPP_3RD_PARTY_CLASS(SkFontStyle);
/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkString class.
ASPOSECPP_3RD_PARTY_CLASS(SkString);
/// Forward declaration of SkTypeface class.
ASPOSECPP_3RD_PARTY_CLASS(SkTypeface);

template <typename T> class sk_sp;

namespace System { namespace Drawing {

namespace Text { class PrivateFontCollection; }

namespace Drawing2D { class GraphicsPath; }

class Font;
class Graphics;
/// Represents a group of type faces that share a similar basic design.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS FontFamily : public Object
{
public:
    /// Constructs a new instance of FontFamily class that represents a font family with the specified name.
    /// @param name A font family name
    ASPOSECPP_SHARED_API FontFamily(const String &name);

    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API FontFamily(const String &name, const SharedPtr<Text::FontCollection>& font_collection);
    /// NOT IMPLEMENTED
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API FontFamily(Text::GenericFontFamilies generic_family);

    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~FontFamily();

    /// Determines if the specified font style is available.
    /// @param style The font style to test
    /// @returns True if the specified font style is avaliable, otherwise - false
    ASPOSECPP_SHARED_API bool IsStyleAvailable(FontStyle style);
    /// Returns the height of em square in font design units for the specified style.
    /// @param style The style for which to get the height
    /// @returns The hight of the em square for the specified style
    ASPOSECPP_SHARED_API int GetEmHeight(FontStyle style);
    /// Returns the cell ascent of the font family represented by the current object
    /// for the specified font style.
    /// @param style The font style
    /// @returns The cell ascent of the font family represented by the current object
    /// for the specified font style.
    ASPOSECPP_SHARED_API int GetCellAscent(FontStyle style);
    /// Returns the cell descent of the font family represented by the current object
    /// for the specified font style.
    /// @param style The font style
    /// @returns The cell descent of the font family represented by the current object
    /// for the specified font style.
    ASPOSECPP_SHARED_API int GetCellDescent(FontStyle style);
    /// Returns the line spacing of the font family represented by the current object
    /// for the specified font style.
    /// @param style The font style
    /// @returns The line spacing of the font family represented by the current object
    /// for the specified font style.
    ASPOSECPP_SHARED_API int GetLineSpacing(FontStyle style);
    /// Returns the name of the font family represented by the current object.
    ASPOSECPP_SHARED_API String get_Name() const;

    /// Returns an array containing all FontFamily objects associated with the
    /// current graphics context.
    static ASPOSECPP_SHARED_API ArrayPtr<SharedPtr<FontFamily>> get_Families();
    /// Returns a FontFamily object that represents a Generic Sans Serif font family.
    static ASPOSECPP_SHARED_API SharedPtr<FontFamily> get_GenericSansSerif();
    /// Returns a FontFamily object that represents a Generic Monospace font family.
    static ASPOSECPP_SHARED_API SharedPtr<FontFamily> get_GenericMonospace();
    /// Returns a FontFamily object that represents a Generic Serif font family.
    static ASPOSECPP_SHARED_API SharedPtr<FontFamily> get_GenericSerif();
    /// Returns the name of the font family represented by the current object.
    /// @param language IGNORED
    /// @returns The name of the font family represented by the current object
    ASPOSECPP_SHARED_API String GetName(int language) const;
    /// Releases all operating system resources acquired by the current object.
    void Dispose() { };
    /// Determines if the current and the specified objects are identical.
    /// @param obj An object to compare the current object with
    /// @returns True if the current and the specified objects are identical, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;

private:
    /// @cond
    friend Drawing2D::GraphicsPath;
    friend Text::PrivateFontCollection;
    /// @endcond

    friend Font;
    friend Graphics;

    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;
    /// Default constructor.
    FontFamily();
    /// Constructs a new instance of FontFamily class that represents the specified font family.
    /// @param name A font family name
    /// @param init_font_style A font style for the new FontFamily object
    FontFamily(const String &name, FontStyle init_font_style);
    /// Constructs a new instance of FontFamily class and initializes it with the specified typeface.
    /// @param name A typeface
    /// @param init_font_style The name of @p sk_typeface
    FontFamily(sk_sp<SkTypeface> sk_typeface, const SkString &name);
    /// Initializes a newly created FontFamily object.
    /// @param create_default_on_fail True if a default FontFamily object should be created if the creation with the specfied parameters fails, 
    /// otherwise - false
    /// @param init_font_style A font style for the new FontFamily object 
    bool Initialization(bool create_default_on_fail, FontStyle init_font_style);
    /// Makes typeface entry.
    void MakeTypeface(FontStyle font_style);
    /// Adds the specified typeface.
    /// @param sk_typeface A typeface to add
    void AddSkTypeface(sk_sp<SkTypeface> sk_typeface);
    /// Returns as SkTypeface object that corresponds to the specified font style.
    /// @param font_style A font style
    /// @returns A shared pointer to an SkTypeface object that corresponds to the specified FontStyle.
    sk_sp<SkTypeface> GetSkTypeface(FontStyle font_style);
    /// Converts the specified FontStyle value to the corresponding SkFontStyle value.
    /// @param font_style The value to convert
    /// @returns A SkFontStyle value that corresponds to @p font_style value
    SkFontStyle ConvertToSkFontStyle(FontStyle font_style);
    /// Converts the specified SkFontStyle value to the corresponding FontStyle value.
    /// @param sk_font_style The value to convert
    /// @returns A FontStyle value that corresponds to @p sk_font_style value
    FontStyle  ConvertToFontStyle(SkFontStyle sk_font_style);
    /// Returns the font metrics for the specified font style.
    /// @param font_style A font style
    /// @param font_metrics Output argument; contains a pointer to buffer that contains
    /// font metrics
    void GetFontMetrics(FontStyle font_style, void *font_metrics);
    /// Returns the style of the specified font family.
    /// @param font_family_style A font family whose style to return
    /// @param font_normal_width An output argument; contains the width of the font
    /// @param font_normal_weight An output argument; contains the weight of the font
    static bool ExtractStyleSet(String font_family_name,
                                int *font_normal_width, int *font_normal_weight,
                                String* new_font_family_name = nullptr,
                                const String& prefix = String::Empty);
    /// Removes the last word that goes after the last whitespace from the specified font family name.
    /// @param font_family_name A font family name to cut the suffix from
    /// @param suffix An output argumnet; If the suffix is found, it contains the suffix cut, otherwise it contains an empty string
    /// @returns True if a suffix was cut, otherwise - false
    static bool CutFontSuffix(String &font_family_name, String &suffix);
    static ArrayPtr<SharedPtr<FontFamily>> get_FamiliesImpl();

    /// The font family name.
    String m_font_family_name;
    String m_typeface_name;
    /// Typeface array.
    std::vector<sk_sp<SkTypeface>> m_sk_typefaces;
    /// Normal width.
    int m_sk_font_normal_width;  // SkFontStyle::Width
    /// Normal weight.
    int m_sk_font_normal_weight; // SkFontStyle::Weight

};

}} // System::Drawing

#endif
