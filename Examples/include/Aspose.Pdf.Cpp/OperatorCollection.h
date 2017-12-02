#ifndef _Aspose_Pdf_OperatorCollection_h_
#define _Aspose_Pdf_OperatorCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/memory_stream.h>
#include <system/collections/ilist.h>
#include <system/collections/ienumerator.h>

#include "BaseOperatorCollection.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Text { class EvaluationTextExportInspector; } } }
namespace Aspose { namespace Pdf { class LightweightOperatorCollection; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Structure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace Structure { class TextElement; } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class OperatorCollectionTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace Types { class IPdfStreamAccessor; } } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { class IOperatorSelector; } }

namespace Aspose {

namespace Pdf {

class ASPOSE_PDF_SHARED_API OperatorCollection : public Aspose::Pdf::BaseOperatorCollection
{
    typedef OperatorCollection ThisType;
    typedef Aspose::Pdf::BaseOperatorCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Text::EvaluationTextExportInspector;
    friend class Aspose::Pdf::LightweightOperatorCollection;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    
private:

    enum class UpdateMode
    {
        Delete,
        Insert,
        Add,
        Replace
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API OperatorsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Operator>>
    {
        typedef OperatorsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Operator>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Operator> get_Current() const;
        
        OperatorsEnumerator(System::SharedPtr<OperatorCollection> operators);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~OperatorsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        int32_t cursor;
        System::SharedPtr<OperatorCollection> _operators;
        bool mIsDisposed;
        
    };
    
    
public:

    /// <summary>
    /// Gets count of operators in the collection.
    /// </summary>
    virtual int32_t get_Count() const;
    virtual bool get_IsReadOnly();
    
