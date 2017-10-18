#ifndef _Aspose_Pdf_OutlineCollection_h_
#define _Aspose_Pdf_OutlineCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "OutlineItemCollection.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents document outline hierarchy.
/// </summary>
//<<--REFACTORING: Old code: public sealed class OutlineCollection : ICollection
class ASPOSE_PDF_SHARED_API OutlineCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
{
    typedef OutlineCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::OutlineItemCollection;
    
protected:

    class ASPOSE_PDF_SHARED_API OutlinesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
    {
        typedef OutlinesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<OutlineItemCollection> get_Current() const;
        
        OutlinesEnumerator(System::SharedPtr<Engine::Data::IPdfDictionary> outlines, System::SharedPtr<Engine::IPdfDocument> document);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~OutlinesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "OutlinesEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        bool initialized;
        System::WeakPtr<Engine::IPdfDocument> document;
        System::SharedPtr<Engine::Data::IPdfDictionary> outlines;
        System::SharedPtr<Engine::Data::IPdfObject> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<OutlineItemCollection> get_First();
    System::SharedPtr<OutlineItemCollection> get_Last();
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    
    void Add(System::SharedPtr<OutlineItemCollection> const &outline);
    void Delete();
    void Delete(System::String name);
    void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator();
    
    System::SharedPtr<OutlineItemCollection> idx_get(int32_t index);
    
protected:

    System::WeakPtr<Engine::IPdfDocument> document;
    
    OutlineCollection(System::SharedPtr<Document> document);
    
    System::SharedPtr<Engine::Data::IPdfObject> createOutlines(System::SharedPtr<Engine::Data::ITrailerable> trailer) const;
    static void Delete(System::SharedPtr<Engine::Data::IPdfDictionary> outlines, System::String name);
    
    OutlineCollection(System::SharedPtr<Engine::IPdfDocument> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "OutlineCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Document> _domDocument;
    
    bool get_IsReadOnly();
    
    bool Remove(System::SharedPtr<OutlineItemCollection> const &item);
    bool Contains(System::SharedPtr<OutlineItemCollection> const &item) const;
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_OutlineCollection_h_

