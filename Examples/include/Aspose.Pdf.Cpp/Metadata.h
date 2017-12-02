#ifndef _Aspose_Pdf_Metadata_h_
#define _Aspose_Pdf_Metadata_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerator.h>
#include <system/collections/idictionary.h>
#include <system/collections/icollection.h>

#include "Data/XMP/XmpValue.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpDataCollection; } } } } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionSchema; } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionObject; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Provides access to XMP metadata stream.
/// </summary>
class ASPOSE_PDF_SHARED_API Metadata FINAL : public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>
{
    typedef Metadata ThisType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Checks if colleciton has fixed size.
    /// </summary>
    bool get_IsFixedSize();
    /// <summary>
    /// Checks if collection is read-only.
    /// </summary>
    bool get_IsReadOnly();
    /// <summary>
    /// Gets collection of metadata keys.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const;
    /// <summary>
    /// Gets values in the metadata.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Engine::Data::XMP::XmpValue>>> get_Values() const;
    /// <summary>
    /// Gets the dictionary of extension fields.
    /// </summary>
    //<<--REFACTORING: Old code: public IDictionary ExtensionFields
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> get_ExtensionFields();
    /// <summary>
    /// Copies elements of the collection into array.
    /// </summary>
    /// <param name="array">Destination array.</param>
    /// <param name="index">Starting index.</param>
    /*
            public void CopyTo(System.Array array, int index)
            {
                //Values.CopyTo(array, index);
                data.CopyTo(array, index);
            }*/
    /// <summary>
    /// Gets count of elements in the collection.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Checks if collection is synchronized.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets collection synchronization object.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    
    /// <summary>
    /// Registers namespace URI.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <param name="namespaceUri">The value of namespace URI.</param>
    void RegisterNamespaceUri(System::String prefix, System::String namespaceUri);
    /// <summary>
    /// Registers namespace URI.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <param name="namespaceUri">The value of namespace URI.</param>
    /// <param name="schemaDescription">The value of schema description.</param>
    void RegisterNamespaceUri(System::String prefix, System::String namespaceUri, System::String schemaDescription);
    /// <summary>
    /// Returns  namespace URI by prefix.
    /// </summary>
    /// <param name="prefix">The value of prefix.</param>
    /// <returns>The value of namespace URI.</returns>
    System::String GetNamespaceUriByPrefix(System::String prefix);
    /// <summary>
    /// Returns prefix by namespace URI.
    /// </summary>
    /// <param name="namespaceUri">Namespace URI.</param>
    /// <returns>The value of prefix.</returns>
    System::String GetPrefixByNamespaceUri(System::String namespaceUri);
    /// <summary>
    /// Adds value to metadata.
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">Value which will be added.</param>
    void Add(System::String const &key, System::SharedPtr<Engine::Data::XMP::XmpValue> const &value);
    /// <summary>
    /// Adds value to metadata. 
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">Integer value which will be added.</param>
    void Add(System::String key, int32_t value);
    /// <summary>
    /// Adds value to metadata.
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">String vlaue which will be added.</param>
    void Add(System::String key, System::String value);
    /// <summary>
    /// Adds pdf extension to metadata.
    /// </summary>
    /// <param name="prefix">The prefix of extension.</param>
    /// <param name="value">Value which will be added.</param>
    void Add(System::String prefix, System::SharedPtr<XmpPdfAExtensionObject> value);
    /// <summary>
    /// Clears metadata.
    /// </summary>
    void Clear();
    /// <summary>
    /// Checks does key is contained in metadata.
    /// </summary>
    /// <param name="key">The key of entry to find.</param>
    /// <returns>True if key is contained in the metadata.</returns>
    bool Contains(System::String const &key) const;
    /// <summary>
    /// Removes entry from metadata. 
    /// </summary>
    /// <param name="key">The key of entry to remove.</param>
    bool Remove(System::String const &key);
    
    /// <summary>
    /// Gets or sets data from metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <returns>Metadata object.</returns>
    System::SharedPtr<Engine::Data::XMP::XmpValue> idx_get(System::String const &key) const;
    /// <summary>
    /// Gets or sets data from metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <returns>Metadata object.</returns>
    void idx_set(System::String const &key, System::SharedPtr<Engine::Data::XMP::XmpValue> value);
    
    bool ContainsKey(System::String const &key) const;
    bool TryGetValue(System::String const &key, System::SharedPtr<Engine::Data::XMP::XmpValue>& value);
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>> const &item) const;
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>>> array, int32_t arrayIndex);
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>> const &item);
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>> const &item);
    
protected:

    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Engine::Data::XMP::XmpValue>>> get_ValuesInternal() const;
    
    /// <summary>
    /// Constructor of the Metadata.
    /// </summary>
    /// <param name="stream"></param>
    Metadata(System::SharedPtr<System::IO::Stream> stream);
    Metadata(System::SharedPtr<Engine::Data::XMP::XmpDataCollection> _data);
    /// <summary>
    /// Creates empty metadata object.
    /// </summary>
    Metadata();
    
    /// <summary>
    /// Returns XmpDataCollection object.
    /// </summary>
    /// <returns>Metadata object.</returns>
    System::SharedPtr<Engine::Data::XMP::XmpDataCollection> getData();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::Data::XMP::XmpDataCollection> data;
    static const System::String _defaultXmpNamespacePrefix;
    static const System::String _defaultXmpNamespaceUri;
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>>>> GetEnumerator();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Metadata_h_

