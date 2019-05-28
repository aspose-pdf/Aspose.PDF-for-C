#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerator.h>
#include <system/collections/idictionary.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "XForm.h"
#include "Data/IPdfPrimitive.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonOptionField; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class RestrictionChecker; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Annotation appearance dictionary specifying how the annotation shall be presented visually on the page.
/// </summary>
class ASPOSE_PDF_SHARED_API AppearanceDictionary FINAL : public System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XForm>>
{
    typedef AppearanceDictionary ThisType;
    typedef System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Pdf::XForm>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    
protected:

    class AppearanceKey : public System::Object
    {
        typedef AppearanceKey ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets length of the key.
        /// </summary>
        int32_t get_Length();
        
        /// <summary>
        /// Gets hash code of the key.
        /// </summary>
        /// <returns>Hash code.</returns>
        virtual int32_t GetHashCode();
        /// <summary>
        /// Check two key for the equality.
        /// </summary>
        /// <param name="obj">Other key to compare. </param>
        /// <returns>true if keys are equal.</returns>
        virtual bool Equals(System::SharedPtr<System::Object> obj);
        
        /// <summary>
        /// Constucts appearance key from strign array.
        /// </summary>
        /// <param name="data">Array of string which is base for key.</param>
        AppearanceKey(System::ArrayPtr<System::String> data);
        /// <summary>
        /// Constructs appearance key from string (splitting string by '.' character).
        /// </summary>
        /// <param name="key">String which is base for key.</param>
        AppearanceKey(System::String key);
        /// <summary>
        /// Constructs appearance key by PDFName.
        /// </summary>
        /// <param name="name">PdfName which contains key.</param>
        AppearanceKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> name);
        
        /// <summary>
        /// Gets item of the key by item's index.
        /// </summary>
        /// <param name="index">Index of the item to retreive.</param>
        /// <returns>Retreived item.</returns>
        System::String idx_get(int32_t index);
        
        /// <summary>
        /// Converts key into string.
        /// </summary>
        /// <returns>String representation of the key (items are separated by dots '.').</returns>
        virtual System::String ToString();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::ArrayPtr<System::String> data;
        
    };
    
    
