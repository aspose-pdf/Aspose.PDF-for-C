#ifndef _Aspose_Pdf_Facades_PdfContentEditor_h_
#define _Aspose_Pdf_Facades_PdfContentEditor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.DOM;

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/eventargs.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <drawing/rectangle.h>
#include <drawing/color.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextSearchOptions; } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextEditOptions; } } } }
namespace Aspose { namespace Pdf { namespace Text { namespace TextOptions { class TextReplaceOptions; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Facades { class ReplaceTextStrategy; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Facades { enum class StampType; } } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { enum class PredefinedAction; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { namespace Facades { class LineInfo; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Facades { class StampInfo; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to edit PDF file's content.
/// </summary>
class ASPOSE_PDF_SHARED_API PdfContentEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfContentEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class ASPOSE_PDF_SHARED_API StampData : public System::Object
    {
        typedef StampData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Name();
        System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
        bool get_Visible();
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineObj();
        Aspose::Pdf::Facades::StampType get_StampType();
        System::SharedPtr<XImage> get_Image();
        System::SharedPtr<XForm> get_Form();
        int32_t get_StampId();
        
        StampData(System::SharedPtr<PdfContentEditor> owner, System::SharedPtr<XImage> image, System::SharedPtr<System::Object> ownerObject, System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<DOM::Matrix> matrix, bool visible);
        StampData(System::SharedPtr<PdfContentEditor> owner, System::SharedPtr<XForm> form, System::SharedPtr<System::Object> ownerObject, System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<DOM::Matrix> matrix, bool visible);
        
        bool Move(double X, double Y);
        bool Delete();
        bool Hide();
        bool Show();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "StampData"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<Page> _ownerPage;
        System::SharedPtr<XForm> _ownerForm;
        System::String _name;
        System::SharedPtr<DOM::Matrix> _matrix;
        System::WeakPtr<PdfContentEditor> _owner;
        System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
        bool _visible;
        System::SharedPtr<System::Object> instance;
        
        System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleFromMatrix(System::SharedPtr<DOM::Matrix> matrix);
        System::SharedPtr<OperatorCollection> GetContents();
        System::SharedPtr<Resources> GetResources();
        System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangle();
        bool Delete(bool removeResource);
        
    };
    
    
public:

    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> get_TextSearchOptions();
    void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> value);
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> get_TextEditOptions();
    void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> value);
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> get_TextReplaceOptions();
    void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> value);
    System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> get_ReplaceTextStrategy();
    void set_ReplaceTextStrategy(System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> value);
    
    static const System::String DocumentOpen;
    static const System::String DocumentClose;
    static const System::String DocumentWillSave;
    static const System::String DocumentSaved;
    static const System::String DocumentWillPrint;
    static const System::String DocumentPrinted;
    
