#ifndef __aspose_system_drawing_region_h__
#define __aspose_system_drawing_region_h__

#include "fwd.h"

#include "drawing/rectangle_f.h"
#include "drawing/drawing2d/matrix.h"
#include "drawing/drawing2d/graphics_path.h"
#include "drawing/drawing2d/region_data.h"
#include "system/exceptions.h"
#include "system/shared_ptr.h"

#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkRegion.h>
#endif


ASPOSECPP_3RD_PARTY_CLASS(SkRegion);
ASPOSECPP_3RD_PARTY_STRUCT(SkIRect);
ASPOSECPP_3RD_PARTY_STRUCT(SkRect);


namespace System { namespace Drawing {

class Graphics;

class Region : public Object
{
    RTTI_INFO(System::Drawing::Region, ::System::BaseTypesInfo<System::Object>)
public:
    friend class Graphics;
    FRIEND_FUNCTION_System_MakeObject;

    Region();

    Region(const RectangleF & rect);

    Region(const Rectangle & rect);

    Region(SharedPtr<Drawing2D::GraphicsPath> path);

    virtual ~Region();

    ArrayPtr<RectangleF> GetRegionScans(SharedPtr<Drawing2D::Matrix> matrix);

    RectangleF GetBounds(const SharedPtr<Graphics>& graphics);

    void Union(const RectangleF & rect);

    void Union(const Rectangle & rect);

    void Union(SharedPtr<Drawing2D::GraphicsPath> path);

    void Union(SharedPtr<Region> region);

    SharedPtr<Region> Clone();

    void Intersect(const RectangleF & rect);

    void Intersect(const Rectangle & rect);

    void Intersect(SharedPtr<Drawing2D::GraphicsPath> path);

    void Intersect(SharedPtr<Region> region);

    void Exclude(const RectangleF & rect);

    void Exclude(const Rectangle & rect);

    void Exclude(SharedPtr<Drawing2D::GraphicsPath> path);

    void Exclude(SharedPtr<Region> region);

    void Translate(int dx, int dy);

    void Transform(SharedPtr<Drawing2D::Matrix> matrix);

    void Complement(const RectangleF & rect);

    void Complement(const Rectangle & rect);

    void Complement(SharedPtr<Drawing2D::GraphicsPath> path);

    void Complement(SharedPtr<Region> region);

    void Xor(const RectangleF & rect);

    void Xor(const Rectangle & rect);

    void Xor(SharedPtr<Drawing2D::GraphicsPath> path);

    void Xor(SharedPtr<Region> region);

    bool Equals(SharedPtr<Object> obj);

    bool Equals(SharedPtr<Region> r, SharedPtr<Graphics> g);

    bool IsEmpty(SharedPtr<Graphics> g);

    bool IsInfinite(SharedPtr<Graphics> g);

        void Dispose() {}

    void MakeInfinite();
    void MakeEmpty();
    SharedPtr<Drawing2D::RegionData> GetRegionData();

    //service method used in manually implemented code parts
    ArrayPtr<ArrayPtr<PointF>> GetRegionLines(Drawing2D::MatrixPtr matrix);

private:

    Region(const SkRegion &region);

    std::unique_ptr<SkRegion> m_sk_region;
    bool m_infinity;

    static SkIRect makeSkIRect(const SkRect& rect);
    static SkIRect makeSkIRect(const RectangleF& rect);
    static SkIRect makeSkIRect(const Rectangle& rect);
};

}} // System::Drawing

#endif // __aspose_system_drawing_region_h__

