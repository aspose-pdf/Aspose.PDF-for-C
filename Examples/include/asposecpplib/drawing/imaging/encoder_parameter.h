#ifndef _encoder_parameter_h_
#define _encoder_parameter_h_

#include "fwd.h"
#include "system/exceptions.h"
#include "system/guid.h"
#include "drawing/imaging/encoder.h"
#include "drawing/imaging/encoder_parameter_value_type.h"


namespace System { namespace Drawing {

    //fw
    class Image;

    namespace Imaging {

    class EncoderParameter;
    typedef SharedPtr<EncoderParameter> EncoderParameterPtr;

    class EncoderParameter : public Object
    {
        friend class System::Drawing::Image;
    public:
        EncoderParameter();
        EncoderParameter(SharedPtr<Encoder> encoder, uint8_t value, bool undefined = false);
        EncoderParameter(SharedPtr<Encoder> encoder, int16_t value);
        EncoderParameter(SharedPtr<Encoder> encoder, int64_t value);
        EncoderParameter(SharedPtr<Encoder> encoder, int32_t value);
        EncoderParameter(SharedPtr<Encoder> encoder, int32_t numerator, int32_t denominator);
        EncoderParameter(SharedPtr<Encoder> encoder, int64_t rangebegin, int64_t rangeend);
        EncoderParameter(SharedPtr<Encoder> encoder, int32_t numerator1, int32_t demoninator1, int32_t numerator2, int32_t demoninator2);
        EncoderParameter(SharedPtr<Encoder> encoder, const String & value);
        EncoderParameter(SharedPtr<Encoder> encoder, ArrayPtr<uint8_t> value, bool undefined = false);
        EncoderParameter(SharedPtr<Encoder> encoder, ArrayPtr<int16_t> value);
        EncoderParameter(SharedPtr<Encoder> encoder, ArrayPtr<int64_t> value);
        EncoderParameter(SharedPtr<Encoder> encoder, ArrayPtr<int32_t> numerator, ArrayPtr<int32_t> denominator);
        EncoderParameter(SharedPtr<Encoder> encoder, ArrayPtr<int64_t> rangebegin, ArrayPtr<int64_t> rangeend);
        EncoderParameter(SharedPtr<Encoder> encoder, ArrayPtr<int32_t> numerator1, ArrayPtr<int32_t> denominator1, ArrayPtr<int32_t> numerator2, ArrayPtr<int32_t> denominator2);
        EncoderParameter(SharedPtr<Encoder> encoder, int numberValues, EncoderParameterValueType type, void * value);

        ~EncoderParameter();

        EncoderPtr get_Encoder() const;

        void set_Encoder(EncoderPtr value);

        EncoderParameterValueType get_Type() const;

        int get_NumberOfValues() const;


    private:
        Guid m_parameter_guid;
        int m_number_of_values;
        EncoderParameterValueType m_parameter_value_type;
        void * m_parameter_value;
    };

}}}


#endif
