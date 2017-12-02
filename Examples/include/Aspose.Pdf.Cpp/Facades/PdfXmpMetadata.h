#ifndef _Aspose_Pdf_Facades_PdfXmpMetadata_h_
#define _Aspose_Pdf_Facades_PdfXmpMetadata_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerator.h>
#include <system/collections/idictionary.h>
#include <system/collections/icollection.h>

#include "Facades/Facade.h"
#include "Data/XMP/XmpValue.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfXmpMetadataTests; } } } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionSchema; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { enum class DefaultMetadataProperties; } } }
namespace Aspose { namespace Pdf { class XmpPdfAExtensionObject; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for manipulation with XMP metadata.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfXmpMetadata FINAL : public Aspose::Pdf::Facades::SaveableFacade, public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>
{
    typedef PdfXmpMetadata ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Facades::PdfXmpMetadataTests;
    
public:

    /// <summary>
    /// Gets the dictionary of extension fields.
    /// </summary>
    //<<--REFACTORING: Old code: public IDictionary ExtensionFields
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> get_ExtensionFields();
    /// <summary>
    /// Returns true is collection has fixed size.
    /// </summary>
    bool get_IsFixedSize();
    /// <summary>
    /// Returns true if collection is read-only.
    /// </summary>
    bool get_IsReadOnly();
    /// <summary>
    /// Gets count if items in the collection.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    int32_t get_Count() const;
    /// <summary>
    /// Returns true if collection is synchronized.
    /// </summary>
    bool get_IsSynchronized();
    
    /// <summary>
    /// Constructor for PdfXmpMetadata.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    PdfXmpMetadata();
    /// <summary>
    /// Initializes new <see cref="PdfXmpMetadata"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    PdfXmpMetadata(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Registers the namespace URI.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="namespaceURI">The namespace URI.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void RegisterNamespaceURI(System::String prefix, System::String namespaceURI);
    /// <summary>
    /// Gets namespace URI by prefix.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <returns>Namespace URI.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    System::String GetNamespaceURIByPrefix(System::String prefix);
    /// <summary>
    /// Gets the prefix by namespace URI.
    /// </summary>
    /// <param name="namespaceURI">Namespace URI.</param>
    /// <returns>The prefix value.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    System::String GetPrefixByNamespaceURI(System::String namespaceURI);
    /// <summary>
    /// Adds value to XMP metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <param name="value">Value which will be added.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void Add(DefaultMetadataProperties key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> value);
    /// <summary>
    /// Adds value to XMP metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <param name="value">Value which will be added.</param>
    void Add(DefaultMetadataProperties key, System::String value);
    /// <summary>
    /// Adds string value to metadata. 
    /// </summary>
    /// <param name="key">Key name.</param>
    /// <param name="value">String value.</param>
    void Add(System::String key, System::String value);
    /// <summary>
    /// Adds extension field into metadata.
    /// </summary>
    /// <param name="xmpPdfAExtensionObject">The pdf extension object to add.</param>
    /// <param name="namespacePrefix">The prefix of schema.</param>
    /// <param name="namespaceUri">The namespace uri of schema.</param>
    /// <param name="schemaDescription">The optional description of schema.</param>
    void Add(System::SharedPtr<XmpPdfAExtensionObject> xmpPdfAExtensionObject, System::String namespacePrefix, System::String namespaceUri, System::String schemaDescription);
    /// <summary>
    /// Removes all elements from the object.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void Clear();
    /// <summary>
    /// Removes element with specified key.
    /// </summary>
    /// <param name="key">Key of the element which will be deleted.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void Remove(DefaultMetadataProperties key);
    /// <summary>
    /// Removes pdf extension field.
    /// </summary>
    /// <param name="key">The key of value to remove.</param>
    void Remove(System::SharedPtr<XmpPdfAExtensionObject> key);
    /// <summary>
    /// Adds new element to the dictionary object.
    /// </summary>
    /// <param name="key">Key of new element.</param>
    /// <param name="value">Value of the element.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void Add(System::String const &key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> const &value);
    /// <summary>
    /// Checks if dictionary contains the specified key.
    /// </summary>
    /// <param name="key">Key which will be checked.</param>
    /// <returns>True - if the dictionary contains the specified key; otherwise, false.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool Contains(System::String key) const;
    /// <summary>
    /// Removes key from the dictionary.
    /// </summary>
    /// <param name="key">Key which will be removed.</param>
    /// <example>
    /// <code></code>
    /// </example>
    bool Remove(System::String const &key);
    
    /// <summary>
    /// Gets or sets value by key.
    /// </summary>
    /// <param name="key">The key name to get/set.</param>
    /// <returns>Object by key</returns>
    /// <example>
    /// 
    /// </example>
    System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> idx_get(System::String const &key) const;
    /// <summary>
    /// Gets or sets value by key.
    /// </summary>
    /// <param name="key">The key name to get/set.</param>
    /// <returns>Object by key</returns>
    /// <example>
    /// 
    /// </example>
    void idx_set(System::String const &key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> value);
    /// <summary>
    /// Gets value of XMP metadata by key.
    /// </summary>
    /// <param name="key">Key of the value.</param>
    /// <returns>Value from XMP metadata.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> idx_get(DefaultMetadataProperties key) const;
    /// <summary>
    /// Gets value of XMP metadata by key.
    /// </summary>
    /// <param name="key">Key of the value.</param>
    /// <returns>Value from XMP metadata.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    void idx_set(DefaultMetadataProperties key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> value);
    
    /// <summary>
    /// Get the XmpMetadata of the input pdf in a xml format.
    /// </summary>
    /// <returns>The bytes of the XmpMetadata.</returns>
    /// <example> 
    /// <code></code>
    /// </example>
    System::ArrayPtr<uint8_t> GetXmpMetadata();
    /// <summary>
    /// Get a part of the XmpMetadata of the input pdf according to a meta name.
    /// </summary>
    /// <param name="name">Metadata name.</param>
    /// <returns>Bytes of metadata.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    System::ArrayPtr<uint8_t> GetXmpMetadata(System::String name);
    bool ContainsKey(System::String const &key) const;
    bool Contains(DefaultMetadataProperties property);
    bool TryGetValue(System::String const &key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>& value);
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> const &item);
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> const &item) const;
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>> array, int32_t arrayIndex);
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> const &item);
    
protected:

    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>> get_ValuesInternal() const;
    
private:

    static const System::String DefaultXmpNamespacePrefix;
    static const System::String DefaultXmpNamespaceUri;
    
    /// <summary>
    /// Registers the namespace URI of pdf extension.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="namespaceURI">The namespace URI.</param>
    /// <param name="schemaDescription">The optional description value.</param>
    /// <example>
    /// </example>
    void RegisterNamespaceURI(System::String prefix, System::String namespaceURI, System::String schemaDescription);
    System::String getStringKey(DefaultMetadataProperties key) const;
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>>> GetEnumerator();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfXmpMetadata_h_

