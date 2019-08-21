#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>

#include "LoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
///   enumerates engine that loads XML that describes document
/// </summary>
class ASPOSE_PDF_SHARED_API XmlLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef XmlLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    enum class RenderingEngines
    {
        /// <summary>
        ///   Legacy engine. Internally uses old engine for rendering
        /// </summary>
        LegacyEngine,
        /// <summary>
        ///   New engine. Internally uses DOM  approach for rendering
        /// </summary>
        NewEngine
    };
    
    
public:

    /// <summary>
    /// Gets xsl data for converting xml into pdf document.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_XslStream();
    
    /// <summary>
    /// Creates <see cref="XmlLoadOptions"/> object without xsl data.
    /// </summary>
    XmlLoadOptions();
    /// <summary>
    /// Creates <see cref="XmlLoadOptions"/> object with xsl data.
    /// </summary>
    /// <param name="xslFile">
    /// Xsl file to convert xml document into pdf document.
    /// </param>
    XmlLoadOptions(System::String xslFile);
    /// <summary>
    /// Creates <see cref="XmlLoadOptions"/> object with xsl data.
    /// </summary>
    /// <param name="xslStream">
    /// Xsl stream to convert xml document into pdf document.
    /// </param>
    XmlLoadOptions(System::SharedPtr<System::IO::Stream> xslStream);
    
    virtual ~XmlLoadOptions();
    
protected:

    XmlLoadOptions::RenderingEngines RenderingEngine;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool _xslFromFile;
    System::SharedPtr<System::IO::Stream> _xslStream;
    
};

} // namespace Pdf
} // namespace Aspose


