/// @file drawing/drawing2d/matrix.h
#ifndef _aspose_drawing_drawing2d_matrix_h_
#define _aspose_drawing_drawing2d_matrix_h_

#include "system/array.h"
#include "fwd.h"

#include "drawing/drawing2d/matrix_order.h"
#include "drawing/point_f.h"
#include "drawing/rectangle_f.h"

#include <cstdint>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "core/SkMatrix.h"
#endif

/// Forward declaration of SkMatrix class.
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);

namespace System { namespace Drawing { class Graphics; } }
namespace System { namespace Drawing { class Region; } }
namespace System { namespace Drawing { class TextureBrush; } }
namespace System { namespace Drawing { class Pen; } }

namespace System { namespace Drawing { namespace Drawing2D {

namespace Detail {
    /// Declares class SkMatrixHolder that encapsulates SkMatrix class.
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER(SkMatrix, SkMatrix, 9*sizeof(float) + sizeof(std::int32_t), float, SkMatrixHolder);
}


    class Matrix;
    /// An alias for a shared pointer to an instance of Matrix class.
    typedef SharedPtr<Matrix> MatrixPtr;

    /// Represents a 3x3 matrix that defines transform operations.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS Matrix: public Object
    {
    public:
        /// Constructs a new instance of Matrix class that represents an identity matrix.
        ASPOSECPP_SHARED_API Matrix();
        /// Constructs a new instance of Matrix class and initializes it with the specified values.
        /// @param m11 The value of the 1-st row 1-st column
        /// @param m12 The value of the 1-st row 2-nd column
        /// @param m21 The value of the 2-nd row 1-st column
        /// @param m22 The value of the 2-nd row 2-nd column
        /// @param dx The value of the 3-rd row 1-st column
        /// @param dy The value of the 3-rd row 2-nd column
        ASPOSECPP_SHARED_API Matrix(float m11, float m12, float m21, float m22, float dx, float dy);
        /// Constructs a new instance of the Matrix class to the geometric transform defined by the specified rectangle and array of points.
        ASPOSECPP_SHARED_API Matrix(const Rectangle& rect, const ArrayPtr<Point>& plgpts);
        /// Constructs a new instance of the Matrix class to the geometric transform defined by the specified rectangle and array of points.
        ASPOSECPP_SHARED_API Matrix(const RectangleF& rect, const ArrayPtr<PointF>& plgpts);
        /// Destructor.
        virtual ASPOSECPP_SHARED_API ~Matrix();

        /// Returns an arry containing the elements of the matrix in the following order:
        /// m11, m12, m21, m22, dx, dy.
        ASPOSECPP_SHARED_API System::ArrayPtr<float> get_Elements() const;
        /// Returns the X translation value of the matrix represented by the current object.
        ASPOSECPP_SHARED_API float get_OffsetX() const;
        /// Returns the Y translation value of the matrix represented by the current object.
        ASPOSECPP_SHARED_API float get_OffsetY() const;
        /// Determines if the matrix represented by the current object is an identity matrix.
        ASPOSECPP_SHARED_API bool get_IsIdentity() const;
        /// Determines if the matrix represented by the current object is invertible.
        ASPOSECPP_SHARED_API bool get_IsInvertible() const;

        /// Inverts the matrix represented by the current object.
        ASPOSECPP_SHARED_API void Invert();
        /// Resets the matrix represented by the current object so that it becomes an identity matrix.
        ASPOSECPP_SHARED_API void Reset();
        /// Multiplies the matrix represented by the current object by the specified matrix.
        /// @param matrix The matrix to multiply the matrix represented by the current object by
        ASPOSECPP_SHARED_API void Multiply(const SharedPtr<Matrix>& matrix);
        /// Multiplies the matrix represented by the current object by the specified matrix.
        /// @param matrix The matrix to multiply the matrix represented by the current object by
        /// @param order The multiplication order
        ASPOSECPP_SHARED_API void Multiply(const SharedPtr<Matrix>& matrix, MatrixOrder order);
        /// Rotates the matrix represented by the current object clockwise by the specified angle.
        /// @param angle The angle to rotate the matrix by
        ASPOSECPP_SHARED_API void Rotate(float angle);
        /// Rotates the matrix represented by the current object clockwise around the origin by the specified angle.
        /// @param angle The angle to rotate the matrix by
        /// @param order The order in which the rotation is applied
        ASPOSECPP_SHARED_API void Rotate(float angle, MatrixOrder order);
        /// Rotates the matrix represented by the current object clockwise around the specified point by the specified angle.
        /// @param angle The angle to rotate the matrix by
        /// @param point Specifies the center of rotation
        ASPOSECPP_SHARED_API void RotateAt(float angle, const PointF& point);
        /// Rotates the matrix represented by the current object clockwise around the specified point by the specified angle.
        /// @param angle The angle to rotate the matrix by
        /// @param point Specifies the center of rotation
        /// @param order The order in which the rotation is applied
        ASPOSECPP_SHARED_API void RotateAt(float angle, const PointF& point, MatrixOrder order);
        /// Applies the specified scale vector to the matrix represented by the current object.
        /// @param scaleX The value by which to scale the matrix in x-axis direction
        /// @param scaleY The value by which to scale the matrix in y-axis direction
        ASPOSECPP_SHARED_API void Scale(float scaleX, float scaleY);
        /// Applies the specified scale vector to the matrix represented by the current object.
        /// @param scaleX The value by which to scale the matrix in x-axis direction
        /// @param scaleY The value by which to scale the matrix in y-axis direction
        /// @param order The order in which the scale vector is applied to the matrix
        ASPOSECPP_SHARED_API void Scale(float scaleX, float scaleY, MatrixOrder order);

        /// Applies the specified shear vector to the matrix represented by the current object.
        /// @param shearX The horizontal shear factor
        /// @param shearY The vertical shear factor
        ASPOSECPP_SHARED_API void Shear(float shearX, float shearY);
        /// Applies the specified shear vector to the matrix represented by the current object.
        /// @param shearX The horizontal shear factor
        /// @param shearY The vertical shear factor
        /// @param order The order in which the shear vector is applied to the matrix
        ASPOSECPP_SHARED_API void Shear(float shearX, float shearY, MatrixOrder order);
        /// Applies the specified translate vector to the matrix represented by the current object.
        /// @param offsetX The X value by which the matrix is translated
        /// @param offsetY The Y value by which the matrix is translated
        ASPOSECPP_SHARED_API void Translate(float offsetX, float offsetY);
        /// Applies the specified translate vector to the matrix represented by the current object.
        /// @param offsetX The X value by which the matrix is translated
        /// @param offsetY The Y value by which the matrix is translated
        /// @param order The order in which the translation vector is applied to the matrix
        ASPOSECPP_SHARED_API void Translate(float offsetX, float offsetY, MatrixOrder order);

        /// Applies the geometric transformation defined by the matrix represented by the current object
        /// to the specified points.
        /// @param pts An array containing the points to transform
        ASPOSECPP_SHARED_API void TransformPoints(const ArrayPtr<Point>& pts);
        /// Applies the geometric transformation defined by the matrix represented by the current object
        /// to the specified points.
        /// @param pts An array containing the points to transform
        ASPOSECPP_SHARED_API void TransformPoints(const ArrayPtr<PointF>& pts);
        /// Applies only the scale and rotate components of the matrix represented by the current object
        /// to the specified points.
        /// @param pts An array containing the points to transform
        ASPOSECPP_SHARED_API void TransformVectors(const ArrayPtr<Point>& pts);
        /// Applies only the scale and rotate components of the matrix represented by the current object
        /// to the specified points.
        /// @param pts An array containing the points to transform
        ASPOSECPP_SHARED_API void TransformVectors(const ArrayPtr<PointF>& pts);
        /// Multiplies each vector in an array by the matrix represented by the current object.
        /// @param pts An array containing the points to transform
        ASPOSECPP_SHARED_API void VectorTransformPoints(const ArrayPtr<Point>& pts);

        /// Tests whether the specified object is a Matrix and is identical to this object.
        /// @param obj The object to test
        bool Equals(ptr obj) override;

        /// Creates a copy of the current object.
        /// @returns A Matrix object which is an exact copy of the current object.
        ASPOSECPP_SHARED_API SharedPtr<Matrix> Clone() const;

        /// Releases all operating system resources acquired by the current object.
        void Dispose() {}

    private:

        friend class GraphicsPath;
        friend class System::Drawing::TextureBrush;
        friend class System::Drawing::Graphics;
        friend class System::Drawing::Region;
        friend class System::Drawing::Pen;
        friend class LinearGradientBrush;
        friend class PathGradientBrush;
        friend class HatchBrush;

        /// The underlying object that holds the elements of the matrix.
        Detail::SkMatrixHolder m_sk_matrix;
        bool m_is_identity = true;

        /// Updates the matrix represented by the current object with the specified one.
        /// @param m The matrix to replace the current one with
        void AssignWithEpsilon(const SkMatrix& m);

#if defined(_DEBUG) && defined(_MSC_VER)
        struct MatrixDebugHelper
        {
            float fMat[9];
            uint32_t fTypeMask;
        };
#endif
    };

}}}


#endif
