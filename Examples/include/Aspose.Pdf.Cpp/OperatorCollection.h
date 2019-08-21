#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/memory_stream.h>
#include <system/collections/ilist.h>
#include <system/collections/ienumerator.h>

#include "BaseOperatorCollection.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class FontUtilities; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class PageAnnotationProcessor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentCIDType2FontContentUpdater; } } } } } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequencePage; } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXObject; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Text { class EvaluationTextExportInspector; } } }
namespace Aspose { namespace Pdf { class LightweightOperatorCollection; } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace Structure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace Structure { class TextElement; } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class OperatorCollectionTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace src { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandsList; } } } } } }
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
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::PageAnnotationProcessor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Interchange::ContentSequencePage;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Text::EvaluationTextExportInspector;
    friend class Aspose::Pdf::LightweightOperatorCollection;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    
private:

    enum class UpdateMode
    {
        Delete,
        Insert,
        Add,
        Replace
    };
    
    
private:

    class OperatorsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Operator>>
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
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        int32_t cursor;
        System::SharedPtr<OperatorCollection> _operators;
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    virtual bool get_IsReadOnly();
    /// <summary>
    /// Gets count of operators in the collection.
    /// </summary>
    virtual int32_t get_Count() const;
    /// <summary>
    /// Indicates wheather collection is limited to fast text extraction
    /// </summary>
    virtual bool get_IsFastTextExtractionMode() const;
    
    virtual ~OperatorCollection();
    
    /// <summary>
    /// Copies operators into operators list.
    /// </summary>
    /// <param name="array">Array with operators which must to be copied. This array must be Object[] or Operator[].</param>
    /// <param name="index">Starting index from which operators will be copied</param>
    virtual void CopyTo(System::ArrayPtr<System::SharedPtr<Operator>> array, int32_t index);
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
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// doc.Pages[1].Contents.Add(new Aspose.Pdf.Operators.q());
    /// doc.Pages[1].Contents.Add(new Aspose.Pdf.Operators.Q());
    /// </code>
    /// </example>
    virtual void Add(System::SharedPtr<Operator> const &op);
    /// <summary>
    /// Deletes operator from collection.
    /// </summary>
    /// <param name="index">Index of operator which must be deleted. Operators numbering starts from 1.</param>
    /// <example>
    /// Example demonstrates how to delete operator by its index.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// oc.Delete(3);
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
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// oc.Insert(1, new Aspose.Pdf.Operators.q());
    /// oc.Add(new Aspose.Pdf.Operators.Q());
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
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// oc.Add(new Operator[] { new Aspose.Pdf.Operators.q(), new Aspose.Pdf.Operators.Q() } );
    /// </code>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void Add(System::ArrayPtr<System::SharedPtr<Operator>> const &ops);
    /// <summary>
    /// Insert operators at the the given position.
    /// </summary>
    /// <param name="at">Index from which operators are being started to insert.</param>
    /// <param name="ops">Array of operators to be inserted. Each operator can have any index (by default -1) because their indices adjusted automatically starting from <paramref name="at"/>.</param>
    /// <example>
    /// Example demonstrates how to insert operator to the page contents.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// oc.Insert(1, new Operator[] { new Aspose.Pdf.Operators.q(), new Aspose.Pdf.Operators.Q() } );
    /// </code>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void Insert(int32_t at, System::ArrayPtr<System::SharedPtr<Operator>> ops);
    
    /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <returns>Operator from requested index</returns>
    /// <example>
    /// Example demonstrates how to get operator of page contents by index.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// Operator first = oc[1];
    /// </code>
    /// </example>
    virtual System::SharedPtr<Operator> idx_get(int32_t index);
    /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <param name="value">Operator from requested index</param>
    /// <example>
    /// Example demonstrates how to get operator of page contents by index.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// Operator first = oc[1];
    /// </code>
    /// </example>
    virtual void idx_set(int32_t index, System::SharedPtr<Operator> value);
    
    /// <summary>
    /// Deletes operators from collection.
    /// </summary>
    /// <param name="ops">Array of operators to delete</param>
    /// <example>
    /// Example demonstrates how to remove operator from page contents.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// oc.Delete(new Operator[] { oc[1] } );
    /// </code>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void Delete(System::ArrayPtr<System::SharedPtr<Operator>> ops);
    /// <summary>
    /// Deletes operators from collection.
    /// </summary>
    /// <param name="list">The list of operators to delete</param>
    /// <example>
    /// Example demonstrates how to remove operator from page contents.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// List&lt;Operator&gt; opList = new List&lt;Operator&gt;();
    /// opList.Add(oc[1]);
    /// oc.Delete(opList);
    /// </code>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void Delete(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> list);
    /// <summary>
    /// Insert operators at the the given position.
    /// </summary>
    /// <param name="at">Index from which operators are being started to insert.</param>
    /// <param name="ops">Array of operators to be inserted.</param>
    /// <example>
    /// Example demonstrates how to insert operators to page contents.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// List&lt;Operator&gt; opList = new List&lt;Operator&gt;();
    /// opList.Add(new Operators.q());
    /// opList.Add(new Operators.Q());
    /// oc.Insert(1, opList);
    /// </code>
    /// </example>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void Insert(int32_t at, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> ops);
    /// <summary>
    /// Removes all operators from list.
    /// </summary>
    /// <example>
    /// Example demonstrates how to clear page contents.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// doc.Pages[1].Clear();
    /// </code>
    /// </example>
    virtual void Clear();
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    virtual System::String ToString();
    /// <summary>
    /// Adds to collection all operators from other collection.
    /// </summary>
    /// <param name="ops">collection whitch contains operators which will be added.</param>
    /// <example>
    /// Example demonstrates how to add operator collection to the page contents.
    /// <code lang="C#">
    /// Document doc = new Document("input.pdf");
    /// OperatorCollection oc = doc.Pages[1].Contents;
    /// List&lt;Operator&gt; opList = new List&lt;Operator&gt;();
    /// opList.Add(new AOperator.q());
    /// opList.Add(new Operators.Q());
    /// oc.Add(opList);
    /// </code>
    /// </example>
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Operator>>> const &ops);
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
    /// <summary>
    /// Remove operator from the collection.
    /// </summary>
    /// <param name="op">Operator to be removed.</param>
    /// <returns>True if operator was found and removed. False if operator did not belong to the collection.</returns>
    virtual bool Remove(System::SharedPtr<Operator> const &op);
    /// <summary>
    /// Returns true if the collection contains given operator.
    /// </summary>
    /// <param name="op"></param>
    /// <returns></returns>
    virtual bool Contains(System::SharedPtr<Operator> const &op) const;
    
