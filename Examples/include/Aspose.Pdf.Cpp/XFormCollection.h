#ifndef _Aspose_Pdf_XFormCollection_h_
#define _Aspose_Pdf_XFormCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "XForm.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents collection of XFormCollection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class XFormCollection : ICollection
class ASPOSE_PDF_SHARED_API XFormCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>>
{
    typedef XFormCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    
private:

    class ASPOSE_PDF_SHARED_API XFormsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>>
    {
        typedef XFormsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::XForm> get_Current() const;
        
        XFormsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> xforms);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~XFormsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> xforms;
        int32_t cursor;
        bool mIsDisposed;
        
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
    /// Adds new Aspose.Pdf.XForm into collection.
    /// </summary>
    /// <param name="xform">Aspose.Pdf.XForm to add into collection</param>
    void Add(System::SharedPtr<Aspose::Pdf::XForm> const &xform);
    /// <summary>
    /// Delete Aspose.Pdf.XForm from collectin
    /// </summary>
    /// <param name="index">Index of Aspose.Pdf.XForm which must be deleted</param>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes all XForms from collection.
    /// </summary>
    void Delete();
    /// <summary>
    /// Copies XFormCollection into collection. 
    /// </summary>
    /// <param name="array">Array of Aspose.Pdf.XForm to be copied</param>
    /// <param name="index">Index where XFormCollection will be copied</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::XForm>> array, int32_t index);
    /// <summary>
    /// Retunrs collection enumerator.
    /// </summary>
    /// <returns>Enumerator for collection</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XForm>>> GetEnumerator();
    /// <summary>
    /// Deletes Aspose.Pdf.XForm from collection by form name.
    /// </summary>
    /// <param name="name">Name of Aspose.Pdf.XForm to be deleted.</param>
    void Delete(System::String name);
    
    /// <summary>
    /// Returns Aspose.Pdf.XForm by index.
    /// </summary>
    /// <param name="index">Index of XFormCollection. XForms numbering is started from 1</param>
    /// <returns>Retreived Aspose.Pdf.XForm</returns>
    System::SharedPtr<Aspose::Pdf::XForm> idx_get(int32_t index);
    /// <summary>
    /// Returns Aspose.Pdf.XForm by its name. Exception is thrown if Aspose.Pdf.XForm with specified name is not found.
    /// </summary>
    /// <param name="name">Name of Aspose.Pdf.XForm</param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::XForm> idx_get(System::String name);
    
protected:

    System::WeakPtr<Resources> parent;
    
    /// <summary>
    /// Aspose.Pdf.XForm constructor
    /// </summary>
    /// <param name="parent">Resources object which contains forms</param>
    /// <param name="xobject">Dictionary object which contains XFormCollection</param>
    XFormCollection(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xobject);
    
    /// <summary>
    /// Returns name of the form in this form collection
    /// </summary>
    /// <param name="form">Form which name is searhced</param>
    /// <returns>Form name in the collection; Null if form is not contained in the colleciton</returns>
    System::String GetFormName(System::SharedPtr<Aspose::Pdf::XForm> form);
    bool HasForm(System::String formName);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Engine::Data::IPdfDictionary> _xobject;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> cache;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash;
    
    /// <summary>
    /// </summary>
    bool get_IsReadOnly();
    /// <summary>
    /// Gets XObject dictionary.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    
    /// <summary>
    /// Gets Aspose.Pdf.XForm by index.
    /// </summary>
    /// <param name="index">Index of the Aspose.Pdf.XForm to retreive. Index must be in range [1..N] where N is Aspose.Pdf.XForm count in collection.</param>
    /// <returns>Retreived xForm</returns>
    System::SharedPtr<Aspose::Pdf::XForm> get(int32_t index);
    /// <summary>
    /// Gets Aspose.Pdf.XForm by its name. Throws exception if form is not found.
    /// </summary>
    /// <param name="name">Aspose.Pdf.XForm name</param>
    /// <returns>Retreived Aspose.Pdf.XForm</returns>
    System::SharedPtr<Aspose::Pdf::XForm> get(System::String name);
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<Aspose::Pdf::XForm> const &item);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<Aspose::Pdf::XForm> const &item) const;
    /// <summary>
    /// </summary>
    void Clear();
    /// <summary>
    /// Generates unique name for form. Form name is generated in style "Xf(number)".
    /// </summary>
    /// <returns>Unique form name.</returns>
    System::String getUniqueFormName();
    /// <summary>
    /// Extract Aspose.Pdf.XForm by its name and update cache and hashed values
    /// </summary>
    /// <param name="key"></param>
    void SynchronizeCache(System::String key);
    int32_t getCount();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XFormCollection_h_

