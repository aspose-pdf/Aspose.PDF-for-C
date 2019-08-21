#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/details/pointer_collection_helpers.h>
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
class ASPOSE_PDF_SHARED_API PdfXmpMetadata FINAL : public Aspose::Pdf::Facades::SaveableFacade, public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>>
{
    typedef PdfXmpMetadata ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XmpValue>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Facades::PdfXmpMetadataTests;
    
public:

    /// <summary>
    /// Gets the dictionary of extension fields.
    /// </summary>
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
    /// <code lang="C#">
    /// PdfXmpMetadata pxm = new PdfXmpMetadata();
    /// pxm.BindPdf("PdfFile.pdf");
    /// Console.WriteLine("Count = " + pxm.Count);
    /// </code>
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
    /// <code lang="C#">
    /// PdfXmlMetadata xmp = new PdfXmpMetadata();
    /// xmp.BindPdf("input.pdf");
    /// </code>
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
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata("input.pdf");
    /// xmp.RegisterNamespaceURI("xmp", "http://ns.adobe.com/xap/1.0/");
    /// </code>
    /// </example>
    void RegisterNamespaceURI(System::String prefix, System::String namespaceURI);
    /// <summary>
    /// Gets namespace URI by prefix.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <returns>Namespace URI.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata("input.pdf");
    /// Console.WriteLine(xmp.GetNamespaceURIByPrefix("xmp"));
    /// </code>
    /// </example>
    System::String GetNamespaceURIByPrefix(System::String prefix);
    /// <summary>
    /// Gets the prefix by namespace URI.
    /// </summary>
    /// <param name="namespaceURI">Namespace URI.</param>
    /// <returns>The prefix value.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata("input.pdf");
    /// Console.WriteLine(xmp.GetPrefixByNamespaceURI("http://ns.adobe.com/xap/1.0/"));
    /// </code>
    /// </example>
    System::String GetPrefixByNamespaceURI(System::String namespaceURI);
    /// <summary>
    /// Adds value to XMP metadata.
    /// </summary>
    /// <param name="key">The key name.</param>
    /// <param name="value">Value which will be added.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata();
    /// xmp.BindPdf("input.pdf");
    /// xmp.Add(DefaultMetadataProperties.Nickname, "name1");
    /// xmp.Save(TestSettings.GetOutputFile("XMP_AddedValue.pdf"));
    /// </code>
    /// </example>
    void Add(DefaultMetadataProperties const &key, System::SharedPtr<XmpValue> const &value);
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
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata();
    /// xmp.BindPdf("input.pdf");
    /// xmp.Clear();
    /// </code>
    /// </example>
    void Clear();
    /// <summary>
    /// Removes element with specified key.
    /// </summary>
    /// <param name="key">Key of the element which will be deleted.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata();
    /// xmp.BindPdf("input.pdf");
    /// xmp.Remove(DefaultMetadataProperties.Nickname);
    /// </code>
    /// </example>
    void Remove(DefaultMetadataProperties key);
    /// <summary>
    /// Adds new element to the dictionary object.
    /// </summary>
    /// <param name="key">Key of new element.</param>
    /// <param name="value">Value of the element.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata();
    /// xmp.BindPdf("input.pdf");
    /// xmp.Add("xmp:Nickname", "Nickname1");
    /// </code>
    /// </example>
    void Add(System::String const &key, System::SharedPtr<XmpValue> const &value);
    /// <summary>
    /// Adds new element to the dictionary object.
    /// </summary>
    /// <param name="key">Key of new element.</param>
    /// <param name="value">Value of the element.</param>
    void Add(System::String const &key, System::SharedPtr<System::Object> const &value);
    /// <summary>
    /// Checks if dictionary contains the specified key.
    /// </summary>
    /// <param name="key">Key which will be checked.</param>
    /// <returns>True - if the dictionary contains the specified key; otherwise, false.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata();
    /// xmp.BindPdf("input.pdf");
    /// xmp.Add("xmp:Nickname", "Nickname1");
    /// if (!xmp.Contains("xmp:Nickname"))
    ///   Console.WriteLine("Key does not exists");
    /// </code>
    /// </example>
    bool Contains(System::String const &key) const;
    /// <summary>
    /// Checks if dictionary contains the specified property.
    /// </summary>
    /// <param name="property">Property which will be checked.</param>
    /// <returns>True - if the dictionary contains the specified property; otherwise, false.</returns>
    bool Contains(DefaultMetadataProperties const &property) const;
    /// <summary>
    /// Gets enumerator object of the dictionary.
    /// </summary>
    /// <returns>The enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>>> GetEnumerator();
    /// <summary>
    /// Removes key from the dictionary.
    /// </summary>
    /// <param name="key">Key which will be removed.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata xmp = new PdfXmpMetadata();
    /// xmp.BindPdf("input.pdf");
    /// xmp.Remove("xmp:Nickname");
    /// </code>
    /// </example>
    bool Remove(System::String const &key);
    
