#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "XForm.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXObject; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents collection of XFormCollection.
/// </summary>
class ASPOSE_PDF_SHARED_API XFormCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>>
{
    typedef XFormCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    
private:

    class XFormsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>>
    {
        typedef XFormsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<XForm> get_Current() const;
        
        XFormsEnumerator(System::SharedPtr<XFormCollection> parent, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> xforms);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> xforms;
        int32_t cursor;
        System::SharedPtr<XFormCollection> _parent;
        
    };
    
    
public:

    /// <summary>
    /// Gets count of XForms in collection.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Returns true if object is synchronized.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Synchronization object.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Adds new XForm into collection.
    /// </summary>
    /// <param name="xform">XForm to add into collection</param>
    void Add(System::SharedPtr<XForm> const &xform);
    /// <summary>
    /// Delete XForm from collectin
    /// </summary>
    /// <param name="index">Index of XForm which must be deleted</param>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes all XForms from collection.
    /// </summary>
    void Delete();
    /// <summary>
    /// Copies XFormCollection into collection. 
    /// </summary>
    /// <param name="array">Array of XForm to be copied</param>
    /// <param name="index">Index where XFormCollection will be copied</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<XForm>> array, int32_t index);
    /// <summary>
    /// Retunrs collection enumerator.
    /// </summary>
    /// <returns>Enumerator for collection</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<XForm>>> GetEnumerator();
    /// <summary>
    /// Deletes XForm from collection by form name.
    /// </summary>
    /// <param name="name">Name of XForm to be deleted.</param>
    void Delete(System::String name);
    
    /// <summary>
    /// Returns XForm by index.
    /// </summary>
    /// <param name="index">Index of XFormCollection. XForms numbering is started from 1</param>
    /// <returns>Retreived XForm</returns>
    System::SharedPtr<XForm> idx_get(int32_t index);
    /// <summary>
    /// Returns XForm by its name. Exception is thrown if XForm with specified name is not found.
    /// </summary>
    /// <param name="name">Name of XForm</param>
    /// <returns></returns>
    System::SharedPtr<XForm> idx_get(System::String name);
    
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(System::SharedPtr<XForm> const &item) const;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    bool Remove(System::SharedPtr<XForm> const &item);
    
protected:

    System::WeakPtr<Resources> parent;
    
    void Add(System::String name, System::SharedPtr<Engine::Data::IPdfObject> formObj);
    
    /// <summary>
    /// XForm constructor
    /// </summary>
    /// <param name="parent">Resources object which contains forms</param>
    /// <param name="xobject">Dictionary object which contains XFormCollection</param>
    XFormCollection(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xobject);
    
    /// <summary>
    /// Returns name of the form in this form collection
    /// </summary>
    /// <param name="form">Form which name is searhced</param>
    /// <returns>Form name in the collection; Null if form is not contained in the colleciton</returns>
    System::String GetFormName(System::SharedPtr<XForm> form);
    bool HasForm(System::String formName);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Engine::Data::IPdfDictionary> _xobject;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> cache;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash;
    
    /// <summary>
    /// Gets XObject dictionary.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    
    /// <summary>
    /// Gets XForm by index.
    /// </summary>
    /// <param name="index">Index of the XForm to retreive. Index must be in range [1..N] where N is XForm count in collection.</param>
    /// <returns>Retreived xForm</returns>
    System::SharedPtr<XForm> get(int32_t index);
    /// <summary>
    /// Gets XForm by its name. Throws exception if form is not found.
    /// </summary>
    /// <param name="name">XForm name</param>
    /// <returns>Retreived XForm</returns>
    System::SharedPtr<XForm> get(System::String name);
    /// <summary>
    /// Generates unique name for form. Form name is generated in style "Xf(number)".
    /// </summary>
    /// <returns>Unique form name.</returns>
    System::String getUniqueFormName();
    /// <summary>
    /// Extract XForm by its name and update cache and hashed values
    /// </summary>
    /// <param name="key"></param>
    void SynchronizeCache(System::String key);
    int32_t getCount();
    
};

} // namespace Pdf
} // namespace Aspose


