#ifndef _Aspose_Pdf_PageCollection_h_
#define _Aspose_Pdf_PageCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "Page.h"
#include "ISupportsMemoryCleanup.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DocumentTest; } } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPages; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class AnnotationSelector; } } } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { class Copier; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Collection of PDF document pages.
/// </summary>
//<<--REFACTORING: Old code: public sealed class PageCollection : ICollection, ISupportsMemoryCleanup
class ASPOSE_PDF_SHARED_API PageCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Page>>, public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef PageCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Page>> BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Tests::Facades::DocumentTest;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    
private:

    class ASPOSE_PDF_SHARED_API PagesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Page>>
    {
        typedef PagesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Page>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Page> get_Current() const;
        
        PagesEnumerator(System::SharedPtr<PageCollection> pageCollection);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~PagesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "PagesEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<PageCollection> _pageCollection;
        int32_t cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    
    void Delete(int32_t index);
    void Delete();
    int32_t IndexOf(System::SharedPtr<Page> entity);
    void CopyTo(System::ArrayPtr<System::SharedPtr<Page>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Page>>> GetEnumerator();
    void Accept(System::SharedPtr<InteractiveFeatures::Annotations::AnnotationSelector> visitor);
    void Delete(System::ArrayPtr<int32_t> pages);
    System::SharedPtr<Page> Insert(int32_t pageNumber);
    System::SharedPtr<Page> Add();
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> pages);
    System::SharedPtr<Page> Insert(int32_t pageNumber, System::SharedPtr<Page> entity);
    
    System::SharedPtr<Page> idx_get(int32_t index);
    
    void Accept(System::SharedPtr<ImagePlacementAbsorber> visitor);
    void Accept(System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> visitor);
    void Accept(System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> visitor);
    void Add(System::ArrayPtr<System::SharedPtr<Page>> pages);
    void Insert(int32_t pageNumber, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> pages);
    void Insert(int32_t pageNumber, System::ArrayPtr<System::SharedPtr<Page>> pages);
    void Flatten();
    void FreeMemory();
    
protected:

    System::WeakPtr<Document> _document;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _usedPages;
    System::SharedPtr<Engine::CommonData::IPages> pages;
    
    bool get_AnnotationsAdded();
    
    PageCollection(System::SharedPtr<Document> document);
    
    System::SharedPtr<Page> GetUnrestricted(int32_t index);
    System::SharedPtr<Page> Insert(int32_t pageNumber, System::SharedPtr<Page> entity, System::SharedPtr<Copier> copier);
    System::SharedPtr<Page> Add(System::SharedPtr<Page> entity, System::SharedPtr<Copier> copier);
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> pages, System::SharedPtr<Copier> copier);
    void Dispose();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PageCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    bool _isDisposed;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Page>>> cache;
    bool _annotationsAdded;
    
    bool get_IsReadOnly();
    
    void InitCache();
    System::SharedPtr<Page> get(int32_t index);
    void Add(System::SharedPtr<Page> const &item);
    bool Remove(System::SharedPtr<Page> const &item);
    bool Contains(System::SharedPtr<Page> const &item) const;
    void Clear();
    void mergeDictionary(System::SharedPtr<Engine::Data::IPdfDictionary> src, System::SharedPtr<Engine::Data::IPdfDictionary> dest);
    System::SharedPtr<Engine::Data::IPdfDictionary> getNode(System::SharedPtr<Engine::Data::IPdfDictionary> dict, System::String nodeName);
    void copyInheritedResources(System::SharedPtr<Page> srcPage, System::SharedPtr<Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier);
    void duplicatePage(System::SharedPtr<Page> srcPage, System::SharedPtr<Engine::Data::IPdfObject> dest, System::SharedPtr<Copier> copier);
    void bindFields(System::SharedPtr<Page> page);
    void assertObject() const;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageCollection_h_

