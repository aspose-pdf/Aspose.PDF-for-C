#ifndef ___blend_h___
#define ___blend_h___

#include "system/array.h"

namespace System {namespace Drawing { namespace Drawing2D {

    class Blend : public Object
    {
        public:
                Blend()
                {
                    m_factors = MakeObject< Array<float> >(1, .0f);
                    m_positions = MakeObject< Array<float> >(1, .0f);
                }

                Blend(int count)
                {
                    m_factors = MakeObject< Array<float> >(count, .0f);
                    m_positions = MakeObject< Array<float> >(count, .0f);
                }

                ArrayPtr<float> get_Factors()
                {
                    return m_factors;
                }

                void set_Factors(ArrayPtr<float> value)
                {
                    m_factors = value;
                }

                ArrayPtr<float> get_Positions()
                {
                    return m_positions;
                }

                void set_Positions(ArrayPtr<float> value)
                {
                    m_positions = value;
                }


            protected:
                ArrayPtr<float> m_factors;
                ArrayPtr<float> m_positions;

    };

}}}


#endif