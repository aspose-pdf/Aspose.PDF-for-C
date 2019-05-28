/// @file drawing/imaging/color_map.h
#ifndef _color_map_h_
#define _color_map_h_

#include "fwd.h"
#include "drawing/color.h"
#include "system/object.h"

namespace System { namespace Drawing { namespace Imaging {

    class ColorMap;
    /// An alias for a shared pointer to an instance of ColorMap class.
    typedef SharedPtr<ColorMap> ColorMapPtr;
    /// Represents a map for converting colors.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ColorMap : public Object
    {

    public:
        /// Returns the old Color object representing the color to be converted.
        ASPOSECPP_SHARED_API Color get_OldColor() const;
        /// Sets the old Color object representing the color to be converted.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_OldColor(const Color & value);
        /// Returns the new Color object representing the color to which to convert.
        ASPOSECPP_SHARED_API Color get_NewColor() const;
        /// Sets the new Color object representing the color to which to convert.
        /// @param value The value to set
        ASPOSECPP_SHARED_API void set_NewColor(const Color & value);

    private:
        /// The old Color object representing the color to be converted.
        Color m_old_color;
        /// The new Color object representing the color to which to convert.
        Color m_new_color;
    };

}}}


#endif
