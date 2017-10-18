#ifndef _Aspose_Pdf_Generator_WebHyperlink_h_
#define _Aspose_Pdf_Generator_WebHyperlink_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Generator/Hyperlink.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents web hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_API WebHyperlink FINAL : public Aspose::Pdf::Hyperlink
{
    typedef WebHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Url();
    void set_Url(System::String value);
    
    WebHyperlink();
    WebHyperlink(System::String url);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "WebHyperlink"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String url;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_WebHyperlink_h_

