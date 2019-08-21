#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace Aspose {

namespace Pdf {

/// <summary>
/// The interface defines ways to cleanup memory in case mass operations.
/// </summary>
class ISupportsMemoryCleanup : public virtual System::Object
{
    typedef ISupportsMemoryCleanup ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Clears cached data, frees memory etc.
    /// </summary>
    virtual void FreeMemory() = 0;
    
};

} // namespace Pdf
} // namespace Aspose


