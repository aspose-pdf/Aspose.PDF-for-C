#ifndef _aspose_drawing_drawing2d_coordinate_space_h_
#define _aspose_drawing_drawing2d_coordinate_space_h_

namespace System { namespace Drawing { namespace Drawing2D {

enum class CoordinateSpace
{
    //
    // Summary:
    //     Specifies that coordinates are in the world coordinate context. World coordinates
    //     are used in a nonphysical environment, such as a modeling environment.
    World = 0,
    //
    // Summary:
    //     Specifies that coordinates are in the page coordinate context. Their units are
    //     defined by the System.Drawing.Graphics.PageUnit property, and must be one of
    //     the elements of the System.Drawing.GraphicsUnit enumeration.
    Page = 1,
    //
    // Summary:
    //     Specifies that coordinates are in the device coordinate context. On a computer
    //     screen the device coordinates are usually measured in pixels.
    Device = 2
};

}}}

#endif