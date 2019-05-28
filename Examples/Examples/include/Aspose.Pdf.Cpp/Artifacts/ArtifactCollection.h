#pragma once

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"
#include "Artifacts/Artifact.h"

namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class BackgroundArtifact; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class Matrix; } }
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

    class ArtifactEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Artifact>>
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
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<ArtifactCollection> _collection;
        int32_t current;
        
    };
    
    
public:

    /// <summary>
    /// Is this object synchronized.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets count of artifacts in collection.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Gets synchronization object of the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets if collection is readonly. Always returns false.
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Copies colection into an array.
    /// </summary>
    /// <param name="dest">Destination array.</param>
    /// <param name="index">Starting index.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<Artifact>> dest, int32_t index);
    /// <summary>
    /// Gets enumerator for the collection. 
    /// </summary>
    /// <returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Artifact>>> GetEnumerator();
    
    /// <summary>
    /// Gets artifact by index. Index is started from 1.
    /// </summary>
    /// <param name="index">Index of the artifact.</param>
    /// <returns>Artifact on the page.</returns>
    System::SharedPtr<Artifact> idx_get(int32_t index);
    
    /// <summary>
    /// Adds artifacts to the collection.
    /// </summary>
    /// <param name="artifact">Artifact which sould be added to collection.</param>
    void Add(System::SharedPtr<Artifact> const &artifact);
    /// <summary>
    /// Finds artifacts by custom value.
    /// </summary>
    /// <param name="name">Name of custom value.</param>
    /// <param name="expectedValue">Value to find.</param>
    /// <returns>List of found artifacts.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> FindByValue(System::String name, System::String expectedValue);
    /// <summary>
    /// Deletes specified artifact.
    /// </summary>
    /// <param name="artifact">Artifact which will be deleted.</param>
    void Delete(System::SharedPtr<Artifact> artifact);
    /// <summary>
    /// Update artifact inside the collection. 
    /// </summary>
    /// <param name="artifact">Artifact to be updated.</param>
    void Update(System::SharedPtr<Artifact> artifact);
    /// <summary>
    /// Deletes artifact by its index. 
    /// </summary>
    /// <param name="index">Index of artifact to delete.</param>
    void Delete(int32_t index);
    /// <summary>
    /// Clears collection. Method is not supported.
    /// </summary>
    void Clear();
    /// <summary>
    /// Checks if collection contains specified artifact.
    /// </summary>
    /// <param name="item">Artifact to search.</param>
    bool Contains(System::SharedPtr<Artifact> const &item) const;
    /// <summary>
    /// Deletes specified artifact.
    /// </summary>
    /// <param name="item">Artifact which will be deleted.</param>
    bool Remove(System::SharedPtr<Artifact> const &item);
    
protected:

    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    
    ArtifactCollection(System::SharedPtr<Aspose::Pdf::Page> page);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> collection;
    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Aspose::Pdf::Page> page;
    
    bool IsArtifact(System::SharedPtr<Operator> op, System::SharedPtr<Engine::Data::IPdfDictionary>& propertyList);
    ArtifactCollection::WatermarkType GetWatermarkType(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Resources> res);
    System::SharedPtr<Artifact> CreateArtifact(System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<Engine::Data::IPdfDictionary> properties);
    void CollectArtifacts(System::SharedPtr<Matrix> matrix, System::SharedPtr<OperatorCollection> opc, System::SharedPtr<Resources> res, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Artifact>>> list);
    void UpdateCollection();
    int32_t FindOperatorByTag(System::String Tag);
    void DeleteOperator(int32_t startIndex);
    bool OperatorsEqual(System::SharedPtr<Operator> op1, System::SharedPtr<Operator> op2);
    int32_t FindArtifact(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Returns index of the artifact in page contents. If page contents was changed, tryes re-find this artifact in new contents. 
    /// </summary>
    /// <param name="artifact"></param>
    /// <returns></returns>
    int32_t GetIndex(System::SharedPtr<Artifact> artifact);
    
};

} // namespace Pdf
} // namespace Aspose


