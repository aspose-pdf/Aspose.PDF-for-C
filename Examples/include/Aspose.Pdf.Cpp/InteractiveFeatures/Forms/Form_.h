#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_Form__h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_Form__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.
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
        
    };
    
    
public:

    /// <summary>
    /// Returns true if object is thread-safe.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Returns synchronization object.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets number of the fields on this form.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Gets default resources placed on this form.
    /// </summary>
    System::SharedPtr<Resources> get_DefaultResources();
    /// <summary>
    /// Gets or sets default appearance of the form (object which describes default font, text size and color for fields on the form).
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> get_DefaultAppearance();
    /// <summary>
    /// Gets or sets default appearance of the form (object which describes default font, text size and color for fields on the form).
    /// </summary>
    void set_DefaultAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::DefaultAppearance> value);
    /// <summary>
    /// Gets XFA data of the form (if presents).
    /// </summary>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::XFA> get_XFA();
    /// <summary>
    /// Gets type of the form. Possible values are: Standard, Static, Dynamic.
    /// </summary>
    FormType get_Type();
    /// <summary>
    /// Gets type of the form. Possible values are: Standard, Static, Dynamic.
    /// </summary>
    void set_Type(FormType value);
    /// <summary>
    /// Gets list of all fields in lowest level of hierarhical form.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Field>> get_Fields();
    
    void CopyTo(System::ArrayPtr<System::SharedPtr<Field>> array, int32_t index);
    /// <summary>
    /// Gets enumeration of form fields.
    /// </summary>
    /// <returns>Field enumerator.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> GetEnumerator();
    /// <summary>
    /// Adds field on the form.
    /// </summary>
    /// <param name="field">Field which must be added.</param>
    /// <param name="pageNumber">Page index where added field will be placed.</param>
    void Add(System::SharedPtr<Field> field, int32_t pageNumber);
    /// <summary>
    /// Adds field on the form.
    /// </summary>
    /// <param name="field">Field which must be added.</param>
    void Add(System::SharedPtr<Field> field);
    /// <summary>
    /// Delete field from the form.
    /// </summary>
    /// <param name="field">Field which must be deleted.</param>
    void Delete(System::SharedPtr<Field> field);
    /// <summary>
    /// Deletes field from the form by its name.
    /// </summary>
    /// <param name="fieldName">Name of the filed which must be deleted.</param>
    void Delete(System::String fieldName);
    /// <summary>
    /// Removes all form fields and place their values directly on the page.
    /// </summary>
    void Flatten();
    
    /// <summary>
    /// Gets field of the form by field name. Throws excpetion if the field was not found.
    /// </summary>
    /// <param name="name">Name of the field.</param>
    /// <returns>Retreived field.</returns>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> idx_get(System::String name);
    /// <summary>
    /// Gets field of the form by field index.
    /// </summary>
    /// <param name="index">Index of the field.</param>
    /// <returns>Retreived field.</returns>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> idx_get(int32_t index);
    
    /// <summary>
    /// Adds new field to the form; If this field is already placed on other or this form, the copy of field is created. 
    /// </summary>
    /// <param name="field">Field name.</param>
    /// <param name="partialName">Name of field on the form.</param>
    /// <param name="pageNumber">Page number where field will be added.</param>
    /// <returns>Added field returned. If copy of the field was created it will be returned.</returns>
    System::SharedPtr<Field> Add(System::SharedPtr<Field> field, System::String partialName, int32_t pageNumber);
    /// <summary>
    /// Adds additional appearance of the field to specified page of the document in the specified location. 
    /// </summary>
    /// <param name="field">Field which appearance should be added on form.</param>
    /// <param name="pageNumber">Number of the page where field must be placed.</param>
    /// <param name="rect">Rectangle where field will be placed.</param>
    void AddFieldAppearance(System::SharedPtr<Field> field, int32_t pageNumber, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Sets XFA of the form to specified value.
    /// </summary>
    /// <param name="xml">Xml document which concains new XFA data.</param>
    void AssignXfa(System::SharedPtr<System::Xml::XmlDocument> xml);
    /// <summary>
    /// Returns fields inside of specified rectangle.
    /// </summary>
    /// <param name="rect">Rectangle where fields should be found.</param>
    /// <returns>Array with found fields.</returns>
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
    /// <summary>
    /// Clears cashed fields. This is required when form is flatteing.
    /// </summary>
    void ClearCache();
    
    Form(System::SharedPtr<Document> document);
    
    /// <summary>
    /// Searches field by field name. Returns null if field was not found.
    /// </summary>
    /// <param name="name">Field name.</param>
    /// <returns>Field object.</returns>
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> get(System::String name);
    System::SharedPtr<Field> findField(System::String name);
    System::SharedPtr<Field> remove(System::String name);
    void addFieldToAcroForm(System::SharedPtr<Field> field);
    System::SharedPtr<Field> duplicateField(System::SharedPtr<Field> field);
    void removeFieldFromAnnots(System::SharedPtr<Field> removedField);
    System::SharedPtr<Resources> CreateDefaultResources();
    void UpdateStaticFormAppearance(int32_t pageIndex);
    /// <summary>
    /// Recalculates calculated fields of the form.
    /// </summary>
    /// <returns>true if at least one field was changed.</returns>
    bool Recalculate();
    System::Object::shared_members_type GetSharedMembers() override;
    
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
    /// <summary>
    /// Adds field on 1st page of the document.
    /// </summary>
    /// <param name="item">Field to be added.</param>
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

