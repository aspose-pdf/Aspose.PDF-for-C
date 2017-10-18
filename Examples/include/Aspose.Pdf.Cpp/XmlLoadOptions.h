#ifndef _Aspose_Pdf_XmlLoadOptions_h_
#define _Aspose_Pdf_XmlLoadOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::SharedPtr<System::IO::Stream> get_XslStream();
    
    XmlLoadOptions();
    XmlLoadOptions(System::String xslFile);
    XmlLoadOptions(System::SharedPtr<System::IO::Stream> xslStream);
    
    virtual ~XmlLoadOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XmlLoadOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool _xslFromFile;
    System::SharedPtr<System::IO::Stream> _xslStream;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XmlLoadOptions_h_

