#ifndef _aspose_system_drawing_icon_h_
#define _aspose_system_drawing_icon_h_

#include "fwd.h"
#include "defines.h"
#include "system/object.h"

namespace System { namespace Drawing {

class Bitmap;

class Icon : public Object
{
    RTTI_INFO(System::Drawing::Icon, ::System::BaseTypesInfo<System::Object>)

public:
    Icon(const String & filename);
    virtual ~Icon();

    SharedPtr<Bitmap> ToBitmap();

    int32_t get_Width() const;
    int32_t get_Height() const;
};

}}


#endif
