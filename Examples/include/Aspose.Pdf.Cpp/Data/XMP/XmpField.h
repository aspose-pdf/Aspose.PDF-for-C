#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.



#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpArray; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpBaseElement; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpDataCollection; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpPacket; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpProperty; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { namespace XMP { class XmpStructure; } } } } }
namespace Aspose { namespace Pdf { enum class XmpFieldType; } }
namespace Aspose { namespace Pdf { class XmpValue; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents XMP field.
/// </summary>
class ASPOSE_PDF_SHARED_API XmpField : public System::Object
{
    typedef XmpField ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpArray;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpBaseElement;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpDataCollection;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpPacket;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpProperty;
    friend class Aspose::Pdf::Engine::Data::XMP::XmpStructure;
    friend ASPOSE_PDF_SHARED_API bool operator ==(System::SharedPtr<XmpField> const &field1, System::SharedPtr<XmpField> const &field2);
    friend ASPOSE_PDF_SHARED_API bool operator !=(System::SharedPtr<XmpField> const &field1, System::SharedPtr<XmpField> const &field2);
    
public:

    /// <summary>
    /// Gets an Empty xmp field.
    /// </summary>
    static System::SharedPtr<XmpField> get_Empty();
    /// <summary>
    /// Gets xml:lang qualifier.
    /// </summary>        
    static System::SharedPtr<XmpField> get_Lang();
    /// <summary>
    /// Gets the prefix.
    /// </summary>
    /// <value>The prefix.</value>
    System::String get_Prefix();
    /// <summary>
    /// Gets the prefix.
    /// </summary>
    /// <value>The prefix.</value>
    void set_Prefix(System::String value);
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    /// <value>The namespace URI.</value>
    System::String get_NamespaceUri();
    /// <summary>
    /// Gets the namespace URI.
    /// </summary>
    /// <value>The namespace URI.</value>
    void set_NamespaceUri(System::String value);
    /// <summary>
    /// Gets the name of the local.
    /// </summary>
    /// <value>The name of the local.</value>
    System::String get_LocalName();
    /// <summary>
    /// Sets the name of the local.
    /// </summary>
    /// <value>The name of the local.</value>
    void set_LocalName(System::String value);
    /// <summary>
    /// Gets the name.
    /// </summary>
    /// <value>The name.</value>
    System::String get_Name();
    /// <summary>
    /// Gets the value.
    /// </summary>
    /// <value>The value.</value>
    System::SharedPtr<XmpValue> get_Value();
    /// <summary>
    /// Gets the type of the field.
    /// </summary>
    /// <value>The type of the field.</value>
    XmpFieldType get_FieldType();
    /// <summary>
    /// Gets a value indicating whether this instance is empty.
    /// </summary>
    /// <value><c>true</c> if this instance is empty; otherwise, <c>false</c>.</value>
    bool get_IsEmpty();
    
    /// <summary>
    /// Indicates whether this instance and a specified object are equal.
    /// </summary>
    /// <returns>
    /// true if obj and this instance are the same type and represent the same value; otherwise, false.
    /// </returns>
    /// <param name="obj">Another object to compare to. </param><filterpriority>2</filterpriority>
    virtual bool Equals(System::SharedPtr<System::Object> obj);
    /// <summary>
    /// Returns a hash code for this instance.
    /// </summary>
    /// <returns>
    /// A hash code for this instance, suitable for use in hashing algorithms and data structures like a hash table. 
    /// </returns>
    virtual int32_t GetHashCode();
    /// <summary>
    /// Gets value as a structure
    /// </summary>
    /// <returns></returns>
    System::ArrayPtr<System::SharedPtr<XmpField>> ToStructure();
    /// <summary>
    /// Gets value as an array.
    /// </summary>
    /// <returns></returns>
    System::ArrayPtr<System::SharedPtr<XmpValue>> ToArray();
    
protected:

    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"/> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="value">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::SharedPtr<System::Object> value);
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"/> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="value">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::SharedPtr<XmpValue> value);
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"/> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="fields">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::ArrayPtr<System::SharedPtr<XmpField>> fields);
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"/> struct.
    /// </summary>
    /// <param name="prefix">The prefix.</param>
    /// <param name="name">The name.</param>
    /// <param name="namespaceUri">The namespace URI.</param>
    /// <param name="value">The value.</param>
    XmpField(System::String prefix, System::String name, System::String namespaceUri, System::ArrayPtr<System::SharedPtr<XmpValue>> value);
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"/> struct.
    /// </summary>
    /// <param name="baseField">The base field.</param>
    /// <param name="value">The value.</param>
    XmpField(System::SharedPtr<XmpField> baseField, System::SharedPtr<XmpValue> value);
    /// <summary>
    /// Initializes a new instance of the <see cref="XmpField"/> struct.
    /// </summary>
    /// <param name="baseField">The base field.</param>
    /// <param name="value">The value.</param>
    XmpField(System::SharedPtr<XmpField> baseField, System::SharedPtr<System::Object> value);
    
    /// <summary>
    /// Sets value of XMP field.
    /// </summary>
    /// <param name="value"></param>
    void SetValue(System::SharedPtr<XmpValue> value);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _prefix;
    System::String _namespaceUri;
    System::String _localName;
    System::SharedPtr<XmpValue> _value;
    static System::SharedPtr<XmpField> EmptyField;
    static System::SharedPtr<XmpField> LangField;
    
    void SetPrefix(System::String value);
    void SetNamespaceUri(System::String value);
    void SetLocalName(System::String value);
    
};

ASPOSE_PDF_SHARED_API bool operator ==(System::SharedPtr<XmpField> const &field1, System::SharedPtr<XmpField> const &field2);
ASPOSE_PDF_SHARED_API bool operator !=(System::SharedPtr<XmpField> const &field1, System::SharedPtr<XmpField> const &field2);

} // namespace Pdf
} // namespace Aspose


