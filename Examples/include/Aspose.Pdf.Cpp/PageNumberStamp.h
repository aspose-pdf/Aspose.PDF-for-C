#ifndef _Aspose_Pdf_PageNumberStamp_h_
#define _Aspose_Pdf_PageNumberStamp_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <cstdint>

#include "TextStamp.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents page number stamp and used to number pages. 
/// </summary>
class ASPOSE_PDF_SHARED_API PageNumberStamp FINAL : public Aspose::Pdf::TextStamp
{
    typedef PageNumberStamp ThisType;
    typedef Aspose::Pdf::TextStamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_Format();
    void set_Format(System::String value);
    int32_t get_StartingNumber();
    void set_StartingNumber(int32_t value);
    
    PageNumberStamp(System::String format);
    
    virtual void Put(System::SharedPtr<Page> page);
    
    PageNumberStamp();
    PageNumberStamp(System::SharedPtr<Facades::FormattedText> formattedText);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageNumberStamp"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _format;
    int32_t _startingNumber;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageNumberStamp_h_

