#ifndef _Aspose_Pdf_PageCollection_h_
#define _Aspose_Pdf_PageCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
        
    private:
    
        System::SharedPtr<PageCollection> _pageCollection;
        int32_t cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    /// <summary>
    /// Gets count of pages in the document.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Returns true of object is synchorinzed.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets synchronization object of the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    
    /// <summary>
    /// Delete specified page.
    /// </summary>
    /// <param name="index">Number of page that will be deleted. Pages numbers start from 1.</param>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes all pages from collection.
    /// </summary>
    void Delete();
    /// <summary>
    /// Returns index of the specified page.
    /// </summary>
    /// <remarks>
    /// Pages numbers start from 1.
    /// Returns 0 in case collection doesn't contain the page.
    /// </remarks>
    /// <param name="entity">Page object. Pages numbers start from 1.</param>
    /// <returns>Index of the page in collection.</returns>
    int32_t IndexOf(System::SharedPtr<Page> entity);
    /// <summary>
    /// Copyies pages into document. 
    /// </summary>
    /// <param name="array">Array containing Pages object to insert into document. It must be Object[] or Page[].</param>
    /// <param name="index">Starting index where pages will be inserted</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<Page>> array, int32_t index);
    /// <summary>
    /// Returns enumerator of pages.
    /// </summary>
    /// <returns>Enumerator of pages</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Page>>> GetEnumerator();
    /// <summary>
    /// Accepts <see cref="AnnotationSelector"/> visitor object that provides functionality to work with annotations.
    /// </summary>
    /// <param name="visitor">AnnotationSelector Visitor</param>
    void Accept(System::SharedPtr<InteractiveFeatures::Annotations::AnnotationSelector> visitor);
    /// <summary>
    /// Delete pages specified which numbers are specified in array.
    /// </summary>
    /// <param name="pages">Array of pages to be deleted.</param>
    void Delete(System::ArrayPtr<int32_t> pages);
    /// <summary>
    /// Insert empty apge into collection at the specified position.
    /// </summary>
    /// <param name="pageNumber">Position of the new page.</param>
    /// <returns>Inserted page.</returns>
    System::SharedPtr<Page> Insert(int32_t pageNumber);
    /// <summary>
    /// Adds empty page
    /// </summary>
    /// <returns>Added page.</returns>
    System::SharedPtr<Page> Add();
    /// <summary>
    /// Adds to collection all pages from list.
    /// </summary>
    /// <param name="pages">List which contains all pages which must be added.</param>
    //<<--REFACTORING: Old code: public void Add(ICollection pages)
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> pages);
    /// <summary>
    /// Inserts page into page collection at specified place. 
    /// </summary>
    /// <param name="pageNumber">Required page index in collection.</param>
    /// <param name="entity">Page to be inserted.</param>
    /// <returns>Inserted page.</returns>
    System::SharedPtr<Page> Insert(int32_t pageNumber, System::SharedPtr<Page> entity);
    
    /// <summary>
    /// Gets page by index.
    /// </summary>
    /// <param name="index">Index of page.</param>
    /// <returns>Retreived page.</returns>
    System::SharedPtr<Page> idx_get(int32_t index);
    
    /// <summary>
    /// Accepts <see cref="ImagePlacementAbsorber"/> visitor object that provides functionality to work with image placement objects.
    /// </summary>
    /// <param name="visitor">Image placement object.</param>
    void Accept(System::SharedPtr<ImagePlacementAbsorber> visitor);
    /// <summary>
    /// Accepts <see cref="TextFragmentAbsorber"/> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text fragment absorber object.</param>
    void Accept(System::SharedPtr<Aspose::Pdf::Text::TextFragmentAbsorber> visitor);
    /// <summary>
    /// Accepts <see cref="TextAbsorber"/> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text absorber object.</param>
    void Accept(System::SharedPtr<Aspose::Pdf::Text::TextAbsorber> visitor);
    /// <summary>
    /// Adds to collection all pages from array.
    /// </summary>
    /// <param name="pages">Array of pages which will be added.</param>
    void Add(System::ArrayPtr<System::SharedPtr<Page>> pages);
    /// <summary>
    /// Inserts pages from the collection into document. 
    /// </summary>
    /// <param name="pageNumber">Starting position of the new pages.</param>
    /// <param name="pages">Pages collection.</param>
    //<<--REFACTORING: Old code: public void Insert(int pageNumber, ICollection pages)
    void Insert(int32_t pageNumber, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> pages);
    /// <summary>
    /// Inserts pages of the array into document.
    /// </summary>
    /// <param name="pageNumber">Starting number of the new pages. </param>
    /// <param name="pages">Array of pages which will be inserted.</param>
    void Insert(int32_t pageNumber, System::ArrayPtr<System::SharedPtr<Page>> pages);
    /// <summary>
    /// Removes all fields located on the pages and place their values instead.
    /// </summary>
    void Flatten();
    /// <summary>
    /// Clears cached data
    /// </summary>
    void FreeMemory();
    
