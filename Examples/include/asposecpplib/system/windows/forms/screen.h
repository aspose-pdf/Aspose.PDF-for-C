/// @file system/windows/forms/screen.h
#ifndef _aspose_system_windows_forms_screen_h_
#define _aspose_system_windows_forms_screen_h_

#include "fwd.h"
#include "system/object.h"
#include "drawing/size.h"

namespace System { namespace Windows { namespace Forms {

/// Provides information on displays. Windows only.
/// This is a singleton type with memory management done by access function(s).
/// You should never create instances of it directly.
class ASPOSECPP_SHARED_CLASS Screen : public Object
{
public:
    /// Unhides constructor.
    FRIEND_FUNCTION_System_MakeObject;

    /// Describes rectangle with position and size.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS Rectangle_
    {
        public:
            /// Constructor.
            /// @param x Left position.
            /// @param y Top position.
            /// @param width Horizontal size.
            /// @param height Vertical size.
            ASPOSECPP_SHARED_API Rectangle_(int x, int y, int width, int height);
            /// Gets left position.
            /// @return X coordinate.
            inline int get_X() const { return m_x; }
            /// Gets tops position.
            /// @return Y coordinate.
            inline int get_Y() const { return m_y; }
            /// Gets horizontal size.
            /// @return Width.
            inline int get_Width() const { return m_width; }
            /// Gets verticalal size.
            /// @return Height.
            inline int get_Height() const { return m_height; }
            /// Gets rectangle size.
            /// @return Size object.
            inline System::Drawing::Size get_Size() const { return System::Drawing::Size(m_width, m_height); }

        private:
            /// Left position.
            int m_x;
            /// Top position.
            int m_y;
            /// Horizontal size.
            int m_width;
            /// Vertical size.
            int m_height;
    };

    /// Gets information on primary display.
    static ASPOSECPP_SHARED_API SharedPtr<Screen> get_PrimaryScreen();
    /// Gets screen bounds.
    inline Rectangle_ get_Bounds() const { return m_bounds; }

private:
    /// Constructor.
    /// @param x Left position.
    /// @param y Top position.
    /// @param width Horizontal size.
    /// @param height Vertical size.
    Screen(int x, int y, int width, int height);
    /// Screen bounds.
    Rectangle_ m_bounds;
};

}}}


#endif
