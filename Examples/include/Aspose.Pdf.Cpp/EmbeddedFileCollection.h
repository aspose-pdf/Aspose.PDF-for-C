#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "FileSpecification.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class Collection; } }
namespace Aspose { namespace Pdf { namespace CommonData { namespace Tree { class NamesTree; } } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class ITreeNode; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing embedded files collection. 
/// </summary>
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

    class EmbeddedFilesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>>
    {
        typedef EmbeddedFilesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<FileSpecification> get_Current() const;
        
        EmbeddedFilesEnumerator(System::SharedPtr<EmbeddedFileCollection> parent, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::Data::IPdfPrimitive>>> list);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Engine::Data::IPdfPrimitive>>> cursor;
        int32_t viewed;
        System::SharedPtr<EmbeddedFileCollection> _parent;
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether access to this collection is synchronized (thread safe).
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to this collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets number of embedded files in collection.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Determines if collection is read only. Always returns false.
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Copies array of FileSpecification object into colleciton. 
    /// </summary>
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
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
    /// Adds file to embedded files with the specified key.
    /// </summary>
    /// <param name="key">Key in the embedded files.</param>
    /// <param name="file">File specification.</param>
    void Add(System::String key, System::SharedPtr<FileSpecification> file);
    /// <summary>
    /// Deletes file from the collection by its key in the collection. 
    /// </summary>
    /// <param name="name"></param>
    void DeleteByKey(System::String key);
    /// <summary>
    /// Delete embedded file by name.
    /// </summary>
    /// <param name="name">Name of the embedded file which should be deleted.</param>
    void Delete(System::String name);
    /// <summary>
    /// Remove all embedded files from document.
    /// </summary>
    void Delete();
    /// <summary>
    /// Removes specified FileSpecification from collection. Not supported.
    /// </summary>
    bool Remove(System::SharedPtr<FileSpecification> const &item);
    /// <summary>
    /// Determines if collection contains specified FileSpecification. Not supported.
    /// </summary>
    bool Contains(System::SharedPtr<FileSpecification> const &item) const;
    /// <summary>
    /// Remove all embedded files from document.
    /// </summary>
    void Clear();
    
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
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<FileSpecification>>> _cache;
    mutable System::SharedPtr<Aspose::Pdf::CommonData::Tree::NamesTree> _namesTree;
    
    System::SharedPtr<Aspose::Pdf::CommonData::Tree::NamesTree> get_NamesTree() const;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> get_List();
    
    /// <summary>
    /// LoadCache procedure.
    /// </summary>
    void LoadCache();
    int32_t GetFileSpecificationKey(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
    System::SharedPtr<FileSpecification> GetFileSpecification(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
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
    /// Check is Embedded Files structure exists and create if does not. 
    /// </summary>
    void EnsureEmbeddedFilesExisit();
    /// <summary>
    /// Converts all dictionaries into objects.
    /// </summary>
    /// <param name="node"></param>
    void ConvertToObjects(System::SharedPtr<Engine::Data::IPdfPrimitive> node);
    void ClearTreeNode(System::SharedPtr<Engine::CommonData::ITreeNode> node);
    
};

} // namespace Pdf
} // namespace Aspose


