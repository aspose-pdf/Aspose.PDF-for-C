#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <drawing/color.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents text properties such as: text size, color, style etc.
/// </summary>
class ASPOSE_PDF_SHARED_API TextProperties FINAL : public System::Object
{
    typedef TextProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets text color.
    /// </summary>
    System::Drawing::Color get_Color();
    /// <summary>
    /// Sets text color.
    /// </summary>
    void set_Color(System::Drawing::Color value);
    /// <summary>
    /// Gets a value that indicates whether the <see cref="Color"/> property is specified.
    /// </summary>
    bool get_IsColorSpecified();
    /// <summary>
    /// Gets text size.
    /// </summary>
    double get_TextSize();
    /// <summary>
    /// Sets text size.
    /// </summary>
    void set_TextSize(double value);
    /// <summary>
    /// Gets a value that indicates whether the <see cref="TextSize"/> property is specified.
    /// </summary>
    bool get_IsTextSizeSpecified();
    
    /// <summary>
    /// Creates <see cref="TextProperties"/> object for the specified text size
    /// </summary>
    /// <param name="textSize">Text size value.</param>
    TextProperties(double textSize);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::Color color;
    double textSize;
    bool isColorSpecified;
    bool isTextSizeSpecified;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


