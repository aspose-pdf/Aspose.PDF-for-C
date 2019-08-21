#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>

#include "Page_.h"
#include "ISupportsMemoryCleanup.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsCollector; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsSubstitutor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsSubsetter; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsUnembedder; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { template<typename> class FontsRemover; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentCIDType2FontContentUpdater; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class DocumentTest; } } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v12_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v12_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_9; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPages; } } } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { namespace Annotations { class AnnotationSelector; } } }
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
class ASPOSE_PDF_SHARED_API PageCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Page>>, public Aspose::Pdf::ISupportsMemoryCleanup
{
    typedef PageCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Page>> BaseType;
    typedef Aspose::Pdf::ISupportsMemoryCleanup BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsCollector;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsUnembedder;
    template<typename FT0> friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontsRemover;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Tests::Facades::DocumentTest;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_9;
    
private:

    class PagesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Page>>
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
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<PageCollection> _pageCollection;
        int32_t cursor;
        
    };
    
    class GeneratorInformation : public System::Object
    {
        typedef GeneratorInformation ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        GeneratorInformation(System::SharedPtr<Page> page);
        
        void Assign(System::SharedPtr<Page> page);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Paragraphs> _paragraphs;
        System::SharedPtr<PageInfo> _pageInfo;
        
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
    /// Gets value indicating of collection is readonly. Always returns false.
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Adds page to collection. 
    /// </summary>
    /// <param name="entity">Page which should be added.</param>
    /// <returns>Added page.</returns>
    System::SharedPtr<Page> CopyPage(System::SharedPtr<Page> entity);
    /// <summary>
    /// Clear page collection. 
    /// </summary>
    void Clear();
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
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
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
    void Accept(System::SharedPtr<Annotations::AnnotationSelector> visitor);
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
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Page>>> const &pages);
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
    void Accept(System::SharedPtr<Text::TextFragmentAbsorber> visitor);
    /// <summary>
    /// Accepts <see cref="TextAbsorber"/> visitor object that provides functionality to work with text objects.
    /// </summary>
    /// <param name="visitor">Text absorber object.</param>
    void Accept(System::SharedPtr<Text::TextAbsorber> visitor);
    /// <summary>
    /// Adds to collection all pages from array.
    /// </summary>
    /// <param name="pages">Array of pages which will be added.</param>
    void Add(System::ArrayPtr<System::SharedPtr<Page>> const &pages);
    /// <summary>
    /// Inserts pages from the collection into document. 
    /// </summary>
    /// <param name="pageNumber">Starting position of the new pages.</param>
    /// <param name="pages">Pages collection.</param>
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
    /// <summary>
    /// Adds page to collection. 
    /// </summary>
    /// <param name="entity">Page which should be added.</param>
    /// <returns>Added page.</returns>
    void Add(System::SharedPtr<Page> const &entity);
    /// <summary>
    /// Determines whether this instance contains the object.
    /// </summary>
    /// <param name="item">The item.</param>
    /// <returns>
    ///   <c>true</c> if [contains] [the specified item]; otherwise, <c>false</c>.
    /// </returns>
    /// <exception cref="NotSupportedException"></exception>
    bool Contains(System::SharedPtr<Page> const &item) const;
    /// <summary>
    /// Removes the specified item.
    /// </summary>
    /// <param name="item">The item.</param>
    /// <returns></returns>
    /// <exception cref="NotSupportedException"></exception>
    bool Remove(System::SharedPtr<Page> const &item);
    
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
    System::SharedPtr<Page> FindByObjectId(int32_t objectID);
    System::SharedPtr<Page> FindByPdfObject(System::SharedPtr<Engine::Data::IPdfObject> pdfObject);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<PageCollection::GeneratorInformation>>> _storedGeneratorInformation;
    bool _isDisposed;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Page>>> cache;
    bool _annotationsAdded;
    
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


