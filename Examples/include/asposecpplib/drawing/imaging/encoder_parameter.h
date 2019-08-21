/// @file drawing/imaging/encoder_parameter.h
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
    /// An alias for a shared pointer to an instance of EncoderParameter class.
    typedef SharedPtr<EncoderParameter> EncoderParameterPtr;
    /// Serves as a container used to pass values to an image encoder.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS EncoderParameter : public Object
    {
        friend class System::Drawing::Image;
    public:
        /// Constructs a new instance of EncoderParameter class.
        ASPOSECPP_SHARED_API EncoderParameter();
        /// Constructs a new instance of EncoderParameter class.
        /// @param encoder Specifies the parameter category
        /// @param value An unsigend 8-bit integer value to be represted by the object being created
        /// @param undefined True if the @p value should be treated as having an undefined type, otherwise - false
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, uint8_t value, bool undefined = false);
        /// Constructs a new instance of EncoderParameter class.
        /// @param encoder Specifies the parameter category
        /// @param value A 16-bit integer value to be represted by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, int16_t value);
        /// Constructs a new instance of EncoderParameter class.
        /// @param encoder Specifies the parameter category
        /// @param value A 64-bit integer value to be represted by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, int64_t value);
        /// Constructs a new instance of EncoderParameter class.
        /// @param encoder Specifies the parameter category
        /// @param value A 32-bit integer value to be represted by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, int32_t value);
        /// Constructs a new instance of EncoderParameter class that represents a fraction.
        /// @param encoder Specifies the parameter category
        /// @param numerator A numerator of the fraction to be represented by the object being created
        /// @param denominator A denominator of the fraction to be represented by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, int32_t numerator, int32_t denominator);
        /// Constructs a new instance of EncoderParameter class that represents a range of integer values.
        /// @param encoder Specifies the parameter category
        /// @param rangebegin The smallest value in the range
        /// @param rangeend The largest value in the range
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, int64_t rangebegin, int64_t rangeend);
        /// Constructs a new instance of EncoderParameter class that represents a range of fractions.
        /// @param encoder Specifies the parameter category
        /// @param numerator1 A numerator of the smallest fraction in the range
        /// @param numerator2 A numerator of the largest fraction in the range
        /// @param demoninator1 A denominator of the smallest fraction in the range
        /// @param demoninator2 A denominator of the largest fraction in the range
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, int32_t numerator1, int32_t demoninator1, int32_t numerator2, int32_t demoninator2);
        /// Constructs a new instance of EncoderParameter class.
        /// @param encoder Specifies the parameter category
        /// @param value A string to be represted by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, const String & value);
        /// Constructs a new instance of EncoderParameter class that represents an array of values.
        /// @param encoder Specifies the parameter category
        /// @param value An array of unsigend 8-bit integer values to be represted by the object being created
        /// @param undefined True if the values in @p value array should be treated as having an undefined type, otherwise - false
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, const ArrayPtr<uint8_t>& value, bool undefined = false);
        /// Constructs a new instance of EncoderParameter class that represents an array of values.
        /// @param encoder Specifies the parameter category
        /// @param value An array of 16-bit integer values to be represted by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, const ArrayPtr<int16_t>& value);
        /// Constructs a new instance of EncoderParameter class that represents an array of values.
        /// @param encoder Specifies the parameter category
        /// @param value An array of 64-bit integer values to be represted by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, const ArrayPtr<int64_t>& value);
        /// Constructs a new instance of EncoderParameter class that represents an array of fractions.
        /// @param encoder Specifies the parameter category
        /// @param numerator An array of numerators of the fractions to be represented by the object being created
        /// @param denominator An array of denominators of the fractions to be represented by the object being created
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, const ArrayPtr<int32_t>& numerator, const ArrayPtr<int32_t>& denominator);
        /// Constructs a new instance of EncoderParameter class that represents an array of ranges of integers.
        /// @param encoder Specifies the parameter category
        /// @param rangebegin An array that contains the smallest values of each range
        /// @param rangeend An arry that contains the largest values of each range
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, const ArrayPtr<int64_t>& rangebegin, const ArrayPtr<int64_t>& rangeend);
        /// Constructs a new instance of EncoderParameter class that represents an array of ranges of fractions.
        /// @param encoder Specifies the parameter category
        /// @param numerator1 An array that contains numerators of the smallest fractions of each range
        /// @param numerator2 An array that contains numerators of the fractions fractions of each range
        /// @param denominator1 An array that contains denominators of the smallest fractions of each range
        /// @param denominator2 An array that contains denominators of the largest fractions of each range
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, const ArrayPtr<int32_t>& numerator1, const ArrayPtr<int32_t>& denominator1, const ArrayPtr<int32_t>& numerator2, const ArrayPtr<int32_t>& denominator2);
        /// Constructs a new instance of EncoderParameter class that represents the specified number of values of the specified type which are read from 
        /// the specified buffer.
        /// @param encoder Specifies the parameter category
        /// @param numberValues Specifies the number of values
        /// @param type Specifies the type of values
        /// @param value A pointer to the buffer to read the values from
        ASPOSECPP_SHARED_API EncoderParameter(const SharedPtr<Encoder>& encoder, int numberValues, EncoderParameterValueType type, void * value);

        /// Destructor.
        ASPOSECPP_SHARED_API ~EncoderParameter();

        /// Returns the Encoder object associated with the current EncoderParameter object.
        ASPOSECPP_SHARED_API EncoderPtr get_Encoder() const;
        /// Associates the specified Encoder object with the current EncoderParameter object.
        /// @param value The Encoder object to associate the current EncoderParameter object with
        ASPOSECPP_SHARED_API void set_Encoder(const EncoderPtr& value);

        /// Returns the type of the value(s) represented by the current object.
        ASPOSECPP_SHARED_API EncoderParameterValueType get_Type() const;

        /// Returns the number of value represented by the current object.
        ASPOSECPP_SHARED_API int get_NumberOfValues() const;

    private:
        /// The GUID reprsented by Encoder objcet associated with the current object.
        Guid m_parameter_guid;
        /// The number of values represented by the current object.
        int m_number_of_values;
        /// The type of value(s) represented by the current object.
        EncoderParameterValueType m_parameter_value_type;
        /// A pointer to the buffer where the value(s) represented by the current object is(are) stored.
        void * m_parameter_value;
    };

}}}


#endif
