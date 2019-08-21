#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// A (Barcode) Symbology defines the technical details of a particular type of barcode:
/// the width of the bars, character set, method of encoding, checksum specifications, etc.
/// </summary>
enum class Symbology
{
    /// <summary>
    /// A multi-row, variable-length 2D symbology with high data capacity and error-correction capability.
    /// </summary>
    PDF417,
    /// <summary>
    /// QR code (short for Quick Response) is a specific matrix barcode (2D code), 
    /// readable by dedicated QR barcode readers and camera phones.
    /// </summary>
    QRCode,
    /// <summary>
    /// A 2D matrix symbology consisting of black and white square modules arranged in either a square or 
    /// rectangular pattern.
    /// </summary>
    DataMatrix
};

class SymbologyConverter : public System::Object
{
    typedef SymbologyConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(Symbology value);
    static Symbology ToEnum(System::String value);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


