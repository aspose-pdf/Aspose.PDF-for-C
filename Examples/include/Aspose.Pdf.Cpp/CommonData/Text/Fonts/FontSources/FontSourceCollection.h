#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSourceCollection_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSourceCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "CommonData/Text/Fonts/FontSources/FontSource.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontRegistry; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font sources collection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class FontSourceCollection : ICollection
class ASPOSE_PDF_SHARED_API FontSourceCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSource>>
{
    typedef FontSourceCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSource>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    
private:

    class ASPOSE_PDF_SHARED_API FontSourcesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSource>>
    {
        typedef FontSourcesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSource>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<FontSource> get_Current() const;
        
        FontSourcesEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSource>>> fontSources);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~FontSourcesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "FontSourcesEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSource>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSource>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<FontSource>> array, int32_t index);
    void Add(System::SharedPtr<FontSource> const &fontSource);
    void Clear();
    void Delete(System::SharedPtr<FontSource> fontSource);
    
    System::SharedPtr<FontSource> idx_get(int32_t index);
    
protected:

    System::EventHandler<System::SharedPtr<System::EventArgs>> CollectionChanged;
    
    FontSourceCollection();
    
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontSourceCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSource>>> fontSources;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<FontSource> const &fontSource);
    bool Contains(System::SharedPtr<FontSource> const &item) const;
    void OnCollectionChanged();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSourceCollection_h_

