#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSourceCollection_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSourceCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "CommonData/Text/Fonts/FontSources/FontSource.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontRegistry; } } } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font sources collection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class FontSourceCollection : ICollection
class ASPOSE_PDF_SHARED_API FontSourceCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSource>>
{
    typedef FontSourceCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSource>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    
private:

    class ASPOSE_PDF_SHARED_API FontSourcesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSource>>
    {
        typedef FontSourcesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSource>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<FontSource> get_Current() const;
        
        FontSourcesEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSource>>> fontSources);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~FontSourcesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSource>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    ///<summary>
    /// Gets the number of <see cref="Font"/> object elements actually contained in the collection. 
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
    /// <returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSource>>> GetEnumerator();
    ///<summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    ///</summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<FontSource>> array, int32_t index);
    /// <summary>
    /// Adds new font source object to the collection.
    /// </summary>
    /// <param name="fontSource">Font source.</param>
    void Add(System::SharedPtr<FontSource> const &fontSource);
    /// <summary>
    /// Clears the font source collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Deletes the font source element.
    /// </summary>
    /// <param name="fontSource">FontSource object that will be deleted.</param>
    void Delete(System::SharedPtr<FontSource> fontSource);
    
    /// <summary>
    /// Gets the font element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>Fout source object.</returns>
    System::SharedPtr<FontSource> idx_get(int32_t index);
    
protected:

    System::EventHandler<System::SharedPtr<System::EventArgs>> CollectionChanged;
    
    ///<summary>
    /// Initializes collection object
    ///</summary>
    FontSourceCollection();
    
    /// <summary>
    /// Deletes the font source element at the specified index.
    /// </summary>
    /// <param name="index">Index of FontSource object within the collection that will be deleted.</param>
    void Delete(int32_t index);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSource>>> fontSources;
    System::SharedPtr<System::Object> syncRoot;
    
    ///<summary>
    ///</summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Deletes the font source element.
    /// </summary>
    /// <param name="fontSource">FontSource object that will be deleted.</param>
    bool Remove(System::SharedPtr<FontSource> const &fontSource);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<FontSource> const &item) const;
    void OnCollectionChanged();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSources_FontSourceCollection_h_

