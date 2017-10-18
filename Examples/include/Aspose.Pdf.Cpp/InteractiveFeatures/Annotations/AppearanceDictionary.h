#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_AppearanceDictionary_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_AppearanceDictionary_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerator.h>
#include <system/collections/idictionary.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "XForm.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonOptionField; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Annotation appearance dictionary specifying how the annotation shall be presented visually on the page.
/// </summary>
class ASPOSE_PDF_SHARED_API AppearanceDictionary FINAL : public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XForm>>
{
    typedef AppearanceDictionary ThisType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonOptionField;
    
protected:

    class ASPOSE_PDF_SHARED_API AppearanceKey : public System::Object
    {
        typedef AppearanceKey ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t get_Length();
        
        virtual int32_t GetHashCode();
        virtual bool Equals(System::SharedPtr<System::Object> obj);
        
        AppearanceKey(System::ArrayPtr<System::String> data);
        AppearanceKey(System::String key);
        AppearanceKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> name);
        
        System::String idx_get(int32_t index);
        
        virtual System::String ToString();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "AppearanceKey"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::ArrayPtr<System::String> data;
        
    };
    
    
public:

    bool get_IsReadOnly();
    bool get_IsFixedSize();
    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XForm>>> get_Values() const;
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    int32_t get_Count() const;
    
    void Clear();
    
    System::SharedPtr<XForm> idx_get(System::String const &key) const;
    void idx_set(System::String const &key, System::SharedPtr<XForm> value);
    
    void Add(System::String const &key, System::SharedPtr<XForm> const &value);
    bool ContainsKey(System::String const &key) const;
    bool Remove(System::String const &key);
    bool TryGetValue(System::String const &key, System::SharedPtr<XForm> &value);
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> const &item);
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> const &item) const;
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>> array, int32_t arrayIndex);
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> const &item);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>>> GetEnumerator();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict;
    
    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XForm>>> get_ValuesInternal() const;
    
    AppearanceDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    
    System::SharedPtr<XForm> getForm(System::ArrayPtr<System::String> key);
    void setForm(System::ArrayPtr<System::String> key, System::SharedPtr<XForm> form);
    System::SharedPtr<XForm> getForm(System::String key);
    void setForm(System::String key, System::SharedPtr<XForm> form);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "AppearanceDictionary"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::SharedPtr<AppearanceDictionary::AppearanceKey>, System::SharedPtr<XForm>>> _cache;
    System::SharedPtr<System::Object> syncRoot;
    
    System::SharedPtr<XForm> getForm(System::SharedPtr<AppearanceDictionary::AppearanceKey> key) const;
    void setForm(System::SharedPtr<AppearanceDictionary::AppearanceKey> key, System::SharedPtr<XForm> form);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_AppearanceDictionary_h_

