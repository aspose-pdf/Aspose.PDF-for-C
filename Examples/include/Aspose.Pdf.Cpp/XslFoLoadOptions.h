#ifndef _Aspose_Pdf_XslFoLoadOptions_h_
#define _Aspose_Pdf_XslFoLoadOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "XmlLoadOptions.h"

namespace Aspose { namespace Pdf { class XslFoToPdfConverter; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing XSL-FO file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API XslFoLoadOptions FINAL : public Aspose::Pdf::XmlLoadOptions
{
    typedef XslFoLoadOptions ThisType;
    typedef Aspose::Pdf::XmlLoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::XslFoToPdfConverter;
    
public:

    /// <summary>
    ///  This property will be available during migration to new XSL-FO engine.
    ///  If this property is true, the previous version of XSL-FO engine will be used.
    /// </summary>
    bool get_UseOldXslFoEngine();
    /// <summary>
    ///  This property will be available during migration to new XSL-FO engine.
    ///  If this property is true, the previous version of XSL-FO engine will be used.
    /// </summary>
    void set_UseOldXslFoEngine(bool value);
    /// <summary>
    /// The base path/url from which are searched relative pathes to external resources (if any) referenced in loaded SVG file.
    /// </summary>
    System::String get_BasePath();
    /// <summary>
    /// The base path/url from which are searched relative pathes to external resources (if any) referenced in loaded SVG file.
    /// </summary>
    void set_BasePath(System::String value);
    
    /// <summary>
    /// Creates <see cref="XslFoLoadOptions"/> object without xsl data.
    /// </summary>
    XslFoLoadOptions();
    /// <summary>
    /// Creates <see cref="XslFoLoadOptions"/> object with xsl data.
    /// </summary>
    /// <param name="xslFile">
    /// Xsl file to convert XSL-FO document into pdf document.
    /// </param>
    XslFoLoadOptions(System::String xslFile);
    /// <summary>
    /// Creates <see cref="XslFoLoadOptions"/> object with xsl data.
    /// </summary>
    /// <param name="xslStream">
    /// Xsl stream to convert XSL-FO document into pdf document.
    /// </param>
    XslFoLoadOptions(System::SharedPtr<System::IO::Stream> xslStream);
    
protected:

    System::String IntermediateXmlFileIfXslTransformUsed;
    
private:

    bool _useOldXslFoEngine;
    System::String _basePath;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XslFoLoadOptions_h_

