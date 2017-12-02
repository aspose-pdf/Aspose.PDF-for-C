#ifndef _Aspose_Pdf_Text_TextFragmentCollection_h_
#define _Aspose_Pdf_Text_TextFragmentCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>

#include "Text/TextFragment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text fragments collection
/// </summary>
//<<--REFACTORING: Old code: public sealed class TextFragmentCollection : ICollection
class ASPOSE_PDF_SHARED_API TextFragmentCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
{
    typedef TextFragmentCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextFragment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    
private:

    class ASPOSE_PDF_SHARED_API TextFragmentsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextFragment>>
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
        
        virtual ~TextFragmentsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    ///<summary>
    /// Gets the number of <see cref="TextFragment"/> object elements actually contained in the collection. 
    /// </summary>
    int32_t get_Count() const;
    ///<summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    ///<summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    ///</summary>
    bool get_IsSynchronized();
    
    ///<summary>
    /// Returns an enumerator for the entire collection.
    ///</summary>
    ///<returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextFragment>>> GetEnumerator();
    ///<summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    ///</summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<TextFragment>> array, int32_t index);
    
    /// <summary>
    /// Gets the text fragment element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>TextFragment object.</returns>
    System::SharedPtr<TextFragment> idx_get(int32_t index);
    
protected:

    System::EventHandler<System::SharedPtr<System::EventArgs>> OnCollectionChanged;
    
    /// <summary>
    /// Initializes a new instance of <see cref="TextFragmentCollection"/> collection class
    /// </summary>
    TextFragmentCollection();
    
    /// <summary>
    /// Adds the text fragment element at the specified index.
    /// </summary>
    void Add(System::SharedPtr<TextFragment> const &fragment);
    /// <summary>
    /// Deletes the text fragment element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> fragments;
    System::SharedPtr<System::Object> syncRoot;
    
    bool get_IsReadOnly();
    
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<TextFragment> const &item);
    /// <summary>
    /// </summary>
    void Clear();
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<TextFragment> const &item) const;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextFragmentCollection_h_

