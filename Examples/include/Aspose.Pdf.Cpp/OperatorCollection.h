#ifndef _Aspose_Pdf_OperatorCollection_h_
#define _Aspose_Pdf_OperatorCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "OperatorsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        int32_t cursor;
        System::SharedPtr<OperatorCollection> _operators;
        bool mIsDisposed;
        
    };
    
    
public:

    virtual int32_t get_Count() const;
    virtual bool get_IsReadOnly();
    
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Operator>>> GetEnumerator();
    void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual void Add(System::SharedPtr<Operator> const &op);
    void Delete(int32_t index);
    virtual void Insert(int32_t index, System::SharedPtr<Operator> op);
    void Replace(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> operators);
    void Add(System::ArrayPtr<System::SharedPtr<Operator>> ops);
    void Insert(int32_t at, System::ArrayPtr<System::SharedPtr<Operator>> ops);
    
    virtual System::SharedPtr<Operator> idx_get(int32_t index);
    virtual void idx_set(int32_t index, System::SharedPtr<Operator> value);
    
    void Delete(System::ArrayPtr<System::SharedPtr<Operator>> ops);
    void Delete(System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> list);
    void Insert(int32_t at, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> ops);
    virtual void Clear();
    virtual System::String ToString();
    void Add(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Operator>>> ops);
    virtual void SuppressUpdate();
    virtual void ResumeUpdate();
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
    
    bool get_IsBracketed();
    bool get_IsUpdateSuppressed();
    
    void SetData(System::ArrayPtr<uint8_t> data);
    void SetData(System::SharedPtr<Engine::Data::IPdfPrimitive> data);
    System::ArrayPtr<uint8_t> ReadStreamData(System::SharedPtr<Engine::Data::IPdfDataStream> src);
    void SetStreamData(System::SharedPtr<Engine::Data::IPdfDataStream> src);
    void SetStreamData(System::SharedPtr<Engine::Data::IPdfArray> src);
    void SetArrayData(System::SharedPtr<Engine::Data::IPdfArray> src);
    virtual void UpdateData();
    void Reindex();
    
    OperatorCollection(System::SharedPtr<Engine::Data::IPdfPrimitive> contents);
    OperatorCollection(System::SharedPtr<Engine::Data::ITrailerable> trailerable, System::SharedPtr<Engine::Data::IPdfPrimitive> contents);
    
    void UnRegisterEvents();
    virtual void DeleteUnrestricted(int32_t index);
    virtual System::SharedPtr<Operator> GetUnrestricted(int32_t index);
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ToList();
    void Resync();
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "OperatorCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    System::SharedPtr<Operator> get(int32_t index);
    void AddList(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ops);
    bool get_IsBracketed(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Operator>>> operators);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_OperatorCollection_h_

