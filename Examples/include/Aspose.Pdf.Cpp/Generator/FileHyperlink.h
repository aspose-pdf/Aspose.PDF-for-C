#ifndef _Aspose_Pdf_Generator_FileHyperlink_h_
#define _Aspose_Pdf_Generator_FileHyperlink_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Generator/Hyperlink.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents file hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_API FileHyperlink FINAL : public Aspose::Pdf::Hyperlink
{
    typedef FileHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Path();
    void set_Path(System::String value);
    
    FileHyperlink();
    FileHyperlink(System::String path);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FileHyperlink"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String path;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_FileHyperlink_h_

