#ifndef _Aspose_Pdf_Facades_PdfXmpMetadata_h_
#define _Aspose_Pdf_Facades_PdfXmpMetadata_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> get_ExtensionFields();
    bool get_IsFixedSize();
    bool get_IsReadOnly();
    int32_t get_Count() const;
    bool get_IsSynchronized();
    
    PdfXmpMetadata();
    PdfXmpMetadata(System::SharedPtr<Aspose::Pdf::Document> document);
    
    void RegisterNamespaceURI(System::String prefix, System::String namespaceURI);
    System::String GetNamespaceURIByPrefix(System::String prefix);
    System::String GetPrefixByNamespaceURI(System::String namespaceURI);
    void Add(DefaultMetadataProperties key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> value);
    void Add(DefaultMetadataProperties key, System::String value);
    void Add(System::String key, System::String value);
    void Add(System::SharedPtr<XmpPdfAExtensionObject> xmpPdfAExtensionObject, System::String namespacePrefix, System::String namespaceUri, System::String schemaDescription);
    void Clear();
    void Remove(DefaultMetadataProperties key);
    void Remove(System::SharedPtr<XmpPdfAExtensionObject> key);
    void Add(System::String const &key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> const &value);
    bool Contains(System::String key) const;
    bool Remove(System::String const &key);
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> idx_get(System::String const &key) const;
    void idx_set(System::String const &key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> idx_get(DefaultMetadataProperties key) const;
    void idx_set(DefaultMetadataProperties key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> value);
    
    System::ArrayPtr<uint8_t> GetXmpMetadata();
    System::ArrayPtr<uint8_t> GetXmpMetadata(System::String name);
    bool ContainsKey(System::String const &key) const;
    bool Contains(DefaultMetadataProperties property);
    bool TryGetValue(System::String const &key, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue> &value);
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> const &item);
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> const &item) const;
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>> array, int32_t arrayIndex);
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>> const &item);
    
protected:

    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>> get_ValuesInternal() const;
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfXmpMetadata"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static const System::String DefaultXmpNamespacePrefix;
    static const System::String DefaultXmpNamespaceUri;
    
    void RegisterNamespaceURI(System::String prefix, System::String namespaceURI, System::String schemaDescription);
    System::String getStringKey(DefaultMetadataProperties key) const;
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::XMP::XmpValue>>>> GetEnumerator();
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfXmpMetadata_h_

