#ifndef _string_format_h_
#define _string_format_h_

#include "string_format_flags.h"
#include "drawing/string_alignment.h"
#include "drawing/string_trimming.h"
#include "system/array.h"
#include "system/exceptions.h"


namespace System { namespace Drawing {
    
    class Graphics;

    class StringFormat: public System::Object // ICloneable
    {
    public:

        StringFormat();

        StringFormat(StringFormatFlags options);

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