    virtual void BindPdf(System::String inputFile);
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> inputStream);
    virtual void BindPdf(System::SharedPtr<Aspose::Pdf::Document> srcDoc);
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>>> ExtractLink();
    void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage, System::Drawing::Color clr, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::PredefinedAction> actionName);
    void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage, System::Drawing::Color clr);
    void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage);
    void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage, System::Drawing::Color clr, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::PredefinedAction> actionName);
    void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage, System::Drawing::Color clr);
    void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage, System::Drawing::Color clr, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::PredefinedAction> actionName);
    void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage, System::Drawing::Color clr);
    void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage);
    void CreateCustomActionLink(System::Drawing::Rectangle rect, int32_t originalPage, System::Drawing::Color color, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::PredefinedAction> actionName);
    void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page, System::Drawing::Color clr, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::PredefinedAction> actionName);
    void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page, System::Drawing::Color clr);
    void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page);
    void CreateText(System::Drawing::Rectangle rect, System::String title, System::String contents, bool open, System::String icon, int32_t page);
    void CreateFreeText(System::Drawing::Rectangle rect, System::String contents, int32_t page);
    void CreateMarkup(System::Drawing::Rectangle rect, System::String contents, int32_t type, int32_t page, System::Drawing::Color clr);
    void CreatePopup(System::Drawing::Rectangle rect, System::String contents, bool open, int32_t page);
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::String filePath, int32_t page, System::String name);
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::String filePath, int32_t page, System::String name, double opacity);
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::SharedPtr<System::IO::Stream> attachmentStream, System::String attachmentName, int32_t page, System::String name);
    void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::SharedPtr<System::IO::Stream> attachmentStream, System::String attachmentName, int32_t page, System::String name, double opacity);
    void AddDocumentAttachment(System::String fileAttachmentPath, System::String description);
    void AddDocumentAttachment(System::SharedPtr<System::IO::Stream> fileAttachmentStream, System::String fileAttachmentName, System::String description);
    void DeleteAttachments();
    void CreateLine(System::Drawing::Rectangle rect, System::String contents, float x1, float y1, float x2, float y2, int32_t page, int32_t border, System::Drawing::Color clr, System::String borderStyle, System::ArrayPtr<int32_t> dashArray, System::ArrayPtr<System::String> LEArray);
    void CreateSquareCircle(System::Drawing::Rectangle rect, System::String contents, System::Drawing::Color clr, bool square, int32_t page, int32_t borderWidth);
    void DrawCurve(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    void CreatePolygon(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    void CreatePolyLine(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    void CreateCaret(int32_t page, System::Drawing::Rectangle annotRect, System::Drawing::Rectangle caretRect, System::String symbol, System::String annotContents, System::Drawing::Color color);
    void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String icon, System::String annotContents, System::Drawing::Color color);
    void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents, System::Drawing::Color color, System::String appearanceFile);
    void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents, System::Drawing::Color color, System::SharedPtr<System::IO::Stream> appearanceStream);
    void CreateBookmarksAction(System::String title, System::Drawing::Color color, bool boldFlag, bool italicFlag, System::String file, System::String actionType, System::String destination);
    void RemoveDocumentOpenAction();
    void ChangeViewerPreference(int32_t viewerAttribution);
    int32_t GetViewerPreference();
    void ReplaceImage(int32_t pageNumber, int32_t index, System::String imageFile);
    void DeleteImage(int32_t pageNumber, System::ArrayPtr<int32_t> index);
    void DeleteImage();
    bool ReplaceText(System::String srcString, int32_t thePage, System::String destString, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    bool ReplaceText(System::String srcString, System::String destString);
    bool ReplaceText(System::String srcString, int32_t thePage, System::String destString);
    bool ReplaceText(System::String srcString, System::String destString, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    void CreateMovie(System::Drawing::Rectangle rect, System::String filePath, int32_t page);
    void CreateSound(System::Drawing::Rectangle rect, System::String filePath, System::String name, int32_t page, System::String rate);
    void DeleteStamp(int32_t pageNumber, System::ArrayPtr<int32_t> index);
    void DeleteStampByIds(System::ArrayPtr<int32_t> stampIds);
    void DeleteStampByIds(int32_t pageNumber, System::ArrayPtr<int32_t> stampIds);
    void DeleteStampById(int32_t pageNumber, int32_t stampId);
    void HideStampById(int32_t pageNumber, int32_t stampId);
    void ShowStampById(int32_t pageNumber, int32_t stampId);
    void MoveStampById(int32_t pageNumber, int32_t stampId, double x, double y);
    void MoveStamp(int32_t pageNumber, int32_t stampIndex, double x, double y);
    void DeleteStampById(int32_t stampId);
    
    PdfContentEditor();
    PdfContentEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage);
    bool ReplaceText(System::String srcString, System::String destString, int32_t fontSize);
    System::ArrayPtr<System::SharedPtr<StampInfo>> GetStamps(int32_t pageNumber);
    virtual void Close();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfContentEditor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextSearchOptions> _textSearchOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextEditOptions> _textEditOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextOptions::TextReplaceOptions> _textReplaceOptions;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::ArrayPtr<System::SharedPtr<PdfContentEditor::StampData>>>> _stamps;
    System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> _replaceTextStrategy;
    static System::String HiddenStampTag;
    
    void SetNextActions(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::PdfAction> action, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::PredefinedAction> actionName, bool isNamed);
    void SetNextActions(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::PdfAction> action, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::PredefinedAction> actionName);
    void ReplaceTextStrategy_OnPropertiesChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> e);
    void SyncOptionsWithReplaceTextStrategy();
    bool CheckStampSignature(System::SharedPtr<OperatorCollection> contents, System::SharedPtr<Operator> op);
    bool CheckStampSignature(System::SharedPtr<OperatorCollection> contents, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> operators);
    void GetStamps(System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    void GetStamps(System::SharedPtr<DOM::Matrix> matrix, System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    void _GetStamps(System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    System::ArrayPtr<System::SharedPtr<PdfContentEditor::StampData>> GetStampsOnPage(int32_t pageIndex);
    bool DeleteStampLogic(int32_t pageIndex, System::ArrayPtr<int32_t> stampIndex);
    void ClearStampCache();
    bool IsResourceInUse(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> resource);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfContentEditor_h_

