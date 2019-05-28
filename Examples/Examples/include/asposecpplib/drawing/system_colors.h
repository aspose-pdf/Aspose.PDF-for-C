/// @file drawing/system_colors.h
#ifndef _aspose_drawing_system_colors_h_
#define _aspose_drawing_system_colors_h_

#include "drawing/color.h"
#include "system/exceptions.h"

namespace System { namespace Drawing {
/// Class that provide a set of precreated Color objects that represent colors of 
/// Windows display elements.
/// This is a static type with no instance services.
/// You should never create instances of it by any means.
class SystemColors
{
public:
    /// Returns a Color object that represents the color of the active window's border.
    static Color get_ActiveBorder()
    {
        return Color::FromArgb(0xFFB4B4B4);
    }
    /// Returns a Color object that represents the color of the background of the active window's title bar.
    static Color get_ActiveCaption()
    {
        return Color::FromArgb(0xFF99B4D1);
    }
    /// Returns a Color object that represents the color of the text in the title bar of the active window.
    static Color get_ActiveCaptionText()
    {
        return Color::FromArgb(0xFF000000);
    }
    /// Returns a Color object that represents the color of the application workspace.
    static Color get_AppWorkspace()
    {
        return Color::FromArgb(0xFFABABAB);
    }
    /// Returns a Color object that represents the face color of a 3-Dimensional element.
    static Color get_ButtonFace()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }
    /// Returns a Color object that represents the highlight color of a 3-Dimensional element.
    static Color get_ButtonHighlight()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }
    /// Returns a Color object that represents the color of the shadow of a 3-Dimensional element. 
    static Color get_ButtonShadow()
    {
        return Color::FromArgb(0xFFA0A0A0);
    }
    /// Returns a Color object that represents the color of the face of a 3-Dimensional element.
    static Color get_Control()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }
    /// Returns a Color object that represents the color of the shadow of a 3-Dimensional element.
    static Color get_ControlDark()
    {
        return Color::FromArgb(0xFFA0A0A0);
    }
    /// Returns a Color object that represents the color of the dark shadow of a 3-Dimensional element.
    static Color get_ControlDarkDark()
    {
        return Color::FromArgb(0xFF696969);
    }
    /// Returns a Color object that represents the color of the light of a 3-Dimensional element. 
    static Color get_ControlLight()
    {
        return Color::FromArgb(0xFFE3E3E3);
    }
    /// Returns a Color object that represents the color of the highlight of a 3-Dimensional element.
    static Color get_ControlLightLight()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }
    /// Returns a Color object that represents the color of text in a 3-Dimensional element.
    static Color get_ControlText()
    {
        return Color::FromArgb(0xFF000000);
    }
    /// Returns a Color object that represents the color of the desktop.
    static Color get_Desktop()
    {
        return Color::FromArgb(0xFF000000);
    }
    /// Returns a Color object that represents the lightest color in the color gradient of the title bar of an active window.
    static Color get_GradientActiveCaption()
    {
        return Color::FromArgb(0xFFB9D1EA);
    }
    /// Returns a Color object that represents the lightest color in the color gradient of the title bar of an inactive window.
    static Color get_GradientInactiveCaption()
    {
        return Color::FromArgb(0xFFD7E4F2);
    }
    /// Returns a Color object that represents the color of dimmed text.
    static Color get_GrayText()
    {
        return Color::FromArgb(0xFF6D6D6D);
    }
    /// Returns a Color object that represents the seleceted items' background color.
    static Color get_Highlight()
    {
        return Color::FromArgb(0xFF3399FF);
    }
    /// Returns a Color object that represents the color of the text of selected items.
    static Color get_HighlightText()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }
    /// Returns a Color object that represents the color of a hot-tracked item.
    static Color get_HotTrack()
    {
        return Color::FromArgb(0xFF0066CC);
    }
    /// Returns a Color object that represents the color of the border of an inactive window.
    static Color get_InactiveBorder()
    {
        return Color::FromArgb(0xFFF4F7FC);
    }
    /// Returns a Color object that represents the color of the background of an inactive window's title bar.
    static Color get_InactiveCaption()
    {
        return Color::FromArgb(0xFFBFCDDB);
    }
    /// Returns a Color object that represents the color of the text in an inactive window's title bar.
    static Color get_InactiveCaptionText()
    {
        return Color::FromArgb(0xFF434E54);
    }
    /// Returns a Color object that represents the color of the ToolTip's background.
    static Color get_Info()
    {
        return Color::FromArgb(0xFFFFFFE1);
    }
    /// Returns a Color object that represents the color of the text of a ToolTip.
    static Color get_InfoText()
    {
        return Color::FromArgb(0xFF000000);
    }
    /// Returns a Color object that represents the color of the background of a menu.
    static Color get_Menu()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }
    /// Returns a Color object that represents the color of the menu bar's background.
    static Color get_MenuBar()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }
    /// Returns a Color object that represents the color used to highlight menu items when the menu appears as a flat menu.
    static Color get_MenuHighlight()
    {
        return Color::FromArgb(0xFF3399FF);
    }
    /// Returns a Color object that represents the color of text in a menu.
    static Color get_MenuText()
    {
        return Color::FromArgb(0xFF000000);
    }
    /// Returns a Color object that represents the color of the background of a scroll bar.
    static Color get_ScrollBar()
    {
        return Color::FromArgb(0xFFC8C8C8);
    }
    /// Returns a Color object that represents the color of the background in the client area of a window.
    static Color get_Window()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }
    /// Returns a Color object that represents the color of a window frame.
    static Color get_WindowFrame()
    {
        return Color::FromArgb(0xFF646464);
    }
    /// Returns a Color object that represents the color of the text in the client area of a window.
    static Color get_WindowText()
    {
        return Color::FromArgb(0xFF000000);
    }
};

}} // System::Drawing

#endif // _aspose_drawing_system_colors_h_
