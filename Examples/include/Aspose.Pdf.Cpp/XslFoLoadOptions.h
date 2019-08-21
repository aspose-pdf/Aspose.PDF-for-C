#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "XmlLoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
///  Source XSLFO document can contain formatting errors. This enum enumerates possible strategies of handling of such formatting errors
/// </summary>
class ASPOSE_PDF_SHARED_API XslFoLoadOptions FINAL : public Aspose::Pdf::XmlLoadOptions
{
    typedef XslFoLoadOptions ThisType;
    typedef Aspose::Pdf::XmlLoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class ParsingErrorsHandlingTypes
    {
        /// <summary>
        ///  In this case converter will be instructed to try proceed
        ///  with conversion and ignore found formatting errors.
        ///  In this case success not guaranteed,
        ///  serious problems can occure later in converter,
        ///  anf in suck case will be thrown exception with list of found
        ///  formatting errors.
        /// </summary>
        TryIgnore,
        /// <summary>
        ///  In this case conversion will be stopped immediately
        ///  and exception will be thrown immediately after detecting
        ///  of first formatting error
        /// </summary>
        ThrowExceptionImmediately,
        /// <summary>
        ///  This is the most agile method - custom code must supply (in WarningCallback property) special
        ///  handler that will  be called when formatting error detected. 
        ///  That handler can f.e. log or count errors etc and
        ///  will supply decision whether processing can be continued for this or that error. 
        /// </summary>
        InvokeCustomHandler
    };
    
    
public:

    XslFoLoadOptions::ParsingErrorsHandlingTypes ParsingErrorsHandlingType;
    
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
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _basePath;
    
};

} // namespace Pdf
} // namespace Aspose


