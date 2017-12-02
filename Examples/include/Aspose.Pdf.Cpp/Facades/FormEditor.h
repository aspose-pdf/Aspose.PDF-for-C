#ifndef _Aspose_Pdf_Facades_FormEditor_h_
#define _Aspose_Pdf_Facades_FormEditor_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET4CP || NET35CP) 


// C# preprocessor directive: #endif 


#include <xml/xml_node.h>
#include <xml/xml_namespace_manager.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "system/dummy_classes.h"

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormFieldFacade; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class SubmitFormFlag; } } }
namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { namespace Facades { enum class PropertyFlag; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationFlags; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class SubmitFormAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ButtonField; } } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class FieldType; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class FontStyle; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for editing forms (ading/deleting field etc)
/// </summary>
class ASPOSE_PDF_SHARED_API FormEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef FormEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets name of source file.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    System::String get_SrcFileName();
    /// <summary>
    /// Gets or sets name of source file.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_SrcFileName(System::String value);
    /// <summary>
    /// Gets or sets destination file name.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    System::String get_DestFileName();
    /// <summary>
    /// Gets or sets destination file name.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_DestFileName(System::String value);
    /// <summary>
    /// Gets or sets source stream.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    System::SharedPtr<System::IO::Stream> get_SrcStream();
    /// <summary>
    /// Gets or sets source stream.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_SrcStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    void set_ConvertTo(PdfFormat value);
    /// <summary>
    /// Gets or sets destination stream.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    System::SharedPtr<System::IO::Stream> get_DestStream();
    /// <summary>
    /// Gets or sets destination stream.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_DestStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets items which will be added t onewly created list box or combo box. 
    /// <example>
    /// <code></code>
    /// </example>
    /// </summary>
    System::ArrayPtr<System::String> get_Items();
    /// <summary>
    /// Sets items which will be added t onewly created list box or combo box. 
    /// <example>
    /// <code></code>
    /// </example>
    /// </summary>
    void set_Items(System::ArrayPtr<System::String> value);
    /// <summary> Sets options for combo box with export values.</summary>
    /// <example>
    /// <code></code>
    /// </example>
    System::ArrayPtr<System::ArrayPtr<System::String>> get_ExportItems();
    /// <summary> Sets options for combo box with export values.</summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_ExportItems(System::ArrayPtr<System::ArrayPtr<System::String>> value);
    /// <summary>
    /// Sets visual attributes of the field.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    System::SharedPtr<FormFieldFacade> get_Facade();
    /// <summary>
    /// Sets visual attributes of the field.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_Facade(System::SharedPtr<FormFieldFacade> value);
    /// <summary>
    /// The member to record the gap between two neighboring radio buttons in pixels,default is 50.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    float get_RadioGap();
    /// <summary>
    /// The member to record the gap between two neighboring radio buttons in pixels,default is 50.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_RadioGap(float value);
    /// <summary>
    /// The flag to indicate whether the radios are arranged horizontally or vertically, default value is true.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    bool get_RadioHoriz();
    /// <summary>
    /// The flag to indicate whether the radios are arranged horizontally or vertically, default value is true.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void set_RadioHoriz(bool value);
    /// <summary>
    /// Gets or sets size of radio button item size (when new radio button field is added). 
    /// <code></code>
    /// </summary>
    double get_RadioButtonItemSize();
    /// <summary>
    /// Gets or sets size of radio button item size (when new radio button field is added). 
    /// <code></code>
    /// </summary>
    void set_RadioButtonItemSize(double value);
    /// <summary>
    /// Set the submit button's submission flags
    /// </summary>
    SubmitFormFlag get_SubmitFlag();
    /// <summary>
    /// Set the submit button's submission flags
    /// </summary>
    void set_SubmitFlag(SubmitFormFlag value);
    /// <summary>
    /// Gets or sets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    Aspose::Pdf::ContentDisposition get_ContentDisposition();
    /// <summary>
    /// Gets or sets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    /// <summary>
    /// Gets or sets Response object where result of operation will be stored.
    /// </summary>
    System::SharedPtr<System::Web::HttpResponse> get_Response();
    /// <summary>
    /// Gets or sets Response object where result of operation will be stored.
    /// </summary>
    void set_Response(System::SharedPtr<System::Web::HttpResponse> value);
    /// <summary>
    /// Gets or sets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions();
    /// <summary>
    /// Gets or sets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    /// <summary>
    /// Gets or sets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    System::String get_AttachmentName();
    /// <summary>
    /// Gets or sets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    void set_AttachmentName(System::String value);
    
    /// <summary>
    /// Constructor for FormEditor.
    /// </summary>
    /// <param name="srcStream">Source stream.</param>
    /// <param name="destStream">Destination stream.</param>
    /// <example>
    /// <code></code>
    /// </example>
    FormEditor(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Constructor for FormEditor 
    /// </summary>
    /// <param name="srcFileName">Name of source file.</param>
    /// <param name="destFileName">Name of destination file.</param>
    /// <example>
    /// <code></code>
    /// </example>
    FormEditor(System::String srcFileName, System::String destFileName);
    /// <summary>
    /// Constructor for FormEditor.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    FormEditor();
    
    /// <summary>
    /// Saves changes into destination file.
    /// </summary>
    /// FormEditor formEditor = new FormEditor("InFile.pdf", "OutFile.pdf");
    /// //make some changes... 
    /// formEditor.Save();
    void Save();
    /// <summary>
    /// Set attributes of field. 
    /// </summary>
    /// <param name="fieldName">Name of field which attributes should be set.</param>
    /// <param name="flag">Flag (NoExport/ReadOnly/Required)</param>
    /// <returns>true if attribute was set successfully.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetFieldAttribute(System::String fieldName, PropertyFlag flag);
    /// <summary>
    /// Set field flags
    /// </summary>
    /// <param name="fieldName">Name of field whose flags should be updated.</param>
    /// <param name="flags">Flag of the field.</param>
    /// <returns>true if flags were updated successfully.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetFieldAppearance(System::String fieldName, Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationFlags flags);
    /// <summary>
    /// Get field flags. 
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <returns>Set of field flags</returns>
    Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationFlags GetFieldAppearance(System::String fieldName);
    /// <summary>
    /// Set submit flag of submit button. 
    /// </summary>
    /// <param name="fieldName">Name of submit button.</param>
    /// <param name="submitFormFlag">Submit flag.</param>
    /// <returns>true if field was found and submit flag was successfully set. </returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetSubmitFlag(System::String fieldName, SubmitFormFlag submitFormFlag);
    /// <summary>
    /// Sets URL of the button.
    /// </summary>
    /// <param name="fieldName">Submit button name.</param>
    /// <param name="url">Fully qualified URL.</param>
    /// <returns>true if URL for button was successfully set.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetSubmitUrl(System::String fieldName, System::String url);
    /// <summary>
    /// Sets maximum character count of the text field.
    /// </summary>
    /// <param name="fieldName">Name of the text field.</param>
    /// <param name="fieldLimit">New value of limit for the field.</param>
    /// <returns>true if field limit was successfully set.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetFieldLimit(System::String fieldName, int32_t fieldLimit);
    /// <summary>
    /// Sets number of combs for a regular single-line text field (the field is 
    /// automatically divided into as many equally spaced positions, or combs, 
    /// as the value of combNumber parameter).
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <param name="combNumber">The number of combs to divide the field into.</param>
    /// <returns>If success, return true;else false.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetFieldCombNumber(System::String fieldName, int32_t combNumber);
    /// <summary>
    /// Set new position of field.
    /// </summary>
    /// <param name="fieldName">Name of field which must be moved.</param>
    /// <param name="llx">Abscissa of the lower-left corner of the field.</param>
    /// <param name="lly">Ordinate of the lower-left coerner of the field.</param>
    /// <param name="urx">Abscissa of the upper-right corner of the field.</param>
    /// <param name="ury">Ordinate of the upper-right corner of the field.</param>
    /// <returns>true if field position was changed successfully.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool MoveField(System::String fieldName, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Add field of specified type to the form.
    /// </summary>
    /// <param name="fieldType">Type of the field which must be added.</param>
    /// <param name="fieldName">Name of the field whic must be added.</param>
    /// <param name="pageNum">Page number where new field must be placed.</param>
    /// <param name="llx">Abscissa of the lower-left corner of the field.</param>
    /// <param name="lly">Ordinate of the lower-left corner of the field.</param>
    /// <param name="urx">Abscissa of the upper-right corner of the field.</param>
    /// <param name="ury">Ordinate of the upper-right corner of the field.</param>
    /// <returns>true if field was successfully added.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool AddField(FieldType fieldType, System::String fieldName, int32_t pageNum, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Add field of specified type to the form.
    /// </summary>
    /// <param name="fieldType">Type of the field which must be added.</param>
    /// <param name="fieldName">Name of the field whic must be added.</param>
    /// <param name="initValue">Initial value of the field.</param>
    /// <param name="pageNum">Page number where new field must be placed.</param>
    /// <param name="llx">Abscissa of the lower-left corner of the field.</param>
    /// <param name="lly">Ordinate of the lower-left corner of the field.</param>
    /// <param name="urx">Abscissa of the upper-right corner of the field.</param>
    /// <param name="ury">Ordinate of the upper-right corner of the field.</param>
    /// <returns>true if field was successfully added.</returns>
    /// /// <example>
    /// <code></code>
    /// </example>
    bool AddField(FieldType fieldType, System::String fieldName, System::String initValue, int32_t pageNum, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Remove field from the form.
    /// </summary>
    /// <param name="fieldName">Name of the field which must be removed.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void RemoveField(System::String fieldName);
    /// <summary>
    /// Reset all visual attribtues to empty value.
    /// </summary>
    void ResetFacade();
    /// <summary>
    /// Reset all visual attribtues of inner facade to empty value.
    /// </summary>
    void ResetInnerFacade();
    /// <summary>
    /// Copies an existing field to the same position in specified page number.
    /// A new document will be produced, which contains everything the source document has except for the newly copied field.
    /// </summary>
    /// <param name="fieldName">The old fully qualified field name.</param> 
    /// <param name="newFieldName">The new fully qualified field name. If null, it will be set as fieldName + "~".</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <example>
    /// <code></code>
    /// </example>
    void CopyInnerField(System::String fieldName, System::String newFieldName, int32_t pageNum);
    /// <summary>
    /// Copies an existing field to a new position specified by both page number and ordinates.
    /// A new document will be produced, which contains everything the source document has except for the newly copied field.
    /// </summary>
    /// <param name="fieldName">The old fully qualified field name.</param> 
    /// <param name="newFieldName">The new fully qualified field name. If null, it will be set as fieldName + "~".</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <param name="abscissa">The abscissa of the new field. If -1, the abscissa will be equaled to the original one.</param> 
    /// <param name="ordinate">The ordinate of the new field. If -1, the ordinate will be equaled to the original one.</param> 
    /// <example>
    /// <code></code>
    /// </example>
    void CopyInnerField(System::String fieldName, System::String newFieldName, int32_t pageNum, float abscissa, float ordinate);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with original page number and ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName"> The name of PDF document which containes the field to be copied.</param>
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <example>
    /// <code></code>
    /// </example>
    void CopyOuterField(System::String srcFileName, System::String fieldName);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with specified page number and original ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName">The name of PDF document which containes the field to be copied.</param> 
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    ///<example>
    ///<code></code>
    ///</example>
    void CopyOuterField(System::String srcFileName, System::String fieldName, int32_t pageNum);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with specified page number and ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName">The name of PDF document which containes the field to be copied.</param> 
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <param name="abscissa">The abscissa of the new field. If -1, the abscissa will be equaled to the original one.</param> 
    /// <param name="ordinate">The ordinate of the new field. If -1, the ordinate will be equaled to the original one.</param> 
    /// <example>
    /// <code></code>
    /// </example>
    void CopyOuterField(System::String srcFileName, System::String fieldName, int32_t pageNum, float abscissa, float ordinate);
    /// <summary>
    /// Changes visual attributes of the specified field.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void DecorateField(System::String fieldName);
    /// <summary>
    /// Changes visual attributes of all fields with the specified field type.
    /// </summary>
    /// <param name="fieldType">Type of fields which will be decorated.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void DecorateField(FieldType fieldType);
    /// <summary>
    /// Changes visual attributes of all fields in the PDF document.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    void DecorateField();
    /// <summary>
    /// Change name of the field.
    /// </summary>
    /// <param name="fieldName">Old name of the field.</param>
    /// <param name="newFieldName">New name of the field.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void RenameField(System::String fieldName, System::String newFieldName);
    /// <summary>
    /// Remove submit action of the field.
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void RemoveFieldAction(System::String fieldName);
    /// <summary>
    /// Add submit button on the form.
    /// </summary>
    /// <param name="fieldName">Name of new button. </param>
    /// <param name="page">Page where button will be placed.</param>
    /// <param name="label">Button caption.</param>
    /// <param name="url">URL of the submit button.</param>
    /// <param name="llx">Abscissa of the lower-left corner.</param>
    /// <param name="lly">Ordinate of the lower-left corner.</param>
    /// <param name="urx">Abscissa of the upper-right corner.</param>
    /// <param name="ury">Ordinate of the upper-right corner.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void AddSubmitBtn(System::String fieldName, int32_t page, System::String label, System::String url, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Adds new item to the list box. 
    /// </summary>
    /// <param name="fieldName">Name of the field ot which new item will be added.</param>
    /// <param name="itemName">Name if new item.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void AddListItem(System::String fieldName, System::String itemName);
    /// <summary>
    /// Add a new item with Export value to the existing list box field, only for AcroForm combo box field.
    /// </summary>
    /// <param name="fieldName">Name of field to which items will be added.</param>
    /// <param name="exportName">A string array denoting a new list item with Export Value, i.e. (Item Label, Export Value).</param>
    /// <example>
    /// <code></code>
    /// </example>
    void AddListItem(System::String fieldName, System::ArrayPtr<System::String> exportName);
    /// <summary>
    /// Delete item from the list field.
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <param name="itemName">Name of the item which must be deleted.</param>
    /// <example>
    /// <code></code>
    /// </example>
    void DelListItem(System::String fieldName, System::String itemName);
    /// <summary>
    /// Change a single-lined text field to a multiple-lined one.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <returns>If success, return true;else false.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool Single2Multiple(System::String fieldName);
    /// <summary>
    /// Set the alignment style of a text field.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <param name="alignment">The alignment style definition, including FormFieldFacade.AlignLeft,
    /// FormFieldFacade.AlignCenter and FormFieldFacade.AlignRight.</param>
    /// <returns>true if true if field was found and alignment was set.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetFieldAlignment(System::String fieldName, int32_t alignment);
    /// <summary>
    /// Set the vertical alignment style of a text field.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <param name="alignment">The alignment style definition, including FormFieldFacade.AlignTop,
    /// FormFieldFacade.AlignMiddle and FormFieldFacade.AlignRight.</param>
    /// <returns>true if field was found and alignment was successfully filled.</returns>
    /// <example>
    /// <code></code>
    /// </example>
    bool SetFieldAlignmentV(System::String fieldName, int32_t alignment);
    
    /// <summary>
    /// Initializes new <see cref="FormEditor"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">Pdf document.</param>
    FormEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    /// <summary>
    /// Initializes new <see cref="FormEditor"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destFileName">Path of the destination file.</param>
    FormEditor(System::SharedPtr<Aspose::Pdf::Document> document, System::String destFileName);
    /// <summary>
    /// Initializes new <see cref="FormEditor"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destStream">Destination stream.</param>
    FormEditor(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Creates FormEditor which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source stream.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    FormEditor(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Creates FormEditor which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="response">HttpResponse objects where result be saved.</param>
    FormEditor(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
    /// <summary>
    /// Closes the facade.
    /// </summary>
    virtual void Close();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _srcFileName;
    System::String _destFileName;
    System::SharedPtr<System::IO::Stream> _srcStream;
    System::SharedPtr<System::IO::Stream> _destStream;
    System::SharedPtr<FormFieldFacade> _formFieldFacade;
    System::ArrayPtr<System::String> items;
    System::ArrayPtr<System::ArrayPtr<System::String>> exportItems;
    double _radioGap;
    bool _radioHoriz;
    SubmitFormFlag _submitFlag;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    System::SharedPtr<System::Web::HttpResponse> _outputResponse;
    double _radioButtonItemSize;
    
    void CloseSource();
    void CloseDest();
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::SubmitFormAction> FindSubmitAction(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::ButtonField> field);
    void AssertDestStream();
    System::SharedPtr<Point> getLowestLeftPoint(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> field);
    void copyField(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> field, System::String newFieldName, int32_t pageNum, double abscissa, double ordinate);
    System::String SelectFont(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> field, FontStyle fontStyle);
    System::String SelectCjkFont(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> field);
    void setFieldProperties(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> field);
    int32_t translateSubmitFlag(SubmitFormFlag formFlag);
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetTemplateNamespace();
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    void AddXmlFieldItems(System::SharedPtr<System::Xml::XmlNode> fieldTemplate, System::String name);
    bool IsHiddenList(System::SharedPtr<System::Xml::XmlNode> list);
    void GetFieldAndTemplate(System::String fieldName, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field>& field, System::SharedPtr<System::Xml::XmlNode>& template_);
    void AddXmlFieldItems(System::SharedPtr<System::Xml::XmlNode> fieldTemplate, System::String name, System::String value);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_FormEditor_h_

