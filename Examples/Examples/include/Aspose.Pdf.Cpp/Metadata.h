#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/collections/ienumerator.h>
#include <system/collections/idictionary.h>
#include <system/collections/icollection.h>

#include "Data/XMP/XmpValue.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_6; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpDataCollection; } } } } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionSchema; } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionObject; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Provides access to XMP metadata stream.
/// </summary>
class ASPOSE_PDF_SHARED_API Metadata FINAL : public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>>
{
    typedef Metadata ThisType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_6;
    
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
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XmpValue>>> get_Values() const;
    /// <summary>
    /// Gets the dictionary of extension fields.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> get_ExtensionFields();
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
    void Add(System::String const &key, System::SharedPtr<XmpValue> const &value);
    /// <summary>
    /// Adds value to metadata.
    /// </summary>
    /// <param name="key">The key to add.</param>
    /// <param name="value">Value which will be added.</param>
    void Add(System::String const &key, System::SharedPtr<System::Object> const &value);
    /// <summary>
    /// Adds pdf extension to metadata.
    /// </summary>
    /// <param name="prefix">The prefix of extension.</param>
    /// <param name="value">Value which will be added.</param>
    void Add(System::String const &prefix, System::SharedPtr<XmpPdfAExtensionObject> const &value);
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
    /// Returns dictionary enumerator.
    /// </summary>
    /// <returns>Enumerator.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>>> GetEnumerator();
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
    System::SharedPtr<XmpValue> idx_get(System::String const &key) const;
    /// <summary>
    /// Gets or sets data from metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <returns>Metadata object.</returns>
    void idx_set(System::String const &key, System::SharedPtr<XmpValue> value);
    
    /// <summary>
    /// Copies elements of the collection into array.
    /// </summary>
    /// <param name="array">Destination array.</param>
    /// <param name="index">Starting index.</param>
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> array, int32_t index);
    /// <summary>
    /// Determines does this dictionary contasins specified key.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <returns>true if key is found.</returns>
    bool ContainsKey(System::String const &key) const;
    /// <summary>
    /// Tries to find key in the dictionary and retreives value if found.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <param name="value">Retreived value.</param>
    /// <returns>true if key was found.</returns>
    bool TryGetValue(System::String const &key, System::SharedPtr<XmpValue>& value);
    /// <summary>
    /// Adds pair with key and value into the dictionary.
    /// </summary>
    /// <param name="item">Item to be added.</param>
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> const &item);
    /// <summary>
    /// Checks does specified key-value pair is contained in the dictionary.
    /// </summary>
    /// <param name="item">Key-value pair.</param>
    /// <returns>true if this pauir was found.</returns>
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> const &item) const;
    /// <summary>
    /// Removes key/value pair from the colleciton.
    /// </summary>
    /// <param name="item">Key/value pair to be removed.</param>
    /// <returns>true if pair was found and removed.</returns>
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> const &item);
    
protected:

    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XmpValue>>> get_ValuesInternal() const;
    
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
    
};

} // namespace Pdf
} // namespace Aspose


