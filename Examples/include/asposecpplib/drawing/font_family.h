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

#include <map>


ASPOSECPP_3RD_PARTY_CLASS(SkFontStyle);
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);
ASPOSECPP_3RD_PARTY_CLASS(SkString);
ASPOSECPP_3RD_PARTY_CLASS(SkTypeface);

template <typename T> class sk_sp;



namespace System { namespace Drawing {

namespace Text { class PrivateFontCollection; }

namespace Drawing2D { class GraphicsPath; }

class Font;

class FontFamily : public Object
{
public:

    FontFamily(const String &name);
    FontFamily(const String &name, SharedPtr<Text::FontCollection> font_collection);
    FontFamily(Text::GenericFontFamilies generic_family);

    virtual ~FontFamily();

    bool IsStyleAvailable(FontStyle style);
    int GetEmHeight(FontStyle style);
    int GetCellAscent(FontStyle style);
    int GetCellDescent(FontStyle style);
    int GetLineSpacing(FontStyle style);
    String get_Name() const;
    static ArrayPtr<SharedPtr<FontFamily>> get_Families();
    static SharedPtr<FontFamily> get_GenericSansSerif();
    static SharedPtr<FontFamily> get_GenericMonospace();
    static SharedPtr<FontFamily> get_GenericSerif();
    String GetName(int language) const;

    void Dispose() { };

private:
    friend Drawing2D::GraphicsPath;
    friend Font;
    friend Text::PrivateFontCollection;

    FRIEND_FUNCTION_System_MakeObject;

    FontFamily();
    FontFamily(const String &name, FontStyle init_font_style);
    FontFamily(sk_sp<SkTypeface> sk_typeface, const SkString &name);

    bool Initialization(bool create_default_on_fail, FontStyle init_font_style);

    void AddSkTypeface(sk_sp<SkTypeface> sk_typeface);
    sk_sp<SkTypeface> GetSkTypeface(FontStyle font_style);
    static sk_sp<SkTypeface> MakeSkTypeface(System::ArrayPtr<uint8_t> data, int len);

    void Apply(SkPaint &paint);

    SkFontStyle ConvertToSkFontStyle(FontStyle font_style);
    FontStyle  ConvertToFontStyle(SkFontStyle sk_font_style);

    void GetFontMetrics(FontStyle font_style, void *font_metrics);

    static bool CutFontSuffix(String &family_name, String &suffix);

    String m_font_family_name;

    std::map<FontStyle, sk_sp<SkTypeface>> m_sk_typeface_map;

    int m_sk_font_normal_width;  // SkFontStyle::Width
    int m_sk_font_normal_weight; // SkFontStyle::Weight

};

}} // System::Drawing

#endif
