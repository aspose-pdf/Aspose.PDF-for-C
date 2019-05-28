/// @file drawing/drawing2d/path_data.h
#ifndef _system_drawing_drawing2d_path_data_h_
#define _system_drawing_drawing2d_path_data_h_

#include <system/object.h>
#include <system/array.h>
#include <drawing/point_f.h>

namespace System {

namespace Drawing {

namespace Drawing2D {
/// Contains the graphical data that represents a path.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS PathData FINAL : public System::Object
{
    /// An alias for this type.
    typedef PathData ThisType;
    /// An alias for the base type.
    typedef System::Object BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    /// Returns an array containing the points that make up a path.
    ASPOSECPP_SHARED_API ArrayPtr<PointF> get_Points();
    /// Sets an array containing the points that make up a path.
    /// @param value The array to set
    ASPOSECPP_SHARED_API void set_Points(const ArrayPtr<PointF>& value);
    /// Returns an array containing the values that specify the types of corresponding points in @p Points array.
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> get_Types();
    /// Sets an array containing the values that specify the types of corresponding points in @p Points array.
    /// @param value The array to set
    ASPOSECPP_SHARED_API void set_Types(const ArrayPtr<uint8_t>& value);

    /// Constructs an empty PathData object.
    ASPOSECPP_SHARED_API PathData();

private:
    /// The points that make up the path represented by the current object.
    ArrayPtr<PointF> pr_Points;
    /// The values that specify the types of corresponding points in @p pr_Points array.
    ArrayPtr<uint8_t> pr_Types;

};

} // namespace Drawing2D
} // namespace Drawing
} // namespace System

#endif // _system_drawing_drawing2d_path_data_h_

