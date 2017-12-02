#ifndef metafile_header_h
#define metafile_header_h

#include "fwd.h"
#include "system/object.h"
#include "drawing/rectangle.h"

namespace System{ namespace Drawing{ namespace Imaging {

class MetafileHeader : public System::Object
{
public:
    float get_DpiX() const;
    float get_DpiY() const;

    Rectangle get_Bounds() const;

    void set_Bounds(const Rectangle& bounds);

private:
    Rectangle m_bounds;
};

}}} //namespace System{ namespace Drawing{ namespace Imaging

#endif // metafile_header_h