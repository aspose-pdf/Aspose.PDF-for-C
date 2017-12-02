#ifndef _Aspose_Pdf_Text_Position_h_
#define _Aspose_Pdf_Text_Position_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a position object
/// </summary>
class ASPOSE_PDF_SHARED_API Position FINAL : public System::Object
{
    typedef Position ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the X coordinate of the object
    /// </summary>
    double get_XIndent();
    /// <summary>
    /// Gets the X coordinate of the object
    /// </summary>
    void set_XIndent(double value);
    /// <summary>
    /// Gets the X coordinate of the object
    /// </summary>
    double get_YIndent();
    /// <summary>
    /// Gets the X coordinate of the object
    /// </summary>
    void set_YIndent(double value);
    
    /// <summary>
    /// Initializes a new instance of <see cref="Position"/> class
    /// </summary>
    /// <param name="xIndent">X coordinate value.</param>
    /// <param name="yIndent">Y coordinate value.</param>
    Position(double xIndent, double yIndent);
    
    /// <summary>
    /// Gets string representation for the current <see cref="Position"/> object. 
    /// </summary>
    /// <returns>String representration of the Position object.</returns>
    virtual System::String ToString();
    /// <summary>
    /// Determines whether the specified object is equal to the current <see cref="Position"/> object. 
    /// </summary>
    /// <param name="obj">Object that is checked for equality.</param>
    /// <returns>True in case objects are equal.</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    
private:

    double xIndent;
    double yIndent;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_Position_h_

