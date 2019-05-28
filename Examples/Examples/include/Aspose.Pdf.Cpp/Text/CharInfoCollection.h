#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Text/CharInfo_.h"
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
/// <code lang="C#"> 
/// //open document
/// Document pdfDocument = new Document(inFile);
/// //create TextFragmentAbsorber object to collect all the text objects of the page
/// TextFragmentAbsorber textFragmentAbsorber = new TextFragmentAbsorber();
/// //accept the absorber for all the pages
/// pdfDocument.Pages[1].Accept(textFragmentAbsorber);
/// //get the extracted text fragments
/// TextFragmentCollection textFragmentCollection = textFragmentAbsorber.TextFragments;
///             
/// //loop through the fragments
/// foreach (TextFragment textFragment in textFragmentCollection)
/// {
///     //loop through the segments
///     foreach (TextSegment textSegment in textFragment.Segments)
///     {
///         //loop through the characters
///         for (int i = 1; i &lt;= textSegment.Text.Length; i++)
///         {
///             CharInfo charInfo = textSegment.Characters[i];
/// 
///             // print character position and rectangle info
///             Console.WriteLine("XIndent : {0} ", charInfo.Position.XIndent);
///             Console.WriteLine("YIndent : {0} ", charInfo.Position.YIndent);
///             Console.WriteLine("Width : {0} ", charInfo.Rectangle.Width);
///             Console.WriteLine("Height : {0} ", charInfo.Rectangle.Height);
///         }
///     }
/// }
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API CharInfoCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::CharInfo>>
{
    typedef CharInfoCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::CharInfo>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextSegment;
    
private:

    class CharInfoEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::CharInfo>>
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
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        int32_t current;
        System::SharedPtr<CharInfoCollection> charInfoCollection;
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="CharInfo"/> object elements actually contained in the collection. 
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
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<CharInfo>>> GetEnumerator();
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void CopyTo(System::ArrayPtr<System::SharedPtr<CharInfo>> array, int32_t index);
    /// <summary>
    /// Collection is read-only. Always throws NotImplementedException.
    /// </summary>
    /// <param name="item"></param>
    void Add(System::SharedPtr<CharInfo> const &item);
    /// <summary>
    /// Collection is read-only. Always throws NotImplementedException.
    /// </summary>
    void Clear();
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(System::SharedPtr<CharInfo> const &item) const;
    /// <summary>
    /// Collection is read-only. Always throws NotImplementedException.
    /// </summary>
    /// <param name="item"></param>
    bool Remove(System::SharedPtr<CharInfo> const &item);
    
    /// <summary>
    /// Gets the CharInfo element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>CharInfo object.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    System::SharedPtr<CharInfo> idx_get(int32_t index);
    
protected:

    /// <summary>
    /// Initializes collection object with textSegment object
    /// </summary>
    CharInfoCollection(System::SharedPtr<TextSegment> textSegment);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<CharInfo>>> charInfos;
    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<TextSegment> textSegment;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


