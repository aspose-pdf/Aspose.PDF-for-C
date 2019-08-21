#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Generator/Hyperlink.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents web hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_API WebHyperlink FINAL : public Aspose::Pdf::Hyperlink
{
    typedef WebHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the web url.
    /// </summary>
    System::String get_Url();
    /// <summary>
    /// Sets the web url.
    /// </summary>
    void set_Url(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="WebHyperlink"/> class.
    /// </summary>
    WebHyperlink();
    /// <summary>
    /// Initializes a new instance of the <see cref="WebHyperlink"/> class.
    /// </summary>
    /// <param name="url">Web url for hyperlink.</param>
    WebHyperlink(System::String url);
    
protected:

    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    System::String url;
    
};

} // namespace Pdf
} // namespace Aspose


