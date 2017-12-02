#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSources_MemoryFontSource_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSources_MemoryFontSource_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/idisposable.h>
#include <system/array.h>
#include <cstdint>

#include "CommonData/Text/Fonts/FontSources/FontSource.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Fonts { namespace Sources { class FontDefinition; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

///<summary>
/// Represents single font file source.
/// </summary>
class ASPOSE_PDF_SHARED_API MemoryFontSource FINAL : public Aspose::Pdf::Text::FontSource, public System::IDisposable
{
    typedef MemoryFontSource ThisType;
    typedef Aspose::Pdf::Text::FontSource BaseType;
    typedef System::IDisposable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Font file byte array. 
    /// </summary>
    System::ArrayPtr<uint8_t> get_FontBytes();
    
    /// <summary> 
    /// Initializes a new instance of <see cref="MemoryFontSource"/> class.
    /// </summary>
    /// <param name="fontBytes">Font file byte array.</param>
    MemoryFontSource(System::ArrayPtr<uint8_t> fontBytes);
    
    /// <summary>
    /// Check if font file source objects are equal.
    /// </summary>
    /// <param name="obj">Font file source object which will be compared.</param>
    /// <returns>True if both objects are font file sources targeted to the same file.</returns>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    /// <summary>
    /// Releases internal resources.
    /// </summary>
    void Dispose();
    
    virtual ~MemoryFontSource();
    
protected:

    virtual System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> GetFontDefinitions();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<uint8_t> fontBytes;
    System::ArrayPtr<System::SharedPtr<Aspose::Fonts::Sources::FontDefinition>> fonts;
    bool mIsDisposed;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSources_MemoryFontSource_h_

