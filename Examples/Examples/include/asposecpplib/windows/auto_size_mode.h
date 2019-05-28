/// @file windows/auto_size_mode.h
#ifndef _aspose_system_windows_forms_auto_size_mode_h_
#define _aspose_system_windows_forms_auto_size_mode_h_

namespace System { namespace Windows { namespace Forms {

/// Defines how autosize works.
enum class AutoSizeMode
{
    /// Control grows and shrinks as neccessary. It can not be resized manually.
    GrowAndShrink = 0, 
    /// Control grows as neccessary but can't shrink below minimal size. It can be resized manually.
    GrowOnly = 1
};

} } }

#endif
