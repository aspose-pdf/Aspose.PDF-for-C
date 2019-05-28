#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumerates the operations to perform with document during launch action executing.
/// </summary>
enum class LaunchActionOperation
{
    /// <summary>
    /// Undefined state.
    /// </summary>
    Undefined,
    /// <summary>
    /// Open a document.
    /// </summary>
    Open,
    /// <summary>
    /// Print a document.
    /// </summary>
    Print
};

class LaunchActionOperationConverter : public System::Object
{
    typedef LaunchActionOperationConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(LaunchActionOperation value);
    static LaunchActionOperation ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


