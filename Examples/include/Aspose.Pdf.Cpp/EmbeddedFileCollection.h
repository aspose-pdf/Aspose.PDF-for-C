#ifndef _Aspose_Pdf_EmbeddedFileCollection_h_
#define _Aspose_Pdf_EmbeddedFileCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "FileSpecification.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Collection; } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class ITreeNode; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing embedded files collection. 
/// </summary>
//<<--REFACTORING: Old code: public class EmbeddedFileCollection : ICollection
class ASPOSE_PDF_SHARED_API EmbeddedFileCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::FileSpecification>>
{
    typedef EmbeddedFileCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Collection;
    
private:

    class ASPOSE_PDF_SHARED_API EmbeddedFilesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>>
    {
        typedef EmbeddedFilesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<FileSpecification> get_Current() const;
        
        EmbeddedFilesEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfPrimitive>>> list);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~EmbeddedFilesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Engine::Data::IPdfPrimitive>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    ///<summary>
    /// Gets a value indicating whether access to this collection is synchronized (thread safe).
    /// </summary>
    bool get_IsSynchronized();
    ///<summary>
    /// Gets an object that can be used to synchronize access to this collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets number of embedded files in collection.
    /// </summary>
    int32_t get_Count() const;
    
    /// <summary>
    /// Copies array of FileSpecification object into colleciton. 
    /// </summary>
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<FileSpecification>> array, int32_t index);
    /// <summary>
    /// Returns colleciton enumerator.
    /// </summary>
    /// <returns>Enumerator of colleciton.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FileSpecification>>> GetEnumerator();
    /// <summary>
    /// Adds embedded file specification into collection.
    /// </summary>
    /// <param name="file">FileSpecification which should be added into colleciton.</param>
    void Add(System::SharedPtr<FileSpecification> const &file);
    /// <summary>
    /// Delete embedded file by name.
    /// </summary>
    /// <param name="name">Name of the embedded file which shoul dbe deleted.</param>
    void Delete(System::String name);
    /// <summary>
    /// Remove all embedded files from document.
    /// </summary>
    void Delete();
    
    /// <summary>
    /// Gets embedded file by its index.
    /// </summary>
    /// <param name="index">Index of embedded file. Numbering is started from 1.</param>
    /// <returns>Retreived embedded file specification</returns>
    System::SharedPtr<FileSpecification> idx_get(int32_t index);
    /// <summary>
    /// Gets embedded file by its name.
    /// </summary>
    /// <param name="name">Embedded file name.</param>
    /// <returns>Retreived embedded file specification.</returns>
    System::SharedPtr<FileSpecification> idx_get(System::String name);
    
protected:

    System::SharedPtr<Engine::IPdfDocument> EngineDoc;
    
    /// <summary>
    /// Constructor of EmbeddedFileCollection.
    /// </summary>
    EmbeddedFileCollection();
    /// <summary>
    /// Constructor of EmbeddedFileCollection.
    /// </summary>
    /// <param name="document">Document where embedded files are placed.</param>
    EmbeddedFileCollection(System::SharedPtr<Document> document);
    
    void ConvertToObjects();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> cache;
    
    /// <summary>
    /// </summary>
    bool get_IsReadOnly();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> get_List();
    
    /// <summary>
    /// LoadCache procedure.
    /// </summary>
    void LoadCache();
    /// <summary>
    /// Gets embedded file by index. Numbering is started from 1.
    /// </summary>
    /// <param name="index">Embedded file index.</param>
    /// <returns>FileSpecification of embedded file.</returns>
    System::SharedPtr<FileSpecification> get(int32_t index);
    /// <summary>
    /// Gets embedded file specification by its name.
    /// </summary>
    /// <param name="name">File specification name</param>
    /// <returns>Embedded file specification</returns>
    System::SharedPtr<FileSpecification> get(System::String name);
    /// <summary>
    /// Converts all dictionaries into objects.
    /// </summary>
    /// <param name="?"></param>
    void ConvertToObjects(System::SharedPtr<Engine::Data::IPdfPrimitive> node);
    void ClearTreeNode(System::SharedPtr<Engine::CommonData::ITreeNode> node);
    bool Remove(System::SharedPtr<FileSpecification> const &item);
    bool Contains(System::SharedPtr<FileSpecification> const &item) const;
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_EmbeddedFileCollection_h_

