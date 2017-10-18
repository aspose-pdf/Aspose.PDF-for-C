#ifndef _encoder_parameters_h_
#define _encoder_parameters_h_

#include "fwd.h"
#include "system/exceptions.h"
#include "system/array.h"

#include "drawing/imaging/encoder_parameter.h"

namespace System { namespace Drawing { namespace Imaging {

    class EncoderParameters;
    typedef SharedPtr<EncoderParameters> EncoderParametersPtr;

    class EncoderParameters : public Object
    {
    public:
        EncoderParameters(int count = 1);

        System::ArrayPtr<EncoderParameterPtr> get_Param() const;

        void set_Param(System::ArrayPtr<EncoderParameterPtr> value);

    private:

        System::ArrayPtr<EncoderParameterPtr> m_param;

    };

}}}


#endif
