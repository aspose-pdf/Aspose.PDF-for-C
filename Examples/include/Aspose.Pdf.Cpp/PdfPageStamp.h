#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Gets page which will be used as stamp.
    /// </summary>
    System::SharedPtr<Page> get_PdfPage();
    /// <summary>
    /// Sets page which will be used as stamp.
    /// </summary>
    void set_PdfPage(System::SharedPtr<Page> value);
    
    /// <summary>
    /// Constructor of PdfPageStamp.
    /// </summary>
    /// <param name="pdfPage">Page which is used for stamping.</param>
    PdfPageStamp(System::SharedPtr<Page> pdfPage);
    
    /// <summary>
    /// Put stamp on the specified page.
    /// </summary>
    /// <param name="page">Page where stamp will be placed.</param>
    virtual void Put(System::SharedPtr<Page> page);
    
    /// <summary>
    /// Creates Pdf page stamp from specifed page of the document in specified file.
    /// </summary>
    /// <param name="fileName">Name and page of PDF file.</param>
    /// <param name="pageIndex">Index of the page.</param>
    PdfPageStamp(System::String fileName, int32_t pageIndex);
    /// <summary>
    /// Creates Pdf page stamp from specifed page in the document from the stream.
    /// </summary>
    /// <param name="stream">Stream which contains PDF </param>
    /// <param name="pageIndex">Index of the page.</param>
    PdfPageStamp(System::SharedPtr<System::IO::Stream> stream, int32_t pageIndex);
    
protected:

    virtual void ClearCache();
    /// <summary>
    /// Returns rectangle of stamp.
    /// </summary>
    /// <returns>Rectangle of PDF page stamp.</returns>
    virtual System::SharedPtr<Rectangle> getRect();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Page> page;
    System::SharedPtr<XForm> form;
    
    void RenameFont(System::SharedPtr<XForm> form, System::String name, System::String newName);
    /// <summary>
    /// Moves font resources from XForm object into Page resources.
    /// If XForm fonts are in XForm resources then it causes "font not found" error:
    /// see PDFNEWNET-30912 Font error in Adobe Reader when stamping PDF on PDF using Stream object
    /// </summary>
    /// <param name="page"></param>
    /// <param name="form"></param>
    void MoveFontsToPage(System::SharedPtr<Page> page, System::SharedPtr<XForm> form);
    
};

} // namespace Pdf
} // namespace Aspose


