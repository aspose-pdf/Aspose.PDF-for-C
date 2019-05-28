#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>

#include "Text/TextFragment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class AbsorbedCell; } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextMarkupAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace LicenseManagement { class RestrictionChecker; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text fragments collection
/// </summary>
class ASPOSE_PDF_SHARED_API TextFragmentCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
{
    typedef TextFragmentCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::AbsorbedCell;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    
private:

    class TextFragmentsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
    {
        typedef TextFragmentsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextFragment>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextFragment> get_Current() const;
        
        TextFragmentsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> textFragments);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> cursor;
        int32_t viewed;
        System::SharedPtr<Aspose::Pdf::LicenseManagement::RestrictionChecker> rc;
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="TextFragment"/> object elements actually contained in the collection. 
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets a value indicating whether collection is read-only
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Adds the text fragment element at the specified index.
    /// </summary>
    void Add(System::SharedPtr<TextFragment> const &fragment);
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> GetEnumerator();
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void CopyTo(System::ArrayPtr<System::SharedPtr<TextFragment>> array, int32_t index);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(System::SharedPtr<TextFragment> const &item) const;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    bool Remove(System::SharedPtr<TextFragment> const &item);
    
    /// <summary>
    /// Gets the text fragment element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>TextFragment object.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    System::SharedPtr<TextFragment> idx_get(int32_t index);
    
protected:

    System::EventHandler<> OnCollectionChanged;
    
    /// <summary>
    /// Initializes a new instance of <see cref="TextFragmentCollection"/> collection class
    /// </summary>
    TextFragmentCollection();
    
    /// <summary>
    /// Deletes the text fragment element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> fragments;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::LicenseManagement::RestrictionChecker> rc;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


