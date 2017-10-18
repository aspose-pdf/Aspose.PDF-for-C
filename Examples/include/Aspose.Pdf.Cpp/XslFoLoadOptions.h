#ifndef _Aspose_Pdf_XslFoLoadOptions_h_
#define _Aspose_Pdf_XslFoLoadOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    bool get_UseOldXslFoEngine();
    void set_UseOldXslFoEngine(bool value);
    System::String get_BasePath();
    void set_BasePath(System::String value);
    
    XslFoLoadOptions();
    XslFoLoadOptions(System::String xslFile);
    XslFoLoadOptions(System::SharedPtr<System::IO::Stream> xslStream);
    
protected:

    System::String IntermediateXmlFileIfXslTransformUsed;
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XslFoLoadOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool _useOldXslFoEngine;
    System::String _basePath;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XslFoLoadOptions_h_

