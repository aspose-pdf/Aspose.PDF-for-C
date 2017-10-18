#ifndef _system_drawing_drawing2d_path_data_h_
#define _system_drawing_drawing2d_path_data_h_

#include <system/object.h>
#include <system/array.h>
#include <drawing/point_f.h>

namespace System {

namespace Drawing {

namespace Drawing2D {

class PathData FINAL : public System::Object
{
    typedef PathData ThisType;
    typedef System::Object BaseType;

    RTTI_INFO_DECL();

public:

    ArrayPtr<PointF> get_Points();
    void set_Points(ArrayPtr<PointF> value);
    ArrayPtr<uint8_t> get_Types();
    void set_Types(ArrayPtr<uint8_t> value);

    PathData();

private:

    ArrayPtr<PointF> pr_Points;
    ArrayPtr<uint8_t> pr_Types;

};

} // namespace Drawing2D
} // namespace Drawing
} // namespace System

#endif // _system_drawing_drawing2d_path_data_h_

