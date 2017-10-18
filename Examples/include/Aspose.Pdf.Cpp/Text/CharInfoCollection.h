#ifndef _Aspose_Pdf_Text_CharInfoCollection_h_
#define _Aspose_Pdf_Text_CharInfoCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
/// <code lang="C#"> 
/// //open document
/// Document pdfDocument = new Document(inFile);
/// //create TextFragmentAbsorber object to collect all the text objects of the page
/// TextFragmentAbsorber textFragmentAbsorber = new TextFragmentAbsorber();
/// //accept the absorber for all the pages
/// pdfDocument.Pages[1].Accept(textFragmentAbsorber);
/// //get the extracted text fragments
/// TextFragmentCollection textFragmentCollection = textFragmentAbsorber.TextFragments;
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "CharInfoEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        int32_t current;
        System::SharedPtr<CharInfoCollection> charInfoCollection;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<CharInfo>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<CharInfo>> array, int32_t index);
    
    System::SharedPtr<CharInfo> idx_get(int32_t index);
    
protected:

    CharInfoCollection(System::SharedPtr<TextSegment> textSegment);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CharInfoCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::SharedPtr<CharInfo>>> charInfos;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<TextSegment> textSegment;
    
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