    /// <summary>
    /// Gets value by key.
    /// </summary>
    /// <param name="key">The key name to get/set.</param>
    /// <returns>Object by key</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata pxm = new PdfXmpMetadata();
    /// pxm.BindPdf("PdfFile.pdf");
    /// Console.WriteLine(pxm["xmp:Nickname"]);
    /// </code>
    /// </example>
    System::SharedPtr<XmpValue> idx_get(System::String const &key) const;
    /// <summary>
    /// Sets value by key.
    /// </summary>
    /// <param name="key">The key name to get/set.</param>
    /// <param name="value">Object by key</param>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata pxm = new PdfXmpMetadata();
    /// pxm.BindPdf("PdfFile.pdf");
    /// Console.WriteLine(pxm["xmp:Nickname"]);
    /// </code>
    /// </example>
    void idx_set(System::String const &key, System::SharedPtr<XmpValue> value);
    
    /// <summary>
    /// Copy metadata into array.
    /// </summary>
    /// <param name="array">The destination array.</param>
    /// <param name="index">The starting index.</param>
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> array, int32_t index);
    
    /// <summary>
    /// Gets value of XMP metadata by key.
    /// </summary>
    /// <param name="key">Key of the value.</param>
    /// <returns>Value from XMP metadata.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata pxm = new PdfXmpMetadata();
    /// pxm.BindPdf("PdfFile.pdf");
    /// Console.WriteLine(pxm[DefaultMetadataProperties.CreatorTool]);
    /// </code>
    /// </example>
    System::SharedPtr<XmpValue> idx_get(DefaultMetadataProperties const &key) const;
    /// <summary>
    /// Gets value of XMP metadata by key.
    /// </summary>
    /// <param name="key">Key of the value.</param>
    /// <param name="value">Value from XMP metadata.</param>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata pxm = new PdfXmpMetadata();
    /// pxm.BindPdf("PdfFile.pdf");
    /// Console.WriteLine(pxm[DefaultMetadataProperties.CreatorTool]);
    /// </code>
    /// </example>
    void idx_set(DefaultMetadataProperties const &key, System::SharedPtr<XmpValue> value);
    
    /// <summary>
    /// Get the XmpMetadata of the input pdf in a xml format.
    /// </summary>
    /// <returns>The bytes of the XmpMetadata.</returns>
    /// <example> 
    /// <code lang="C#">
    /// PdfXmpMetadata pxm = new PdfXmpMetadata();
    /// pxm.BindPdf("PdfFile.pdf");
    /// byte[] data = pxm.GetXmpMetadata();
    /// </code>
    /// </example>
    System::ArrayPtr<uint8_t> GetXmpMetadata();
    /// <summary>
    /// Get a part of the XmpMetadata of the input pdf according to a meta name.
    /// </summary>
    /// <param name="name">Metadata name.</param>
    /// <returns>Bytes of metadata.</returns>
    /// <example>
    /// <code lang="C#">
    /// PdfXmpMetadata pxm = new PdfXmpMetadata();
    /// pxm.BindPdf("PdfFile.pdf");
    /// byte[] data = pxm.GetXmpMetadata("dc:creator");
    /// </code>
    /// </example>
    System::ArrayPtr<uint8_t> GetXmpMetadata(System::String name);
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
    void SetTemplateWeakPtr(unsigned int argument) override;
    
protected:

    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XmpValue>>> get_ValuesInternal() const;
    
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
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


