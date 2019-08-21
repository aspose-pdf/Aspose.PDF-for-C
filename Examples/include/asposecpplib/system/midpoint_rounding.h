/// @file system/midpoint_rounding.h
/// Contains the declaration of System::MidpointRounding enum.
#ifndef _aspose_system_midpoint_rounding_h_
#define _aspose_system_midpoint_rounding_h_

namespace System {

/// Specifies the behavior of rounding functions.
enum class MidpointRounding
{
    /// Round to the nearest even number 
    ToEven,
    /// Round to the nearest number that is away from zero
    AwayFromZero
};

}

#endif // _aspose_system_midpoint_rounding_h_
