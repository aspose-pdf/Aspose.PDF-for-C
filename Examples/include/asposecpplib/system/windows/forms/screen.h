#ifndef _aspose_system_windows_forms_screen_h_
#define _aspose_system_windows_forms_screen_h_

#include "fwd.h"
#include "system/object.h"
#include "drawing/size.h"

namespace System { namespace Windows { namespace Forms {

class Screen : public Object
{
public:
    FRIEND_FUNCTION_System_MakeObject;

    class Rectangle_
    {
        public:
            Rectangle_(int x, int y, int width, int height);
            inline int get_X() const { return m_x; }
            inline int get_Y() const { return m_y; }
            inline int get_Width() const { return m_width; }
            inline int get_Height() const { return m_height; }
            inline System::Drawing::Size get_Size() const { return System::Drawing::Size(m_width, m_height); }
        private:
            int m_x;
            int m_y;
            int m_width;
            int m_height;
    };

    static SharedPtr<Screen> get_PrimaryScreen();

    inline Rectangle_ get_Bounds() const { return m_bounds; }

private:
    Screen(int x, int y, int width, int height);
    Rectangle_ m_bounds;

};
}}}


#endif