protected:

    bool RequiresReindex;
    
    bool get_IsReadOnlyMode();
    void set_IsReadOnlyMode(bool value);
    System::SharedPtr<Engine::Data::IPdfPrimitive> get_Contents();
    System::SharedPtr<Aspose::src::CommonData::PageContent::Operators::Commands::CommandsList> get_CommandList();
    bool get_IsCommandsParsed();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Commands() const;
    void set_Commands(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> value);
    
    System::SharedPtr<Engine::Data::IPdfPrimitive> contents;
    
    /// <summary>
    /// Indicates wheather collection is limited to fast text extraction
    /// </summary>
    virtual void set_IsFastTextExtractionMode(bool value);
    /// <summary>
    /// Gets bracketed status of operator sequence i.e. is this operators 
    /// are inside of q - Q blocks 
    /// </summary>
    bool get_IsBracketed();
    bool get_IsUpdateSuppressed();
    virtual System::SharedPtr<Engine::Data::ITrailerable> get_Trailerable();
    
    void ParseContents() const;
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
    void FreeMem();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool isReadOnlyMode;
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
    mutable System::SharedPtr<Aspose::src::CommonData::PageContent::Operators::Commands::CommandsList> commandsList;
    System::WeakPtr<Engine::Data::ITrailerable> trailerable;
    bool pr_IsFastTextExtractionMode;
    System::SharedPtr<Collections::AsposeHashDictionary<System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor>, System::SharedPtr<Engine::Data::Types::IPdfStreamAccessor>>> events;
    
    System::ArrayPtr<uint8_t> GetData();
    void Insert(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
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
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    System::SharedPtr<Operator> get(int32_t index);
    void AddList(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ops);
    bool get_IsBracketed(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Operator>>> operators);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose


