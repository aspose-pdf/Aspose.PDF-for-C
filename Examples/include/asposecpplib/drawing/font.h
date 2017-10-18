#ifndef _aspose_drawing_font_h_
#define _aspose_drawing_font_h_

#include <system/object.h>
#include <system/string.h>

#include "drawing/font_family.h"
#include "drawing/font_style.h"
#include "drawing/graphics_unit.h"


#define DEFAULT_FONT_OPERATIONS_DPI  96.f


ASPOSECPP_3RD_PARTY_TYPEDEF(SkScalar, float);
ASPOSECPP_3RD_PARTY_CLASS(SkPaint);


namespace System { namespace Drawing {

    class Graphics;

    class Font: public Object
    {
        RTTI_INFO(Font, ::System::BaseTypesInfo<System::Object>)
        public:

            Font(SharedPtr<Font> prototype, FontStyle new_style);

            Font(SharedPtr<FontFamily> family, float em_size, FontStyle style, GraphicsUnit unit = GraphicsUnit::Point, uint8_t gdi_charset = 1/*DEFAULT_CHARSET*/, bool gdi_vertical_font = false);
            Font(SharedPtr<FontFamily> family, float em_size, GraphicsUnit unit = GraphicsUnit::Point);

            Font(String family_name, float em_size, FontStyle style, GraphicsUnit unit = GraphicsUnit::Point, uint8_t gdi_charset = 1/*DEFAULT_CHARSET*/, bool gdi_vertical_font = false);
            Font(String family_name, float em_size, GraphicsUnit unit = GraphicsUnit::Point);

            float GetHeight(SharedPtr<Graphics> graphics);
            float GetHeight(float dpi = DEFAULT_FONT_OPERATIONS_DPI);

            String get_Name();
            SharedPtr<FontFamily> get_FontFamily();
            FontStyle get_FontStyle();
            float get_Size();
            bool get_Bold();
            bool get_Italic();
            bool get_Underline();
            bool get_Strikeout();

            int get_Height();
            float get_SizeInPoints();

            uint8_t get_GdiCharSet();

            GraphicsUnit get_Unit();

            FontStyle get_Style() { return get_FontStyle(); }

            void Dispose() { };

    private:

            friend class Graphics;

            void Initialize(String family_name, float em_size, FontStyle style, GraphicsUnit unit, uint8_t gdi_charset, bool gdi_vertical_font);
            void Initialize(SharedPtr<FontFamily> family, float em_size, FontStyle style, GraphicsUnit unit, uint8_t gdi_charset, bool gdi_vertical_font);
            void Apply(SkPaint &paint, float dpi);
            float ConvertToPixelSize(float dpi);
            static String StripVerticalName(const String &family_name);
            SkScalar GetDotNetPositionOffset(float dpi);

            SharedPtr<FontFamily> m_font_family;

            float m_font_size;
            FontStyle m_font_style;
            GraphicsUnit m_size_unit;
            uint8_t m_gdi_charset;
            bool m_gdi_vertical_font;



    };
}}

#endif // _aspose_drawing_font_h_