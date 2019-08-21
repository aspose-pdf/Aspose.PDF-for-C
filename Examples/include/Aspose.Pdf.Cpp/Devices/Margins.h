#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// This class represents margins of an image.
/// </summary>
class ASPOSE_PDF_SHARED_API Margins FINAL : public System::Object
{
    typedef Margins ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets the left.
    /// </summary>
    /// <value>The left.</value>
    int32_t get_Left();
    /// <summary>
    /// Gets or sets the left.
    /// </summary>
    /// <value>The left.</value>
    void set_Left(int32_t value);
    /// <summary>
    /// Gets or sets the right.
    /// </summary>
    /// <value>The right.</value>
    int32_t get_Right();
    /// <summary>
    /// Gets or sets the right.
    /// </summary>
    /// <value>The right.</value>
    void set_Right(int32_t value);
    /// <summary>
    /// Gets or sets the top.
    /// </summary>
    /// <value>The top.</value>
    int32_t get_Top();
    /// <summary>
    /// Gets or sets the top.
    /// </summary>
    /// <value>The top.</value>
    void set_Top(int32_t value);
    /// <summary>
    /// Gets or sets the bottom.
    /// </summary>
    /// <value>The bottom.</value>
    int32_t get_Bottom();
    /// <summary>
    /// Gets or sets the bottom.
    /// </summary>
    /// <value>The bottom.</value>
    void set_Bottom(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Margins"></see> class.
    /// </summary>
    /// <param name="left">The left coordinate.</param>
    /// <param name="right">The right coordinate.</param>
    /// <param name="top">The top coordinate.</param>
    /// <param name="bottom">The bottom coordinate.</param>
    Margins(int32_t left, int32_t right, int32_t top, int32_t bottom);
    /// <summary>
    /// Initializes a new instance of the <see cref="Margins"></see> class.
    /// </summary>
    Margins();
    
private:

    int32_t left;
    int32_t right;
    int32_t top;
    int32_t bottom;
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


