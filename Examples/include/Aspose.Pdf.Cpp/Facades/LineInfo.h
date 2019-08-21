#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents the information of line. 
/// </summary>
class ASPOSE_PDF_SHARED_API LineInfo FINAL : public System::Object
{
    typedef LineInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets an array of numbers representing the alternating horizontal and vertical,coordinates, respectively, of each vertex.
    /// </summary>
    System::ArrayPtr<float> get_VerticeCoordinate();
    /// <summary>
    /// Sets an array of numbers representing the alternating horizontal and vertical,coordinates, respectively, of each vertex.
    /// </summary>
    void set_VerticeCoordinate(System::ArrayPtr<float> value);
    /// <summary>
    /// Gets the color of a line.
    /// </summary>
    System::Drawing::Color get_LineColor();
    /// <summary>
    /// Sets the color of a line.
    /// </summary>
    void set_LineColor(System::Drawing::Color value);
    /// <summary>
    /// Gets the width of a line. 
    /// </summary>
    int32_t get_LineWidth();
    /// <summary>
    /// Sets the width of a line. 
    /// </summary>
    void set_LineWidth(int32_t value);
    /// <summary>
    /// Gets the visibility of a line. 
    /// </summary>
    bool get_Visibility();
    /// <summary>
    /// Sets the visibility of a line. 
    /// </summary>
    void set_Visibility(bool value);
    /// <summary>
    /// Gets the dash pattern of a line.
    /// </summary>
    System::ArrayPtr<int32_t> get_LineDashPattern();
    /// <summary>
    /// Sets the dash pattern of a line.
    /// </summary>
    void set_LineDashPattern(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets the border style of a line, 0 represents solid, 1 represents dashed, 2 represents beleved, 3 represents insert, 4 represents underline.
    /// </summary>
    int32_t get_BorderStyle();
    /// <summary>
    /// Sets the border style of a line, 0 represents solid, 1 represents dashed, 2 represents beleved, 3 represents insert, 4 represents underline.
    /// </summary>
    void set_BorderStyle(int32_t value);
    
    LineInfo();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<float> verticeCoordinate;
    System::Drawing::Color lineColor;
    int32_t lineWidth;
    bool visibility;
    System::ArrayPtr<int32_t> lineDashPattern;
    int32_t borderStyle;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


