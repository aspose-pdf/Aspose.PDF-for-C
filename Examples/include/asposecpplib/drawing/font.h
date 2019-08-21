/// @file drawing/font.h
#ifndef _aspose_drawing_font_h_
#define _aspose_drawing_font_h_

#include <vector>

#include <system/object.h>
#include <system/string.h>

#include "drawing/font_family.h"
#include "drawing/font_style.h"
#include "drawing/graphics_unit.h"
#include "text/text_rendering_hint.h"

/// Default resolution for font operations.
#define DEFAULT_FONT_OPERATIONS_DPI  96.f

/// Ensures that SkScalar is an alias for float.
ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);
/// Forward declaration of SkPaint class.
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
/// Forward declaration of SkTypeface class.
ASPOSECPP_3RD_PARTY_CLASS(SkTypeface);

namespace System { namespace Drawing {

class Graphics;
/// Represents a particular format for text, including font face, size, and style.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Font: public Object
{

    RTTI_INFO(Font, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs a new instance of Font class that represents the specified existing font with the specified font style.
    /// @param prototype The existing font to create the new one from
    /// @param new_style A font style to apply to the new font 
    ASPOSECPP_SHARED_API Font(const SharedPtr<Font>& prototype, FontStyle new_style);
    /// Constructs a new instance of Font class.
    /// @param family The font family of the new font
    /// @param em_size The em size of the new font in the units specified by @p unit parameter
    /// @param style The style of the new font
    /// @param unit The measurement units of the new font
    /// @param gdi_charset A GDI charset to be used for the new font
    /// @param gdi_vertical_font True if the new font is derived from a GDI vertical font
    ASPOSECPP_SHARED_API Font(const SharedPtr<FontFamily>& family, float em_size, FontStyle style, GraphicsUnit unit = GraphicsUnit::Point, uint8_t gdi_charset = 1/*DEFAULT_CHARSET*/, bool gdi_vertical_font = false);
    /// Constructs a new instance of Font class.
    /// @param family The font family of the new font
    /// @param em_size The em size of the new font in the units specified by @p unit parameter
    /// @param unit The measurement units of the new font
    ASPOSECPP_SHARED_API Font(const SharedPtr<FontFamily>& family, float em_size, GraphicsUnit unit = GraphicsUnit::Point);
    /// Constructs a new instance of Font class.
    /// @param family_name The name of the new font's font family
    /// @param em_size The em size of the new font in the units specified by @p unit parameter
    /// @param style The style of the new font
    /// @param unit The measurement units of the new font
    /// @param gdi_charset A GDI charset to be used for the new font
    /// @param gdi_vertical_font True if the new font is derived from a GDI vertical font
    ASPOSECPP_SHARED_API Font(const String& family_name, float em_size, FontStyle style, GraphicsUnit unit = GraphicsUnit::Point, uint8_t gdi_charset = 1/*DEFAULT_CHARSET*/, bool gdi_vertical_font = false);
    /// Constructs a new instance of Font class.
    /// @param family_name The name of the new font's font family
    /// @param em_size The em size of the new font in the units specified by @p unit parameter
    /// @param unit The measurement units of the new font
    ASPOSECPP_SHARED_API Font(const String& family_name, float em_size, GraphicsUnit unit = GraphicsUnit::Point);
    /// Returns the line spacing of the font represented by the current object, in the current unit of a specified Graphics object.
    /// @param graphics A Graphics object that specifies the measurement units
    ASPOSECPP_SHARED_API float GetHeight(const SharedPtr<Graphics>& graphics);
    /// Returns the height of the font represented by the current object when drawn to a display device 
    /// with the specified vertical resolution.
    /// @param dpi The vertical resolution of the display device
    /// @returns The hegiht of the font in pixels
    ASPOSECPP_SHARED_API float GetHeight(float dpi = DEFAULT_FONT_OPERATIONS_DPI);

    /// Returns the face name of the font represented by the current object.
    ASPOSECPP_SHARED_API String get_Name();
    /// Returns the originally specified name of the font.
    ASPOSECPP_SHARED_API String get_OriginalFontName();
    /// Returns the font family of the font represented by the current object.
    ASPOSECPP_SHARED_API SharedPtr<FontFamily> get_FontFamily();
    /// Returns the font style of the font represneted by the current object.
    ASPOSECPP_SHARED_API FontStyle get_FontStyle();
    /// Returns the em size of the font represented by the current object measured in the units 
    /// specified by the Unit property.
    ASPOSECPP_SHARED_API float get_Size();
    /// Determines if the font represented by the current object has the bold style applied.
    ASPOSECPP_SHARED_API bool get_Bold();
    /// Determines if the font represented by the current object has the italic style applied.
    ASPOSECPP_SHARED_API bool get_Italic();
    /// Determines if the font represented by the current object has the underline style applied.
    ASPOSECPP_SHARED_API bool get_Underline();
    /// Determines if the font represented by the current object has the strikeout style applied.
    ASPOSECPP_SHARED_API bool get_Strikeout();
    /// Returns the line spacing of the font represented by the current object in pixels.
    ASPOSECPP_SHARED_API int get_Height();
    /// Returns the em size of the font represented by the current object in points.
    ASPOSECPP_SHARED_API float get_SizeInPoints();
    /// Returns a value that indicates the GDI character set used by the font represented by the current object.
    ASPOSECPP_SHARED_API uint8_t get_GdiCharSet();
    /// Returns the measurement unit for the font represented by the current object.
    ASPOSECPP_SHARED_API GraphicsUnit get_Unit();
    /// Returns the font style of the font represented by the current object.
    FontStyle get_Style() { return get_FontStyle(); }

    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    static ASPOSECPP_SHARED_API SharedPtr<Font> FromLogFont(const SharedPtr<Object>& lf);

    /// Returns a copy of the current font.
    ASPOSECPP_SHARED_API SharedPtr<Font> Clone();
    /// Releases all operating system resources acquired by the current object.
    void Dispose() { };
    /// Determines if the current and the specified objects are identical.
    /// @param obj An object to compare the current object with
    /// @returns True if the current and the specified objects are identical, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;

private:
    friend class Graphics;
    /// Initializes a newly createdi instance of Font class.
    /// @param family The font family of the new font
    /// @param em_size The em size of the new font in the units specified by @p unit parameter
    /// @param style The style of the new font
    /// @param unit The measurement units of the new font
    /// @param gdi_charset A GDI charset to be used for the new font
    /// @param gdi_vertical_font True if the new font is derived from a GDI vertical font
    void Initialize(const String& family_name, float em_size, FontStyle style, GraphicsUnit unit, uint8_t gdi_charset, bool gdi_vertical_font);
    /// Initializes a newly createdi instance of Font class.
    /// @param family_name The name of the new font's font family
    /// @param em_size The em size of the new font in the units specified by @p unit parameter
    /// @param style The style of the new font
    /// @param unit The measurement units of the new font
    /// @param gdi_charset A GDI charset to be used for the new font
    /// @param gdi_vertical_font True if the new font is derived from a GDI vertical font
    void Initialize(const SharedPtr<FontFamily>& family, float em_size, FontStyle style, GraphicsUnit unit, uint8_t gdi_charset, bool gdi_vertical_font);
    /// Applies font parameters to paint object.
    /// @param paint Paint object to apply font parameters to.
    /// @param dpi Resolution.
    /// @param rendering_hint Specifies whether to use Different rendering modes.
    void Apply(SkPaint &paint, float dpi, Text::TextRenderingHint rendering_hint);
    /// Strips the first character from the specified string if it is equal to '@'.
    /// @param family_name The string to process
    /// @returns Original @p family_name string if it does not begin with '@' character, otherwise - @p family_name without the first character
    static String StripVerticalName(const String &family_name);
    /// Calculates vertical offset we need to apply to text when rendering it to make result look exactly as in .NET.
    /// @param dpi Resolution rendering is being done for.
    /// @return Offset value in pixels.
    SkScalar GetDotNetPositionOffset(float dpi);
    /// Initializes data for font smoothing.
    void InitGaspData(const SkTypeface* typeface);
    /// Sets additional rendering parameters to SkPaint.
    void UpdatePaintForPpem(uint16_t ppem, SkPaint& paint);
    /// The font family of the font represented by the current object.
    SharedPtr<FontFamily> m_font_family;
    /// The em size of the font represented by the current object measured in the units 
    /// specified by the Unit property.
    float m_font_size;
    /// The font style of the font represneted by the current object.
    FontStyle m_font_style;
    /// The measurement unit for the font represented by the current object.
    GraphicsUnit m_size_unit;
    /// The GDI character set used by the font represented by the current object.
    uint8_t m_gdi_charset;
    /// Indicates whethers the font represented by the current object is derived from a GDI vertical font.
    bool m_gdi_vertical_font;
    /// The originally specified name of the font.
    String m_original_font_name;
    /// Contains data for font smoothing.
    std::vector<std::pair<uint16_t, uint16_t>> m_gasp_data;
};

}} // System::Drawing

#endif // _aspose_drawing_font_h_
