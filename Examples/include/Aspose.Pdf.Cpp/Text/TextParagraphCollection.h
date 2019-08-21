#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
// currently TextParagraphCollection is only available in Reporting services since it is tested on particular document kind

// C# preprocessor directive: #if UNIT_TEST || ASPOSE_PDF_SHAREPOINT || ASPOSE_PDF_REPORTING_SERVICES


#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/eventhandler.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Text/TextParagraph.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextParagraphAbsorber; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text paragraphs collection
/// </summary>
class ASPOSE_PDF_SHARED_API TextParagraphCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>>
{
    typedef TextParagraphCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextParagraphAbsorber;
    
private:

    class TextParagraphsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>>
    {
        typedef TextParagraphsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextParagraph>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextParagraph> get_Current() const;
        
        TextParagraphsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextParagraph>>> textParagraphs, System::SharedPtr<Document> document);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextParagraph>>> cursor;
        int32_t viewed;
        System::SharedPtr<Document> _document;
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="TextParagraph"/> object elements actually contained in the collection. 
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
    /// Adds the text paragraph element at the specified index.
    /// </summary>
    void Add(System::SharedPtr<TextParagraph> const &paragraph);
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextParagraph>>> GetEnumerator();
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void CopyTo(System::ArrayPtr<System::SharedPtr<TextParagraph>> array, int32_t index);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(System::SharedPtr<TextParagraph> const &item) const;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    bool Remove(System::SharedPtr<TextParagraph> const &item);
    
    /// <summary>
    /// Gets the text paragraph element at the specified index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    System::SharedPtr<TextParagraph> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Document> _document;
    
    System::EventHandler<> OnCollectionChanged;
    
    /// <summary>
    /// Initializes a new instance of <see cref="TextParagraphCollection"/> collection class
    /// </summary>
    TextParagraphCollection();
    
    /// <summary>
    /// Deletes the text paragraph element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextParagraph>>> paragraphs;
    System::SharedPtr<System::Object> syncRoot;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



