#ifndef _Aspose_Pdf_Metadata_h_
#define _Aspose_Pdf_Metadata_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    bool get_IsFixedSize();
    bool get_IsReadOnly();
    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Engine::Data::XMP::XmpValue>>> get_Values() const;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XmpPdfAExtensionSchema>>> get_ExtensionFields();
    int32_t get_Count() const;
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    
    void RegisterNamespaceUri(System::String prefix, System::String namespaceUri);
    void RegisterNamespaceUri(System::String prefix, System::String namespaceUri, System::String schemaDescription);
    System::String GetNamespaceUriByPrefix(System::String prefix);
    System::String GetPrefixByNamespaceUri(System::String namespaceUri);
    void Add(System::String const &key, System::SharedPtr<Engine::Data::XMP::XmpValue> const &value);
    void Add(System::String key, int32_t value);
    void Add(System::String key, System::String value);
    void Add(System::String prefix, System::SharedPtr<XmpPdfAExtensionObject> value);
    void Clear();
    bool Contains(System::String const &key) const;
    bool Remove(System::String const &key);
    
    System::SharedPtr<Engine::Data::XMP::XmpValue> idx_get(System::String const &key) const;
    void idx_set(System::String const &key, System::SharedPtr<Engine::Data::XMP::XmpValue> value);
    
    bool ContainsKey(System::String const &key) const;
    bool TryGetValue(System::String const &key, System::SharedPtr<Engine::Data::XMP::XmpValue> &value);
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>> const &item) const;
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>>> array, int32_t arrayIndex);
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>> const &item);
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>> const &item);
    
protected:

    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Engine::Data::XMP::XmpValue>>> get_ValuesInternal() const;
    
    Metadata(System::SharedPtr<System::IO::Stream> stream);
    Metadata(System::SharedPtr<Engine::Data::XMP::XmpDataCollection> _data);
    Metadata();
    
    System::SharedPtr<Engine::Data::XMP::XmpDataCollection> getData();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Metadata"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Engine::Data::XMP::XmpDataCollection> data;
    static const System::String _defaultXmpNamespacePrefix;
    static const System::String _defaultXmpNamespaceUri;
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Engine::Data::XMP::XmpValue>>>> GetEnumerator();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Metadata_h_

