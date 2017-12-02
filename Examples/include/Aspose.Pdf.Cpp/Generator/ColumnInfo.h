#ifndef _Aspose_Pdf_Generator_ColumnInfo_h_
#define _Aspose_Pdf_Generator_ColumnInfo_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents a columns info.
/// </summary>
class ASPOSE_PDF_SHARED_API ColumnInfo FINAL : public System::Object
{
    typedef ColumnInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets a string that contains the width of columns. 
    /// The value of each column should be separated by blank.The default unit is point,
    /// but cm, inch and percentage of available width are also supported.
    /// For example,"120 2.5cm 1.5inch"
    /// </summary>
    System::String get_ColumnWidths();
    /// <summary>
    /// Gets or sets a string that contains the width of columns. 
    /// The value of each column should be separated by blank.The default unit is point,
    /// but cm, inch and percentage of available width are also supported.
    /// For example,"120 2.5cm 1.5inch"
    /// </summary>
    void set_ColumnWidths(System::String value);
    /// <summary>
    /// Gets or sets a string that contains the spacing between columns. 
    /// The value of each spacing should be separated by blank. The default unit is point,
    /// but cm and inch are also supported.For example,"120 2.5cm 1.5inch".
    /// </summary>
    /// <remarks>
    /// If this property is not set, default value 1.25cm will be used for each spacing.
    /// </remarks>
    System::String get_ColumnSpacing();
    /// <summary>
    /// Gets or sets a string that contains the spacing between columns. 
    /// The value of each spacing should be separated by blank. The default unit is point,
    /// but cm and inch are also supported.For example,"120 2.5cm 1.5inch".
    /// </summary>
    /// <remarks>
    /// If this property is not set, default value 1.25cm will be used for each spacing.
    /// </remarks>
    void set_ColumnSpacing(System::String value);
    /// <summary>
    /// Gets or sets a int value that indicates the number of columns.
    /// </summary>
    int32_t get_ColumnCount();
    /// <summary>
    /// Gets or sets a int value that indicates the number of columns.
    /// </summary>
    void set_ColumnCount(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the ColumnInfo class.
    /// </summary>
    ColumnInfo();
    
private:

    int32_t columnCount;
    System::String columnWidths;
    System::String columnSpacing;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_ColumnInfo_h_

