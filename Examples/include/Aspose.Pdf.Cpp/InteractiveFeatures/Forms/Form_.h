#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_Form__h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_Form__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Drawing;

// C# preprocessor directive: #if SUPPORT_ASPOSE_FLOAT2FIXED 

/* C# INACTIVE CODE:
using Float2Fixed;
*/

// C# preprocessor directive: #endif 


#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/io/memory_stream.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/collections/dictionary.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/WidgetAnnotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class XFA; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ComboBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class XfdfReader; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class XfdfWriter; } } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class XfaMerge; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DefaultAppearance; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class FieldHandlerList; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { enum class FormType; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing form object.
/// </summary>
class ASPOSE_PDF_SHARED_API Form FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>
{
    typedef Form ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::XFA;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Field;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ComboBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::XfdfReader;
    friend class Aspose::Pdf::InteractiveFeatures::XfdfWriter;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::XfaMerge;
    
protected:

    class ASPOSE_PDF_SHARED_API FieldsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>
    {
        typedef FieldsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> get_Current() const;
        
        FieldsEnumerator(System::SharedPtr<Document> document, System::SharedPtr<FieldHandlerList> fields);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~FieldsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "FieldsEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<Document> _document;
        System::SharedPtr<FieldHandlerList> fields;
        int32_t cursor;
        bool mIsDisposed;
        
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API XfaTestConversionData : public System::Object
    {
        typedef XfaTestConversionData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<System::IO::MemoryStream> DataStream;
        System::SharedPtr<System::IO::MemoryStream> TemplateStream;
        
        void SaveToZip(System::String outZipFileName, System::SharedPtr<System::Collections::Generic::List<System::String>> fontNames);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "XfaTestConversionData"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
public:

    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    int32_t get_Count() const;
    System::SharedPtr<Resources> get_DefaultResources();
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> get_DefaultAppearance();
    void set_DefaultAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> value);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::XFA> get_XFA();
    FormType get_Type();
    void set_Type(FormType value);
    System::ArrayPtr<System::SharedPtr<Field>> get_Fields();
    
    void CopyTo(System::ArrayPtr<System::SharedPtr<Field>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> GetEnumerator();
    void Add(System::SharedPtr<Field> field, int32_t pageNumber);
    void Add(System::SharedPtr<Field> field);
    void Delete(System::SharedPtr<Field> field);
    void Delete(System::String fieldName);
    void Flatten();
    
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> idx_get(System::String name);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> idx_get(int32_t index);
    
    System::SharedPtr<Field> Add(System::SharedPtr<Field> field, System::String partialName, int32_t pageNumber);
    void AddFieldAppearance(System::SharedPtr<Field> field, int32_t pageNumber, System::SharedPtr<Rectangle> rect);
    void AssignXfa(System::SharedPtr<System::Xml::XmlDocument> xml);
    System::ArrayPtr<System::SharedPtr<Field>> GetFieldsInRect(System::SharedPtr<Rectangle> rect);
    
protected:

    System::WeakPtr<Document> _document;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::XFA> _xfa;
    System::String ApsModelSnapshotFileForTypeConversion;
    System::String ApsModelXpsSnapshotFileForTypeConversion;
    bool useResourceLoadingCallbackWhenConvertedToStandardForm;
    System::String ZipFileToSaveConversionData;
    
    bool get_HasXfa();
    
    static System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> findInHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> hash, System::String name);
    static System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> getFieldByRemainedName(System::String remainedName, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> hash, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> fields);
    void assertDefaultResources();
    void ClearCache();
    
    Form(System::SharedPtr<Document> document);
    
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> get(System::String name);
    System::SharedPtr<Field> findField(System::String name);
    System::SharedPtr<Field> remove(System::String name);
    void addFieldToAcroForm(System::SharedPtr<Field> field);
    System::SharedPtr<Field> duplicateField(System::SharedPtr<Field> field);
    void removeFieldFromAnnots(System::SharedPtr<Field> removedField);
    System::SharedPtr<Resources> CreateDefaultResources();
    void UpdateStaticFormAppearance(int32_t pageIndex);
    bool Recalculate();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Form"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Resources> defaultResources;
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> defaultAppearance;
    System::SharedPtr<System::Object> _syncDA;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Field>, System::SharedPtr<Page>>> artificalPages;
    System::SharedPtr<FieldHandlerList> cache;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> hash;
    
    bool get_IsReadOnly();
    
    static System::String TruncateTrailingBackslash(System::String s);
    static void AddToHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> hash, System::String name, System::SharedPtr<Field> field);
    void assert_();
    void SaveNode(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<System::IO::Stream> stream);
    void ConvertDynamicXfaToStaticPdf(System::String apsModelSnapshotTestFileIfNeeded, System::String xpsSnapshotTestFileIfNeeded, System::String xfaPackageFileIfAny, bool useResourceLoadingCallback);
    System::SharedPtr<System::IO::Stream> GetXfaImageStream(System::String resourceId);
    System::SharedPtr<System::IO::Stream> GetXfaFontStream(System::String resourceId);
    static System::ArrayPtr<uint8_t> GetFontData(System::SharedPtr<Text::Font> font);
    void RemoveXfa();
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> get(int32_t index);
    System::String getUniqueFieldName(System::String prefix);
    void CollectFields(System::SharedPtr<Field> field, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> list);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> GetFields();
    System::ArrayPtr<System::SharedPtr<Field>> ToArray(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> list);
    System::SharedPtr<Rectangle> Intersect(System::SharedPtr<Rectangle> rect1, System::SharedPtr<Rectangle> rect2);
    bool Contains(System::SharedPtr<Rectangle> rect, System::SharedPtr<Rectangle> subRect);
    System::String GetFullPath(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    void Add(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> const &item);
    void Clear();
    bool Contains(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> const &item) const;
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>> array, int32_t arrayIndex);
    bool Remove(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> const &item);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_Form__h_

