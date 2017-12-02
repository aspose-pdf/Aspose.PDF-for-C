#ifndef _Aspose_Pdf_Text_FontCollection_h_
#define _Aspose_Pdf_Text_FontCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Text/Font.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class RedactionAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class C128Barcode; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class CheckboxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonOptionField; } } } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextModel; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { class IResourceDictionary; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font collection.
/// </summary>
/// <remarks>
/// Font collections represented by <see cref="FontCollection"/> class are used in several scenarios. 
/// For example, in resources with <see cref="Resources.Fonts"/> property. 
/// </remarks> 
/// <example>
/// The example demonstrates how to make all font declared on page as embedded.
/// 
/// <code>
/// // Open document
/// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"D:\\Tests\\input.pdf");
/// // ensure all fonts declared on page resources are embedded
/// // note that if fonts are declared on form resources they are not accessible from page resources
/// auto font_enumerator = (doc->get_Pages()->idx_get(1)->get_Resources()->get_Fonts())->GetEnumerator();
/// decltype(font_enumerator->get_Current()) font;
/// while (font_enumerator->MoveNext() && (font = font_enumerator->get_Current(), true))
/// {
///     if (!font->get_IsEmbedded())
///     {
///         font->set_IsEmbedded(true);
///     }
/// }
/// doc->Save(L"D:\\Tests\\input.pdf");
/// </code> 
/// </example>
//<<--REFACTORING: Old code: public sealed class FontCollection : ICollection
class ASPOSE_PDF_SHARED_API FontCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::Font>>
{
    typedef FontCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::Font>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::Annotation;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ButtonField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::C128Barcode;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::CheckboxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextModel;
    
private:

    class ASPOSE_PDF_SHARED_API FontsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::Font>>
    {
        typedef FontsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::Font>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Font> get_Current() const;
        
        FontsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Font>>> fonts);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~FontsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> cursor;
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
    ///<returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> GetEnumerator();
    ///<summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    ///</summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<Font>> array, int32_t index);
    /// <summary>
    /// Adds new font to font resources and returns automatically assigned name of font resource.
    /// </summary>
    /// <param name="newFont">Font object.</param>
    /// <param name="resName">The automatically assigned resource item name.</param>
    void Add(System::SharedPtr<Font> newFont, System::String& resName);
    
    /// <summary>
    /// Gets the font element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>Font object.</returns>
    System::SharedPtr<Font> idx_get(int32_t index);
    /// <summary>
    /// Gets font from the collection by font name.
    /// Exception is thrown if font was not found.
    /// </summary>
    /// <param name="name">Name of the font.</param>
    /// <returns>Found font.</returns>
    System::SharedPtr<Font> idx_get(System::String name);
    
    /// <summary>
    /// Checks if font exists in font collection.
    /// </summary>
    /// <param name="name">Font name.</param>
    /// <returns>True in case collection contains the font with specified name.</returns>
    bool Contains(System::String name);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> get_ResourceDictionary();
    void set_ResourceDictionary(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_FontsDictionary();
    void set_FontsDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    
    ///<summary>
    /// Initializes empty font collection object
    ///</summary>
    FontCollection();
    ///<summary>
    /// Initializes collection object with resource dictionary object
    ///</summary>
    FontCollection(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resourceDictionary);
    
    /// <summary>
    /// Deletes the font element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    /// <summary>
    /// Add new font to font collection.
    /// </summary>
    /// <param name="resName"></param>
    /// <param name="newFont"></param>
    void Add(System::String resName, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> newFont);
    /// <summary>
    /// Adds to font resources new font entry with specified base font name. 
    /// </summary>
    /// <param name="resName"></param>
    /// <param name="baseFontName"></param>
    void Add(System::String resName, System::String baseFontName);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> pr_ResourceDictionary;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> pr_FontsDictionary;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Font>>> fonts;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Font>>> hash;
    bool resourceMode;
    
    bool get_IsReadOnly();
    
    void BuildHash();
    /// <summary>
    /// </summary>
    void Add(System::SharedPtr<Font> const &item);
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<Font> const &item);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<Font> const &item) const;
    /// <summary>
    /// </summary>
    void Clear();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_FontCollection_h_

