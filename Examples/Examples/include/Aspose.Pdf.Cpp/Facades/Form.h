#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET40CP || NET35CP || NETCORE) 


// C# preprocessor directive: #endif 


#include <xml/xml_text_writer.h>
#include <xml/xml_node_list.h>
#include <xml/xml_node.h>
#include <xml/xml_namespace_manager.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/enum_helpers.h>
#include <system/dummy_classes.h>
#include <system/collections/list.h>
#include <system/collections/icollection.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace OriginalKit { namespace New { class RegressionTests_v4_8; } } } } }
namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormFieldFacade; } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { enum class SubmitFormFlag; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class FieldType; } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class PropertyFlag; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WidgetAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Forms { class OptionCollection; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ChoiceField; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class ITreeNode; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfNumber; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Status of imported field
/// </summary>
class ASPOSE_PDF_SHARED_API Form FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef Form ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Tests::OriginalKit::New::RegressionTests_v4_8;
    
public:

    enum class ImportStatus
    {
        /// <summary>
        /// Field was successfully imported
        /// </summary>
        Success,
        /// <summary>
        /// Field with this name was not found in the document form.
        /// </summary>
        FieldNotFound
    };
    
    
public:

    class ASPOSE_PDF_SHARED_API FormImportResult : public System::Object
    {
        typedef FormImportResult ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::Facades::Form;
        
    public:
    
        /// <summary>
        /// Status of field import.
        /// </summary>
        Form::ImportStatus get_Status();
        /// <summary>
        /// Full name of the field.
        /// </summary>
        System::String get_FieldName();
        
    protected:
    
        FormImportResult(System::String fieldName, Form::ImportStatus status);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        Form::ImportStatus _status;
        System::String _fieldName;
        
    };
    
    
public:

    /// <summary>
    /// Result of last import operation. Array of objects which descibre result of import for each field.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Form::FormImportResult>> get_ImportResult();
    /// <summary>
    /// Gets or sets source file name.
    /// <example>
    /// <code lang="C#">
    ///   Form form = new Aspose.Pdf.Facades.Form();
    ///   form.SrcFileName = "file.pdf";
    /// </code>
    /// </example>
    /// </summary>
    System::String get_SrcFileName();
    /// <summary>
    /// Gets or sets source file name.
    /// <example>
    /// <code lang="C#">
    ///   Form form = new Aspose.Pdf.Facades.Form();
    ///   form.SrcFileName = "file.pdf";
    /// </code>
    /// </example>
    /// </summary>
    void set_SrcFileName(System::String value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    void set_ConvertTo(PdfFormat value);
    /// <summary>
    /// Gets or sets destiination file name.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    ///   Form form = new Aspose.Pdf.Facades.Form();
    ///   form.DestFileName = "file.pdf";
    /// </code>
    /// </example>
    System::String get_DestFileName();
    /// <summary>
    /// Gets or sets destiination file name.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    ///   Form form = new Aspose.Pdf.Facades.Form();
    ///   form.DestFileName = "file.pdf";
    /// </code>
    /// </example>
    void set_DestFileName(System::String value);
    /// <summary>
    /// Gets or sets source stream.
    /// <example>
    /// <code lang="C#">
    ///  Form form = new Aspose.Pdf.Facades.Form();
    ///  form.SrcStream = new FileStream("source.pdf", FileMode.Open, FileAccess.Read);
    /// </code>
    /// </example>
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_SrcStream();
    /// <summary>
    /// Gets or sets source stream.
    /// <example>
    /// <code lang="C#">
    ///  Form form = new Aspose.Pdf.Facades.Form();
    ///  form.SrcStream = new FileStream("source.pdf", FileMode.Open, FileAccess.Read);
    /// </code>
    /// </example>
    /// </summary>
    void set_SrcStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets or sets destination stream.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    ///   Form form = new Aspose.Pdf.Facades.Form();
    ///   form.DestStream = new FileStream("file.pdf", FileMode.Open, FileAccess.Read);
    /// </code>
    /// </example>
    System::SharedPtr<System::IO::Stream> get_DestStream();
    /// <summary>
    /// Gets or sets destination stream.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    ///   Form form = new Aspose.Pdf.Facades.Form();
    ///   form.DestStream = new FileStream("file.pdf", FileMode.Open, FileAccess.Read);
    /// </code>
    /// </example>
    void set_DestStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets list of field names on the form.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// string[] fields = form.FieldNames;
    /// foreach(string field in fields)
    /// {
    ///   Console.WriteLine(field);
    /// }
    /// </code>
    /// </example>
    System::ArrayPtr<System::String> get_FieldNames();
    /// <summary>
    /// Gets all form submit button names.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// string[] submits = form.FormSubmitButtonNames;
    /// foreach(string btn in submits)
    /// {
    ///   Console.WriteLine(btn);
    /// }
    /// </code>
    /// </example>
    System::ArrayPtr<System::String> get_FormSubmitButtonNames();
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
    /// Returns FrofmFieldFacade object containing all appearance attributes.
    /// <example>
    /// <code lang="C#">
    /// Aspose.Pdf.Facades.Form form = new Aspose.Pdf.Facades.Form("form.pdf");
    /// FormFieldFacade field = form.GetFieldFacade("field1");
    /// Console.WriteLine("Color of field border: " + field.BorderColor);
    /// </code>
    /// </example>
    /// </summary>
    /// <param name="fieldName">Name of field to read.</param>
    /// <returns>FormFieldFacade object</returns>
    System::SharedPtr<FormFieldFacade> GetFieldFacade(System::String fieldName);
    
    /// <summary>
    /// Constructor of Form with two stream parameters.
    /// Specify same source and destination stream for incremental update.
    /// </summary>
    /// <param name="srcStream">Source stream.</param>
    /// <param name="destStream">Destination stream.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form(
    /// new FileStream( "InFile.pdf", FileMode.Open, FileAccess.Read),  
    /// new FileStream("OutFile.pdf", FileMode.Create, FileAccess.Write));
    /// </code>
    /// </example>
    Form(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Construtcor of Form without parameters.
    /// <example>
    /// <code lang="C#">
    ///   Form form = new Aspose.Pdf.Facades.Form();
    ///   form.SrcFileName = "file.pdf";
    /// </code>
    /// </example>
    /// </summary>
    Form();
    
    /// <summary>
    /// Fills the field with a valid value according to a fully qualified field name.
    /// Before filling the fields, every field's names and its corresponding valid values must be known.
    /// Both the fields' name and values are case sensitive.
    /// Please note that Aspose.Pdf.Facades supports only full field names and does not work with partial 
    /// field names in contrast with Aspose.Pdf.Kit;
    /// For example if field has full name "Form.Subform.TextField" you should specify full name and not "TextField". 
    /// You can use FieldNames property to explore existing field names and search required field by its partial name.
    /// </summary>
    /// <param name="fieldName">The field's name to be filled.</param>
    /// <param name="fieldValue">The field's value which must be a valid value for some fields.</param>
    /// <returns>true if field is found and filled successfully.</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form(TestSettings.GetInputFile("PdfForm.pdf"));
    /// form.FillField("FirstName", "John");
    /// form.FillField("LastName",  "Smith");
    /// </code>
    /// <code lang="C#">
    /// //how to search field by its partial name:
    /// Form form = new Form("input.pdf", "output.pdf"); 
    /// foreach(string fieldName in form.FieldNames)
    /// {
    ///   if (fieldName.EndsWith("TextField"))
    ///   {
    ///     Console.WriteLine("Full name is: " + fieldName);
    ///   }
    /// }
    /// </code>
    /// </example>
    bool FillField(System::String fieldName, System::String fieldValue);
    /// <summary>
    /// Fills the radio box field with a valid index value according to a fully qualified field name.
    /// Before filling the fields, only field's name must be known. While the value can be specified by its index.
    /// Notice: Only be applied to Radio Box, Combo Box and List Box fields.
    /// Please note that Aspose.Pdf.Facades supports only full field names and does not work with partial 
    /// field names in contrast with Aspose.Pdf.Kit;
    /// For example if field has full name "Form.Subform.ListBoxField" you should specify full name and not "ListBoxField". 
    /// You can use FieldNames property to explore existing field names and search required field by its partial name.
    /// </summary>
    /// <param name="fieldName">Name of field to be filled.</param>
    /// <param name="index">Index of chosen item.</param>
    /// <returns>true if field was found and successfully filled.</returns>
    /// <example lang="C#">
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// form.FillField("listboxField", 2);
    /// form.FillField("comboboxField", 2);
    /// form.FillField("radiobuttonField", 2);
    /// </code>
    /// <code lang="C#">
    /// //how to search field by its partial name:
    /// Form form = new Form("input.pdf", "output.pdf"); 
    /// foreach(string fieldName in form.FieldNames)
    /// {
    ///   if (fieldName.EndsWith("ListBoxField"))
    ///   {
    ///     Console.WriteLine("Full name is: " + fieldName);
    ///   }
    /// }
    /// </code>
    /// </example>
    bool FillField(System::String fieldName, int32_t index);
    /// <summary>
    /// Fills the check box field with a boolean value.
    /// Notice: Only be applied to Check Box.
    /// Please note that Aspose.Pdf.Facades supports only full field names and does not work with partial 
    /// field names in contrast with Aspose.Pdf.Kit;
    /// For example if field has full name "Form.Subform.CheckBoxField" you should specify full name and not "CheckBoxField". 
    /// You can use FieldNames property to explore existing field names and search required field by its partial name.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// form.FillField("checkboxField", true);
    /// </code>
    /// <code lang="C#">
    /// //how to search field by its partial name:
    /// Form form = new Form("input.pdf", "output.pdf"); 
    /// foreach(string fieldName in form.FieldNames)
    /// {
    ///   if (fieldName.EndsWith("CheckBoxField"))
    ///   {
    ///     Console.WriteLine("Full name is: " + fieldName);
    ///   }
    /// }
    /// </code>
    /// </example>
    /// <param name="fieldName">The field's name to be filled.</param>
    /// <param name="beChecked">A boolean flag: true means to check the box, while false to uncheck it.</param>
    /// <returns>true if field was found and successfully filled.</returns>
    bool FillField(System::String fieldName, bool beChecked);
    /// <summary>
    /// Returns the current value for radio button option fields.
    /// </summary>
    /// <param name="fieldName">Field Name</param>
    /// <returns>String value for the current radio group optino. See also <see cref="GetButtonOptionValues"/></returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// Console.WriteLine(form.GetButtonOptionCurrentValue("btnField"));
    /// </code>
    /// </example>
    System::String GetButtonOptionCurrentValue(System::String fieldName);
    /// <summary>
    /// Gets the radio button option fields and related values based on the field name.
    /// This method has meaning for radio button groups.
    /// </summary>
    /// <param name="fieldName">Field Name</param>
    /// <returns>Hash table of option values keyed by form item name</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// Hashtable values = form.GetButtonOptionValues("Color");
    /// Console.WriteLine(values["White"].ToString());
    /// Console.WriteLine(values["Black"].ToString());
    /// </code>
    /// </example>
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> GetButtonOptionValues(System::String fieldName);
    /// <summary>
    /// Gets the field's value according to its field name.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <returns>The field's value.</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// Console.WriteLine("Field value = " + form.GetField("Field1"));
    /// </code>
    /// </example>
    System::String GetField(System::String fieldName);
    /// <summary>
    /// Gets the full field name according to its short field name.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <returns>The full field name.</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// Console.WriteLine("Full field name is : " + form.GetFullFieldName("textField"));
    /// </code>
    /// </example>
    System::String GetFullFieldName(System::String fieldName);
    /// <summary>
    /// Get the limitation of text field.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <returns>Return the limitation number of characters a text field can be filled. It not set, return 0.</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// Console.WriteLine(form.GetFieldLimit("textfieldBox"));
    /// </code>
    /// </example>
    int32_t GetFieldLimit(System::String fieldName);
    /// <summary>
    /// Saves the value of the filled fields and close the opened Pdf document.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "PdfForm_Changed.pdf");
    /// form.FillField("textField", "new value");
    /// form.Save();
    /// </code>
    /// </example>
    void Save();
    /// <summary>
    /// Saves document into specified file.
    /// </summary>
    /// <param name="destFile">File where document will be saved.</param>
    virtual void Save(System::String destFile);
    /// <summary>
    /// Saves document into specified stream.
    /// </summary>
    /// <param name="destStream">Stream where document will be saved.</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Closes opened files without any changes.
    /// </summary>
    virtual void Close();
    /// <summary>
    /// Flattens all the fields.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// form.FlattenAllFields();
    /// </code>
    /// </example>
    void FlattenAllFields();
    /// <summary>
    /// Flattens a specified field with the fully qualified field name.
    /// Any other field will remain unchangable. If the fieldName is invalid, 
    /// all the fields will remain unchangable.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// form.FlattenField("textField");
    /// </code>
    /// </example>
    /// <param name="fieldName">The name of the field to be flattened.</param>
    void FlattenField(System::String fieldName);
    /// <summary>
    /// Fill a barcode field according to its fully qualified field name.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="data">The new barcode value.</param>
    /// <returns>If filling succeed, return true; otherwise, false.</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// form.FillBarcodeField("textField", "42207252");
    /// </code>
    /// </example>
    bool FillBarcodeField(System::String fieldName, System::String data);
    /// <summary>
    /// Imports the content of the fields from the fdf file and put them into the new pdf.
    /// </summary>
    /// <param name="inputFdfStream">The input fdf stream.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "PdfForm_imported.pdf");
    /// form.ImportFdf(new FileStream("data.fdf", FileMode.Open, FileAccess.Read));
    /// form.Save();
    /// </code>
    /// </example>
    void ImportFdf(System::SharedPtr<System::IO::Stream> inputFdfStream);
    /// <summary>
    /// Exports the content of the fields of the pdf into the fdf stream.
    /// </summary>
    /// <param name="outputFdfStream">The output fdf stream.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// Stream stream = new FileStream("export.fdf", FileMode.Create, FileAccess.Write);
    /// form.ExportFdf(stream);
    /// stream.Close();
    /// </code>
    /// </example>
    void ExportFdf(System::SharedPtr<System::IO::Stream> outputFdfStream);
    /// <summary>
    /// Imports the content of the fields from the xml file and put them into the new pdf.
    /// </summary>
    /// <param name="inputXmlStream">Stream from which XML for import is read.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "Form_Imported.pdf");
    /// FileStream fs = new FileStream(TestSettings.GetInputFile("import.xml"), FileMode.Open, FileAccess.Read);
    /// form.ImportXml(fs);
    /// form.Save();
    /// </code>
    /// </example>
    void ImportXml(System::SharedPtr<System::IO::Stream> inputXmlStream);
    /// <summary>
    /// Exports the content of the fields of the pdf into the xml stream.
    /// The button field's value will not be exported.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf"));
    /// FileStream fs = new FileStream("export.xml", FileMode.Create, FileAccess.Write);
    /// form.ExportXml(fs);
    /// fs.Close();
    /// </code>
    /// </example>
    /// <param name="outputXmlStream">Output Xml stream.</param>
    void ExportXml(System::SharedPtr<System::IO::Stream> outputXmlStream);
    /// <summary>
    /// Extracts XFA data packet
    /// </summary>
    /// <param name="outputXmlStream">Stream where XML data will be stored.</param>
    void ExtractXfaData(System::SharedPtr<System::IO::Stream> outputXmlStream);
    /// <summary>
    /// Replaces XFA data with specified data packet. Data packet may be extracted using ExtractXfaData. 
    /// </summary>
    /// <param name="inputXmlStream">Stream where XML is stored.</param>
    void SetXfaData(System::SharedPtr<System::IO::Stream> inputXmlStream);
    /// <summary>
    /// Imports the content of the fields from the xfdf(xml) file and put them into the new pdf.
    /// </summary>
    /// <param name="inputXfdfStream">The input xfdf(xml) stream.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "Form_ImportXfdf.pdf");
    /// Stream fs = new FileStream("export_old.xfdf", FileMode.Open, FileAccess.Read);
    /// form.ImportXfdf(fs);
    /// fs.Close();
    /// form.Save();
    /// </code>
    /// </example>
    void ImportXfdf(System::SharedPtr<System::IO::Stream> inputXfdfStream);
    /// <summary>
    /// Exports the content of the fields of the pdf into the xml stream.
    /// The button field's value will not be exported.
    /// </summary>
    /// <param name="outputXfdfStream">The output xml stream.</param>
    /// <example>
    /// <code lang="C#">
    ///  Form form = new Form("PdfForm.pdf");
    ///  FileStream fs = new FileStream("export.xfdf", FileMode.Create, FileAccess.Write);
    ///  form.ExportXfdf(fs);
    ///  fs.Close();
    /// </code>
    /// </example>
    void ExportXfdf(System::SharedPtr<System::IO::Stream> outputXfdfStream);
    /// <summary>
    /// Fill a field with multiple selections.Note: only for AcroForm List Box Field.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="fieldValues">A string array which contains several items to be selected.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Aspose.Pdf.Facades.Form("PdfForm.pdf", "Form_Updated.pdf");
    /// form.FillField("ListBox1", new String[] { "Three", "One" });
    /// form.Save();
    /// </code>
    /// </example>
    void FillField(System::String fieldName, System::ArrayPtr<System::String> fieldValues);
    /// <summary> Renames a field. Either AcroForm field or XFA field is OK.
    /// </summary>
    /// <param name="fieldName">the old field name
    /// </param>
    /// <param name="newFieldName">the new field name
    /// </param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "PdfFormUpdated.pdf");
    /// form.RenameField("field", "field1");
    /// form.Save();
    /// </code>
    /// </example>
    void RenameField(System::String fieldName, System::String newFieldName);
    /// <summary>
    /// Get a Rich Text field's value, including the formattinf information of every character.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name of the Rich Text field.</param>
    /// <returns>Return a string containing formatting information of the Rich Text field.</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// Console.WriteLine(form.GetRichText("txtDescriptionRTF"));
    /// </code>
    /// </example>
    System::String GetRichText(System::String fieldName);
    /// <summary>
    /// Returns the submit button's submission flags
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <returns>Submission flags of the button.</returns>
    /// <example>
    /// <code lang="C#">
    /// Aspose.Pdf.Facades.Form form = new Aspose.Pdf.Facades.Form("PdfForm.pdf");
    /// System.Console.WriteLine((form.GetSubmitFlags("btnSubmit") | Aspose.Pdf.Facades.SubmitFormFlag.Xfdf )!= 0 ? " XFDF" : " ");
    /// System.Console.WriteLine((form.GetSubmitFlags("btnSubmit") | Aspose.Pdf.Facades.SubmitFormFlag.Fdf )!= 0 ? " FDF" : " ");
    /// System.Console.WriteLine((form.GetSubmitFlags("btnSubmit") | Aspose.Pdf.Facades.SubmitFormFlag.Pdf )!= 0 ? " PDF" : " ");        
    /// </code>
    /// </example>
    SubmitFormFlag GetSubmitFlags(System::String fieldName);
    
    /// <summary>
    /// Constructor of Form.
    /// </summary>
    /// <param name="srcFileName">Source file path.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// </code>
    /// </example>
    Form(System::String srcFileName);
    /// <summary>
    /// Constructor for form.
    /// </summary>
    /// <param name="srcStream">source stream.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form(new FileStream("PdfForm.pdf", FileMode.Open, FileAccess.Read));
    /// </code>
    /// </example>
    Form(System::SharedPtr<System::IO::Stream> srcStream);
    /// <summary>
    /// Constructor of Form class.
    /// Specify same source file name and destination file name to perform incremental update.
    /// </summary>
    /// <param name="srcFileName">Path of the source file.</param>
    /// <param name="destFileName">Path of the destination file.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "PdfForm_Updated.pdf");
    /// </code>
    /// </example>
    Form(System::String srcFileName, System::String destFileName);
    /// <summary>
    /// Constructor of Form.
    /// </summary>
    /// <param name="srcFileName">Source file path.</param>
    /// <param name="destStream">Destination file path.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "PdfForm_Updated.pdf");
    /// </code>
    /// </example>
    Form(System::String srcFileName, System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Constructor of Form
    /// </summary>
    /// <param name="srcStream">Source stream.</param>
    /// <param name="destFileName">Destination file path.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form(new FileStream("PdfForm.pdf", FileMode.Open, FileAccess.Read), "PdfForm_Updated.pdf");
    /// </code>
    /// </example>
    Form(System::SharedPtr<System::IO::Stream> srcStream, System::String destFileName);
    
    /// <summary>
    /// Returns type of field. 
    /// </summary>
    /// <param name="fieldName">Field name.</param>
    /// <returns>Element of FileType enumeration corresponding to field type.</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// if (form.GetFieldType("textField") == FieldType.Text)
    /// {
    ///    Console.WriteLine("Type of field is text");
    /// }
    /// </code>
    /// </example>
    FieldType GetFieldType(System::String fieldName);
    /// <summary>
    /// Determines whether field is required or not.
    /// </summary>
    /// <param name="fieldName">The name of field.</param>
    /// <returns>True - the field is required; otherwise, false.</returns>
    bool IsRequiredField(System::String fieldName);
    /// <summary>
    /// Returns flags of the field.
    /// </summary>
    /// <param name="fieldName">Field name</param>
    /// <returns>Property flag (ReadOnly/ Required/NoExport</returns>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// if (form.GetFieldFlag("textField") == PropertyFlag.ReadOnly)
    /// {
    ///    Console.WriteLine("Field is read-only");
    /// }
    /// </code>
    /// </example>
    PropertyFlag GetFieldFlag(System::String fieldName);
    /// <summary>
    /// Pastes an image onto the existing button field as its appearance according to 
    /// its fully qualified field name.
    /// </summary>
    /// <param name="fieldName"> The fully qualified field name of the image button field.</param>
    /// <param name="imageFileName">The path of the image file, relative and absolute are both ok.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "PdfForm_filled.pdf");
    /// form.FillImageField("fieldName", "file.jpg");
    /// form.Save();
    /// </code>
    /// </example>
    void FillImageField(System::String fieldName, System::String imageFileName);
    /// <summary>
    /// Overloads function of FillImageField.
    /// The input is a image stream.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="imageStream">The image's stream.</param>
    /// <example>
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf", "PdfForm_filled.pdf");
    /// form.FillImageField("fieldName", new FileStream("file.jpg", FileMode.Open, FileAccess.Read));
    /// </code>
    /// </example>
    void FillImageField(System::String fieldName, System::SharedPtr<System::IO::Stream> imageStream);
    
    /// <summary>
    /// Initializes new <see cref="Form"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    Form(System::SharedPtr<Aspose::Pdf::Document> document);
    /// <summary>
    /// Initializes new <see cref="Form"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destFileName">
    /// Path of the destination file.
    /// </param>
    Form(System::SharedPtr<Aspose::Pdf::Document> document, System::String destFileName);
    /// <summary>
    /// Initializes new <see cref="Form"/> object on base of the <paramref name="document"/>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destStream">
    /// Destination stream.
    /// </param>
    Form(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    
    /// <summary>
    /// Imports the content of the fields from the xml file and put them into the new pdf.
    /// </summary>
    /// <param name="inputXmlStream">The input xml stream.</param>
    /// <param name="IgnoreFormTemplateChanges">If this parameter is true then all changes of the XFA form template will not be saved</param>
    void ImportXml(System::SharedPtr<System::IO::Stream> inputXmlStream, bool IgnoreFormTemplateChanges);
    /// <summary>
    /// Fills field with specified value. 
    /// </summary>
    /// <param name="fieldName">Name of field</param>
    /// <param name="value">New value of the field</param>
    /// <param name="fitFontSize">If true, the font size in the edit boxes will be fitted.</param>
    /// <returns>true if field was found and successfully filled.</returns>
    bool FillField(System::String fieldName, System::String value, bool fitFontSize);
    
    /// <summary>
    /// Creates form which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream containing source document.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    Form(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Creates form which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Name of input file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    Form(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
protected:

    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password);
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    virtual void BindPdf(System::String srcFile, System::String password);
    static bool IsImageField(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> annotation);
    static FieldType getFieldType(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> annotation);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::IO::Stream> sourceStream;
    System::SharedPtr<System::IO::Stream> destStream;
    bool _closeStream;
    bool _formChanged;
    System::String sourceFileName;
    System::String destFileName;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Form::FormImportResult>>> _importResult;
    System::SharedPtr<System::Web::HttpResponse> _outputResponse;
    
    bool IsIncrementalUpdates();
    void CloseSource();
    void CloseDest();
    System::String RemoveLines(System::String s);
    System::SharedPtr<System::Xml::XmlNode> GetXfaNode(System::SharedPtr<System::Xml::XmlDocument> xml);
    void CollectValues(System::String parent, System::SharedPtr<System::Xml::XmlNodeList> nodes, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> values);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> GetValues(System::SharedPtr<System::Xml::XmlDocument> xml);
    void CollectXfaValues(System::String parent, System::SharedPtr<System::Xml::XmlNodeList> nodes, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> values);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> GetXfaValues(System::SharedPtr<System::Xml::XmlNode> xfa);
    /// <summary>
    /// Read all fields from XFA template and write data into XML file. This is used if dataset is empty to create correct XML export data packet.
    /// </summary>
    /// <param name="node">Current node.</param>
    /// <param name="writer">Writer where data will be stored.</param>
    void ReadFieldsFromTeamplate(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String path);
    /// <summary>
    /// Read all fields from XFA template and write data into XML file. This is used if dataset is empty to create correct XML export data packet.
    /// </summary>
    /// <param name="writer">Writer where data are stored.</param>
    void ReadFieldsFromTeamplate(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    bool IsDataPacketEmpty(System::SharedPtr<Aspose::Pdf::Document> doc);
    /// <summary>
    /// Collects field from field tree
    /// </summary>
    /// <param name="fields">Collection which contains fields of the current level.</param>
    /// <param name="prefix">Path to the container.</param>
    /// <param name="destination">List where found fields will be placed.</param>
    void collectFields(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String prefix, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::Forms::Field>>> destination);
    int32_t findPage(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    System::ArrayPtr<System::String> getOptionsAsStrings(System::SharedPtr<Aspose::Pdf::Forms::OptionCollection> options);
    System::ArrayPtr<System::ArrayPtr<System::String>> getOptionsAsArrays(System::SharedPtr<Aspose::Pdf::Forms::OptionCollection> options);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> getOptionsForChoiceField(System::SharedPtr<Aspose::Pdf::Forms::ChoiceField> field);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> getOptionsForField(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    bool isSingleCheckbox(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    System::String getFieldValue(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    void ExportFieldsToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest);
    bool hasChildFields(System::SharedPtr<System::Xml::XmlNode> node);
    void ExportXfaTemplateToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest, System::String fullName);
    void ExportXfaToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest);
    void ExportToXmlXfa(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> source, System::SharedPtr<System::Xml::XmlTextWriter> dest);
    void ExportFieldsToXml(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> source, System::SharedPtr<System::Xml::XmlTextWriter> dest);
    bool IsXfaFieldMultiline(System::String path);
    void ImportXmlFromXfa(System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> dest, System::String xfaPath);
    System::SharedPtr<Aspose::Pdf::Forms::Field> findField(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String fieldName);
    void setFieldValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> source, System::SharedPtr<Aspose::Pdf::Forms::Field> dest, System::String xfaPath);
    void ImportFieldsFromFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> dest, System::String xfaPath);
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetTemplateNamespace();
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetDatasetNamespace();
    System::SharedPtr<System::Collections::Generic::List<int32_t>> CreateTail(System::SharedPtr<System::Collections::Generic::List<int32_t>> path);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName, bool fullName);
    System::SharedPtr<System::Xml::XmlNode> GetFieldData(System::String fieldName);
    /// <summary>
    /// Find node by index in Number tree
    /// </summary>
    /// <param name="root">Root number tree node</param>
    /// <param name="index">Index of element to retreive</param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> Search(System::SharedPtr<Aspose::Pdf::Engine::CommonData::ITreeNode> root, int32_t index);
    /// <summary>
    /// Find sturct element by index.
    /// </summary>
    /// <param name="index">Index</param>
    /// <returns>Struct element</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetStructParentElement(int32_t index);
    /// <summary>
    /// Retreive element MCID by index
    /// </summary>
    /// <param name="structParentIndex">Struct parent index</param>
    /// <returns>marked content ID</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> GetElementMcid(int32_t structParentIndex);
    /// <summary>
    /// Gets list of operators inside of marked contnet block from operator collection.
    /// </summary>
    /// <param name="operators">Operator collection</param>
    /// <param name="mcid">MCID</param>
    /// <param name="tag">Tag of marked content block</param>
    /// <returns>Operators list</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperatorsByMcid(System::SharedPtr<OperatorCollection> operators, int32_t mcid, System::String tag);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


