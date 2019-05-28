/// @file drawing/icon.h
#ifndef _aspose_system_drawing_icon_h_
#define _aspose_system_drawing_icon_h_

#include "fwd.h"
#include "defines.h"
#include "system/object.h"

namespace System { namespace Drawing {

class Bitmap;
/// Represents a Windows icon.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Icon : public Object
{
    RTTI_INFO(System::Drawing::Icon, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructs a new instance of Icon class that represents an icon from the specified file.
    /// @param filename A name of the file to load the icon from
    ASPOSECPP_SHARED_API Icon(const String & filename);
    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~Icon();

    /// Converts the current object to a Bitmap object.
    ASPOSECPP_SHARED_API SharedPtr<Bitmap> ToBitmap();

    /// Returns the width of the icon.
    ASPOSECPP_SHARED_API int32_t get_Width() const;
    /// Returns the hegiht of the icon.
    ASPOSECPP_SHARED_API int32_t get_Height() const;
};

}}


#endif
