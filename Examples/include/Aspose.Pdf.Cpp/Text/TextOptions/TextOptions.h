#ifndef _Aspose_Pdf_Text_TextOptions_TextOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// The <b>Aspose.Pdf.Text.TextOptions</b> namespace provides classes that allow to alternate behavior of text extraction and manipulation functionality.
/// </summary>
class ASPOSE_PDF_SHARED_API NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "NamespaceDoc"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Represents text processing options
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT TextOptions : public System::Object
{
    typedef TextOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextOptions_h_

