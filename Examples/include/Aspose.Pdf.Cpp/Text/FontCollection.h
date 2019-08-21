#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Text/Font.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class FontUtilities; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentCIDType2FontContentUpdater; } } } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class RedactionAnnotation; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class TextElement; } } }
namespace Aspose { namespace Pdf { namespace Text { class FontAbsorber; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class C128Barcode; } } }
namespace Aspose { namespace Pdf { namespace Forms { class CheckboxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonOptionField; } } }
namespace Aspose { namespace Pdf { class TextStamp; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { namespace Forms { class TextModel; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
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
/// For example, in resources with <see cref="Resources::Fonts"/> property. 
/// </remarks> 
/// <example>
/// The example demonstrates how to make all font declared on page as embedded.
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// 
/// // ensure all fonts declared on page resources are embedded
/// // note that if fonts are declared on form resources they are not accessible from page resources
/// foreach(Aspose.Pdf.Txt.Font font in doc.Pages[1].Resources.Fonts)
/// {
///     if(!font.IsEmbedded)
///         font.IsEmbedded = true;
/// }
/// 
/// doc.Save(@"D:\Tests\input.pdf");
/// </code> 
/// </example>
class ASPOSE_PDF_SHARED_API FontCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::Font>>
{
    typedef FontCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::Font>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::PageModel::TextElement;
    friend class Aspose::Pdf::Text::FontAbsorber;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::C128Barcode;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::TextStamp;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    
private:

    class FontsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::Font>>
    {
        typedef FontsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::Font>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Font> get_Current() const;
        
        FontsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Font>>> fonts, System::SharedPtr<Document> doc);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> cursor;
        int32_t viewed;
        System::SharedPtr<Document> _licensedDoc;
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of <see cref="Font"/> object elements actually contained in the collection. 
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
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> GetEnumerator();
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
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
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
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
    bool Contains(System::String const &name) const;
    /// <summary>
    /// Adds Font into collection.
    /// </summary>
    /// <param name="item">Font to add into collection</param>
    void Add(System::SharedPtr<Font> const &item);
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(System::SharedPtr<Font> const &item) const;
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    bool Remove(System::SharedPtr<Font> const &item);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> get_ResourceDictionary();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_FontsDictionary();
    bool get_ResourceMode();
    
    /// <summary>
    /// Initializes empty font collection object
    /// </summary>
    FontCollection(System::SharedPtr<Document> doc);
    /// <summary>
    /// Initializes collection object with resource dictionary object
    /// </summary>
    FontCollection(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resourceDictionary);
    
    /// <summary>
    /// Deletes the font element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes Font with resource name specified
    /// </summary>
    /// <param name="fontResourceName">name of Font resurce</param>
    void Delete(System::String fontResourceName);
    /// <summary>
    /// Clears all the collection contents. To reinitialize collection data
    /// use Init() methods.
    /// </summary>
    void Clear();
    /// <summary>
    /// Initializes collection object with resource dictionary object.
    /// </summary>
    void Init(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resourceDictionary);
    /// <summary>
    /// Initializes collection object with empty resources.
    /// </summary>
    void Init();
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Font>>> GetHash();
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

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> _resourceDictionary;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _fontsDictionary;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Font>>> fonts;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Font>>> hash;
    bool resourceMode;
    bool _isInitialized;
    System::WeakPtr<Document> _licensedDoc;
    
    void BuildHash();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


