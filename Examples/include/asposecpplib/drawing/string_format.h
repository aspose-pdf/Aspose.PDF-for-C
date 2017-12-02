#ifndef _string_format_h_
#define _string_format_h_

#include "drawing/string_format_flags.h"
#include "drawing/string_alignment.h"
#include "drawing/string_trimming.h"
#include "drawing/string_digit_substitute.h"
#include "drawing/text/hotkey_prefix.h"
#include "drawing/character_range.h"

#include "system/array.h"
#include "system/exceptions.h"


namespace System { namespace Drawing {
    
    class Graphics;

    class StringFormat: public System::Object // ICloneable
    {
    public:

        StringFormat();

        StringFormat(StringFormatFlags options, int32_t language = 0);

        StringFormat(SharedPtr<StringFormat> format);

        static SharedPtr<StringFormat> get_GenericTypographic();

        static SharedPtr<StringFormat> get_GenericDefault();

        StringFormatFlags get_FormatFlags() const;
        void set_FormatFlags(StringFormatFlags value);

        StringAlignment get_Alignment() const;
        void set_Alignment(StringAlignment value);

        StringAlignment get_LineAlignment() const;
        void set_LineAlignment(StringAlignment value);

        StringTrimming get_Trimming() const;
        void set_Trimming(StringTrimming value);

        ArrayPtr<float> GetTabStops(float &first_tab_offset) const;
        void SetTabStops(float first_tab_offset, ArrayPtr<float> tab_stops);

        int32_t get_DigitSubstitutionLanguage() const;
        StringDigitSubstitute get_DigitSubstitutionMethod() const;

        Text::HotkeyPrefix get_HotkeyPrefix() const;
        void set_HotkeyPrefix(Text::HotkeyPrefix value);
        
        void SetDigitSubstitution(int32_t language, StringDigitSubstitute substitute);
        void SetMeasurableCharacterRanges(ArrayPtr<CharacterRange> ranges);

        SharedPtr<StringFormat> Clone();

    protected:
        friend class System::Drawing::Graphics;
        
        StringFormatFlags m_string_format_flags;
        StringAlignment m_alignment;
        StringAlignment m_line_alignment;
        StringTrimming m_trimming;
        float m_first_tab_offset;
        ArrayPtr<float> m_tab_stops;

    private:
        bool m_is_generic_typographic = false;
        bool m_is_generic_default = false;

    };

}}


#endif
