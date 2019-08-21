#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Exceptions;

#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/uri.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/io/memory_stream.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/collections/icollection.h>
#include <system/collections/dictionary.h>
#include <system/array.h>

#include "InteractiveFeatures/Annotations/WidgetAnnotation.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsIterator; } } } } } } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfConverter; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileSignature; } } }
namespace Aspose { namespace Pdf { namespace Forms { class XFA; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ListBoxField; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class XfdfReader; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class XfdfWriter; } } }
namespace Aspose { namespace Pdf { class PageCollection; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class XfaMerge; } }
namespace Aspose { namespace Pdf { namespace Tests { class XfaRendererTests; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v16_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_5; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Forms { enum class FormType; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DefaultAppearance; } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { enum class ApsToXpsSavingType; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace XfaConverter { class XfaParserOptions; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
///   Forms can contain signing information and can be signed or unsigned.
///   Sometimes view of forms in viewer must depend on whether form is signed or not.
///   This enum enumerates possible rendering modes during convertion of form type in regard to sign. 
/// </summary>
class ASPOSE_PDF_SHARED_API Form FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>
{
    typedef Form ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsIterator;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Annotations::XfdfReader;
    friend class Aspose::Pdf::Annotations::XfdfWriter;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::XfaMerge;
    friend class Aspose::Pdf::Tests::XfaRendererTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_5;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    
public:

    enum class SignDependentElementsRenderingModes
    {
        RenderFormAsUnsigned,
        RenderFormAsSigned
    };
    
    
public:

    class ASPOSE_PDF_SHARED_API FlattenSettings : public System::Object
    {
        typedef FlattenSettings ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// If set, all field appearances will be regenerated before flattening. This option may help if field is incorrectly flattened.
        /// This option may decrease performance. By default set to false.
        /// </summary>
        bool get_UpdateAppearances();
        /// <summary>
        /// If set, all field appearances will be regenerated before flattening. This option may help if field is incorrectly flattened.
        /// This option may decrease performance. By default set to false.
        /// </summary>
        void set_UpdateAppearances(bool value);
        /// <summary>
        /// If set, formatting and other JavaScript events will be called. True by default.
        /// </summary>
        bool get_CallEvents();
        /// <summary>
        /// If set, formatting and other JavaScript events will be called. True by default.
        /// </summary>
        void set_CallEvents(bool value);
        /// <summary>
        /// If set, buttons will be removed from flattened document. False by default.
        /// </summary>
        bool get_HideButtons();
        /// <summary>
        /// If set, buttons will be removed from flattened document. False by default.
        /// </summary>
        void set_HideButtons(bool value);
        
        FlattenSettings();
        
    private:
    
        bool _hideButtons;
        bool _updateAppearances;
        bool _callEvents;
        
    };
    
    
protected:

    class FieldsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>
    {
        typedef FieldsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get_Current() const;
        
        FieldsEnumerator(System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> fields);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Document> _document;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> fields;
        int32_t cursor;
        
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
    /// Gets default appearance of the form (object which describes default font, text size and color for fields on the form).
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> get_DefaultAppearance();
    /// <summary>
    /// Sets default appearance of the form (object which describes default font, text size and color for fields on the form).
    /// </summary>
    void set_DefaultAppearance(System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> value);
    /// <summary>
    /// Gets XFA data of the form (if presents).
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Forms::XFA> get_XFA();
    
    Form::SignDependentElementsRenderingModes SignDependentElementsRenderingModeWhenConverted;
    
    /// <summary>
    /// If this property is true the value of NeedsRendering key will be ignored during conversion 
    /// XFA form to Standard form. It is false by default.
    /// </summary>
    bool get_IgnoreNeedsRendering();
    /// <summary>
    /// If this property is true the value of NeedsRendering key will be ignored during conversion 
    /// XFA form to Standard form. It is false by default.
    /// </summary>
    void set_IgnoreNeedsRendering(bool value);
    /// <summary>
    /// If this property is true the "Perms" dictionary will be removed from the pdf document after conversion 
    /// dynamic documents to standard. The "Perms" dictionary can contain a rules that disturb displaying selection of 
    /// mandatory fields in Adobe Acrobat reader.
    /// It is false by default.
    /// </summary>
    bool get_RemovePermission();
    /// <summary>
    /// If this property is true the "Perms" dictionary will be removed from the pdf document after conversion 
    /// dynamic documents to standard. The "Perms" dictionary can contain a rules that disturb displaying selection of 
    /// mandatory fields in Adobe Acrobat reader.
    /// It is false by default.
    /// </summary>
    void set_RemovePermission(bool value);
    /// <summary>
    /// If this property is true then additional red boundary rectangles will be drawn for required Xfa exclGroup elements containers
    /// This property was introduced because absences of analogues for the exclGroup during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    bool get_EmulateRequierdGroups();
    /// <summary>
    /// If this property is true then additional red boundary rectangles will be drawn for required Xfa exclGroup elements containers
    /// This property was introduced because absences of analogues for the exclGroup during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    void set_EmulateRequierdGroups(bool value);
    /// <summary>
    /// Gets type of the form. Possible values are: Standard, Static, Dynamic.
    /// </summary>
    FormType get_Type();
    /// <summary>
    /// Gets type of the form. Possible values are: Standard, Static, Dynamic.
    /// </summary>
    void set_Type(FormType value);
    /// <summary>
    /// Determines if collection is readonly. Always returns false.
    /// </summary>
    bool get_IsReadOnly();
    /// <summary>
    /// Gets list of all fields in lowest level of hierarhical form.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Field>> get_Fields();
    /// <summary>
    /// Allows to set order of field calculation. 
    /// </summary>
    void set_CalculatedFields(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Field>>> value);
    /// <summary>
    /// If set, the document contains at least one signature field. 
    /// </summary>
    bool get_SignaturesExist();
    /// <summary>
    /// If set, the document contains at least one signature field. 
    /// </summary>
    void set_SignaturesExist(bool value);
    /// <summary>
    /// If set, the document contains signatures that may be invalidated if the file is saved (written) in a way that alters its previous contents, 
    /// as opposed to an incremental update.
    /// </summary>
    bool get_SignaturesAppendOnly();
    /// <summary>
    /// If set, the document contains signatures that may be invalidated if the file is saved (written) in a way that alters its previous contents, 
    /// as opposed to an incremental update.
    /// </summary>
    void set_SignaturesAppendOnly(bool value);
    
