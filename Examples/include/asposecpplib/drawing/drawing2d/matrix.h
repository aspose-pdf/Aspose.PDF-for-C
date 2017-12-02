#ifndef __matrix_h__
#define __matrix_h__

#include "system/array.h"
#include "fwd.h"

#include "drawing/drawing2d/matrix_order.h"
#include "drawing/point_f.h"
#include "drawing/rectangle_f.h"

#include <cstdint>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include "core/SkMatrix.h"
#endif


ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);


namespace System { namespace Drawing { class Graphics; } }
namespace System { namespace Drawing { class Region; } }
namespace System { namespace Drawing { class TextureBrush; } }

namespace System { namespace Drawing { namespace Drawing2D {

namespace Detail {
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER(SkMatrix, SkMatrix, 9*sizeof(float) + sizeof(std::int32_t), float, SkMatrixHolder);
}


    class Matrix;
    typedef SharedPtr<Matrix> MatrixPtr;

    class Matrix: public Object
    {
    public:
        Matrix();
        Matrix(float m11, float m12, float m21, float m22, float dx, float dy);
        Matrix(RectangleF rect, ArrayPtr<PointF> plgpts);
        virtual ~Matrix();

        System::ArrayPtr<float> get_Elements() const;
        float get_OffsetX() const;
        float get_OffsetY() const;
        bool get_IsIdentity () const;
        bool get_IsInvertible() const;

        void Invert();
        void Reset();
        void Multiply(SharedPtr<Matrix> matrix);
        void Multiply(SharedPtr<Matrix> matrix, MatrixOrder order);
        void Rotate(float angle);
        void Rotate(float angle, MatrixOrder order);
        void RotateAt(float angle, const PointF& point);
        void RotateAt(float angle, const PointF& point, MatrixOrder order);
        void Scale(float scaleX, float scaleY);
        void Scale(float scaleX, float scaleY, MatrixOrder order);
        void Shear(float shearX, float shearY);
        void Shear(float shearX, float shearY, MatrixOrder order);
        void Translate(float offsetX, float offsetY);
        void Translate(float offsetX, float offsetY, MatrixOrder order);

        void TransformPoints(ArrayPtr<Point> pts);
        void TransformPoints(ArrayPtr<PointF> pts);
        void TransformVectors(ArrayPtr<Point> pts);
        void TransformVectors(ArrayPtr<PointF> pts);

        void VectorTransformPoints(ArrayPtr<Point> pts);

        SharedPtr<Matrix> Clone() const;

        void Dispose() {}

    private:

        friend class GraphicsPath;
        friend class System::Drawing::TextureBrush;
        friend class System::Drawing::Graphics;
        friend class System::Drawing::Region;
        friend class LinearGradientBrush;

        Detail::SkMatrixHolder m_sk_matrix;

        void AssignWithEpsilon(const SkMatrix& m);
    };

}}}


#endif