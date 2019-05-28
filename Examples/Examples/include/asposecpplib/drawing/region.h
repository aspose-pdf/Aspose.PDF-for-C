/// @file drawing/region.h
#ifndef __aspose_system_drawing_region_h__
#define __aspose_system_drawing_region_h__

#include "fwd.h"

#include "drawing/rectangle_f.h"
#include "drawing/drawing2d/combine_mode.h"
#include "drawing/drawing2d/matrix.h"
#include "drawing/drawing2d/graphics_path.h"
#include "drawing/drawing2d/region_data.h"
#include "system/exceptions.h"
#include "system/shared_ptr.h"

#include <memory>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <core/SkRegion.h>
#endif

/// Forward declaration of SkRegion class.
ASPOSECPP_3RD_PARTY_CLASS(SkRegion);
/// Forward declaration of SkIRect struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkIRect);
/// Forward declaration of SkRect struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkRect);

namespace System { namespace Drawing { namespace Details { namespace Region { class BaseRegionDataNode; } } } }
namespace System { namespace Drawing { namespace Details { namespace Skia { class SkiaData; } } } }

namespace System { namespace Drawing {

class Graphics;
/// Represents the interior of a graphic shape.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Region : public Object
{
    RTTI_INFO(System::Drawing::Region, ::System::BaseTypesInfo<System::Object>)
public:
    /// Declaring template function System::MakeObject(...) a friend of this class.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructs a new instance of Region class.
    ASPOSECPP_SHARED_API Region();
    /// Constructs a new instance of Region class that represents a region defined
    /// by the specified rectangle.
    /// @param rect A rectangle that defines the region
    ASPOSECPP_SHARED_API Region(const RectangleF& rect);
    /// Constructs a new instance of Region class that represents a region defined
    /// by the specified rectangle.
    /// @param rect A rectangle that defines the region
    ASPOSECPP_SHARED_API Region(const Rectangle& rect);
    /// Constructs a new instance of Region class that represents a region defined
    /// by the specified path.
    /// @param path A path that defines the region
    ASPOSECPP_SHARED_API Region(const SharedPtr<Drawing2D::GraphicsPath>& path);
    /// Constructs a new instance of Region class that represents a region defined
    /// by the specified RegionData object.
    /// @param region_data A RegionData object that defines the region
    ASPOSECPP_SHARED_API Region(const SharedPtr<Drawing2D::RegionData>& region_data);

    /// Destructor.
    virtual ASPOSECPP_SHARED_API ~Region();

    /// Returns an array of RectangleF structures that approximate this
    /// Region after the specified matrix transformation is applied.
    /// @param matrix A Matrix that represents a geometric transformation to apply to the region.
    ASPOSECPP_SHARED_API ArrayPtr<RectangleF> GetRegionScans(const SharedPtr<Drawing2D::Matrix>& matrix) const;

    /// Gets a RectangleF structure that represents a rectangle that bounds
    /// this Region on the drawing surface of a Graphics object.
    /// @param graphics The Graphics on which this Region is drawn.
    ASPOSECPP_SHARED_API RectangleF GetBounds(const SharedPtr<Graphics>& graphics) const;

    /// Replaces the region represented by the current object with the result of
    /// union operation of this region and a region defined by the specified rectangle.
    /// @param rect A rectangle that defines a region to unite this region with
    ASPOSECPP_SHARED_API void Union(const RectangleF & rect);

    /// Replaces the region represented by the current object with the result of
    /// union of this region and a region defined by the specified rectangle.
    /// @param rect A rectangle that defines a region to unite this region with
    ASPOSECPP_SHARED_API void Union(const Rectangle & rect);

    /// Replaces the region represented by the current object with the result of
    /// union of this region and a region defined by the specified path.
    /// @param path A path that defines a region to unite this region with
    ASPOSECPP_SHARED_API void Union(const SharedPtr<Drawing2D::GraphicsPath>& path);

    /// Replaces the region represented by the current object with the result of
    /// union of this region and and the specified region.
    /// @param region A region to unite this region with
    ASPOSECPP_SHARED_API void Union(const SharedPtr<Region>& region);

    /// Returns a copy of the current object.
    ASPOSECPP_SHARED_API SharedPtr<Region> Clone() const;

    /// Replaces the region represented by the current object with the result of
    /// intersection of this region and a region defined by the specified rectangle.
    /// @param rect A rectangle that defines a region to intersect this region with
    ASPOSECPP_SHARED_API void Intersect(const RectangleF & rect);

    /// Replaces the region represented by the current object with the result of
    /// intersection of this region and a region defined by the specified rectangle.
    /// @param rect A rectangle that defines a region to intersect this region with
    ASPOSECPP_SHARED_API void Intersect(const Rectangle & rect);

    /// Replaces the region represented by the current object with the result of
    /// intersection of this region and a region defined by the specified path.
    /// @param path A path that defines a region to intersect this region with
    ASPOSECPP_SHARED_API void Intersect(const SharedPtr<Drawing2D::GraphicsPath>& path);

    /// Replaces the region represented by the current object with the result of
    /// intersection of this region and the specified region.
    /// @param region A region to intersect this region with
    ASPOSECPP_SHARED_API void Intersect(const SharedPtr<Region>& region);

    /// Replaces the region represented by the current object with the result of
    /// exclusion of the region defined by the specified rectange from it
    /// @param rect A rectangle that defines a region to exclude
    ASPOSECPP_SHARED_API void Exclude(const RectangleF & rect);

    /// Replaces the region represented by the current object with the result of
    /// exclusion of the region defined by the specified rectange from it
    /// @param rect A rectangle that defines a region to exclude
    ASPOSECPP_SHARED_API void Exclude(const Rectangle & rect);

    /// Replaces the region represented by the current object with the result of
    /// exclusion of the region defined by the specified path from it
    /// @param path A path that defines a region to exclude
    ASPOSECPP_SHARED_API void Exclude(const SharedPtr<Drawing2D::GraphicsPath>& path);

    /// Replaces the region represented by the current object with the result of
    /// exclusion of the specified region from it
    /// @param region A region to exclude
    ASPOSECPP_SHARED_API void Exclude(const SharedPtr<Region>& region);

    /// Moves the coordinates of the region by the specified amount.
    /// @param dx Specifies the amount to move the region by horizontally
    /// @param dy Specifies the amount to move the region by vertically
    ASPOSECPP_SHARED_API void Translate(int dx, int dy);
    /// Moves the coordinates of the region by the specified amount.
    /// @param dx Specifies the amount to move the region by horizontally
    /// @param dy Specifies the amount to move the region by vertically
    ASPOSECPP_SHARED_API void Translate(float dx, float dy);
    /// Transforms this region by the specified matrix.
    /// @param matrix Transformation matrix
    ASPOSECPP_SHARED_API void Transform(const SharedPtr<Drawing2D::Matrix>& matrix);

    /// Replaces the region represented by the current object with the portion of the region
    /// defined by the specified recangle that does not intersect with this region.
    /// @param rect A rectangle that defines a region to complement
    ASPOSECPP_SHARED_API void Complement(const RectangleF & rect);

    /// Replaces the region represented by the current object with the portion of the region
    /// defined by the specified recangle that does not intersect with this region.
    /// @param rect A rectangle that defines a region to complement
    ASPOSECPP_SHARED_API void Complement(const Rectangle & rect);

    /// Replaces the region represented by the current object with the portion of the region
    /// defined by the specified path that does not intersect with this region.
    /// @param path A path that defines a region to complement
    ASPOSECPP_SHARED_API void Complement(const SharedPtr<Drawing2D::GraphicsPath>& path);

    /// Replaces the region represented by the current object with the portion of the
    /// specified region that does not intersect with this region.
    /// @param region A region to complement
    ASPOSECPP_SHARED_API void Complement(const SharedPtr<Region>& region);

    /// Replaces the region represented by the current object with the portions of this region and the region
    /// defined by the specified recangle that do not intersect.
    /// @param rect A rectangle that defines a region to xor with the region represented by the current object
    ASPOSECPP_SHARED_API void Xor(const RectangleF & rect);
    /// Replaces the region represented by the current object with the portions of this region and the region
    /// defined by the specified recangle that do not intersect.
    /// @param rect A rectangle that defines a region to xor with the region represented by the current object
    ASPOSECPP_SHARED_API void Xor(const Rectangle & rect);
    /// Replaces the region represented by the current object with the portions of this region and the region
    /// defined by the specified path that do not intersect.
    /// @param path A path that defines a region to xor with the region represented by the current object
    ASPOSECPP_SHARED_API void Xor(const SharedPtr<Drawing2D::GraphicsPath>& path);
    /// Replaces the region represented by the current object with the portions of this region and the specified region
    /// that do not intersect.
    /// @param region A region to xor with the region represented by the current object
    ASPOSECPP_SHARED_API void Xor(const SharedPtr<Region>& region);

    /// Compares the current and specified object using C# Object.Equals semantics.
    /// @param obj Object to compare current one to.
    /// @return True if objects are considered equal and false otherwise.
    ASPOSECPP_SHARED_API bool Equals(SharedPtr<Object> obj) override;

    /// Determines whether the specified region is identical to the region represented by the current object
    /// on the specified drawing surface.
    /// @param r The region to compare this region with
    /// @param g A drawing surface
    /// @returns True if the interior of the specified region is identical to the interior
    /// of the region represented by the current objcet when the transformation associated with the
    /// @p g parameter is applied; otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const SharedPtr<Region>& r, const SharedPtr<Graphics>& g);

    /// Determines wheter the region represented by the current object has empty interior on the
    /// specified drawing surface.
    /// @param g A drawing surface
    ASPOSECPP_SHARED_API bool IsEmpty(const SharedPtr<Graphics>& g) const;

    /// Determines wheter the region represented by the current object has infinite interior on the
    /// specified drawing surface.
    /// @param g A drawing surface
    ASPOSECPP_SHARED_API bool IsInfinite(const SharedPtr<Graphics>& g) const;

    /// Determines if the specified point is contained within the region represented by the current object.
    /// @param point The point to check
    ASPOSECPP_SHARED_API bool IsVisible(const Point& point) const;
    /// Determines if the specified point is contained within the region represented by the current object.
    /// @param point The point to check
    ASPOSECPP_SHARED_API bool IsVisible(const PointF& point) const;
    /// Determines if any portion the specified rectangle is contained within the region represented by the current object.
    /// @param rect The rectangle to check
    ASPOSECPP_SHARED_API bool IsVisible(const Rectangle& rect);
    /// Determines if any portion the specified rectangle is contained within the region represented by the current object.
    /// @param rect The rectangle to check
    ASPOSECPP_SHARED_API bool IsVisible(const RectangleF& rect);
    /// Determines if the specified point is contained within the region represented by the current object
    /// using the specified graphics.
    /// @param point The point to check
    /// @param graphics The graphics context
    ASPOSECPP_SHARED_API bool IsVisible(const Point& point, const SharedPtr<Graphics>& graphics) const;
    /// Determines if the specified point is contained within the region represented by the current object
    /// using the specified graphics.
    /// @param point The point to check
    /// @param graphics The graphics context
    ASPOSECPP_SHARED_API bool IsVisible(const PointF& point, const SharedPtr<Graphics>& graphics) const;
    /// Determines if any portion the specified rectangle is contained within the region represented by the current object
    /// using the specified graphics.
    /// @param rect The rectangle to check
    /// @param graphics The graphics context
    ASPOSECPP_SHARED_API bool IsVisible(const Rectangle& rect, const SharedPtr<Graphics>& graphics);
    /// Determines if any portion the specified rectangle is contained within the region represented by the current object
    /// using the specified graphics.
    /// @param rect The rectangle to check
    /// @param graphics The graphics context
    ASPOSECPP_SHARED_API bool IsVisible(const RectangleF& rect, const SharedPtr<Graphics>& graphics);
    /// Determines if the specified point is contained within the region represented by the current object.
    /// @param x The X coordinate of the point to check
    /// @param y The Y coordinate of the point to check
    ASPOSECPP_SHARED_API bool IsVisible(float x, float y) const;
    /// Determines if the specified point is contained within the region represented by the current object
    /// using the specified graphics.
    /// @param x The X coordinate of the point to check
    /// @param y The Y coordinate of the point to check
    /// @param graphics The graphics context
    ASPOSECPP_SHARED_API bool IsVisible(float x, float y, const SharedPtr<Graphics>& graphics) const;

    /// Releases all operating system resources acquired by the current object.
    void Dispose() {}
    ///  Initializes this region object to an infinite interior.
    ASPOSECPP_SHARED_API void MakeInfinite();
    /// Initializes the current object to empty interior.
    ASPOSECPP_SHARED_API void MakeEmpty();
    /// Returns a RegionData object containing data that defines the region represented by the
    /// current object.
    ASPOSECPP_SHARED_API SharedPtr<Drawing2D::RegionData> GetRegionData() const;

private:
    friend class Graphics;
    friend class Details::Skia::SkiaData;

    SharedPtr<Details::Region::BaseRegionDataNode> m_nodeRegion;

    void get_SkiaRegion(SkRegion& region);

    SharedPtr<Details::Region::BaseRegionDataNode> get_RegionNode() const;

    bool IsInfinite() const;

    void ApplyOperation(const SharedPtr<Details::Region::BaseRegionDataNode>& node, Drawing2D::CombineMode operationType);
    void ApplyOperation(const SharedPtr<Region>& region, Drawing2D::CombineMode operationType);
};

}} // System::Drawing

#endif // __aspose_system_drawing_region_h__

