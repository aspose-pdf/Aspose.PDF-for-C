#ifndef _Aspose_Pdf_Text_TextSegmentCollection_h_
#define _Aspose_Pdf_Text_TextSegmentCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/multicast_delegate.h>
#include <system/eventargs.h>
#include <system/event.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>

#include "Text/TextSegment.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextParagraph; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextParagraphAbsorberTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextBuilderTests; } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a text segments collection
/// </summary>
//<<--REFACTORING: Old code: public sealed class TextSegmentCollection : ICollection
class ASPOSE_PDF_SHARED_API TextSegmentCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextSegment>>
{
    typedef TextSegmentCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::TextSegment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    friend class Aspose::Pdf::Tests::Text::TextParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::Text::TextBuilderTests;
    
protected:

    class TextSegmentEventArgs;
    using TextSegmentsEventHandler = System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)>;
    
    
protected:

    class ASPOSE_PDF_SHARED_API TextSegmentEventArgs : public System::EventArgs
    {
        typedef TextSegmentEventArgs ThisType;
        typedef System::EventArgs BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextSegment> Segment;
        
        TextSegmentEventArgs(System::SharedPtr<TextSegment> segment);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API TextSegmentsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextSegment>>
    {
        typedef TextSegmentsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::TextSegment>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<TextSegment> get_Current() const;
        
        TextSegmentsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>> textSegments);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~TextSegmentsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextSegment>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    ///<summary>
    /// Gets the number of <see cref="TextSegment"/> object elements actually contained in the collection. 
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
    
    /// <summary>
    /// Adds the text segment element at the specified index.
    /// </summary>
    /// <param name="segment">Text segment object</param>
    void Add(System::SharedPtr<TextSegment> const &segment);
    ///<summary>
    /// Returns an enumerator for the entire collection.
    ///</summary>
    /// <returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<TextSegment>>> GetEnumerator();
    ///<summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    ///</summary>
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<TextSegment>> array, int32_t index);
    
    /// <summary>
    /// Gets the text segment element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>TextSegment object.</returns>
    System::SharedPtr<TextSegment> idx_get(int32_t index);
    
protected:

    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)> OnItemAdded;
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<TextSegmentCollection::TextSegmentEventArgs>)> OnItemRemoved;
    
    /// <summary>
    /// Initializes a new instance of <see cref="TextSegmentCollection"/> collection class
    /// </summary>
    TextSegmentCollection();
    
    /// <summary>
    /// Deletes the text segment element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    /// <summary>
    /// internal unrestricted version of indexer
    /// </summary>
    System::SharedPtr<TextSegment> GetUnrestricted(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextSegment>>> segments;
    System::SharedPtr<System::Object> syncRoot;
    
    /// <summary>
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<TextSegment> const &item);
    /// <summary>
    /// </summary>
    void Clear();
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<TextSegment> const &item) const;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextSegmentCollection_h_

