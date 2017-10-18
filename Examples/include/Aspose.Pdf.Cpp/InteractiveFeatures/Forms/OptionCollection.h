#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_OptionCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_OptionCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "InteractiveFeatures/Forms/Option.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ChoiceField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ComboBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class BaseOptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing collection of options of the choice field. 
/// </summary>
//<<--REFACTORING: Old code: public sealed class OptionCollection : ICollection
class ASPOSE_PDF_SHARED_API OptionCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>>
{
    typedef OptionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ComboBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    
private:

    class ASPOSE_PDF_SHARED_API OptionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>>
    {
        typedef OptionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Option> get_Current() const;
        
        OptionsEnumerator(System::SharedPtr<BaseOptionCollection> options);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~OptionsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "OptionsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<BaseOptionCollection> options;
        int32_t cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    int32_t get_Count() const;
    
    void CopyTo(System::ArrayPtr<System::SharedPtr<Option>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Option>>> GetEnumerator();
    System::SharedPtr<Option> get(int32_t index);
    System::SharedPtr<Option> get(System::String name);
    
    System::SharedPtr<Option> idx_get(int32_t index);
    System::SharedPtr<Option> idx_get(System::String name);
    
protected:

    OptionCollection(System::SharedPtr<BaseOptionCollection> options);
    
    void AddOption(System::String name);
    void AddOption(System::String export_, System::String name);
    void DeleteOption(System::String name);
    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "OptionCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<BaseOptionCollection> options;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<Option> const &item);
    bool Contains(System::SharedPtr<Option> const &item) const;
    void Clear();
    void Add(System::SharedPtr<Option> const &item);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_OptionCollection_h_

