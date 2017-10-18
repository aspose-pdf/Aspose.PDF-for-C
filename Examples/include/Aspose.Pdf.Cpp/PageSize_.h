#ifndef _Aspose_Pdf_PageSize__h_
#define _Aspose_Pdf_PageSize__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfPageEditor; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing size of page in PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API PageSize FINAL : public System::Object
{
    typedef PageSize ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    
public:

    float get_Width();
    void set_Width(float value);
    float get_Height();
    void set_Height(float value);
    bool get_IsLandscape();
    void set_IsLandscape(bool value);
    static System::SharedPtr<PageSize> get_A0();
    static System::SharedPtr<PageSize> get_A1();
    static System::SharedPtr<PageSize> get_A2();
    static System::SharedPtr<PageSize> get_A3();
    static System::SharedPtr<PageSize> get_A4();
    static System::SharedPtr<PageSize> get_A5();
    static System::SharedPtr<PageSize> get_A6();
    static System::SharedPtr<PageSize> get_B5();
    static System::SharedPtr<PageSize> get_PageLetter();
    static System::SharedPtr<PageSize> get_PageLegal();
    static System::SharedPtr<PageSize> get_PageLedger();
    static System::SharedPtr<PageSize> get_P11x17();
    
    PageSize(float x, float y);
    
protected:

    static const float LEAVE_INTACT;
    
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageSize"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    float width;
    float height;
    static System::SharedPtr<PageSize> _A0;
    static System::SharedPtr<PageSize> _A1;
    static System::SharedPtr<PageSize> _A2;
    static System::SharedPtr<PageSize> _A3;
    static System::SharedPtr<PageSize> _A4;
    static System::SharedPtr<PageSize> _A5;
    static System::SharedPtr<PageSize> _A6;
    static System::SharedPtr<PageSize> _B5;
    static System::SharedPtr<PageSize> _PageLetter;
    static System::SharedPtr<PageSize> _PageLegal;
    static System::SharedPtr<PageSize> _PageLedger;
    static System::SharedPtr<PageSize> _P11x17;
    bool isLandscape;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageSize__h_

