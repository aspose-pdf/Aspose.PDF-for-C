#ifndef _aspose_drawing_system_colors_h_
#define _aspose_drawing_system_colors_h_

#include "drawing/color.h"
#include "system/exceptions.h"

namespace System { namespace Drawing {

class SystemColors
{
public:
    static Color get_ActiveBorder()
    {
        return Color::FromArgb(0xFFB4B4B4);
    }

    static Color get_ActiveCaption()
    {
        return Color::FromArgb(0xFF99B4D1);
    }

    static Color get_ActiveCaptionText()
    {
        return Color::FromArgb(0xFF000000);
    }

    static Color get_AppWorkspace()
    {
        return Color::FromArgb(0xFFABABAB);
    }

    static Color get_ButtonFace()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }

    static Color get_ButtonHighlight()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }

    static Color get_ButtonShadow()
    {
        return Color::FromArgb(0xFFA0A0A0);
    }

    static Color get_Control()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }

    static Color get_ControlDark()
    {
        return Color::FromArgb(0xFFA0A0A0);
    }

    static Color get_ControlDarkDark()
    {
        return Color::FromArgb(0xFF696969);
    }

    static Color get_ControlLight()
    {
        return Color::FromArgb(0xFFE3E3E3);
    }

    static Color get_ControlLightLight()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }

    static Color get_ControlText()
    {
        return Color::FromArgb(0xFF000000);
    }

    static Color get_Desktop()
    {
        return Color::FromArgb(0xFF000000);
    }

    static Color get_GradientActiveCaption()
    {
        return Color::FromArgb(0xFFB9D1EA);
    }

    static Color get_GradientInactiveCaption()
    {
        return Color::FromArgb(0xFFD7E4F2);
    }

    static Color get_GrayText()
    {
        return Color::FromArgb(0xFF6D6D6D);
    }

    static Color get_Highlight()
    {
        return Color::FromArgb(0xFF3399FF);
    }

    static Color get_HighlightText()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }

    static Color get_HotTrack()
    {
        return Color::FromArgb(0xFF0066CC);
    }

    static Color get_InactiveBorder()
    {
        return Color::FromArgb(0xFFF4F7FC);
    }

    static Color get_InactiveCaption()
    {
        return Color::FromArgb(0xFFBFCDDB);
    }

    static Color get_InactiveCaptionText()
    {
        return Color::FromArgb(0xFF434E54);
    }

    static Color get_Info()
    {
        return Color::FromArgb(0xFFFFFFE1);
    }

    static Color get_InfoText()
    {
        return Color::FromArgb(0xFF000000);
    }

    static Color get_Menu()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }

    static Color get_MenuBar()
    {
        return Color::FromArgb(0xFFF0F0F0);
    }

    static Color get_MenuHighlight()
    {
        return Color::FromArgb(0xFF3399FF);
    }

    static Color get_MenuText()
    {
        return Color::FromArgb(0xFF000000);
    }

    static Color get_ScrollBar()
    {
        return Color::FromArgb(0xFFC8C8C8);
    }

    static Color get_Window()
    {
        return Color::FromArgb(0xFFFFFFFF);
    }

    static Color get_WindowFrame()
    {
        return Color::FromArgb(0xFF646464);
    }

    static Color get_WindowText()
    {
        return Color::FromArgb(0xFF000000);
    }
};

}} // System::Drawing

#endif // _aspose_drawing_system_colors_h_
