#ifndef _color_matrix_h_
#define _color_matrix_h_

#include "fwd.h"
#include "system/array.h"

namespace System { namespace Drawing { namespace Imaging {

    class ColorMatrix;
    typedef SharedPtr<ColorMatrix> ColorMatrixPtr;

    class ColorMatrix : public Object
    {
    public:

        ColorMatrix();
        ColorMatrix(System::ArrayPtr<System::ArrayPtr<float> > matrix);

        float idx_get(int row, int column);
        float idx_set(int row, int column, float value);

        float get_Matrix00() const;
        void set_Matrix00(float value);
        float get_Matrix01() const;
        void set_Matrix01(float value);
        float get_Matrix02() const;
        void set_Matrix02(float value);
        float get_Matrix03() const;
        void set_Matrix03(float value);
        float get_Matrix04() const;
        void set_Matrix04(float value);
        float get_Matrix10() const;
        void set_Matrix10(float value);
        float get_Matrix11() const;
        void set_Matrix11(float value);
        float get_Matrix12() const;
        void set_Matrix12(float value);
        float get_Matrix13() const;
        void set_Matrix13(float value);
        float get_Matrix14() const;
        void set_Matrix14(float value);
        float get_Matrix20() const;
        void set_Matrix20(float value);
        float get_Matrix21() const;
        void set_Matrix21(float value);
        float get_Matrix22() const;
        void set_Matrix22(float value);
        float get_Matrix23() const;
        void set_Matrix23(float value);
        float get_Matrix24() const;
        void set_Matrix24(float value);
        float get_Matrix30() const;
        void set_Matrix30(float value);
        float get_Matrix31() const;
        void set_Matrix31(float value);
        float get_Matrix32() const;
        void set_Matrix32(float value);
        float get_Matrix33() const;
        void set_Matrix33(float value);
        float get_Matrix34() const;
        void set_Matrix34(float value);
        float get_Matrix40() const;
        void set_Matrix40(float value);
        float get_Matrix41() const;
        void set_Matrix41(float value);
        float get_Matrix42() const;
        void set_Matrix42(float value);
        float get_Matrix43() const;
        void set_Matrix43(float value);
        float get_Matrix44() const;
        void set_Matrix44(float value);

    private:

        void SetMatrix(System::ArrayPtr<System::ArrayPtr<float> > matrix);
        System::ArrayPtr<System::ArrayPtr<float> > GetMatrix();

    private:

        float m_matrix00;
        float m_matrix01;
        float m_matrix02;
        float m_matrix03;
        float m_matrix04;
        float m_matrix10;
        float m_matrix11;
        float m_matrix12;
        float m_matrix13;
        float m_matrix14;
        float m_matrix20;
        float m_matrix21;
        float m_matrix22;
        float m_matrix23;
        float m_matrix24;
        float m_matrix30;
        float m_matrix31;
        float m_matrix32;
        float m_matrix33;
        float m_matrix34;
        float m_matrix40;
        float m_matrix41;
        float m_matrix42;
        float m_matrix43;
        float m_matrix44;
    };

}}}


#endif
