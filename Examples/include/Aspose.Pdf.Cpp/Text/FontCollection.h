#ifndef _Aspose_Pdf_Text_FontCollection_h_
#define _Aspose_Pdf_Text_FontCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
/// <code lang="C#"> 
/// // Open document
/// Document doc = new Document(@"D:\Tests\input.pdf");
/// // ensure all fonts declared on page resources are embedded
/// // note that if fonts are declared on form resources they are not accessible from page resources
/// foreach(Aspose.Pdf.Txt.Font font in doc.Pages[1].Resources.Fonts)
/// {
///     if(!font.IsEmbedded)
///         font.IsEmbedded = true;
/// }
/// doc.Save(@"D:\Tests\input.pdf");
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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "FontsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_IsSynchronized();
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Font>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<Font>> array, int32_t index);
    void Add(System::SharedPtr<Font> newFont, System::String &resName);
    
    System::SharedPtr<Font> idx_get(int32_t index);
    System::SharedPtr<Font> idx_get(System::String name);
    
    bool Contains(System::String name);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> get_ResourceDictionary();
    void set_ResourceDictionary(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_FontsDictionary();
    void set_FontsDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    
    FontCollection();
    FontCollection(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> resourceDictionary);
    
    void Delete(int32_t index);
    void Add(System::String resName, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> newFont);
    void Add(System::String resName, System::String baseFontName);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FontCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::IResourceDictionary> pr_ResourceDictionary;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> pr_FontsDictionary;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Font>>> fonts;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Font>>> hash;
    bool resourceMode;
    
    bool get_IsReadOnly();
    
    void BuildHash();
    void Add(System::SharedPtr<Font> const &item);
    bool Remove(System::SharedPtr<Font> const &item);
    bool Contains(System::SharedPtr<Font> const &item) const;
    void Clear();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_FontCollection_h_

