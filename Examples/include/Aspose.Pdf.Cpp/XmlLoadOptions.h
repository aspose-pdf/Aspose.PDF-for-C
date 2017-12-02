#ifndef _Aspose_Pdf_XmlLoadOptions_h_
#define _Aspose_Pdf_XmlLoadOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>

#include "LoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing XML file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_API XmlLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef XmlLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
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

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool _xslFromFile;
    System::SharedPtr<System::IO::Stream> _xslStream;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmlLoadOptions_h_

