#ifndef _Aspose_Pdf_Text_TextParagraphCollection_h_
#define _Aspose_Pdf_Text_TextParagraphCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
// currently TextParagraphCollection is only available in Reporting services since it is tested on particular document kind

// C# preprocessor directive: #if UNIT_TEST || ASPOSE_PDF_SHAREPOINT || ASPOSE_PDF_REPORTING_SERVICES 


#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Text/TextParagraph.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text paragraphs collection
/// </summary>
//<<--REFACTORING: Old code: public sealed class TextParagraphCollection : ICollection
class ASPOSE_PDF_SHARED_API TextParagraphCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>>
{
    typedef TextParagraphCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
    
private:

    class ASPOSE_PDF_SHARED_API TextParagraphsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>>
    {
        typedef TextParagraphsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextParagraph> get_Current() const;
        
        TextParagraphsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextParagraph>>> textParagraphs);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~TextParagraphsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "TextParagraphsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextParagraph>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextParagraph>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<TextParagraph>> array, int32_t index);
    
    System::SharedPtr<TextParagraph> idx_get(int32_t index);
    
protected:

    System::EventHandler<> OnCollectionChanged;
    
    TextParagraphCollection();
    
    void Add(System::SharedPtr<TextParagraph> const &paragraph);
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextParagraphCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextParagraph>>> paragraphs;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<TextParagraph> const &item);
    void Clear();
    bool Contains(System::SharedPtr<TextParagraph> const &item) const;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


#endif // _Aspose_Pdf_Text_TextParagraphCollection_h_

