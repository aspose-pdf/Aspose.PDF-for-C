/// @file drawing/drawing2d/color_blend.h
#ifndef ___color_blend_h___
#define ___color_blend_h___

#include "fwd.h"
#include "system/array.h"
#include "drawing/color.h"

namespace System {namespace Drawing { namespace Drawing2D {
    /// Contains arrays of colors and positions used for interpolating color blending in a multicolor gradient.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ColorBlend : public Object
    {
        public:
                /// Constructs a new instance of ColorBlend class.
                ColorBlend()
                {
                    m_colors = MakeObject< Array<Color> >(1, Color::get_Black());
                    m_positions = MakeObject< Array<float> >(1, .0f);
                }

                /// Constructs a new instance of Blend class.
                /// @param count The number of elements in the Colors and Positions arrays.
                ColorBlend(int count)
                {
                    m_colors = MakeObject< Array<Color> >(count, Color::get_Black());
                    m_positions = MakeObject< Array<float> >(count, .0f);
                }

                /// Returns an array of colors to use at corresponding positions along a gradient.
                ArrayPtr<Color> get_Colors()
                {
                    return m_colors;
                }
                /// Sets an array of colors to use at corresponding positions along a gradient.
                /// @param value The array to set
                void set_Colors(const ArrayPtr<Color>& value)
                {
                    m_colors = value;
                }

                /// Returns the array of blend positions along a gradient. 
                ArrayPtr<float> get_Positions()
                {
                    return m_positions;
                }

                /// Sets the array of blend positions along a gradient. 
                /// @param value The array to set
                void set_Positions(const ArrayPtr<float>& value)
                {
                    m_positions = value;
                }


            protected:
                /// An array of colors.
                ArrayPtr<Color> m_colors;
                /// An array of positions.
                ArrayPtr<float> m_positions;
    };

}}}


#endif
