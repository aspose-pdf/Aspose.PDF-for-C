/// @file drawing/imaging/color_matrix.h
#ifndef _color_matrix_h_
#define _color_matrix_h_

#include "fwd.h"
#include "system/array.h"

namespace System { namespace Drawing { namespace Imaging {

    class ColorMatrix;
    /// An alias for a shared pointer to an instance of the ColorMatrix class.
    typedef SharedPtr<ColorMatrix> ColorMatrixPtr;

    /// Represents a 5x5 matrix that contains the coordinates for the RGBAW color space.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS ColorMatrix : public Object
    {
    public:
        /// Constructs a new instance of ColorMatrix class and initializes it with the values of identity matrix.
        ASPOSECPP_SHARED_API ColorMatrix();
        /// Constructs a new instance of ColorMatrix class and initializes it with the specified values.
        /// @param matrix A 2-dimensional array containing value ot initialize the matrix with
        ASPOSECPP_SHARED_API ColorMatrix(const System::ArrayPtr<System::ArrayPtr<float> >& matrix);

        /// Returns a value at the specified row and column.
        /// @param row A 0-based index of the row in the matrix in which the value to return is located
        /// @param column A 0-based index of the column in the matrix in which the value to return is located
        /// @returns A value at the specified location in the matrix
        ASPOSECPP_SHARED_API float idx_get(int row, int column);
        /// Sets the specifie value at the specified location in the matrix.
        /// @param row A 0-based index of the row in the matrix in which to set the value
        /// @param column A 0-based index of the column in the matrix in which to set the value
        /// @param value A value to set
        /// @returns @p value
        ASPOSECPP_SHARED_API float idx_set(int row, int column, float value);

        /// Returns a value in 0-th row and 0-th column.
        ASPOSECPP_SHARED_API float get_Matrix00() const;
        /// Sets a value in the 0-th row and 0-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix00(float value);
        /// Returns a value in 0-th row and 1-st column.
        ASPOSECPP_SHARED_API float get_Matrix01() const;
        /// Sets a value in the 0-th row and 1-st column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix01(float value);
        /// Returns a value in 0-th row and 2-nd column.
        ASPOSECPP_SHARED_API float get_Matrix02() const;
        /// Sets a value in the 0-th row and 2-nd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix02(float value);
        /// Returns a value in 0-th row and 3-rd column.
        ASPOSECPP_SHARED_API float get_Matrix03() const;
        /// Sets a value in the 0-th row and 3-rd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix03(float value);
        /// Returns a value in 0-th row and 4-th column.
        ASPOSECPP_SHARED_API float get_Matrix04() const;
        /// Sets a value in the 0-th row and 4-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix04(float value);
        /// Returns a value in 1-st row and 0-th column.
        ASPOSECPP_SHARED_API float get_Matrix10() const;
        /// Sets a value in the 1-st row and 0-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix10(float value);
        /// Returns a value in 1-st row and 1-st column.
        ASPOSECPP_SHARED_API float get_Matrix11() const;
        /// Sets a value in the 1-st row and 1-st column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix11(float value);
        /// Returns a value in 1-st row and 2-nd column.
        ASPOSECPP_SHARED_API float get_Matrix12() const;
        /// Sets a value in the 1-st row and 2-nd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix12(float value);
        /// Returns a value in 1-st row and 3-rd column.
        ASPOSECPP_SHARED_API float get_Matrix13() const;
        /// Sets a value in the 1-st row and 3-rd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix13(float value);
        /// Returns a value in 1-st row and 4-th column.
        ASPOSECPP_SHARED_API float get_Matrix14() const;
        /// Sets a value in the 1-st row and 4-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix14(float value);
        /// Returns a value in 2-nd row and 0-th column.
        ASPOSECPP_SHARED_API float get_Matrix20() const;
        /// Sets a value in the 2-nd row and 0-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix20(float value);
        /// Returns a value in 2-nd row and 1-st column.
        ASPOSECPP_SHARED_API float get_Matrix21() const;
        /// Sets a value in the 2-nd row and 1-st column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix21(float value);
        /// Returns a value in 2-nd row and 2-nd column.
        ASPOSECPP_SHARED_API float get_Matrix22() const;
        /// Sets a value in the 2-nd row and 2-nd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix22(float value);
        /// Returns a value in 2-nd row and 3-rd column.
        ASPOSECPP_SHARED_API float get_Matrix23() const;
        /// Sets a value in the 2-nd row and 3-rd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix23(float value);
        /// Returns a value in 2-nd row and 4-th column.
        ASPOSECPP_SHARED_API float get_Matrix24() const;
        /// Sets a value in the 2-nd row and 4-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix24(float value);
        /// Returns a value in 3-rd row and 0-th column.
        ASPOSECPP_SHARED_API float get_Matrix30() const;
        /// Sets a value in the 3-rd row and 0-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix30(float value);
        /// Returns a value in 3-rd row and 1-st column.
        ASPOSECPP_SHARED_API float get_Matrix31() const;
        /// Sets a value in the 3-rd row and 1-st column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix31(float value);
        /// Returns a value in 3-rd row and 2-nd column.
        ASPOSECPP_SHARED_API float get_Matrix32() const;
        /// Sets a value in the 3-rd row and 2-nd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix32(float value);
        /// Returns a value in 3-rd row and 3-rd column.
        ASPOSECPP_SHARED_API float get_Matrix33() const;
        /// Sets a value in the 3-rd row and 3-rd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix33(float value);
        /// Returns a value in 3-rd row and 4-th column.
        ASPOSECPP_SHARED_API float get_Matrix34() const;
        /// Sets a value in the 3-rd row and 4-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix34(float value);
        /// Returns a value in 4-th row and 0-th column.
        ASPOSECPP_SHARED_API float get_Matrix40() const;
        /// Sets a value in the 4-th row and 0-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix40(float value);
        /// Returns a value in 4-th row and 1-st column.
        ASPOSECPP_SHARED_API float get_Matrix41() const;
        /// Sets a value in the 4-th row and 1-st column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix41(float value);
        /// Returns a value in 4-th row and 2-nd column.
        ASPOSECPP_SHARED_API float get_Matrix42() const;
        /// Sets a value in the 4-th row and 2-nd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix42(float value);
        /// Returns a value in 4-th row and 3-rd column.
        ASPOSECPP_SHARED_API float get_Matrix43() const;
        /// Sets a value in the 4-th row and 3-rd column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix43(float value);
        /// Returns a value in 4-th row and 4-th column.
        ASPOSECPP_SHARED_API float get_Matrix44() const;
        /// Sets a value in the 4-th row and 4-th column.
        /// @param value A value to set
        ASPOSECPP_SHARED_API void set_Matrix44(float value);

    private:
        /// Sets the specified values of the matrix.
        /// @param matrix A 2-dimensional array containing the values to set
        ASPOSECPP_SHARED_API void SetMatrix(const System::ArrayPtr<System::ArrayPtr<float> >& matrix);
        /// Returns a 2-dimesional array that contains values of the matrix.
        ASPOSECPP_SHARED_API System::ArrayPtr<System::ArrayPtr<float> > GetMatrix();

    private:
        /// The value of the matrix in 0-th row and 0-th column.
        float m_matrix00;
        /// The value of the matrix in 0-th row and 1-st column.
        float m_matrix01;
        /// The value of the matrix in 0-th row and 2-nd column.
        float m_matrix02;
        /// The value of the matrix in 0-th row and 3-rd column.
        float m_matrix03;
        /// The value of the matrix in 0-th row and 4-th column.
        float m_matrix04;
        /// The value of the matrix in 1-st row and 0-th column.
        float m_matrix10;
        /// The value of the matrix in 1-st row and 1-st column.
        float m_matrix11;
        /// The value of the matrix in 1-st row and 2-nd column.
        float m_matrix12;
        /// The value of the matrix in 1-st row and 3-rd column.
        float m_matrix13;
        /// The value of the matrix in 1-st row and 4-th column.
        float m_matrix14;
        /// The value of the matrix in 2-nd row and 0-th column.
        float m_matrix20;
        /// The value of the matrix in 2-nd row and 1-st column.
        float m_matrix21;
        /// The value of the matrix in 2-nd row and 2-nd column.
        float m_matrix22;
        /// The value of the matrix in 2-nd row and 3-rd column.
        float m_matrix23;
        /// The value of the matrix in 2-nd row and 4-th column.
        float m_matrix24;
        /// The value of the matrix in 3-rd row and 0-th column.
        float m_matrix30;
        /// The value of the matrix in 3-rd row and 1-st column.
        float m_matrix31;
        /// The value of the matrix in 3-rd row and 2-nd column.
        float m_matrix32;
        /// The value of the matrix in 3-rd row and 3-rd column.
        float m_matrix33;
        /// The value of the matrix in 3-rd row and 4-th column.
        float m_matrix34;
        /// The value of the matrix in 4-th row and 0-th column.
        float m_matrix40;
        /// The value of the matrix in 4-th row and 1-st column.
        float m_matrix41;
        /// The value of the matrix in 4-th row and 2-nd column.
        float m_matrix42;
        /// The value of the matrix in 4-th row and 3-rd column.
        float m_matrix43;
        /// The value of the matrix in 4-th row and 4-th column.
        float m_matrix44;
    };

}}}


#endif
