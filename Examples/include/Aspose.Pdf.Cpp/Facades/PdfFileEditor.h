#ifndef _Aspose_Pdf_Facades_PdfFileEditor_h_
#define _Aspose_Pdf_Facades_PdfFileEditor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET4CP || NET35CP) 


// C# preprocessor directive: #endif 


#include <system/type_info.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/io/seekorigin.h>
#include <system/io/memory_stream.h>
#include <system/exceptions.h>
#include <system/collections/queue.h>
#include <system/collections/list.h>
#include <system/collections/icomparer.h>
#include <system/array.h>
#include <cstdint>

#include "system/dummy_classes.h"

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class PdfFormat; } }
namespace Aspose { namespace Pdf { enum class ContentDisposition; } }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Copier; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { class OutlineCollection; } }
namespace Aspose { namespace Pdf { namespace PageModel { class PageElement; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Action performed when corrupted file was met in concatenation process. 
/// </summary>
class ASPOSE_PDF_SHARED_API PdfFileEditor FINAL : public System::Object
{
    typedef PdfFileEditor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class ConcatenateCorruptedFileAction
    {
        StopWithError,
        ConcatenateIgnoringCorrupted,
        ConcatenateIgnoringCorruptedObjects
    };
    
    
public:

    class ASPOSE_PDF_SHARED_API CorruptedItem : public System::Object
    {
        typedef CorruptedItem ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::Facades::PdfFileEditor;
        
    public:
    
        int32_t get_Index();
        System::Exception get_Exception();
        
    protected:
    
        CorruptedItem(int32_t index, System::Exception exception);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "CorruptedItem"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        int32_t _index;
        System::Exception _exception;
        
    };
    
    class ASPOSE_PDF_SHARED_API ContentsResizeValue : public System::Object
    {
        typedef ContentsResizeValue ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        void set_PercentValue(double value);
        void set_UnitValue(double value);
        double get_Value();
        bool get_IsPercent();
        
        static System::SharedPtr<PdfFileEditor::ContentsResizeValue> Percents(double value);
        static System::SharedPtr<PdfFileEditor::ContentsResizeValue> Units(double value);
        static System::SharedPtr<PdfFileEditor::ContentsResizeValue> Auto();
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ContentsResizeValue"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        double _value;
        bool _isPercent;
        
        ContentsResizeValue();
        
    };
    
    class ASPOSE_PDF_SHARED_API ContentsResizeParameters : public System::Object
    {
        typedef ContentsResizeParameters ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Facades::PdfFileEditor;
        
