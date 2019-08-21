/// @file drawing/imaging/encoder_parameters.h
#ifndef _encoder_parameters_h_
#define _encoder_parameters_h_

#include "fwd.h"
#include "system/exceptions.h"
#include "system/array.h"

#include "drawing/imaging/encoder_parameter.h"

namespace System { namespace Drawing { namespace Imaging {

    class EncoderParameters;
    /// An alias for a shared pointer to an instance of EncoderParameters class.
    typedef SharedPtr<EncoderParameters> EncoderParametersPtr;
    /// Represents an array of EncoderParameter objects.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS EncoderParameters : public Object
    {
    public:
        /// Constructs a new instance of EncoderParameters class.
        /// @param count The number of EncodeParameter objects to be represented by the object being created.
        ASPOSECPP_SHARED_API EncoderParameters(int count = 1);

        /// Returns an array of EncoderParameter objects represented by the current EncoderParameters object.
        ASPOSECPP_SHARED_API System::ArrayPtr<EncoderParameterPtr> get_Param() const;

        /// Assigns an array of EncoderParameter objects to the current EncoderParameters object.
        /// @param value An array to assign
        ASPOSECPP_SHARED_API void set_Param(const System::ArrayPtr<EncoderParameterPtr>& value);

    private:
        /// An array of EncoderParameter objects represented by the current EncoderParameters object.
        System::ArrayPtr<EncoderParameterPtr> m_param;

    };

}}}


#endif
