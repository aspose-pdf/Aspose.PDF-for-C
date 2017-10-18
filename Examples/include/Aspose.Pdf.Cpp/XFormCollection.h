#ifndef _Aspose_Pdf_XFormCollection_h_
#define _Aspose_Pdf_XFormCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "XForm.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents collection of XFormCollection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class XFormCollection : ICollection
class ASPOSE_PDF_SHARED_API XFormCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>>
{
    typedef XFormCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    
private:

    class ASPOSE_PDF_SHARED_API XFormsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>>
    {
        typedef XFormsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::XForm> get_Current() const;
        
        XFormsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> xforms);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~XFormsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "XFormsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> xforms;
        int32_t cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    
    void Add(System::SharedPtr<Aspose::Pdf::XForm> const &xform);
    void Delete(int32_t index);
    void Delete();
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::XForm>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>>> GetEnumerator();
    void Delete(System::String name);
    
    System::SharedPtr<Aspose::Pdf::XForm> idx_get(int32_t index);
    System::SharedPtr<Aspose::Pdf::XForm> idx_get(System::String name);
    
protected:

    System::WeakPtr<Resources> parent;
    
    XFormCollection(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xobject);
    
    System::String GetFormName(System::SharedPtr<Aspose::Pdf::XForm> form);
    bool HasForm(System::String formName);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XFormCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Engine::Data::IPdfDictionary> _xobject;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> cache;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash;
    
    bool get_IsReadOnly();
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    
    System::SharedPtr<Aspose::Pdf::XForm> get(int32_t index);
    System::SharedPtr<Aspose::Pdf::XForm> get(System::String name);
    bool Remove(System::SharedPtr<Aspose::Pdf::XForm> const &item);
    bool Contains(System::SharedPtr<Aspose::Pdf::XForm> const &item) const;
    void Clear();
    System::String getUniqueFormName();
    void SynchronizeCache(System::String key);
    int32_t getCount();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XFormCollection_h_

