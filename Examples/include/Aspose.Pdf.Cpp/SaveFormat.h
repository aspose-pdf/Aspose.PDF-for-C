#ifndef _Aspose_Pdf_SaveFormat_h_
#define _Aspose_Pdf_SaveFormat_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

///<summary>
/// Specifies format 
///</summary>
enum class SaveFormat
{
    /// <summary>
    ///  means saving without change of format, i.e. as PDF
    ///  use it please instead of 'SaveFormat.None', that is obsolete one
    /// </summary>
    Pdf = 0,
    /// <summary>
    ///  means saving without change of format, i.e. as PDF
    ///  It's obsolete one and will be deleted eventually,
    ///  please use instead 'SaveFormat.Pdf'
    /// </summary>
    // Obsolete attribute was added on 25 April, 2014
    None = 0,
    /// <summary>
    ///  means saving in DOC format
    /// </summary>
    Doc = 1,
    /// <summary>
    ///  means saving in XPS format
    /// </summary>
    Xps = 2,
    /// <summary>
    ///  means saving in XML format
    /// </summary>
    Xml = 4,
    /// <summary>
    ///  means saving in DOCX format
    /// </summary>
    DocX = 6,
    /// <summary>
    ///  means saving in MobiXML format(special format of e-books)
    /// </summary>
    MobiXml = 8,
    /// <summary>
    ///  means saving in MsExcel format
    /// </summary>
    Excel = 9,
    /// <summary>
    ///  means saving in EPUB format(special format of e-books)
    /// </summary>
    Epub = 10
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::SaveFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::SaveFormat, const char_t*>, 9>& values();
};


#endif // _Aspose_Pdf_SaveFormat_h_

