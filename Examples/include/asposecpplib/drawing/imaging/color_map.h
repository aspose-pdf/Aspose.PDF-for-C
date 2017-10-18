#ifndef _color_map_h_
#define _color_map_h_

#include "fwd.h"
#include "drawing/color.h"
#include "system/object.h"

namespace System { namespace Drawing { namespace Imaging {

    class ColorMap;
    typedef SharedPtr<ColorMap> ColorMapPtr;

    class ColorMap : public Object
    {

    public:
        Color get_OldColor() const;

        void set_OldColor(const Color & value);

        Color get_NewColor() const;

        void set_NewColor(const Color & value);

    private:
        Color m_old_color;
        Color m_new_color;
    };

}}}


#endif
