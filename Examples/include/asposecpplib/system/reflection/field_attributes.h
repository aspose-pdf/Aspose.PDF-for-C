/// @file system/reflection/field_attributes.h
#pragma once

#include "system/enum_helpers.h"

namespace System { namespace Reflection {

/// Reflected field attributes.
enum class FieldAttributes
{
    /// Member access mask. Use this mask to retrieve accessibility information.
    FieldAccessMask         =    0x0007,
    /// Non-referancable members.
    PrivateScope            =    0x0000,
    /// Private members.
    Private                 =    0x0001,
    /// Private and assembly-scoped members.
    FamANDAssem             =    0x0002,
    /// Assembly-scoped members.
    Assembly                =    0x0003,
    /// Members accessible by type and subtypes.
    Family                  =    0x0004,
    /// Members accessible by type, sub-types and assembly.
    FamORAssem              =    0x0005,
    /// Members accessible by anyone.
    Public                  =    0x0006,
    // end member access mask
    
    /// Static members as opposite to instance members.
    Static                  =    0x0010,
    /// Const members that can only be initialized but not changed.
    InitOnly                =    0x0020,
    /// Compile time constant members.
    Literal                 =    0x0040,
    /// Not serialized members.
    NotSerialized           =    0x0080,
        
    /// Special field of one of the below names.
    SpecialName             =    0x0200,
    /// Interop forwarded implementation.
    PinvokeImpl             =    0x2000,

    /// Reserved flags for runtime use only.
    ReservedMask            =   0x9500,
    /// Runtim eshould check name encoding.
    RTSpecialName           =   0x0400,
    /// Marshalling information is present.
    HasFieldMarshal         =   0x1000,
    /// Default value is present.
    HasDefault              =   0x8000,
    /// RVA is present.
    HasFieldRVA             =   0x0100,
};
/// Allows bitwise logic on enum
DECLARE_ENUM_OPERATORS(System::Reflection::FieldAttributes);

}}