    public:
    
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_LeftMargin();
        void set_LeftMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_RightMargin();
        void set_RightMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_TopMargin();
        void set_TopMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_BottomMargin();
        void set_BottomMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_ContentsWidth();
        void set_ContentsWidth(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_ContentsHeight();
        void set_ContentsHeight(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        
        ContentsResizeParameters();
        ContentsResizeParameters(System::SharedPtr<PdfFileEditor::ContentsResizeValue> leftMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> contentsWidth, System::SharedPtr<PdfFileEditor::ContentsResizeValue> rightMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> topMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> contentsHeight, System::SharedPtr<PdfFileEditor::ContentsResizeValue> bottomMargin);
        
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> Margins(double left, double right, double top, double bottom);
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> MarginsPercent(double left, double right, double top, double bottom);
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> ContentSize(double width, double height);
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> ContentSizePercent(double width, double height);
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> PageResize(double width, double height);
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> PageResizePct(double widthPct, double heightPct);
        
    protected:
    
        System::ArrayPtr<System::ArrayPtr<double>> CalculateMargins(double pageWidth, double pageHeight);
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ContentsResizeParameters"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _LeftMargin;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _ContentsWidth;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _RightMargin;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _TopMargin;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _ContentsHeight;
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> _BottomMargin;
        
        System::ArrayPtr<double> CalculateMargins(System::ArrayPtr<System::SharedPtr<PdfFileEditor::ContentsResizeValue>> values, double initialSize);
        
    };
    
    class ASPOSE_PDF_SHARED_API PageBreak : public System::Object
    {
        typedef PageBreak ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t get_PageNumber();
        void set_PageNumber(int32_t value);
        double get_Position();
        void set_Position(double value);
        
        PageBreak(int32_t pageNumber, double position);
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "PageBreak"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        int32_t _pageNumber;
        double _position;
        
    };
    
    
private:

    class ASPOSE_PDF_SHARED_API NullStream : public System::IO::Stream
    {
        typedef NullStream ThisType;
        typedef System::IO::Stream BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        virtual int64_t get_Position() const;
        virtual void set_Position(int64_t value);
        virtual int64_t get_Length() const;
        virtual bool get_CanRead() const;
        virtual bool get_CanSeek() const;
        virtual bool get_CanWrite() const;
        
        virtual void Write(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count);
        virtual int32_t Read(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count);
        virtual void SetLength(int64_t value);
        virtual void Flush();
        virtual int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
        
        NullStream();
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "NullStream"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        int64_t pos;
        
    };
    
    class ASPOSE_PDF_SHARED_API OptionalContentsItemDescriptor : public System::Object
    {
        typedef OptionalContentsItemDescriptor ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> oc;
        bool addedToOrder;
        
        OptionalContentsItemDescriptor(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> oc);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "OptionalContentsItemDescriptor"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    class ASPOSE_PDF_SHARED_API PageBreakComparer : public System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>>
    {
        typedef PageBreakComparer ThisType;
        typedef System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t Compare(System::SharedPtr<PdfFileEditor::PageBreak> x, System::SharedPtr<PdfFileEditor::PageBreak> y) const;
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "PageBreakComparer"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    class ASPOSE_PDF_SHARED_API DocumentFormatter : public System::Object
    {
        typedef DocumentFormatter ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        void Execute();
        
        DocumentFormatter(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>> pageBreaks);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "DocumentFormatter"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        double position;
        double currentPageOffset;
        double pageBreakOffset;
        double elementOffset;
        int32_t pageIndex;
        System::SharedPtr<Page> currentPage;
        System::SharedPtr<Document> src;
        System::SharedPtr<Document> dest;
        System::SharedPtr<Page> destPage;
        System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>>> pageBreaks;
        
        void PageBreak(double pageBreakPosition);
        void CheckPageBreak(System::SharedPtr<Aspose::Pdf::PageModel::PageElement> element);
        void AssignPageBreaks(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>> pageBreaksArray);
        
    };
    
    
public:

    System::String get_ConversionLog();
    bool get_MergeDuplicateLayers();
    void set_MergeDuplicateLayers(bool value);
    bool get_CopyOutlines();
    void set_CopyOutlines(bool value);
    bool get_CopyLogicalStructure();
    void set_CopyLogicalStructure(bool value);
    bool get_MergeDuplicateOutlines();
    void set_MergeDuplicateOutlines(bool value);
    bool get_PreserveUserRights();
    void set_PreserveUserRights(bool value);
    bool get_IncrementalUpdates();
    void set_IncrementalUpdates(bool value);
    bool get_OptimizeSize();
    void set_OptimizeSize(bool value);
    System::ArrayPtr<System::SharedPtr<PdfFileEditor::CorruptedItem>> get_CorruptedItems();
    PdfFileEditor::ConcatenateCorruptedFileAction get_CorruptedFileAction();
    void set_CorruptedFileAction(PdfFileEditor::ConcatenateCorruptedFileAction value);
    System::String get_OwnerPassword();
    void set_OwnerPassword(System::String value);
    bool get_AllowConcatenateExceptions();
    void set_AllowConcatenateExceptions(bool value);
    void set_ConvertTo(PdfFormat value);
    bool get_CloseConcatenatedStreams();
    void set_CloseConcatenatedStreams(bool value);
    System::String get_UniqueSuffix();
    void set_UniqueSuffix(System::String value);
    bool get_KeepFieldsUnique();
    void set_KeepFieldsUnique(bool value);
    System::Exception get_LastException();
    Aspose::Pdf::ContentDisposition get_ContentDisposition();
    void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions();
    void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    System::String get_AttachmentName();
    void set_AttachmentName(System::String value);
    
    PdfFileEditor();
    
    bool Concatenate(System::String firstInputFile, System::String secInputFile, System::String outputFile);
    bool Concatenate(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secInputStream, System::SharedPtr<System::IO::Stream> outputStream);
    bool Concatenate(System::ArrayPtr<System::SharedPtr<Document>> src, System::SharedPtr<Document> dest);
    bool Concatenate(System::ArrayPtr<System::String> inputFiles, System::String outputFile);
    bool Concatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    bool Concatenate(System::String firstInputFile, System::String secInputFile, System::String blankPageFile, System::String outputFile);
    bool Concatenate(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secInputStream, System::SharedPtr<System::IO::Stream> blankPageStream, System::SharedPtr<System::IO::Stream> outputStream);
    bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    bool Append(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::String outputFile);
    bool Append(System::String inputFile, System::String portFile, int32_t startPage, int32_t endPage, System::String outputFile);
    bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> portStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, int32_t startPage, int32_t endPage, System::String outputFile);
    bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    bool Delete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    bool Delete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    bool Extract(System::String inputFile, int32_t startPage, int32_t endPage, System::String outputFile);
    bool Extract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    bool Extract(System::SharedPtr<System::IO::Stream> inputStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    bool Extract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    bool SplitFromFirst(System::String inputFile, int32_t location, System::String outputFile);
    bool SplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    bool SplitToEnd(System::String inputFile, int32_t location, System::String outputFile);
    bool SplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    bool MakeBooklet(System::String inputFile, System::String outputFile);
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    bool MakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize);
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    bool MakeBooklet(System::String inputFile, System::String outputFile, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    bool MakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    bool MakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y);
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y);
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    bool MakeNUp(System::String firstInputFile, System::String secondInputFile, System::String outputFile);
    bool MakeNUp(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secondInputStream, System::SharedPtr<System::IO::Stream> outputStream);
    bool MakeNUp(System::ArrayPtr<System::String> inputFiles, System::String outputFile, bool isSidewise);
    bool MakeNUp(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStreams, System::SharedPtr<System::IO::Stream> outputStream, bool isSidewise);
    bool MakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToPages(System::String inputFile);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToPages(System::SharedPtr<System::IO::Stream> inputStream);
    void SplitToPages(System::String inputFile, System::String fileNameTemplate);
    void SplitToPages(System::SharedPtr<System::IO::Stream> inputStream, System::String fileNameTemplate);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToBulks(System::String inputFile, System::ArrayPtr<System::ArrayPtr<int32_t>> numberOfPage);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToBulks(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::ArrayPtr<int32_t>> numberOfPage);
    bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    bool ResizeContentsPct(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    bool AddMargins(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    bool AddMarginsPct(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    bool ResizeContents(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    bool ResizeContentsPct(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    bool AddMargins(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    bool AddMarginsPct(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    bool ResizeContents(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    void ResizeContents(System::SharedPtr<Document> source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    void ResizeContents(System::SharedPtr<Document> source, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    bool Concatenate(System::ArrayPtr<System::String> inputFiles, System::SharedPtr<System::Web::HttpResponse> response);
    bool Concatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    bool Append(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    bool Delete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    bool Delete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    bool Extract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    bool Extract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    bool SplitFromFirst(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    bool SplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    bool SplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    bool SplitToEnd(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    bool ResizeContents(System::String source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    void AddPageBreak(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    void AddPageBreak(System::String src, System::String dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    void AddPageBreak(System::SharedPtr<System::IO::Stream> src, System::SharedPtr<System::IO::Stream> dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    
protected:

    static const System::String E_EMPTY_PAGE_RANGE;
    static const System::String E_SMALL_PAGE_RANGE;
    static const System::String E_WRONG_PAGE_RANGE;
    
    void ResizeContents(System::SharedPtr<Document> source, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfFileEditor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String ownerPassword;
    bool allowConcatenateExceptions;
    bool closeConcatenatedStreams;
    bool _keepFieldUnique;
    static const System::String NUM_TEMPLATE;
    System::String _uniqueSuffix;
    System::Exception _lastException;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    bool _optimizeSize;
    System::String _conversionLog;
    bool _mergeDuplicateLayers;
    bool _mergeDuplicateOutlines;
    bool _preserveUserRights;
    bool _incrementalUpdates;
    bool _copyOutlines;
    bool _copyLogicalStructure;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfFileEditor::CorruptedItem>>> _corruptedItems;
    PdfFileEditor::ConcatenateCorruptedFileAction _corruptedFileAction;
    
    bool HasUserRights(System::SharedPtr<Document> doc);
    void CopyStream(System::SharedPtr<System::IO::Stream> src, System::SharedPtr<System::IO::Stream> dest);
    System::String ExtractName(System::String FieldName, System::String &IndexSuffix);
    void Append(System::SharedPtr<Document> dest, System::ArrayPtr<System::SharedPtr<Document>> documents, int32_t startPage, int32_t endPage);
    void Insert(System::SharedPtr<Document> dest, int32_t insertLocation, System::SharedPtr<Document> src, System::ArrayPtr<int32_t> pageNumber);
    void Extract(System::SharedPtr<Document> doc, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> pageNumber);
    void SplitFromFirst(System::SharedPtr<Document> doc, System::SharedPtr<Document> dest, int32_t location);
    void SplitToEnd(System::SharedPtr<Document> doc, System::SharedPtr<Document> dest, int32_t location);
    bool concatenateParallel(System::ArrayPtr<System::SharedPtr<Document>> source, System::SharedPtr<Document> fill, System::SharedPtr<Document> dest);
    System::ArrayPtr<int32_t> getRange(int32_t startPage, int32_t endPage);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> splitToPages(System::SharedPtr<Document> doc);
    void splitToPages(System::SharedPtr<Document> doc, System::String fileNameTemplate);
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> splitToBulks(System::SharedPtr<Document> doc, System::ArrayPtr<System::ArrayPtr<int32_t>> numberofpage);
    System::SharedPtr<Document> deletePages(System::SharedPtr<Document> doc, System::ArrayPtr<int32_t> pages);
    System::SharedPtr<XForm> convertPageToXForm(System::SharedPtr<Page> source, System::SharedPtr<Document> document, System::SharedPtr<Copier> copier);
    void CopyAnnotations(System::SharedPtr<Page> src, System::SharedPtr<Page> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::DOM::Matrix> matrix);
    System::SharedPtr<XForm> placePage(System::SharedPtr<Page> source, System::SharedPtr<Document> document, System::SharedPtr<Page> dest, double x, double y, double zoom, System::SharedPtr<Copier> copier);
    void placePageInRect(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, int32_t srcIndex, int32_t destIndex, System::SharedPtr<Rectangle> rect, System::SharedPtr<Copier> copier);
    void makeBooklet(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> left, System::ArrayPtr<int32_t> right, double width, double height);
    System::ArrayPtr<System::ArrayPtr<int32_t>> createLayout(int32_t pageCount);
    void makeNUp(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, int32_t NX, int32_t NY, double width, double height);
    void combine(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Document>>> documents, System::SharedPtr<Document> dest, bool sidewise);
    System::SharedPtr<Document> openDocument(System::String fileName);
    System::SharedPtr<Document> openDocument(System::SharedPtr<System::IO::Stream> stream);
    void convert(System::SharedPtr<Document> doc);
    void save(System::SharedPtr<Document> dest, System::SharedPtr<System::IO::Stream> stream);
    void preSave(System::SharedPtr<Document> dest);
    void save(System::SharedPtr<Document> dest, System::String fileName);
    void saveIncremental(System::SharedPtr<Document> dest);
    void handleException(System::Exception e);
    void CloseStreams(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> streams);
    void CloseStream(System::SharedPtr<System::IO::Stream> stream);
    void CopyActions(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier);
    void mergeDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier);
    System::String GetFieldName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> FindFieldByName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> fields, System::String fieldName);
    int32_t FindFieldIndexByName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> fields, System::String fieldName);
    void MoveData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::String key);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> TransformField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field);
    void MakeAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent);
    void AddField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> collection);
    System::String ModifyField(System::String fieldName, System::String suffix);
    System::String ExtractFieldName(System::String fieldName);
    void CopyAcroForm(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> renameMap);
    System::ArrayPtr<System::SharedPtr<Document>> _GetDocuments(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> streams);
    System::ArrayPtr<System::SharedPtr<Document>> GetDocuments(System::ArrayPtr<System::String> files);
    System::ArrayPtr<System::SharedPtr<Document>> GetDocuments(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> files);
    void MergeOptionalContents(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex);
    void LinkOptionalContents(System::SharedPtr<Document> dest, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex);
    int32_t pagesCount(System::SharedPtr<Document> doc);
    System::String getKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array, int32_t index);
    int32_t SearchKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array, System::String keyToInsert, int32_t startIndex);
    void MergeNameTree(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest, System::SharedPtr<Copier> copier);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetEntry(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> tr, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict, System::String key, const System::TypeInfo& type, bool allowCreate);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> GetEntry(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> tr, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict, System::ArrayPtr<System::String> path, const System::TypeInfo& type, bool allowCreate);
    void MergeNameTree(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> srcNameTree, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> destNames, System::SharedPtr<Copier> copier);
    void MergeDests(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier);
    void MergeNames(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier, System::String entryName);
    void MergeJavaScript(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier);
    System::SharedPtr<OutlineItemCollection> findOutline(System::SharedPtr<OutlineCollection> outlines, System::String title);
    bool Compare(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> item1, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> item2);
    bool CompareDict(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict1, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict2);
    bool CompareOutlines(System::SharedPtr<OutlineItemCollection> outline1, System::SharedPtr<OutlineItemCollection> outline2);
    void MergeOutlines(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier);
    void ConcatenateDocuments(System::ArrayPtr<System::SharedPtr<Document>> sources, System::SharedPtr<Document> dest);
    void TransformAppearance(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> appearanceDictionary, double zoomX, double zoomY);
    void save(System::SharedPtr<Document> dest, System::SharedPtr<System::Web::HttpResponse> response);
    void CheckPageNumber(System::SharedPtr<Document> doc, int32_t pageNumber);
    System::SharedPtr<Copier> CreateCopier(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfFileEditor_h_