    /// <summary>
    /// Returns enumerator for collection
    /// </summary>
    /// <returns>Collection enumerator</returns>
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Operator>>> GetEnumerator();
    /// <summary>
    /// Accepts IOperatorSelector visitor object to process operators.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Adds new operator into collection.
    /// </summary>
    /// <param name="op">Operator which must be added</param>
    /// <example>
    /// Example demonstrates how to add operators to the end of page.contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// doc->get_Pages()->idx_get(1)->get_Contents()->Add(System::MakeObject<Aspose::Pdf::Operators::GSave>());
    /// doc->get_Pages()->idx_get(1)->get_Contents()->Add(System::MakeObject<Aspose::Pdf::Operators::GRestore>());
    /// </code>
    /// </example>
    virtual void Add(System::SharedPtr<Operator> const &op);
    /// <summary>
    /// Deletes operator from collection.
    /// </summary>
    /// <param name="index">Index of operator which must be deleted. Operators numbering starts from 1.</param>
    /// <example>
    /// Example demonstrates how to delete operator by its index.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// oc->Delete(3);
    /// </code>
    /// </example>
    void Delete(int32_t index);
    /// <summary>
    /// Inserts operator into collection.
    /// </summary>
    /// <param name="index">Index where new operator must be added</param>
    /// <param name="op">Operator which will be insterted</param>
    /// <example>
    /// Example demonstrates how to insert operator to the page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// oc->Insert(1, System::MakeObject<Aspose::Pdf::Operators::GSave>());
    /// oc->Add(System::MakeObject<Aspose::Pdf::Operators::GRestore>());
    /// </code>
    /// </example>
    virtual void Insert(int32_t index, System::SharedPtr<Operator> op);
    /// <summary>
    /// Replace operators in collection with other operators.
    /// </summary>
    /// <param name="operators">Operators list which will replace operators currently contained in the collection. Eash operator from the list must have correct index in range [1..N] where N is count of operators in the collection</param>
    void Replace(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Add operators at the end of the contents operators.
    /// </summary>
    /// <param name="ops">Array of operators to be added. Each operator can have any index (by default -1) because they come to the end of the contents operators i.e. indices are assigned automatically.</param>
    /// <example>
    /// Example demonstrates how to add  operator to the end of page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// oc->Add(System::MakeArray<System::SharedPtr<Aspose::Pdf::Operator>>({ System::MakeObject<Aspose::Pdf::Operators::GSave>(), System::MakeObject<Aspose::Pdf::Operators::GRestore>()}));
    /// </code>
    /// </example>
    void Add(System::ArrayPtr<System::SharedPtr<Operator>> ops);
    /// <summary>
    /// Insert operators at the the given position.
    /// </summary>
    /// <param name="at">Index from which operators are being started to insert.</param>
    /// <param name="ops">Array of operators to be inserted. Each operator can have any index (by default -1) because their indices adjusted automatically starting from <paramref name="at"/>.</param>
    /// <example>
    /// Example demonstrates how to insert operator to the page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// oc->Insert(1, System::MakeArray<System::SharedPtr<Aspose::Pdf::Operator>>({ System::MakeObject<Aspose::Pdf::Operators::GSave>(), System::MakeObject<Aspose::Pdf::Operators::GRestore>()}));
    /// </code>
    /// </example>
    void Insert(int32_t at, System::ArrayPtr<System::SharedPtr<Operator>> ops);
    
    virtual /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <returns>Operator from requested index</returns>
    /// <example>
    /// Example demonstrates how to get operator of page contents by index.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// System::SharedPtr<Aspose::Pdf::Operator> first = oc->idx_get(1);
    /// </code>
    /// </example>
    System::SharedPtr<Operator> idx_get(int32_t index);
    virtual /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <returns>Operator from requested index</returns>
    /// <example>
    /// Example demonstrates how to get operator of page contents by index.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// System::SharedPtr<Aspose::Pdf::Operator> first = oc->idx_get(1);
    /// </code>
    /// </example>
    void idx_set(int32_t index, System::SharedPtr<Operator> value);
    
    /// <summary>
    /// Deletes operators from collection.
    /// </summary>
    /// <param name="ops">Array of operators to delete</param>
    /// <example>
    /// Example demonstrates how to remove operator from page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// oc->Delete(System::MakeArray<System::SharedPtr<Aspose::Pdf::Operator>>({ oc->idx_get(1)}));
    /// </code>
    /// </example>
    void Delete(System::ArrayPtr<System::SharedPtr<Operator>> ops);
    /// <summary>
    /// Deletes operators from collection.
    /// </summary>
    /// <param name="list">The list of operators to delete</param>
    /// <example>
    /// Example demonstrates how to remove operator from page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Operator>>> opList = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Operator>>>();
    /// opList->Add(oc->idx_get(1));
    /// oc->Delete(opList);
    /// </code>
    /// </example>
    void Delete(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> list);
    /// <summary>
    /// Insert operators at the the given position.
    /// </summary>
    /// <param name="at">Index from which operators are being started to insert.</param>
    /// <param name="ops">Array of operators to be inserted.</param>
    /// <example>
    /// Example demonstrates how to insert operators to page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Operator>>> opList = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Operator>>>();
    /// opList->Add(System::MakeObject<Aspose::Pdf::Operators::GSave>());
    /// opList->Add(System::MakeObject<Aspose::Pdf::Operators::GRestore>());
    /// oc->Insert(1, opList);
    /// </code>
    /// </example>
    void Insert(int32_t at, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> ops);
    /// <summary>
    /// Removes all operators from list.
    /// </summary>
    /// <example>
    /// Example demonstrates how to clear page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// doc->get_Pages()->idx_get(1)->get_Contents()->Clear();
    /// </code>
    /// </example>
    virtual void Clear();
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    /// <summary>
    /// Adds to collection all operators from other collection.
    /// </summary>
    /// <param name="ops">collection whitch contains operators which will be added.</param>
    /// <example>
    /// Example demonstrates how to add operator collection to the page contents.
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<OperatorCollection> oc = doc->get_Pages()->idx_get(1)->get_Contents();
    /// System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Operator>>> opList = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Operator>>>();
    /// opList->Add(System::MakeObject<Aspose::Pdf::Operators::GSave>());
    /// opList->Add(System::MakeObject<Aspose::Pdf::Operators::GRestore>());
    /// oc->Add(opList);
    /// </code>
    /// </example>
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Operator>>> ops);
    /// <summary> 
    /// Suppresses update contents data.
    /// The contents stream is not updated until ResumeUpdate is called.
    /// </summary>
    virtual void SuppressUpdate();
    /// <summary>
    /// Resumes document update.
    /// Updates contents stream in case there are any pending changes.
    /// </summary>
    virtual void ResumeUpdate();
    /// <summary>
    /// Cancels last update.
    /// This method may be called when the change should not raise contents update.
    /// </summary>
    virtual void CancelUpdate();
    virtual bool Contains(System::SharedPtr<Operator> const &item) const;
    virtual void CopyTo(System::ArrayPtr<System::SharedPtr<Operator>> array, int32_t arrayIndex);
    virtual bool Remove(System::SharedPtr<Operator> const &item);
    
protected:

