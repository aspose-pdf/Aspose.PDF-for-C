#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_Symbology_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_Symbology_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// A (Barcode) Symbology defines the technical details of a particular type of barcode:
/// the width of the bars, character set, method of encoding, checksum specifications, etc.
/// </summary>
enum class Symbology
{
    PDF417,
    QRCode,
    DataMatrix
};

class ASPOSE_PDF_SHARED_API SymbologyConverter : public System::Object
{
    typedef SymbologyConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(Symbology value);
    static Symbology ToEnum(System::String value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SymbologyConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_Symbology_h_

