#ifndef _Aspose_Pdf_Facades_Form_h_
#define _Aspose_Pdf_Facades_Form_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET4CP || NET35CP) 


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
#include <system/collections/list.h>
#include <system/collections/icollection.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "system/dummy_classes.h"

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
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class WidgetAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Field; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class OptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ChoiceField; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class ITreeNode; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfNumber; } } } }
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
        Success,
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
    
        Form::ImportStatus get_Status();
        System::String get_FieldName();
        
    protected:
    
        FormImportResult(System::String fieldName, Form::ImportStatus status);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "FormImportResult"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        Form::ImportStatus _status;
        System::String _fieldName;
        
    };
    
    
public:

    System::ArrayPtr<System::SharedPtr<Form::FormImportResult>> get_ImportResult();
    System::String get_SrcFileName();
    void set_SrcFileName(System::String value);
    void set_ConvertTo(PdfFormat value);
    System::String get_DestFileName();
    void set_DestFileName(System::String value);
    System::SharedPtr<System::IO::Stream> get_SrcStream();
    void set_SrcStream(System::SharedPtr<System::IO::Stream> value);
    System::SharedPtr<System::IO::Stream> get_DestStream();
    void set_DestStream(System::SharedPtr<System::IO::Stream> value);
    System::ArrayPtr<System::String> get_FieldNames();
    System::ArrayPtr<System::String> get_FormSubmitButtonNames();
    Aspose::Pdf::ContentDisposition get_ContentDisposition();
    void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    System::SharedPtr<System::Web::HttpResponse> get_Response();
    void set_Response(System::SharedPtr<System::Web::HttpResponse> value);
    System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions();
    void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    System::String get_AttachmentName();
    void set_AttachmentName(System::String value);
    
    System::SharedPtr<FormFieldFacade> GetFieldFacade(System::String fieldName);
    
    Form(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<System::IO::Stream> destStream);
    Form();
    
    bool FillField(System::String fieldName, System::String fieldValue);
    bool FillField(System::String fieldName, int32_t index);
    bool FillField(System::String fieldName, bool beChecked);
    System::String GetButtonOptionCurrentValue(System::String fieldName);
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> GetButtonOptionValues(System::String fieldName);
    System::String GetField(System::String fieldName);
    System::String GetFullFieldName(System::String fieldName);
    int32_t GetFieldLimit(System::String fieldName);
    void Save();
    virtual void Save(System::String destFile);
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream);
    virtual void Close();
    void FlattenAllFields();
    void FlattenField(System::String fieldName);
    bool FillBarcodeField(System::String fieldName, System::String data);
    void ImportFdf(System::SharedPtr<System::IO::Stream> inputFdfStream);
    void ExportFdf(System::SharedPtr<System::IO::Stream> outputFdfStream);
    void ImportXml(System::SharedPtr<System::IO::Stream> inputXmlStream);
    void ExportXml(System::SharedPtr<System::IO::Stream> outputXmlStream);
    void ExtractXfaData(System::SharedPtr<System::IO::Stream> outputXmlStream);
    void SetXfaData(System::SharedPtr<System::IO::Stream> inputXmlStream);
    void ImportXfdf(System::SharedPtr<System::IO::Stream> inputXfdfStream);
    void ExportXfdf(System::SharedPtr<System::IO::Stream> outputXfdfStream);
    void FillField(System::String fieldName, System::ArrayPtr<System::String> fieldValues);
    void RenameField(System::String fieldName, System::String newFieldName);
    System::String GetRichText(System::String fieldName);
    SubmitFormFlag GetSubmitFlags(System::String fieldName);
    
    Form(System::String srcFileName);
    Form(System::SharedPtr<System::IO::Stream> srcStream);
    Form(System::String srcFileName, System::String destFileName);
    Form(System::String srcFileName, System::SharedPtr<System::IO::Stream> destStream);
    Form(System::SharedPtr<System::IO::Stream> srcStream, System::String destFileName);
    
    FieldType GetFieldType(System::String fieldName);
    bool IsRequiredField(System::String fieldName);
    PropertyFlag GetFieldFlag(System::String fieldName);
    void FillImageField(System::String fieldName, System::String imageFileName);
    void FillImageField(System::String fieldName, System::SharedPtr<System::IO::Stream> imageStream);
    
    Form(System::SharedPtr<Aspose::Pdf::Document> document);
    Form(System::SharedPtr<Aspose::Pdf::Document> document, System::String destFileName);
    Form(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    
    void ImportXml(System::SharedPtr<System::IO::Stream> inputXmlStream, bool IgnoreFormTemplateChanges);
    bool FillField(System::String fieldName, System::String value, bool fitFontSize);
    
    Form(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    Form(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
protected:

    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password);
    virtual void BindPdf(System::String srcFile, System::String password);
    static bool IsImageField(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> annotation);
    static FieldType getFieldType(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation> annotation);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Form"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    void ReadFieldsFromTeamplate(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String path);
    void ReadFieldsFromTeamplate(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    bool IsDataPacketEmpty(System::SharedPtr<Aspose::Pdf::Document> doc);
    void collectFields(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> fields, System::String prefix, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field>>> destination);
    int32_t findPage(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> field);
    System::ArrayPtr<System::String> getOptionsAsStrings(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::OptionCollection> options);
    System::ArrayPtr<System::ArrayPtr<System::String>> getOptionsAsArrays(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::OptionCollection> options);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> getOptionsForChoiceField(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField> field);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> getOptionsForField(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> field);
    System::ArrayPtr<System::SharedPtr<Operator>> createAppearance(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> field, System::String displayValue);
    bool isSingleCheckbox(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> field);
    System::String getFieldValue(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> field);
    void ExportFieldsToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest);
    bool hasChildFields(System::SharedPtr<System::Xml::XmlNode> node);
    void ExportXfaTemplateToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest, System::String fullName);
    void ExportXfaToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest);
    void ExportToXmlXfa(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> source, System::SharedPtr<System::Xml::XmlTextWriter> dest);
    void ExportFieldsToXml(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> source, System::SharedPtr<System::Xml::XmlTextWriter> dest);
    bool IsXfaFieldMultiline(System::String path);
    void ImportXmlFromXfa(System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> dest, System::String xfaPath);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> findField(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> fields, System::String fieldName);
    void setFieldValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> source, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> dest, System::String xfaPath);
    void ImportFieldsFromFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::WidgetAnnotation>>> dest, System::String xfaPath);
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetTemplateNamespace();
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetDatasetNamespace();
    System::SharedPtr<System::Collections::Generic::List<int32_t>> CreateTail(System::SharedPtr<System::Collections::Generic::List<int32_t>> path);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName, bool fullName);
    System::SharedPtr<System::Xml::XmlNode> GetFieldData(System::String fieldName);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> Search(System::SharedPtr<Aspose::Pdf::Engine::CommonData::ITreeNode> root, int32_t index);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetStructParentElement(int32_t index);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> GetElementMcid(int32_t structParentIndex);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperatorsByMcid(System::SharedPtr<OperatorCollection> operators, int32_t mcid, System::String tag);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_Form_h_

