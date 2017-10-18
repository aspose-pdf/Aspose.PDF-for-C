#ifndef _Aspose_Pdf_PdfPageStamp_h_
#define _Aspose_Pdf_PdfPageStamp_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <cstdint>

#include "Stamp_.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents stamp which uses PDF page as stamp.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfPageStamp FINAL : public Aspose::Pdf::Stamp
{
    typedef PdfPageStamp ThisType;
    typedef Aspose::Pdf::Stamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<Page> get_PdfPage();
    void set_PdfPage(System::SharedPtr<Page> value);
    
    PdfPageStamp(System::SharedPtr<Page> pdfPage);
    
    virtual void Put(System::SharedPtr<Page> page);
    
    PdfPageStamp(System::String fileName, int32_t pageIndex);
    PdfPageStamp(System::SharedPtr<System::IO::Stream> stream, int32_t pageIndex);
    
protected:

    virtual void ClearCache();
    virtual System::SharedPtr<Rectangle> getRect();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfPageStamp"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Page> page;
    System::SharedPtr<XForm> form;
    
    void RenameFont(System::SharedPtr<XForm> form, System::String name, System::String newName);
    void MoveFontsToPage(System::SharedPtr<Page> page, System::SharedPtr<XForm> form);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PdfPageStamp_h_

