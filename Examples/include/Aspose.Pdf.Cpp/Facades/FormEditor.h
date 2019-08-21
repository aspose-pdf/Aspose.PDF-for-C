#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET40CP || NET35CP || NETCORE) 


// C# preprocessor directive: #endif 


#include <xml/xml_node.h>
#include <xml/xml_namespace_manager.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/enum_helpers.h>
#include <system/dummy_classes.h>
#include <system/array.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormFieldFacade; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class SubmitFormFlag; } } }
namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { namespace Facades { enum class PropertyFlag; } } }
namespace Aspose { namespace Pdf { namespace Annotations { enum class AnnotationFlags; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class SubmitFormAction; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ButtonField; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class FieldType; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
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
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.SrcFileName = "InputFile.pdf";
    /// </code>
    /// </example>
    System::String get_SrcFileName();
    /// <summary>
    /// Gets or sets name of source file.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.SrcFileName = "InputFile.pdf";
    /// </code>
    /// </example>
    void set_SrcFileName(System::String value);
    /// <summary>
    /// Gets or sets destination file name.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.DestFileName = "OutFile.pdf";
    /// </code>
    /// </example>
    System::String get_DestFileName();
    /// <summary>
    /// Gets or sets destination file name.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.DestFileName = "OutFile.pdf";
    /// </code>
    /// </example>
    void set_DestFileName(System::String value);
    /// <summary>
    /// Gets or sets source stream.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.SrcStream = new FileStream("InFile.pdf", FileMode.Open, FileAccess.Read);
    /// </code>
    /// </example>
    System::SharedPtr<System::IO::Stream> get_SrcStream();
    /// <summary>
    /// Gets or sets source stream.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.SrcStream = new FileStream("InFile.pdf", FileMode.Open, FileAccess.Read);
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.DestStream = new FileStream("OutFile.pdf", FileMode.Create, FileAccess.Write);
    /// </code>
    /// </example>
    System::SharedPtr<System::IO::Stream> get_DestStream();
    /// <summary>
    /// Gets or sets destination stream.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor editor = new FormEditor();
    /// editor.DestStream = new FileStream("OutFile.pdf", FileMode.Create, FileAccess.Write);
    /// </code>
    /// </example>
    void set_DestStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets items which will be added t onewly created list box or combo box. 
    /// <example>
    /// <code lang="C#">
    ///  formEditor = new Aspose.Pdf.Facades.FormEditor("input.pdf", "output.pdf");
    ///  formEditor.Items = new string[] { "AAA", "BBB", "CCC" };
    ///  formEditor.AddField(FieldType.ListBox, "AddedListBoxField", "BBB", 1, 10, 30, 110, 130);
    ///  formEditor.Save();
    /// </code>
    /// </example>
    /// </summary>
    System::ArrayPtr<System::String> get_Items();
    /// <summary>
    /// Sets items which will be added t onewly created list box or combo box. 
    /// <example>
    /// <code lang="C#">
    ///  formEditor = new Aspose.Pdf.Facades.FormEditor("input.pdf", "output.pdf");
    ///  formEditor.Items = new string[] { "AAA", "BBB", "CCC" };
    ///  formEditor.AddField(FieldType.ListBox, "AddedListBoxField", "BBB", 1, 10, 30, 110, 130);
    ///  formEditor.Save();
    /// </code>
    /// </example>
    /// </summary>
    void set_Items(System::ArrayPtr<System::String> value);
    /// <summary> Sets options for combo box with export values.</summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_Updated.pdf"));
    /// formEditor.ExportItems = new string[][] 
    /// { 
    ///     new string[] { "1", "Firs" }, 
    ///     new string[] { "2", "Second" }, 
    ///     new string[] { "3", "Third" } 
    /// };
    /// formEditor.AddField(FieldType.ListBox, "AddedListBoxField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </example>
    System::ArrayPtr<System::ArrayPtr<System::String>> get_ExportItems();
    /// <summary> Sets options for combo box with export values.</summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_Updated.pdf"));
    /// formEditor.ExportItems = new string[][] 
    /// { 
    ///     new string[] { "1", "Firs" }, 
    ///     new string[] { "2", "Second" }, 
    ///     new string[] { "3", "Third" } 
    /// };
    /// formEditor.AddField(FieldType.ListBox, "AddedListBoxField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </example>
    void set_ExportItems(System::ArrayPtr<System::ArrayPtr<System::String>> value);
    /// <summary>
    /// Sets visual attributes of the field.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor fe = new FormEditor("PdfForm.pdf", "PdfForm_DecorateField_text.pdf");
    /// fe.Facade = new FormFieldFacade();
    /// fe.Facade.BackgroundColor = System.Drawing.Color.Red;
    /// fe.Facade.TextColor = System.Drawing.Color.Blue;
    /// fe.Facade.BorderColor = System.Drawing.Color.Green;
    /// fe.Facade.Alignment = FormFieldFacade.AlignCenter;
    /// fe.DecorateField("textField");
    /// fe.Save();
    /// </code>
    /// </example>
    System::SharedPtr<FormFieldFacade> get_Facade();
    /// <summary>
    /// Sets visual attributes of the field.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor fe = new FormEditor("PdfForm.pdf", "PdfForm_DecorateField_text.pdf");
    /// fe.Facade = new FormFieldFacade();
    /// fe.Facade.BackgroundColor = System.Drawing.Color.Red;
    /// fe.Facade.TextColor = System.Drawing.Color.Blue;
    /// fe.Facade.BorderColor = System.Drawing.Color.Green;
    /// fe.Facade.Alignment = FormFieldFacade.AlignCenter;
    /// fe.DecorateField("textField");
    /// fe.Save();
    /// </code>
    /// </example>
    void set_Facade(System::SharedPtr<FormFieldFacade> value);
    /// <summary>
    /// The member to record the gap between two neighboring radio buttons in pixels,default is 50.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </example>
    float get_RadioGap();
    /// <summary>
    /// The member to record the gap between two neighboring radio buttons in pixels,default is 50.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </example>
    void set_RadioGap(float value);
    /// <summary>
    /// The flag to indicate whether the radios are arranged horizontally or vertically, default value is true.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </example>
    bool get_RadioHoriz();
    /// <summary>
    /// The flag to indicate whether the radios are arranged horizontally or vertically, default value is true.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </example>
    void set_RadioHoriz(bool value);
    /// <summary>
    /// Gets or sets size of radio button item size (when new radio button field is added). 
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.RadioButtonItemSize = 20;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </summary>
    double get_RadioButtonItemSize();
    /// <summary>
    /// Gets or sets size of radio button item size (when new radio button field is added). 
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.RadioButtonItemSize = 20;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor(
    ///   new FileStream(new FileStream("InFile.pdf", FileMode.Open, FileAccess.Read), 
    ///   new FileStream("OutFile.pdf", FileMode.Create, FileAccess.Write));
    /// </code>
    /// </example>
    FormEditor(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Constructor for FormEditor 
    /// </summary>
    /// <param name="srcFileName">Name of source file.</param>
    /// <param name="destFileName">Name of destination file.</param>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("InFile.pdf", "OutFile.pdf");
    /// </code>
    /// </example>
    FormEditor(System::String srcFileName, System::String destFileName);
    /// <summary>
    /// Constructor for FormEditor.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor();
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf",  "PdfForm_SetFieldAttribute.pdf");
    /// formEditor.SetFieldAttribute("listboxField", PropertyFlag.ReadOnly);
    /// formEditor.SetFieldAttribute("textField", PropertyFlag.NoExport);
    /// </code>
    /// </example>
    bool SetFieldAttribute(System::String fieldName, PropertyFlag flag);
    /// <summary>
    /// Set field flags
    /// </summary>
    /// <param name="fieldName">Name of field whose flags should be updated.</param>
    /// <param name="flags">Flag of the field.</param>
    /// <returns>true if flags were updated successfully.</returns>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm1.pdf", "FormEditor_SetFieldAppearance.pdf");
    /// formEditor.SetFieldAppearance("Name", AnnotationFlags.Hidden);
    /// formEditor.SetFieldAppearance("Phone", AnnotationFlags.NoView | AnnotationFlags.Print);
    /// </code>
    /// </example>
    bool SetFieldAppearance(System::String fieldName, Aspose::Pdf::Annotations::AnnotationFlags flags);
    /// <summary>
    /// Get field flags. 
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <returns>Set of field flags</returns>
    Aspose::Pdf::Annotations::AnnotationFlags GetFieldAppearance(System::String fieldName);
    /// <summary>
    /// Set submit flag of submit button. 
    /// </summary>
    /// <param name="fieldName">Name of submit button.</param>
    /// <param name="submitFormFlag">Submit flag.</param>
    /// <returns>true if field was found and submit flag was successfully set. </returns>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "FormEditor_SetSubmitFlag.pdf");
    /// formEditor.SetSubmitFlag("btnSubmit", SubmitFormFlag.Fdf);
    /// </code>
    /// </example>
    bool SetSubmitFlag(System::String fieldName, SubmitFormFlag submitFormFlag);
    /// <summary>
    /// Sets URL of the button.
    /// </summary>
    /// <param name="fieldName">Submit button name.</param>
    /// <param name="url">Fully qualified URL.</param>
    /// <returns>true if URL for button was successfully set.</returns>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "FormEditor_SetSubmitUrl.pdf");
    /// formEditor.SetSubmitUrl("btnSubmit", "www.mysite.com");
    /// </code>
    /// </example>
    bool SetSubmitUrl(System::String fieldName, System::String url);
    /// <summary>
    /// Sets maximum character count of the text field.
    /// </summary>
    /// <param name="fieldName">Name of the text field.</param>
    /// <param name="fieldLimit">New value of limit for the field.</param>
    /// <returns>true if field limit was successfully set.</returns>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "FormEditor_SetFieldLimit.pdf");
    /// formEditor.SetFieldLimit("textField", 15);
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfWithAcroForm.pdf", "FormEditor_SetFieldComb.pdf"));
    /// formEditor.SetFieldCombNumber("textCombField", 5);
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "FormEditor_MoveField.pdf");
    /// formEditor.MoveField("textField", 20.5f, 20.3f, 120.6f, 40.8f);
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_Text.pdf");
    /// formEditor.AddField(FieldType.Text, "AddedTextField",  1, 10, 30, 110, 46);
    /// formEditor.Save();
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_Text.pdf");
    /// formEditor.AddField(FieldType.Text, "AddedTextField", "Text Value", 1, 10, 30, 110, 46);
    /// formEditor.Items = new string[] { "Item1", "Item2", Item3" };
    /// formEditor.AddField(FieldType.Radio, "RadioButtonField", 1, 265, 695, 365, 720);
    /// formEditor.Save();
    /// </code>
    /// </example>
    bool AddField(FieldType fieldType, System::String fieldName, System::String initValue, int32_t pageNum, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Remove field from the form.
    /// </summary>
    /// <param name="fieldName">Name of the field which must be removed.</param>
    /// <example>
    /// <code lang="C#">
    /// FormEditr formEditor = new FormEditor("PdfForm.pdf", "FormEditor_RemoveField.pdf");
    /// formEditor.RemoveField("listboxField");
    /// formEditor.RemoveField("textField");
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_out.pdf");
    /// //Creates copy of text field on psecond page.
    /// formEditor.CopyInnerField("textField", "textFieldCopy", 2);
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_out.pdf");
    /// //Creates copy of text field on psecond page.
    /// formEditor.CopyInnerField("textField", "textFieldCopy", 2, 100, 200);
    /// </code>
    /// </example>
    void CopyInnerField(System::String fieldName, System::String newFieldName, int32_t pageNum, float abscissa, float ordinate);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with original page number and ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName"> The name of PDF document which containes the field to be copied.</param>
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_updated.pdf");
    /// //copies text field from source.pdf to PdfForm.pdf
    /// formEditor.CopyOuterField("source.pdf", "textField");
    /// formEditor.Save();
    /// </code>
    /// </example>
    void CopyOuterField(System::String srcFileName, System::String fieldName);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with specified page number and original ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName">The name of PDF document which containes the field to be copied.</param> 
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_updated.pdf");
    /// formEditor.CopyOuterField("source.pdf", "textField", 2);
    /// formEditor.Save();
    /// </code>
    /// </example>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_updated.pdf");
    /// formEditor.CopyOuterField("source.pdf", "textField" , 2, 100, 200);
    /// </code>
    /// </example>
    void CopyOuterField(System::String srcFileName, System::String fieldName, int32_t pageNum, float abscissa, float ordinate);
    /// <summary>
    /// Changes visual attributes of the specified field.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <example>
    /// <code lang="C#">
    /// FormEditor fe = new FormEditor("PdfWithAcroForm.pdf", "FormEditor_DecorateField_text.pdf");
    /// fe.Facade = new FormFieldFacade();
    /// fe.Facade.BackgroundColor = System.Drawing.Color.Red;
    /// fe.Facade.TextColor = System.Drawing.Color.Blue;
    /// fe.Facade.BorderColor = System.Drawing.Color.Green;
    /// fe.Facade.Alignment = FormFieldFacade.AlignCenter;
    /// fe.DecorateField("textField");
    /// </code>
    /// </example>
    void DecorateField(System::String fieldName);
    /// <summary>
    /// Changes visual attributes of all fields with the specified field type.
    /// </summary>
    /// <param name="fieldType">Type of fields which will be decorated.</param>
    /// <example>
    /// <code lang="C#">
    /// FormEditor fe = new FormEditor("PdfForm.pdf", "FormEditor_DecorateField.pdf");
    /// fe.Facade = new FormFieldFacade();
    /// fe.Facade.BackgroundColor = System.Drawing.Color.Red;
    /// fe.Facade.TextColor = System.Drawing.Color.Blue;
    /// fe.Facade.BorderColor = System.Drawing.Color.Green;
    /// fe.Facade.Alignment = FormFieldFacade.AlignRight;
    /// //decorate all text fields.
    /// fe.DecorateField(FieldType.Text);
    /// </code>
    /// </example>
    void DecorateField(FieldType fieldType);
    /// <summary>
    /// Changes visual attributes of all fields in the PDF document.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// FormEditor fe = new FormEditor("PdfForm.pdf", "FormEditor_DecorateField.pdf");
    /// fe.Facade = new FormFieldFacade();
    /// fe.Facade.BackgroundColor = System.Drawing.Color.Red;
    /// fe.Facade.TextColor = System.Drawing.Color.Blue;
    /// fe.Facade.BorderColor = System.Drawing.Color.Green;
    /// fe.Facade.Alignment = FormFieldFacade.AlignRight;
    /// //decorate all fields.
    /// fe.DecorateField();
    /// </code>
    /// </example>
    void DecorateField();
    /// <summary>
    /// Change name of the field.
    /// </summary>
    /// <param name="fieldName">Old name of the field.</param>
    /// <param name="newFieldName">New name of the field.</param>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_updated.pdf");
    /// formEditor.RenameField("textField", "textField_Renamed");
    /// </code>
    /// </example>
    void RenameField(System::String fieldName, System::String newFieldName);
    /// <summary>
    /// Remove submit action of the field.
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "FormEditor_RemoveFieldAction.pdf");
    /// formEditor.RemoveFieldAction("btnSubmit");
    /// </code>
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
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "FormEditor_AddSubmitBtn.pdf");
    /// formEditor.AddSubmitBtn("submit", 1, "Submit", "www.check.com", 10, 200, 70, 270);
    /// </code>
    /// </example>
    void AddSubmitBtn(System::String fieldName, int32_t page, System::String label, System::String url, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Adds new item to the list box. 
    /// </summary>
    /// <param name="fieldName">Name of the field ot which new item will be added.</param>
    /// <param name="itemName">Name if new item.</param>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", PdfForm_out.pdf");
    /// formEditor.AddListItem("listBoxField", "Item 4 (New Item)");
    /// </code>
    /// </example>
    void AddListItem(System::String fieldName, System::String itemName);
    /// <summary>
    /// Add a new item with Export value to the existing list box field, only for AcroForm combo box field.
    /// </summary>
    /// <param name="fieldName">Name of field to which items will be added.</param>
    /// <param name="exportName">A string array denoting a new list item with Export Value, i.e. (Item Label, Export Value).</param>
    /// <example>
    /// <code lang="C#">
    ///  FormEditor fe = new FormEditor("PdfForm.pdf", "FormEditor_AddListItem2.pdf");
    ///  fe.AddListItem("listboxField", new string[] { "4", "Item4(Added)" });
    /// </code>
    /// </example>
    void AddListItem(System::String fieldName, System::ArrayPtr<System::String> exportName);
    /// <summary>
    /// Delete item from the list field.
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <param name="itemName">Name of the item which must be deleted.</param>
    /// <example>
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_DelListItem.pdf");
    /// formEditor.DelListItem("listboxField", "item2");
    /// </code>
    /// </example>
    void DelListItem(System::String fieldName, System::String itemName);
    /// <summary>
    /// Set JavaScript for a PushButton field. If old JavaScript existed, it will be replaced by the new one.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="script">The Java script to be added/placed into a push button field.</param>
    /// <returns>true if field scrip was successfully set. </returns>
    bool SetFieldScript(System::String fieldName, System::String script);
    /// <summary>
    /// Add JavaScript for a PushButton field. If old event exists, new event is added after it. 
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="script">The Java script to be added/placed into a push button field.</param>
    /// <returns>True in case script was added successfully.</returns>
    bool AddFieldScript(System::String fieldName, System::String script);
    /// <summary>
    /// Change a single-lined text field to a multiple-lined one.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <returns>If success, return true;else false.</returns>
    /// <example>
    /// <code lang="C#">
    /// FormEditor formEditor = new FormEditor("PdfForm.pdf", "PdfForm_updated.pdf");
    /// formEditor.Single2Multiple("textField");
    /// </code>
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
    /// <code lang="C#">
    ///  FormEditor fe = new FormEditor("PdfStaticForm.pdf", "VerticalAlign.pdf");
    ///  fe.SetFieldAlignment("form1[0].TextField[0]", FormFieldFacade.AlignLeft);
    /// </code>
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
    /// <code lang="C#">
    ///  FormEditor fe = new FormEditor("PdfStaticForm.pdf", "VerticalAlign.pdf");
    ///  fe.SetFieldAlignmentV("form1[0].TextField[0]", FormFieldFacade.AlignBottom);
    /// </code>
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
    System::SharedPtr<Aspose::Pdf::Annotations::SubmitFormAction> FindSubmitAction(System::SharedPtr<Aspose::Pdf::Forms::ButtonField> field);
    void AssertDestStream();
    System::SharedPtr<Point> getLowestLeftPoint(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    void copyField(System::SharedPtr<Aspose::Pdf::Forms::Field> field, System::String newFieldName, int32_t pageNum, double abscissa, double ordinate);
    System::String SelectFont(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field, FontStyle fontStyle);
    System::String SelectCjkFont(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field);
    void setFieldProperties(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field);
    int32_t translateSubmitFlag(SubmitFormFlag formFlag);
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetTemplateNamespace();
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    void AddXmlFieldItems(System::SharedPtr<System::Xml::XmlNode> fieldTemplate, System::String name);
    bool IsHiddenList(System::SharedPtr<System::Xml::XmlNode> list);
    void GetFieldAndTemplate(System::String fieldName, System::SharedPtr<Aspose::Pdf::Forms::Field>& field, System::SharedPtr<System::Xml::XmlNode>& template_);
    void AddXmlFieldItems(System::SharedPtr<System::Xml::XmlNode> fieldTemplate, System::String name, System::String value);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


