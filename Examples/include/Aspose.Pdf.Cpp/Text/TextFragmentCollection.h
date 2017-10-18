#ifndef _Aspose_Pdf_Text_TextFragmentCollection_h_
#define _Aspose_Pdf_Text_TextFragmentCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>

#include "Text/TextFragment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text fragments collection
/// </summary>
//<<--REFACTORING: Old code: public sealed class TextFragmentCollection : ICollection
class ASPOSE_PDF_SHARED_API TextFragmentCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
{
    typedef TextFragmentCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    
private:

    class ASPOSE_PDF_SHARED_API TextFragmentsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
    {
        typedef TextFragmentsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextFragment>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextFragment> get_Current() const;
        
        TextFragmentsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> textFragments);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~TextFragmentsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "TextFragmentsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<TextFragment>> array, int32_t index);
    
    System::SharedPtr<TextFragment> idx_get(int32_t index);
    
protected:

    System::EventHandler<System::SharedPtr<System::EventArgs>> OnCollectionChanged;
    
    TextFragmentCollection();
    
    void Add(System::SharedPtr<TextFragment> const &fragment);
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextFragmentCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> fragments;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<TextFragment> const &item);
    void Clear();
    bool Contains(System::SharedPtr<TextFragment> const &item) const;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextFragmentCollection_h_

