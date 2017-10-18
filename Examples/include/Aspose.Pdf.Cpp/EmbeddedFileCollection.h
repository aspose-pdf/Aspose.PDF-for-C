#ifndef _Aspose_Pdf_EmbeddedFileCollection_h_
#define _Aspose_Pdf_EmbeddedFileCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "FileSpecification.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Collection; } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class ITreeNode; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing embedded files collection. 
/// </summary>
//<<--REFACTORING: Old code: public class EmbeddedFileCollection : ICollection
class ASPOSE_PDF_SHARED_API EmbeddedFileCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::FileSpecification>>
{
    typedef EmbeddedFileCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Collection;
    
private:

    class ASPOSE_PDF_SHARED_API EmbeddedFilesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>>
    {
        typedef EmbeddedFilesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<FileSpecification> get_Current() const;
        
        EmbeddedFilesEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfPrimitive>>> list);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~EmbeddedFilesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "EmbeddedFilesEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Engine::Data::IPdfPrimitive>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    int32_t get_Count() const;
    
    void CopyTo(System::ArrayPtr<System::SharedPtr<FileSpecification>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FileSpecification>>> GetEnumerator();
    void Add(System::SharedPtr<FileSpecification> const &file);
    void Delete(System::String name);
    void Delete();
    
    System::SharedPtr<FileSpecification> idx_get(int32_t index);
    System::SharedPtr<FileSpecification> idx_get(System::String name);
    
protected:

    System::SharedPtr<Engine::IPdfDocument> EngineDoc;
    
    EmbeddedFileCollection();
    EmbeddedFileCollection(System::SharedPtr<Document> document);
    
    void ConvertToObjects();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EmbeddedFileCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> cache;
    
    bool get_IsReadOnly();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> get_List();
    
    void LoadCache();
    System::SharedPtr<FileSpecification> get(int32_t index);
    System::SharedPtr<FileSpecification> get(System::String name);
    void ConvertToObjects(System::SharedPtr<Engine::Data::IPdfPrimitive> node);
    void ClearTreeNode(System::SharedPtr<Engine::CommonData::ITreeNode> node);
    bool Remove(System::SharedPtr<FileSpecification> const &item);
    bool Contains(System::SharedPtr<FileSpecification> const &item) const;
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_EmbeddedFileCollection_h_

