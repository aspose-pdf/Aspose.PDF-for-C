#ifndef _Aspose_Pdf_Text_OnSegmentChangedEventArgs_h_
#define _Aspose_Pdf_Text_OnSegmentChangedEventArgs_h_

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventargs.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextPostReplaceFixer; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Contains additional information about OnSegmentChangedEvent that is delivered to listeners.
/// </summary>
/// REFACTORING Old code: internal class OnSegmentChangedEventArgs : EventArgs
/// because of using in public TextSegment class
class ASPOSE_PDF_SHARED_API OnSegmentChangedEventArgs : public System::EventArgs
{
    typedef OnSegmentChangedEventArgs ThisType;
    typedef System::EventArgs BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextPostReplaceFixer;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Text::TextSegment;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentChanged();
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> get_SegmentAfter();
    int32_t get_InitialSegmentTextLength();
    
    OnSegmentChangedEventArgs(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentChanged, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentAfter, int32_t _initialSegmentTextLength);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "OnSegmentChangedEventArgs"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentChanged;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment> segmentAfter;
    int32_t initialSegmentTextLength;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_OnSegmentChangedEventArgs_h_

