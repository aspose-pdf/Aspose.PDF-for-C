#ifndef ___color_blend_h___
#define ___color_blend_h___

#include "fwd.h"
#include "system/array.h"
#include "drawing/color.h"

namespace System {namespace Drawing { namespace Drawing2D {

    class ColorBlend : public Object
    {
        public:
                ColorBlend()
                {
                    m_colors = MakeObject< Array<Color> >(1, Color::get_Black());
                    m_positions = MakeObject< Array<float> >(1, .0f);
                }

                ColorBlend(int count)
                {
                    m_colors = MakeObject< Array<Color> >(count, Color::get_Black());
                    m_positions = MakeObject< Array<float> >(count, .0f);
                }

                ArrayPtr<Color> get_Colors()
                {
                    return m_colors;
                }

                void set_Colors(ArrayPtr<Color> value)
                {
                    m_colors = value;
                }

                ArrayPtr<float> get_Positions()
                {
                    return m_positions;
                }

                void set_Positions(ArrayPtr<float> value)
                {
                    m_positions = value;
                }


            protected:
                ArrayPtr<Color> m_colors;
                ArrayPtr<float> m_positions;


    };

}}}


#endif