    /// <summary>
    /// Copies fields placed on the form into array.
    /// </summary>
    /// <param name="array">Array where fields must be placed.</param>
    /// <param name="index">Starting index.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<Field>> array, int32_t index);
    /// <summary>
    /// Gets enumeration of form fields.
    /// </summary>
    /// <returns>Field enumerator.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> GetEnumerator();
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
    void Add(System::SharedPtr<Field> const &field);
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
    /// Adds field on the form.
    /// </summary>
    /// <param name="field">Field which must be added.</param>
    void Add(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> const &field);
    /// <summary>
    /// Deletes all fields from form. Not supported.
    /// </summary>
    void Clear();
    /// <summary>
    /// Determines if field is presented on form..
    /// </summary>
    /// <param name="field">Field to search.</param>
    bool Contains(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> const &field) const;
    /// <summary>
    /// Copies form's fields to array.
    /// </summary>
    /// <param name="array">Array to copy.</param>
    /// <param name="arrayIndex">Index of array's item where copying begins.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> array, int32_t arrayIndex);
    /// <summary>
    /// Deletes field from the form.
    /// </summary>
    /// <param name="field">Field to delete.</param>
    /// <returns>True if field was deleted. False if field was not found on form.</returns>
    bool Remove(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> const &field);
    
    /// <summary>
    /// Gets field of the form by field name. Throws excpetion if the field was not found.
    /// </summary>
    /// <param name="name">Name of the field.</param>
    /// <returns>Retreived field.</returns>
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(System::String name);
    /// <summary>
    /// Gets field of the form by field index.
    /// </summary>
    /// <param name="index">Index of the field.</param>
    /// <returns>Retreived field.</returns>
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(int32_t index);
    
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
    System::SharedPtr<Aspose::Pdf::Forms::XFA> _xfa;
    System::String ApsModelSnapshotFileForTypeConversion;
    System::String ApsModelXpsSnapshotFileForTypeConversion;
    System::String ApsModelPngSnapshotFileForTypeConversion;
    Aspose::Pdf::ApsToXpsSavingType ApsToXpsSavingType;
    bool useRadiobuttonExtendedAttibsWhenConvertedToStandardForm;
    System::String ZipFileToSaveConversionData;
    
    bool get_HasXfa();
    
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> findInHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash, System::String name);
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> getFieldByRemainedName(System::String remainedName, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields);
    void assertDefaultResources();
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetAcroFormFontsDictionary(System::SharedPtr<Document> document);
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
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(System::String name);
    bool IsButton(System::SharedPtr<System::Xml::XmlNode> fieldTemplate);
    void FlattenXfa(System::SharedPtr<Form::FlattenSettings> flattenSettings);
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

    static System::String xfaUri;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Resources> defaultResources;
    System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> defaultAppearance;
    System::SharedPtr<System::Object> _syncDA;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> cache;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash;
    bool pr_IgnoreNeedsRendering;
    bool pr_RemovePermission;
    bool pr_EmulateRequierdGroups;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_AcroForm();
    int32_t get_SignatureFlags();
    void set_SignatureFlags(int32_t value);
    
    static int32_t _signaturesExist;
    static int32_t _signaturesAppendOnly;
    
    static System::String TruncateTrailingBackslash(System::String s);
    static void AddToHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash, System::String name, System::SharedPtr<Field> field);
    void form_assert();
    System::SharedPtr<System::IO::MemoryStream> SaveNodeAsDocumentToStream(System::SharedPtr<System::Xml::XmlNode> node);
    void ConvertDynamicXfaToStaticPdf(System::String apsModelSnapshotTestFileIfNeeded, System::String xpsSnapshotTestFileIfNeeded, System::String xfaPackageFileIfAny);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetAcroFormDrDictionary(System::SharedPtr<Document> document);
    static bool IsMustBeRenderedAsSignedDuringTypeConversion(System::SharedPtr<Form> form);
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::ArrayPtr<uint8_t>>> ExtractXfaImageResources();
    System::SharedPtr<System::IO::Stream> GetXfaImageStream(System::SharedPtr<System::Uri> uri, System::SharedPtr<Aspose::Pdf::XfaConverter::XfaParserOptions> options);
    System::SharedPtr<System::IO::Stream> GetXfaFontStream(System::String resourceId);
    void RemoveXfa();
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(int32_t index);
    System::String getUniqueFieldName(System::String prefix);
    void CollectFields(System::SharedPtr<Field> field, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> list);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> GetFields();
    System::ArrayPtr<System::SharedPtr<Field>> ToArray(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> list);
    System::SharedPtr<Rectangle> Intersect(System::SharedPtr<Rectangle> rect1, System::SharedPtr<Rectangle> rect2) const;
    bool Contains(System::SharedPtr<Rectangle> rect, System::SharedPtr<Rectangle> subRect) const;
    System::String GetFullPath(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    void SetSignatureFlag(int32_t flag);
    void ClearSignatureFlag(int32_t flag);
    void UpdateSignatureFlag(bool value, int32_t flag);
    bool GetSignatureFlag(int32_t flag);
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


