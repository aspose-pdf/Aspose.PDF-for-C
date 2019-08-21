#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageLabelCollection; } }
namespace Aspose { namespace Pdf { enum class NumberingStyle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing Page Label range.
/// </summary>
class ASPOSE_PDF_SHARED_API PageLabel : public System::Object
{
    typedef PageLabel ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageLabelCollection;
    
public:

    /// <summary>
    /// Gets or sets starting value of the page numbering range.
    /// </summary>
    int32_t get_StartingValue();
    /// <summary>
    /// Gets or sets starting value of the page numbering range.
    /// </summary>
    void set_StartingValue(int32_t value);
    /// <summary>
    /// Gets or sets numbering style. 
    /// </summary>
    Aspose::Pdf::NumberingStyle get_NumberingStyle();
    /// <summary>
    /// Gets or sets numbering style. 
    /// </summary>
    void set_NumberingStyle(Aspose::Pdf::NumberingStyle value);
    /// <summary>
    /// Gets or sets page number prefix.
    /// </summary>
    System::String get_Prefix();
    /// <summary>
    /// Gets or sets page number prefix.
    /// </summary>
    void set_Prefix(System::String value);
    
    /// <summary>
    /// Constructor for page label. 
    /// </summary>
    PageLabel();
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> CreateDictionary(System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    
    PageLabel(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    int32_t _startingValue;
    Aspose::Pdf::NumberingStyle _numberingStyle;
    System::String _prefix;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    
    System::String translateStyle(Aspose::Pdf::NumberingStyle numberingStyle);
    Aspose::Pdf::NumberingStyle translateStyle(System::String numberingStyle);
    
};

} // namespace Pdf
} // namespace Aspose


