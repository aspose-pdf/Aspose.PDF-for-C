/// @file windows/flat_style.h
#ifndef _aspose_system_windows_forms_flat_style_h_
#define _aspose_system_windows_forms_flat_style_h_

namespace System { namespace Windows { namespace Forms {

/// Defines whether the control is drawn flat or three-dimentional.
enum class FlatStyle
{
    /// Control is drawn flat.
    Flat = 0,
    /// Control is drawn flat unless the mouse moves over it when it is drawn 3D-like.
    Popup = 1,
    /// Control is drawn 3D-like.
    Standard = 2,
    /// Style is controlled by OS.
    System = 3
};

} } }

#endif
