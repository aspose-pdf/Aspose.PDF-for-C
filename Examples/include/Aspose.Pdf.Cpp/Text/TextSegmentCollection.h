#ifndef _Aspose_Pdf_Text_TextSegmentCollection_h_
#define _Aspose_Pdf_Text_TextSegmentCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <system/eventargs.h>
#include <system/event.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>

#include "Text/TextSegment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text segments collection
/// </summary>
//<<--REFACTORING: Old code: public sealed class TextSegmentCollection : ICollection
class ASPOSE_PDF_SHARED_API TextSegmentCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextSegment>>
{
    typedef TextSegmentCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextSegment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    
protected:

    class TextSegmentEventArgs;
    using TextSegmentsEventHandler = System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)>;
    
    
protected:

    class ASPOSE_PDF_SHARED_API TextSegmentEventArgs : public System::EventArgs
    {
        typedef TextSegmentEventArgs ThisType;
        typedef System::EventArgs BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextSegment> Segment;
        
        TextSegmentEventArgs(System::SharedPtr<TextSegment> segment);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "TextSegmentEventArgs"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API TextSegmentsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextSegment>>
    {
        typedef TextSegmentsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextSegment>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextSegment> get_Current() const;
        
        TextSegmentsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>> textSegments);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~TextSegmentsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "TextSegmentsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextSegment>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    void Add(System::SharedPtr<TextSegment> const &segment);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextSegment>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<TextSegment>> array, int32_t index);
    
    System::SharedPtr<TextSegment> idx_get(int32_t index);
    
protected:

    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)> OnItemAdded;
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)> OnItemRemoved;
    
    TextSegmentCollection();
    
    void Delete(int32_t index);
    System::SharedPtr<TextSegment> GetUnrestricted(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextSegmentCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>> segments;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<TextSegment> const &item);
    void Clear();
    bool Contains(System::SharedPtr<TextSegment> const &item) const;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextSegmentCollection_h_

