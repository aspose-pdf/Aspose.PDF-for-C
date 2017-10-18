#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitutionCollection_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitutionCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontRegistry; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontSubstitutionTests; } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font substitution strategies collection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class FontSubstitutionCollection : ICollection
class ASPOSE_PDF_SHARED_API FontSubstitutionCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>>
{
    typedef FontSubstitutionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    friend class Aspose::Pdf::Tests::Fonts::FontSubstitutionTests;
    
private:

    class ASPOSE_PDF_SHARED_API FontSubstitutionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>>
    {
        typedef FontSubstitutionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<FontSubstitution> get_Current() const;
        
        FontSubstitutionsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSubstitution>>> fontSubstitutions);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~FontSubstitutionsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "FontSubstitutionsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSubstitution>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSubstitution>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<FontSubstitution>> array, int32_t index);
    void Add(System::SharedPtr<FontSubstitution> const &fontSubstitution);
    void Clear();
    
    System::SharedPtr<FontSubstitution> idx_get(int32_t index);
    
protected:

    FontSubstitutionCollection();
    
    void Delete(int32_t index);
    void Delete(System::SharedPtr<FontSubstitution> fontSubstitution);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontSubstitutionCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSubstitution>>> fontSubstitutions;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<FontSubstitution> const &fontSubstitution);
    bool Contains(System::SharedPtr<FontSubstitution> const &item) const;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitutionCollection_h_

