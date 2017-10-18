#ifndef _Aspose_Pdf_Facades_PdfJavaScriptStripper_h_
#define _Aspose_Pdf_Facades_PdfJavaScriptStripper_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for removing all Java Script code.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfJavaScriptStripper FINAL : public System::Object
{
    typedef PdfJavaScriptStripper ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    bool Strip(System::String inputFile, System::String outputFile);
    bool Strip(System::SharedPtr<System::IO::Stream> inStream, System::SharedPtr<System::IO::Stream> outStream);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfJavaScriptStripper"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool RemoveJavaScriptFromDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfJavaScriptStripper_h_