    bool RequiresReindex;
    
    bool get_IsCommandsParsed();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Commands() const;
    void set_Commands(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> value);
    
    System::SharedPtr<Engine::Data::IPdfPrimitive> contents;
    
    /// <summary>
    /// Gets bracketed status of operator sequence i.e. is this operators 
    /// are inside of q - Q blocks 
    /// </summary>
    bool get_IsBracketed();
    bool get_IsUpdateSuppressed();
    
    void SetData(System::ArrayPtr<uint8_t> data);
    void SetData(System::SharedPtr<Engine::Data::IPdfPrimitive> data);
    System::ArrayPtr<uint8_t> ReadStreamData(System::SharedPtr<Engine::Data::IPdfDataStream> src);
    void SetStreamData(System::SharedPtr<Engine::Data::IPdfDataStream> src);
    void SetStreamData(System::SharedPtr<Engine::Data::IPdfArray> src);
    void SetArrayData(System::SharedPtr<Engine::Data::IPdfArray> src);
    /// <summary>
    /// Update object stream.
    /// </summary>
    virtual void UpdateData();
    /// <summary>
    /// Update indexes of operators. This required when operators were inserted/deleted. 
    /// If we dont reindex, incorect indexes may cause fault when we're trying to delete operator by its index. 
    /// Example: PDFNEWNET-33455.
    /// </summary>
    void Reindex();
    
    /// <summary>
    /// Constructor of OperatorCollection. Constructs operators from primitive contains operators list.
    /// </summary>
    /// <param name="contents"></param>
    OperatorCollection(System::SharedPtr<Engine::Data::IPdfPrimitive> contents);
    /// <summary>
    /// Constructor of OperatorCollection. Constructs operators from primitive contains operators list.
    /// </summary>
    /// <param name="trailerable"></param>
    /// <param name="contents"></param>
    OperatorCollection(System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Engine::Data::IPdfPrimitive> contents);
    
    /// <summary>
    /// Unregisters events
    /// </summary>
    void UnRegisterEvents();
    /// <summary>
    /// internal unrestricted version of Delete(index)
    /// </summary>
    virtual void DeleteUnrestricted(int32_t index);
    /// <summary>
    /// internal unrestricted version of indexer
    /// </summary>
    virtual System::SharedPtr<Operator> GetUnrestricted(int32_t index);
    /// <summary>
    /// Returns opetator list.
    /// </summary>
    /// <returns>opetator list.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ToList();
    void Resync();
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    mutable System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> commands;
    static System::ArrayPtr<uint8_t> separator;
    System::ArrayPtr<uint8_t> newData;
    int32_t isBracketed;
    System::SharedPtr<System::IO::MemoryStream> data;
    int32_t updateSuppressed;
    int32_t suspendedUpdateRequests;
    System::SharedPtr<System::Object> updateSync;
    bool updating;
    System::SharedPtr<System::Object> sync;
    System::WeakPtr<Engine::Data::ITrailerable> trailerable;
    System::SharedPtr<Collections::AsposeHashDictionary<System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor>, System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor>>> events;
    
    void ParseContents() const;
    System::ArrayPtr<uint8_t> GetData();
    void Insert(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void Update(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void Delete_Internal(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void Change(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void Append(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void UpdateProgram(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators, OperatorCollection::UpdateMode mode);
    void RegisterEvents(System::SharedPtr<Engine::Data::IPdfPrimitive> contents);
    void RegisterAccessorEvent(System::SharedPtr<Engine::Data::IPdfPrimitive> primitive);
    void AccessorOnDataChanged();
    void set(int32_t index, System::SharedPtr<Operator> value);
    /// <summary>
    /// Returns operator by its index.
    /// </summary>
    /// <param name="index">Index of requested operator. Operators numbering starts from 1.</param>
    /// <returns></returns>
    System::SharedPtr<Operator> get(int32_t index);
    void AddList(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ops);
    bool get_IsBracketed(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Operator>>> operators);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_OperatorCollection_h_

