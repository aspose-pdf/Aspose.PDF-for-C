/// @file system/reflection/binding_flags.h
#ifndef _binding_flags_h_
#define _binding_flags_h_

#include "system/enum_helpers.h"

namespace System { namespace Reflection {

/// Degines members and types lookup modes and bindings.
enum class BindingFlags {
    /// No special options.
    Default = 0x00,
    /// Ignore case of name when looking for item
    IgnoreCase = 0x01,
    /// Only look for members declared in type and not in basetypes.
    DeclaredOnly = 0x02,
    /// Look through instance members.
    Instance = 0x04,
    /// Look through static members.
    Static = 0x08,
    /// Look through public members.
    Public = 0x10,
    /// Look through non-public members.
    NonPublic = 0x20,
    /// Look through basetype public and protected static members.
    FlattenHierarchy = 0x40,
    /// Invokes method.
    InvokeMethod = 0x0100,
    /// Creates reflected type instance.
    CreateInstance = 0x0200,
    /// Gets field value.
    GetField = 0x0400,
    /// Sets field value.
    SetField = 0x0800,
    /// Gets property value.
    GetProperty = 0x1000,
    /// Sets property value.
    SetProperty = 0x2000,
    /// Puts COM property.
    PutDispProperty = 0x4000,
    /// Puts COM reference property.
    PutRefDispProperty = 0x8000,
    /// Type binding must be exact, without any type changes.
    ExactBinding = 0x010000,
    /// Not supported.
    SuppressChangeType = 0x020000,
    /// Selects overload based on arguments count.
    OptionalParamBinding = 0x040000,
    /// Ignores COM interop return value.
    IgnoreReturn = 0x01000000
};
/// Allows bitwise logic on BindingFlags enum.
DECLARE_ENUM_OPERATORS(System::Reflection::BindingFlags);

}}

#endif
