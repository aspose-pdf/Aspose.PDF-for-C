#ifndef _Aspose_Pdf_Artifacts_ArtifactCollection_h_
#define _Aspose_Pdf_Artifacts_ArtifactCollection_h_

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"
#include "Artifacts/Artifact.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class BackgroundArtifact; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

class ASPOSE_PDF_SHARED_API ArtifactCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Artifact>>
{
    typedef ArtifactCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Artifact>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::BackgroundArtifact;
    
private:

    enum class WatermarkType
    {
        Unknown,
        Text,
        Image,
        Page
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API ArtifactEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Artifact>>
    {
        typedef ArtifactEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Artifact>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Artifact> get_Current() const;
        
        ArtifactEnumerator(System::SharedPtr<ArtifactCollection> collection);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~ArtifactEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ArtifactEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<ArtifactCollection> _collection;
        int32_t current;
        bool mIsDisposed;
        
    };
    
    
public:

    bool get_IsSynchronized();
    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    
    void CopyTo(System::ArrayPtr<System::SharedPtr<Artifact>> dest, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Artifact>>> GetEnumerator();
    
    System::SharedPtr<Artifact> idx_get(int32_t index);
    
    void Add(System::SharedPtr<Artifact> const &artifact);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> FindByValue(System::String name, System::String expectedValue);
    void Delete(System::SharedPtr<Artifact> artifact);
    void Update(System::SharedPtr<Artifact> artifact);
    void Delete(int32_t index);
    
protected:

    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    
    ArtifactCollection(System::SharedPtr<Aspose::Pdf::Page> page);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ArtifactCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> collection;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::Page> page;
    
    bool get_IsReadOnly();
    
    bool IsArtifact(System::SharedPtr<Operator> op, System::SharedPtr<Engine::Data::IPdfDictionary> &propertyList);
    ArtifactCollection::WatermarkType GetWatermarkType(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Resources> res);
    System::SharedPtr<Artifact> CreateArtifact(System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Engine::Data::IPdfDictionary> properties);
    void CollectArtifacts(System::SharedPtr<DOM::Matrix> matrix, System::SharedPtr<OperatorCollection> opc, System::SharedPtr<Resources> res, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> list);
    int32_t FindOperatorByTag(System::String Tag);
    void DeleteOperator(int32_t startIndex);
    bool OperatorsEqual(System::SharedPtr<Operator> op1, System::SharedPtr<Operator> op2);
    int32_t FindArtifact(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    int32_t GetIndex(System::SharedPtr<Artifact> artifact);
    bool Remove(System::SharedPtr<Artifact> const &item);
    bool Contains(System::SharedPtr<Artifact> const &item) const;
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Artifacts_ArtifactCollection_h_