protected:

    System::WeakPtr<Document> _document;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _usedPages;
    System::SharedPtr<Engine::CommonData::IPages> pages;
    
    bool get_AnnotationsAdded();
    
    /// <summary>
    /// Constructor of PageCollection class. 
    /// </summary>
    /// <param name="document">Document instance</param>
    PageCollection(System::SharedPtr<Document> document);
    
    /// <summary>
    /// Returns page by its index.
    /// <see cref="Page"/>
    /// </summary>
    /// <param name="index">Index of requested page. Pages are numbered from 1.</param>
    /// <returns>Requested page</returns>
    System::SharedPtr<Page> GetUnrestricted(int32_t index);
    /// <summary>
    /// Inserts page into document using specified copier.
    /// </summary>
    /// <param name="pageNumber">Starting position of the new pages.</param>
    /// <param name="entity">Page to be inserted.</param>
    /// <param name="copier">Copier object.</param>
    System::SharedPtr<Page> Insert(int32_t pageNumber, System::SharedPtr<Page> entity, System::SharedPtr<Copier> copier);
    /// <summary>
    /// Adds page to document using passed copier object.
    /// </summary>
    /// <param name="entity"></param>
    /// <param name="copier"></param>
    System::SharedPtr<Page> Add(System::SharedPtr<Page> entity, System::SharedPtr<Copier> copier);
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> pages, System::SharedPtr<Copier> copier);
    /// <summary>
    /// frees up memory
    /// </summary>
    void Dispose();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    bool _isDisposed;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Page>>> cache;
    bool _annotationsAdded;
    
    /// <summary>
    /// <summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Initializes cache array
    /// </summary>
    void InitCache();
    /// <summary>
    /// Returns page by its index.
    /// <see cref="Page"/>
    /// </summary>
    /// <param name="index">Index of requested page. Pages are numbered from 1.</param>
    /// <returns>Requested page</returns>
    System::SharedPtr<Page> get(int32_t index);
    /// <summary>
    /// </summary>
    void Add(System::SharedPtr<Page> const &item);
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<Page> const &item);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<Page> const &item) const;
    /// <summary>
    /// </summary>
    void Clear();
    void mergeDictionary(System::SharedPtr<Engine::Data::IPdfDictionary> src, System::SharedPtr<Engine::Data::IPdfDictionary> dest);
    System::SharedPtr<Engine::Data::IPdfDictionary> getNode(System::SharedPtr<Engine::Data::IPdfDictionary> dict, System::String nodeName);
    void copyInheritedResources(System::SharedPtr<Page> srcPage, System::SharedPtr<Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier);
    /// <summary>
    /// Create a page copy. For example , to add page to other document etc.
    /// </summary>
    /// <param name="srcPage"></param>
    /// <param name="dest"></param>
    /// <param name="copier">Copier object to copy page; If null then new copier will be created.</param>
    void duplicatePage(System::SharedPtr<Page> srcPage, System::SharedPtr<Engine::Data::IPdfObject> dest, System::SharedPtr<Copier> copier);
    /// <summary>
    /// After coping page from other document, fields from page annotations must be added to AcroForm
    /// </summary>
    /// <param name="page"></param>
    void bindFields(System::SharedPtr<Page> page);
    void assertObject() const;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageCollection_h_

