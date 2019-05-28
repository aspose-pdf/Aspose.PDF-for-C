/// @file drawing/imaging/metafile_header.h
#ifndef metafile_header_h
#define metafile_header_h

#include "fwd.h"
#include "system/object.h"
#include "drawing/rectangle.h"

namespace System{ namespace Drawing{ namespace Imaging {
/// Contains attributes associated with a graphic metafile.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS MetafileHeader : public System::Object
{
public:
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API float get_DpiX() const;
    /// NOT IMPLEMENTED.
    /// @throws NotImplementedException Always
    ASPOSECPP_SHARED_API float get_DpiY() const;

    /// Returns a bounding rectangle of a metafile associated with the current object.
    ASPOSECPP_SHARED_API Rectangle get_Bounds() const;
    /// Sets a bounding rectangle of a metafile associated with the current object.
    /// @param bounds A bounding rectagle to set
    ASPOSECPP_SHARED_API void set_Bounds(const Rectangle& bounds);

private:
    /// A bounding rectangle of a metafile associated with the current object.
    Rectangle m_bounds;
};

}}} //namespace System{ namespace Drawing{ namespace Imaging

#endif // metafile_header_h
