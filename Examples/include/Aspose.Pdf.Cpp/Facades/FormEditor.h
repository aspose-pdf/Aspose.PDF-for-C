#ifndef _Aspose_Pdf_Facades_FormEditor_h_
#define _Aspose_Pdf_Facades_FormEditor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    System::String get_SrcFileName();
    void set_SrcFileName(System::String value);
    System::String get_DestFileName();
    void set_DestFileName(System::String value);
    System::SharedPtr<System::IO::Stream> get_SrcStream();
    void set_SrcStream(System::SharedPtr<System::IO::Stream> value);
    void set_ConvertTo(PdfFormat value);
    System::SharedPtr<System::IO::Stream> get_DestStream();
    void set_DestStream(System::SharedPtr<System::IO::Stream> value);
    System::ArrayPtr<System::String> get_Items();
    void set_Items(System::ArrayPtr<System::String> value);
    System::ArrayPtr<System::ArrayPtr<System::String>> get_ExportItems();
    void set_ExportItems(System::ArrayPtr<System::ArrayPtr<System::String>> value);
    System::SharedPtr<FormFieldFacade> get_Facade();
    void set_Facade(System::SharedPtr<FormFieldFacade> value);
    float get_RadioGap();
    void set_RadioGap(float value);
    bool get_RadioHoriz();
    void set_RadioHoriz(bool value);
    double get_RadioButtonItemSize();
    void set_RadioButtonItemSize(double value);
    SubmitFormFlag get_SubmitFlag();
    void set_SubmitFlag(SubmitFormFlag value);
    Aspose::Pdf::ContentDisposition get_ContentDisposition();
    void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    System::SharedPtr<System::Web::HttpResponse> get_Response();
    void set_Response(System::SharedPtr<System::Web::HttpResponse> value);
    System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions();
    void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    System::String get_AttachmentName();
    void set_AttachmentName(System::String value);
    
    FormEditor(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<System::IO::Stream> destStream);
    FormEditor(System::String srcFileName, System::String destFileName);
    FormEditor();
    
    void Save();
    bool SetFieldAttribute(System::String fieldName, PropertyFlag flag);
    bool SetFieldAppearance(System::String fieldName, Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationFlags flags);
    Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationFlags GetFieldAppearance(System::String fieldName);
    bool SetSubmitFlag(System::String fieldName, SubmitFormFlag submitFormFlag);
    bool SetSubmitUrl(System::String fieldName, System::String url);
    bool SetFieldLimit(System::String fieldName, int32_t fieldLimit);
    bool SetFieldCombNumber(System::String fieldName, int32_t combNumber);
    bool MoveField(System::String fieldName, float llx, float lly, float urx, float ury);
    bool AddField(FieldType fieldType, System::String fieldName, int32_t pageNum, float llx, float lly, float urx, float ury);
    bool AddField(FieldType fieldType, System::String fieldName, System::String initValue, int32_t pageNum, float llx, float lly, float urx, float ury);
    void RemoveField(System::String fieldName);
    void ResetFacade();
    void ResetInnerFacade();
    void CopyInnerField(System::String fieldName, System::String newFieldName, int32_t pageNum);
    void CopyInnerField(System::String fieldName, System::String newFieldName, int32_t pageNum, float abscissa, float ordinate);
    void CopyOuterField(System::String srcFileName, System::String fieldName);
    void CopyOuterField(System::String srcFileName, System::String fieldName, int32_t pageNum);
    void CopyOuterField(System::String srcFileName, System::String fieldName, int32_t pageNum, float abscissa, float ordinate);
    void DecorateField(System::String fieldName);
    void DecorateField(FieldType fieldType);
    void DecorateField();
    void RenameField(System::String fieldName, System::String newFieldName);
    void RemoveFieldAction(System::String fieldName);
    void AddSubmitBtn(System::String fieldName, int32_t page, System::String label, System::String url, float llx, float lly, float urx, float ury);
    void AddListItem(System::String fieldName, System::String itemName);
    void AddListItem(System::String fieldName, System::ArrayPtr<System::String> exportName);
    void DelListItem(System::String fieldName, System::String itemName);
    bool Single2Multiple(System::String fieldName);
    bool SetFieldAlignment(System::String fieldName, int32_t alignment);
    bool SetFieldAlignmentV(System::String fieldName, int32_t alignment);
    
    FormEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    FormEditor(System::SharedPtr<Aspose::Pdf::Document> document, System::String destFileName);
    FormEditor(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    FormEditor(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    FormEditor(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
    virtual void Close();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FormEditor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    void GetFieldAndTemplate(System::String fieldName, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Field> &field, System::SharedPtr<System::Xml::XmlNode> &template_);
    void AddXmlFieldItems(System::SharedPtr<System::Xml::XmlNode> fieldTemplate, System::String name, System::String value);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_FormEditor_h_