private:

    class AppearanceDictionaryEnumerator : public System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::XForm>>>
    {
        typedef AppearanceDictionaryEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::XForm>>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> get_Current() const;
        
        AppearanceDictionaryEnumerator(System::SharedPtr<AppearanceDictionary> bridge);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>>> enumerator;
        int32_t viewed;
        System::SharedPtr<AppearanceDictionary> _bridge;
        System::SharedPtr<Aspose::Pdf::LicenseManagement::RestrictionChecker> rc;
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether dictionary is read-only.
    /// </summary>
    bool get_IsReadOnly();
    /// <summary>
    /// Gets a value indicating whether dictionary has a fixed size.
    /// </summary>
    bool get_IsFixedSize();
    /// <summary>
    /// Gets keys of the dictionary. If appearance dictionary has subditionaries, then <see cref="Keys"/> contains (N|R|D).state values,
    /// where N - normal appearance, R - rollover appearance, D - down appearance and state - the name of the state
    /// (e.g. On, Off for checkboxes).
    /// </summary>
    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_Keys() const;
    /// <summary>
    /// Gets the list of the dictionary values. 
    /// Result collection contains the list of XForm objects.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XForm>>> get_Values() const;
    /// <summary>
    /// Gets a value indicating whether access to the dictionary is synchronized (thread safe).
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets an object that can be used to synchronize access to the dictionary.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets the number of elements contained in the dictionary. 
    /// </summary>
    int32_t get_Count() const;
    
    /// <summary>
    /// Removes all elements from the dictionary.
    /// </summary>
    void Clear();
    /// <summary>
    /// Returns an IDictionaryEnumerator object for the dictionary.
    /// </summary>
    /// <returns>Enumerator of the dictionary.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>>> GetEnumerator();
    /// <summary>
    /// Copies the elements of the dictionary to an Array, starting at a particular Array index.
    /// </summary>
    /// <param name="array">Array where items must be copied.</param>
    /// <param name="index">Index where items must be copied.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<XForm>> array, int32_t index);
    
    /// <summary>
    /// Represents convenient form for getting appearance streams.
    /// </summary>
    /// <param name="key">
    /// Represents path to appearance stream. 
    /// If appearance dictionary has subdictionaries, then path must contain 2 parts (<see cref="Keys"/>), 
    /// else path has only one part.
    /// </param>
    /// <returns>
    /// XForm object (appearance stream) which corresponds to the given key.
    /// </returns>
    /// 
    System::SharedPtr<XForm> idx_get(System::String const &key) const;
    /// <summary>
    /// Represents convenient form for getting appearance streams.
    /// </summary>
    /// <param name="key">
    /// Represents path to appearance stream. 
    /// If appearance dictionary has subdictionaries, then path must contain 2 parts (<see cref="Keys"/>), 
    /// else path has only one part.
    /// </param>
    /// <returns>
    /// XForm object (appearance stream) which corresponds to the given key.
    /// </returns>
    /// 
    void idx_set(System::String const &key, System::SharedPtr<XForm> value);
    
    /// <summary>
    /// Add X form for specifed key.
    /// </summary>
    /// <param name="key">
    /// Element key.
    /// </param>
    /// <param name="value">
    /// XForm object value.
    /// </param>
    void Add(System::String const &key, System::SharedPtr<XForm> const &value);
    /// <summary>
    /// Determines does this dictionary contasins specified key.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <returns>true if key is found.</returns>
    bool ContainsKey(System::String const &key) const;
    /// <summary>
    /// Removes key from the dictionary.
    /// </summary>
    /// <param name="key">Key to be removed from the dictionary.</param>
    /// <returns>true if key was successfully removed.</returns>
    bool Remove(System::String const &key);
    /// <summary>
    /// Tries to find key in the dictionary and retreives value if found.
    /// </summary>
    /// <param name="key">Key to search in the dictionary.</param>
    /// <param name="value">Retreived value.</param>
    /// <returns>true if key was found.</returns>
    bool TryGetValue(System::String const &key, System::SharedPtr<XForm>& value);
    /// <summary>
    /// Adds pair with key and value into the dictionary.
    /// </summary>
    /// <param name="item">Item to be added.</param>
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> const &item);
    /// <summary>
    /// Checks does specified key-value pair is contained in the dictionary.
    /// </summary>
    /// <param name="item">Key-value pair.</param>
    /// <returns>true if this pauir was found.</returns>
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> const &item) const;
    /// <summary>
    /// Copies the elements of the ICollection to an Array, starting at a particular Array index.
    /// </summary>
    /// <param name="array">The one-dimensional Array that is the destination of the elements copied from ICollection. The Array must have zero-based indexing.</param>
    /// <param name="arrayIndex">The zero-based index in array at which copying begins.</param>
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>>> array, int32_t arrayIndex);
    /// <summary>
    /// Removes key/value pair from the colleciton.
    /// </summary>
    /// <param name="item">Key/value pair to be removed.</param>
    /// <returns>true if pair was found and removed.</returns>
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XForm>> const &item);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict;
    
    System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_KeysInternal() const;
    System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<XForm>>> get_ValuesInternal() const;
    
    AppearanceDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    
    /// <summary>
    /// Gets form by the key.
    /// </summary>
    /// <param name="key">String array whcih is key of the form.</param>
    /// <returns>Retreived form.</returns>
    System::SharedPtr<XForm> getForm(System::ArrayPtr<System::String> key);
    /// <summary>
    /// Sets the form for given key.
    /// </summary>
    /// <param name="key">Key for the form.</param>
    /// <param name="form">Form which will be associated with the key.</param>
    void setForm(System::ArrayPtr<System::String> key, System::SharedPtr<XForm> form);
    /// <summary>
    /// Retreives form by the string key.
    /// </summary>
    /// <param name="key">String key.</param>
    /// <returns>Retreived form.</returns>
    System::SharedPtr<XForm> getForm(System::String key);
    /// <summary>
    /// Sets form for given key.
    /// </summary>
    /// <param name="key">String key.</param>
    /// <param name="form">Form to be associated with the key.</param>
    void setForm(System::String key, System::SharedPtr<XForm> form);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::SharedPtr<AppearanceDictionary::AppearanceKey>, System::SharedPtr<XForm>>> _cache;
    System::SharedPtr<System::Object> syncRoot;
    
    System::SharedPtr<XForm> getForm(System::SharedPtr<AppearanceDictionary::AppearanceKey> key) const;
    void setForm(System::SharedPtr<AppearanceDictionary::AppearanceKey> key, System::SharedPtr<XForm> form);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


