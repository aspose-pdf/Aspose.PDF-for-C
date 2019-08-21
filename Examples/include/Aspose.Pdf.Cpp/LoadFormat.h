#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

/// <summary>
/// Specifies load format.
/// </summary>
enum class LoadFormat
{
    /// <summary>
    ///  means loading of document in CGM format
    /// </summary>       
    CGM,
    /// <summary>
    ///  means loading of document in HTML format
    /// </summary>       
    HTML,
    /// <summary>
    ///  means loading of document in EPUB format(special format of e-books)
    /// </summary>       
    EPUB,
    /// <summary>
    ///  means loading of document in XML format(special XML that represent logical structure of PDF document)
    /// </summary>       
    XML,
    /// <summary>
    ///  means loading of document in XSLFO format
    /// </summary>       
    XSLFO,
    /// <summary>
    ///  means loading of document in PCL format
    /// </summary>       
    PCL,
    /// <summary>
    ///  means loading of document in XPS format
    /// </summary>       
    XPS,
    /// <summary>
    ///  means loading of document in TEX format - format of Latex text editor 
    /// </summary>       
    TEX,
    /// <summary>
    ///  means loading of document in SVG format - format of Latex text editor 
    /// </summary>       
    SVG,
    /// <summary>
    ///  means loading of document in MHT format(that is packed HTML format) 
    /// </summary>       
    MHT,
    /// <summary>
    ///  means loading of document in PS format(format of PostScript document) 
    /// </summary>       
    PS,
    /// <summary>
    /// means loading document is in MD format (markdown).
    /// </summary>
    MD,
    /// <summary>
    ///  means loading of document with the aid of a plugin
    /// </summary>
    Plugin,
    /// <summary>
    ///  This option allows to loading engine try detection of format itself
    ///  Currently only SVG,XML,XSLFO formats can be autodetected. If engine cannot
    ///  detect type of file, HTML will be used. This logic came from old GEnerator
    ///  cause method itself came from old Genedrator
    /// </summary>
    AutoDetect
};

} // namespace Pdf
} // namespace Aspose


