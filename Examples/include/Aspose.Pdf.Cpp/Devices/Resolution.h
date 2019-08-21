#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Represents class for holding image resolution.
/// </summary>
class ASPOSE_PDF_SHARED_API Resolution FINAL : public System::Object
{
    typedef Resolution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets horizontal image resolution.
    /// </summary>
    int32_t get_X();
    /// <summary>
    /// Sets horizontal image resolution.
    /// </summary>
    void set_X(int32_t value);
    /// <summary>
    /// Gets vertical image resolution.
    /// </summary>
    int32_t get_Y();
    /// <summary>
    /// Sets vertical image resolution.
    /// </summary>
    void set_Y(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Resolution"/> class.
    /// </summary>
    /// <param name="value">
    /// Value which represents the horizontal and vertical resolution.
    /// </param>
    Resolution(int32_t value);
    /// <summary>
    /// Initializes a new instance of the <see cref="Resolution"/> class.
    /// </summary>
    /// <param name="valueX">
    /// Horizontal resolution.
    /// </param>
    /// <param name="valueY">
    /// Vertical resolution.
    /// </param>
    Resolution(int32_t valueX, int32_t valueY);
    
private:

    int32_t x;
    int32_t y;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


