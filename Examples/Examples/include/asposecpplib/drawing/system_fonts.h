/// @file drawing/system_fonts.h
#ifndef _aspose_system_drawing_system_font_h_
#define _aspose_system_drawing_system_font_h_

#include "system/object.h"
#include "drawing/font.h"

namespace System { namespace Drawing {
    /// Provides a set of pre-created Font objects that represent fonts used to display
    /// text in Windows display elements.
    /// This is a static type with no instance services.
    /// You should never create instances of it by any means.
    class SystemFonts: public Object
    {
    public:
        /// Returns a Font object that represents the default font that application can use 
        /// for dialog boxes and forms.
        static ASPOSECPP_SHARED_API SharedPtr<Font> get_DefaultFont();
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        static ASPOSECPP_SHARED_API SharedPtr<Font> get_CaptionFont();
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        static ASPOSECPP_SHARED_API SharedPtr<Font> get_IconTitleFont();
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        static ASPOSECPP_SHARED_API SharedPtr<Font> get_MenuFont();
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        static ASPOSECPP_SHARED_API SharedPtr<Font> get_MessageBoxFont();
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        static ASPOSECPP_SHARED_API SharedPtr<Font> get_SmallCaptionFont();
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        static ASPOSECPP_SHARED_API SharedPtr<Font> get_StatusFont();
    };

}}


#endif // __system_font_h__
