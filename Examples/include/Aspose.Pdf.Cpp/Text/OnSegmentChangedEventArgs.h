#pragma once

#include <system/shared_ptr.h>
#include <system/eventargs.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Contains additional information about OnSegmentChangedEvent that is delivered to listeners.
/// </summary>
class ASPOSE_PDF_SHARED_API OnSegmentChangedEventArgs : public System::EventArgs
{
    typedef OnSegmentChangedEventArgs ThisType;
    typedef System::EventArgs BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentChanged();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentAfter();
    int32_t get_InitialSegmentTextLength();
    
    OnSegmentChangedEventArgs(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentChanged, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentAfter, int32_t _initialSegmentTextLength);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentChanged;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentAfter;
    int32_t initialSegmentTextLength;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


