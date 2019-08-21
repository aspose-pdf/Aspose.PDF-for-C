/// @file drawing/drawing2d/blend.h
#pragma once

#include "system/array.h"

namespace System {namespace Drawing { namespace Drawing2D {

/// Represents a blend pattern for a LinearGradientBrush object.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Blend : public Object
{
public:
    /// Constructs a new instance of Blend class.
    Blend()
    {
        m_factors = MakeObject< Array<float> >(1, .0f);
        m_positions = MakeObject< Array<float> >(1, .0f);
    }

    /// Constructs a new instance of Blend class.
    /// @param count The number of elements in the Factors and Positions arrays.
    Blend(int count)
    {
        m_factors = MakeObject< Array<float> >(count, .0f);
        m_positions = MakeObject< Array<float> >(count, .0f);
    }

    /// Returns the array of blend factors of the gradient.
    ArrayPtr<float> get_Factors() const
    {
        return m_factors;
    }

    /// Sets the array of blend factors of the gradient.
    /// @param value The array to set
    void set_Factors(const ArrayPtr<float>& value)
    {
        m_factors = value;
    }

    /// Returns the array of blend positions of the gradient.
    ArrayPtr<float> get_Positions() const
    {
        return m_positions;
    }

    /// Sets the array of blend positions of the gradient.
    /// @param value The array to set
    void set_Positions(const ArrayPtr<float>& value)
    {
        m_positions = value;
    }

protected:
    /// Blend factors of the gradient.
    ArrayPtr<float> m_factors;
    /// Blend positions of the gradient.
    ArrayPtr<float> m_positions;
};

}}}
