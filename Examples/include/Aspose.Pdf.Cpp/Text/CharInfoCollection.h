#ifndef _Aspose_Pdf_Text_CharInfoCollection_h_
#define _Aspose_Pdf_Text_CharInfoCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Text/CharInfo.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents CharInfo objects collection.  
/// </summary>
/// <remarks>
/// Provides access to positioning information of text segment characters.
/// </remarks>
/// <example>
/// The example demonstrates how to iterate throught all the characters and retrieve the charact
/// <code></code> 
/// </example>
//<<--REFACTORING: Old code: public sealed class CharInfoCollection : ICollection
class ASPOSE_PDF_SHARED_API CharInfoCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::CharInfo>>
{
    typedef CharInfoCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::CharInfo>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextSegment;
    
private:

    class ASPOSE_PDF_SHARED_API CharInfoEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::CharInfo>>
    {
        typedef CharInfoEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::CharInfo>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<CharInfo> get_Current() const;
        
        CharInfoEnumerator(System::SharedPtr<CharInfoCollection> charInfoCollection);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~CharInfoEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        int32_t current;
        System::SharedPtr<CharInfoCollection> charInfoCollection;
        bool mIsDisposed;
        
    };
    
    
public:

    ///<summary>
    /// Gets the number of <see cref="CharInfo"/> object elements actually contained in the collection. 
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
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<CharInfo>>> GetEnumerator();
    ///<summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    ///</summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<CharInfo>> array, int32_t index);
    
    /// <summary>
    /// Gets the CharInfo element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>CharInfo object.</returns>
    System::SharedPtr<CharInfo> idx_get(int32_t index);
    
protected:

    ///<summary>
    /// Initializes collection object with textSegment object
    ///</summary>
    CharInfoCollection(System::SharedPtr<TextSegment> textSegment);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<CharInfo>>> charInfos;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<TextSegment> textSegment;
    
    /// <summary>
    /// </summary>
    bool get_IsReadOnly();
    
    void Add(System::SharedPtr<CharInfo> const &item);
    bool Remove(System::SharedPtr<CharInfo> const &item);
    bool Contains(System::SharedPtr<CharInfo> const &item) const;
    void Clear();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_CharInfoCollection_h_

