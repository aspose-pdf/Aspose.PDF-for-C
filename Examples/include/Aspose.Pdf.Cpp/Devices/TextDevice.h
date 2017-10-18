#ifndef _Aspose_Pdf_Devices_TextDevice_h_
#define _Aspose_Pdf_Devices_TextDevice_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/encoding.h>

#include "Devices/PageDevice.h"

namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextExtractionOptions; } } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Devices {


// C# preprocessor directive: #if __cplusplus && UNIT_TEST 


// C# preprocessor directive: #endif 

/// <summary>
/// Represents class for converting pdf document pages into text.
/// </summary>
/// <remarks>
/// The <see cref="TextDevice"/> object is basically used to extract text from pdf page.
/// </remarks>
/// <example>
/// The example demonstrates how to extract text on the first PDF document page.
/// <code lang="C#"> 
/// Document doc = new Document(inFile);
/// string extractedText;
/// using (MemoryStream ms = new MemoryStream())
/// {
///     // create text device
///     TextDevice device = new TextDevice();
///     // convert the page and save text to the stream
///     device.Process(doc.Pages[1], ms);
///     // use the extracted text
///     ms.Close();
///     extractedText = Encoding.Unicode.GetString(ms.ToArray());
/// }
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API TextDevice FINAL : public Aspose::Pdf::Devices::PageDevice
{
    typedef TextDevice ThisType;
    typedef Aspose::Pdf::Devices::PageDevice BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:
    using Aspose::Pdf::Devices::PageDevice::Process;
    
public:

    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> get_ExtractionOptions();
    void set_ExtractionOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> value);
    System::SharedPtr<System::Text::Encoding> get_Encoding();
    void set_Encoding(System::SharedPtr<System::Text::Encoding> value);
    
    virtual void Process(System::SharedPtr<Page> page, System::SharedPtr<System::IO::Stream> output);
    
    TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions);
    TextDevice();
    TextDevice(System::SharedPtr<System::Text::Encoding> encoding);
    TextDevice(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextDevice"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions;
    System::SharedPtr<System::Text::Encoding> encoding;
    
    void Initialize(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextExtractionOptions> extractionOptions, System::SharedPtr<System::Text::Encoding> encoding);
    
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Devices_TextDevice_h_

