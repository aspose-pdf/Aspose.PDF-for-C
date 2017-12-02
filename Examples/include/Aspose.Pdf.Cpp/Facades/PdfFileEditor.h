#ifndef _Aspose_Pdf_Facades_PdfFileEditor_h_
#define _Aspose_Pdf_Facades_PdfFileEditor_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
        /// <summary>
        /// If corrupted file was met, then stop concatentation process and return error.
        /// </summary>
        StopWithError,
        /// <summary>
        /// If corrupted file was met, then don't stop concatenation and don't process corrupted file.
        /// List of corrupted files is accessible in Failures property.
        /// </summary>
        ConcatenateIgnoringCorrupted,
        /// <summary>
        /// When corrupted object is met in source document, process will not stopped and corrupted object only is ignored.
        /// </summary>
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
    
        /// <summary>
        /// Index of corrupted file.
        /// </summary>
        int32_t get_Index();
        /// <summary>
        /// Exception thrown for this file which indicates problem with the file.
        /// </summary>
        System::Exception get_Exception();
        
    protected:
    
        /// <summary>
        /// constructor.
        /// </summary>
        /// <param name="index"></param>
        /// <param name="exception"></param>
        CorruptedItem(int32_t index, System::Exception exception);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
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
    
        /// <summary>
        /// Sets value in percents of page size.
        /// </summary>
        void set_PercentValue(double value);
        /// <summary>
        /// Sets value in default space units.
        /// </summary>
        void set_UnitValue(double value);
        /// <summary>
        /// Gets specified value. Use Unit property to get value units.
        /// </summary>
        double get_Value();
        /// <summary>
        /// Gets true if value is expressed in percents; 
        /// False if value is expressed in default units.
        /// </summary>
        bool get_IsPercent();
        
        /// <summary>
        /// Initializes value in percents.
        /// </summary>
        /// <param name="value">Value in percents.</param>
        /// <returns>New value instance.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeValue> Percents(double value);
        /// <summary>
        /// Initializes value in default space units.
        /// </summary>
        /// <param name="value">Value in units.</param>
        /// <returns>New value instance.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeValue> Units(double value);
        /// <summary>
        /// Initializes automatically calculated value.
        /// </summary>
        /// <returns>New value instance.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeValue> Auto();
        
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
    
        /// <summary>
        /// Gets or sets left margin on the resultant page.
        /// </summary>
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_LeftMargin();
        /// <summary>
        /// Gets or sets left margin on the resultant page.
        /// </summary>
        void set_LeftMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets or sets right margin on the resultant page.
        /// </summary>
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_RightMargin();
        /// <summary>
        /// Gets or sets right margin on the resultant page.
        /// </summary>
        void set_RightMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets or sets top margin on the resultant page.
        /// </summary>
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_TopMargin();
        /// <summary>
        /// Gets or sets top margin on the resultant page.
        /// </summary>
        void set_TopMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets or sets bottom margin on the resultant page.
        /// </summary>
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_BottomMargin();
        /// <summary>
        /// Gets or sets bottom margin on the resultant page.
        /// </summary>
        void set_BottomMargin(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets or sets width of the content of the source page on the resultant page.
        /// </summary>
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_ContentsWidth();
        /// <summary>
        /// Gets or sets width of the content of the source page on the resultant page.
        /// </summary>
        void set_ContentsWidth(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        /// <summary>
        /// Gets or sets height of the content of the source page on the resultant page.
        /// </summary>
        System::SharedPtr<PdfFileEditor::ContentsResizeValue> get_ContentsHeight();
        /// <summary>
        /// Gets or sets height of the content of the source page on the resultant page.
        /// </summary>
        void set_ContentsHeight(System::SharedPtr<PdfFileEditor::ContentsResizeValue> value);
        
        /// <summary>
        /// Creates resize parameters where al values are set to "auto". Later margins and contents size may be specified if required.
        /// </summary>
        ContentsResizeParameters();
        /// <summary>
        /// Creates resize parameters with specified margin values and contents size. 
        /// </summary>
        /// <param name="leftMargin">Left margin value.</param>
        /// <param name="contentsWidth">Contents width.</param>
        /// <param name="rightMargin">Right margin.</param>
        /// <param name="topMargin">Top margin.</param>
        /// <param name="contentsHeight">Contents height.</param>
        /// <param name="bottomMargin">Bottom margin.</param>
        /// Empty values means that corresponding value calculated automatically
        ContentsResizeParameters(System::SharedPtr<PdfFileEditor::ContentsResizeValue> leftMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> contentsWidth, System::SharedPtr<PdfFileEditor::ContentsResizeValue> rightMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> topMargin, System::SharedPtr<PdfFileEditor::ContentsResizeValue> contentsHeight, System::SharedPtr<PdfFileEditor::ContentsResizeValue> bottomMargin);
        
        /// <summary>
        /// Creates resize parameters with specifed margins value. Contents size is automatically calculated.
        /// </summary>
        /// <param name="left">Left margin.</param>
        /// <param name="right">Right margin.</param>
        /// <param name="top">Top margin.</param>
        /// <param name="bottom">Bottom margin.</param>
        /// <returns>Created resize parameters.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> Margins(double left, double right, double top, double bottom);
        /// <summary>
        /// Creates resize parameters. Margins are specified in percents of initial page size.
        /// </summary>
        /// <param name="left">Left margin (in percents of page width).</param>
        /// <param name="right">Right margin (in percents of page height).</param>
        /// <param name="top">Top margin (in percents of page height).</param>
        /// <param name="bottom">Bottom margin (in percents of page height).</param>
        /// <returns>Returns new resize parameters.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> MarginsPercent(double left, double right, double top, double bottom);
        /// <summary>
        /// Creates resize parameters with specified contents size.
        /// </summary>
        /// <param name="width">New width of contents.</param>
        /// <param name="height">New height of contetns.</param>
        /// <returns>Returns new resize parameters.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> ContentSize(double width, double height);
        /// <summary>
        /// Creates resize parameters with specified contents size in percents of initial page size.
        /// Margins are caculated automatically.
        /// </summary>
        /// <param name="width">New content width in percents.</param>
        /// <param name="height">New contents height in percents.</param>
        /// <returns>New resize parameters.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> ContentSizePercent(double width, double height);
        /// <summary>
        /// Creates resize paramters for page resize. 
        /// </summary>
        /// <param name="width">New page width in units.</param>
        /// <param name="height">New page height in units. </param>
        /// <returns>New resize paramteres.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> PageResize(double width, double height);
        /// <summary>
        /// Creates resize paramters for page resize. New sizes are specified in percent. 
        /// </summary>
        /// <param name="widthPct">New page width in percents.</param>
        /// <param name="heightPct">New page height in percents. </param>
        /// <returns>New resize paramteres.</returns>
        static System::SharedPtr<PdfFileEditor::ContentsResizeParameters> PageResizePct(double widthPct, double heightPct);
        
    protected:
    
        System::ArrayPtr<System::ArrayPtr<double>> CalculateMargins(double pageWidth, double pageHeight);
        System::Object::shared_members_type GetSharedMembers() override;
        
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
    
        /// <summary>
        /// Number of page (starting from 1) where page break must be added.
        /// </summary>
        int32_t get_PageNumber();
        /// <summary>
        /// Number of page (starting from 1) where page break must be added.
        /// </summary>
        void set_PageNumber(int32_t value);
        /// <summary>
        /// Vertical position of page break.
        /// </summary>
        double get_Position();
        /// <summary>
        /// Vertical position of page break.
        /// </summary>
        void set_Position(double value);
        
        /// <summary>
        /// Constructor to create PageBreak object.
        /// </summary>
        /// <param name="pageNumber">Number of page where page break is placed.</param>
        /// <param name="position">Vertical position of page break.</param>
        PageBreak(int32_t pageNumber, double position);
        
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
        
    };
    
    class ASPOSE_PDF_SHARED_API PageBreakComparer : public System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>>
    {
        typedef PageBreakComparer ThisType;
        typedef System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::PageBreak>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t Compare(System::SharedPtr<PdfFileEditor::PageBreak> x, System::SharedPtr<PdfFileEditor::PageBreak> y) const;
        
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

    /// <summary>
    /// Gets log of conversion process.
    /// </summary>
    System::String get_ConversionLog();
    /// <summary>
    /// Optional contents of concatentated documents with equal names will be merged into one layer in resulstant document if this property is true. 
    /// Else, layers with equal names will be save as different layers in resultant document.
    /// </summary>
    bool get_MergeDuplicateLayers();
    /// <summary>
    /// Optional contents of concatentated documents with equal names will be merged into one layer in resulstant document if this property is true. 
    /// Else, layers with equal names will be save as different layers in resultant document.
    /// </summary>
    void set_MergeDuplicateLayers(bool value);
    /// <summary>
    /// If true then outlines will be copied. 
    /// </summary>
    bool get_CopyOutlines();
    /// <summary>
    /// If true then outlines will be copied. 
    /// </summary>
    void set_CopyOutlines(bool value);
    /// <summary>
    /// If true then logical structure of the file is copied when concatenation is performed. 
    /// </summary>
    bool get_CopyLogicalStructure();
    /// <summary>
    /// If true then logical structure of the file is copied when concatenation is performed. 
    /// </summary>
    void set_CopyLogicalStructure(bool value);
    /// <summary>
    /// If true, duplicate outlines are merged.
    /// </summary>
    bool get_MergeDuplicateOutlines();
    /// <summary>
    /// If true, duplicate outlines are merged.
    /// </summary>
    void set_MergeDuplicateOutlines(bool value);
    /// <summary>
    /// If true, user rights of first document are applied to concatenated document. User rights of all other documents are ignored. 
    /// </summary>
    bool get_PreserveUserRights();
    /// <summary>
    /// If true, user rights of first document are applied to concatenated document. User rights of all other documents are ignored. 
    /// </summary>
    void set_PreserveUserRights(bool value);
    /// <summary>
    /// If true, incremental updates are made during concatenation. 
    /// </summary>
    bool get_IncrementalUpdates();
    /// <summary>
    /// If true, incremental updates are made during concatenation. 
    /// </summary>
    void set_IncrementalUpdates(bool value);
    /// <summary>
    /// Gets or sets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    bool get_OptimizeSize();
    /// <summary>
    /// Gets or sets optimization flag. Equal resource streams in resultant file are merged into one PDF object if this flag set. 
    /// This allows to decrease resultant file size but may cause slower execution and larger memory requirements.
    /// Default value: false.
    /// </summary>
    void set_OptimizeSize(bool value);
    /// <summary>
    /// Array of encountered problems when concatenation was performed. For every corrupted document from passed to Concatenate() 
    /// function new CorruptedItem entry is created.
    /// This property may be used only when CorruptedFileAction is ConcatenateIgnoringCorrupted.
    /// <example>
    /// <code lang="C#">
    /// //concatenate documents and show information about corrupted documents
    /// PdfFileEditor pfe = new PdfFileEditor();
    /// pfe.CorruptedFileAction = PdfFileEditor.ConcatenateCorruptedFileActions.ConcatenateIgnoringCorrupted;
    /// if (pfe.CorruptedItems.Length >0)
    /// {
    ///   foreach(PdfFileEditor.CorruptedItem item in pfe.CorruptedItems)
    ///   {
    ///      Console.WriteLine(item.Index + " reason: " + item.Exception);
    ///   }
    /// }
    /// </code>
    /// </example>
    /// </summary>
    System::ArrayPtr<System::SharedPtr<PdfFileEditor::CorruptedItem>> get_CorruptedItems();
    /// <summary>
    /// This property defines behavior when concatenating process met corrupted file.
    /// Possible values are: StopWithError and ConcatenateIgnoringCorrupted.
    /// </summary>
    PdfFileEditor::ConcatenateCorruptedFileAction get_CorruptedFileAction();
    /// <summary>
    /// This property defines behavior when concatenating process met corrupted file.
    /// Possible values are: StopWithError and ConcatenateIgnoringCorrupted.
    /// </summary>
    void set_CorruptedFileAction(PdfFileEditor::ConcatenateCorruptedFileAction value);
    /// <summary>
    /// Sets owner's password if the source input Pdf file is encrypted.
    /// This property is not implemented yet.
    /// </summary>
    System::String get_OwnerPassword();
    /// <summary>
    /// Sets owner's password if the source input Pdf file is encrypted.
    /// This property is not implemented yet.
    /// </summary>
    void set_OwnerPassword(System::String value);
    /// <summary>
    /// If set to true, exceptions are thrown if error occured. Else excetion are not thrown and methods return false if failed.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->set_AllowConcatenateExceptions(true);
    /// </code>
    /// </example>
    bool get_AllowConcatenateExceptions();
    /// <summary>
    /// If set to true, exceptions are thrown if error occured. Else excetion are not thrown and methods return false if failed.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->set_AllowConcatenateExceptions(true);
    /// </code>
    /// </example>
    void set_AllowConcatenateExceptions(bool value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    void set_ConvertTo(PdfFormat value);
    /// <summary>
    /// If set to true, streams are closed after operation.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->set_CloseConcatenatedStreams(true);
    /// </code>
    /// </example>
    bool get_CloseConcatenatedStreams();
    /// <summary>
    /// If set to true, streams are closed after operation.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->set_CloseConcatenatedStreams(true);
    /// </code>
    /// </example>
    void set_CloseConcatenatedStreams(bool value);
    /// <summary>
    /// Format of the suffix which is added to field name to make it unique when forms are concatenated.
    /// This string must contain %NUM% substring which will be replaced with numbers.
    /// For example if UniqueSuffix = "ABC%NUM%" then for field "fieldName" names will be:
    /// fieldNameABC1, fieldNameABC2, fieldNameABC3 etc.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> ed = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// ed->set_UniqueSuffix(L"_%NUM%");
    /// </code>
    /// </example>
    System::String get_UniqueSuffix();
    /// <summary>
    /// Format of the suffix which is added to field name to make it unique when forms are concatenated.
    /// This string must contain %NUM% substring which will be replaced with numbers.
    /// For example if UniqueSuffix = "ABC%NUM%" then for field "fieldName" names will be:
    /// fieldNameABC1, fieldNameABC2, fieldNameABC3 etc.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> ed = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// ed->set_UniqueSuffix(L"_%NUM%");
    /// </code>
    /// </example>
    void set_UniqueSuffix(System::String value);
    /// <summary>
    /// If true then field names will be made unique when forms are concatenated.
    /// Suffixes will be added to field names, suffix template may be specified in UniqueSuffix property.
    /// </summary>
    bool get_KeepFieldsUnique();
    /// <summary>
    /// If true then field names will be made unique when forms are concatenated.
    /// Suffixes will be added to field names, suffix template may be specified in UniqueSuffix property.
    /// </summary>
    void set_KeepFieldsUnique(bool value);
    /// <summary>
    /// Gets last occured exception. May be used to check the reason of failure when AllowconcatenateExceptions = false.
    /// </summary>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->set_AllowConcatenateExceptions(false);
    /// if (!pfe->Concatenate(L"file1.pdf", L"file2.pdf", L"file3.pdf"))
    /// {
    ///     System::Console::WriteLine(L"Error occured:");
    ///     if (pfe->get_LastException() != nullptr)
    ///     {
    ///         System::Console::WriteLine(pfe->get_LastException().get_Message());
    ///         if (pfe->get_LastException().get_InnerException() != nullptr)
    ///         {
    ///             System::Console::WriteLine(pfe->get_LastException().get_InnerException().get_Message());
    ///         }
    ///     }
    /// }
    /// </code>
    /// </example>
    System::Exception get_LastException();
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
    /// PdfFileEditor constructor.
    /// </summary>
    PdfFileEditor();
    
    /// <summary>
    /// Concatentates two files.
    /// </summary>
    /// <param name="firstInputFile">First file to concatenate.</param>
    /// <param name="secInputFile">Second file to concatenate.</param>
    /// <param name="outputFile">Output file.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// fileEditor->Concatenate(L"file1.pdf", L"file2.pdf", L"outfile.pdf");
    /// </code>
    /// </example>
    /// <returns>True if operation was succeeded.</returns>
    bool Concatenate(System::String firstInputFile, System::String secInputFile, System::String outputFile);
    /// <summary>
    /// Concatenates two files.
    /// </summary>
    /// <param name="firstInputStream">Stream of first file.</param>
    /// <param name="secInputStream">Stream of second file.</param>
    /// <param name="outputStream">Stream where result file will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> stream1 = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream2 = System::MakeObject<System::IO::FileStream>(L"file2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outstream = System::MakeObject<System::IO::FileStream>(L"outfile.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// fileEditor->Concatenate(stream1, stream2, outstream);
    /// </code>
    /// </example>
    /// <returns>True if operation was succeeded.</returns>
    bool Concatenate(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secInputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Concatenates documents.
    /// </summary>
    /// <param name="src">Array of source documents.</param>
    /// <param name="dest">Destination document.</param>
    /// <returns>True if concatenation is successful. </returns>
    bool Concatenate(System::ArrayPtr<System::SharedPtr<Document>> src, System::SharedPtr<Document> dest);
    /// <summary>
    /// Concatenates files into one file. 
    /// </summary>
    /// <param name="inputFiles">Array of files to concatenate.</param>
    /// <param name="outputFile">Name of output file.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->Concatenate(System::MakeArray<System::String>({ L"src1.pdf", L"src2.pdf"}), L"dest.pdf");
    /// </code>
    /// </example>
    bool Concatenate(System::ArrayPtr<System::String> inputFiles, System::String outputFile);
    /// <summary>
    /// Concatenates files 
    /// </summary>
    /// <param name="inputStream">Array of streams to be concatenated.</param>
    /// <param name="outputStream">Stream where result file will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> stream1 = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream2 = System::MakeObject<System::IO::FileStream>(L"file2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outstream = System::MakeObject<System::IO::FileStream>(L"outfile.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// fileEditor->Concatenate(System::MakeArray<System::SharedPtr<System::IO::Stream>>({ stream1, stream2}), outstream);
    /// </code>
    /// </example>
    bool Concatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Merges two Pdf documents into a new Pdf document with pages in alternate ways and fill the blank places with blank pages.
    /// e.g.: document1 has 5 pages: p1, p2, p3, p4, p5. document2 has 3 pages: p1', p2', p3'.
    /// Merging the two Pdf document will produce the result document with pages:p1, p1', p2, p2', p3, p3', p4, blankpage, p5, blankpage.
    /// </summary>
    /// <param name="firstInputFile">First file.</param>
    /// <param name="secInputFile">Second file.</param>
    /// <param name="blankPageFile">PDF file with blank page.</param>
    /// <param name="outputFile">Result file.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->Concatenate(L"src1.pdf", L"src2.pdf", L"blank.pdf", L"dest.pdf");
    /// </code>
    /// </example>
    bool Concatenate(System::String firstInputFile, System::String secInputFile, System::String blankPageFile, System::String outputFile);
    /// <summary>
    /// Merges two Pdf documents into a new Pdf document with pages in alternate ways and fill the blank places with blank pages.
    /// e.g.: document1 has 5 pages: p1, p2, p3, p4, p5. document2 has 3 pages: p1', p2', p3'.
    /// Merging the two Pdf document will produce the result document with pages:p1, p1', p2, p2', p3, p3', p4, blankpage, p5, blankpage.
    /// </summary>
    /// <param name="firstInputStream">The first Pdf Stream.</param>
    /// <param name="secInputStream">The second Pdf Stream.</param>
    /// <param name="blankPageStream">The Pdf Stream with blank page</param>
    /// <param name="outputStream">Output Pdf Stream.</param>
    /// <returns> True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> stream1 = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream2 = System::MakeObject<System::IO::FileStream>(L"file2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> blank = System::MakeObject<System::IO::FileStream>(L"blank.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outstream = System::MakeObject<System::IO::FileStream>(L"outfile.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// fileEditor->Concatenate(System::MakeArray<System::SharedPtr<System::IO::Stream>>({ stream1, stream2, blank}), outstream);
    /// </code>
    /// </example>
    bool Concatenate(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secInputStream, System::SharedPtr<System::IO::Stream> blankPageStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Appends pages, which are chosen from array of documents in portStreams.
    /// The result document includes firstInputFile and all portStreams documents pages in the range startPage to endPage.
    /// </summary>
    /// <param name="inputStream">Input Pdf stream.</param>
    /// <param name="portStreams">Documents to copy pages from.</param>
    /// <param name="startPage">Page starts in portStreams documents.</param>
    /// <param name="endPage">Page ends in portStreams documents .</param>
    /// <param name="outputStream">Output Pdf stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> instream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream1 = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream2 = System::MakeObject<System::IO::FileStream>(L"file2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outstream = System::MakeObject<System::IO::FileStream>(L"outfile.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// fileEditor->Append(instream, System::MakeArray<System::SharedPtr<System::IO::Stream>>({ stream1, stream2}), 3, 5, outstream);
    /// </code>
    /// </example>
    bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Appends pages, which are chosen from portFiles documents. 
    /// The result document includes firstInputFile and all portFiles documents pages in the range startPage to endPage.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="portFiles">Documents to copy pages from.</param>
    /// <param name="startPage">Page starts in portFiles documents.</param>
    /// <param name="endPage">Page ends in portFiles documents .</param>
    /// <param name="outputFile">Output Pdf document.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// fileEditor->Append(L"input.pdf", System::MakeArray<System::String>({ L"file1.pdf", L"file2.pdf"}), 3, 5, L"outfile.pdf");
    /// </code>
    /// </example>
    bool Append(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    /// Appends pages, which are chosen from portFile within the range from startPage to endPage, in portFile at the end of firstInputFile.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="portFile">Pages from Pdf file.</param>
    /// <param name="startPage">Page starts in portFile.</param>
    /// <param name="endPage">Page ends in portFile.</param>
    /// <param name="outputFile">Output Pdf document.</param>
    /// <returns>True if operation was succeeded.</returns>	
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// fileEditor->Append(L"input.pdf", L"file1.pdf", 3, 5, L"outfile.pdf");
    /// </code>
    /// </example>
    bool Append(System::String inputFile, System::String portFile, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    ///  Appends pages,which are chosen from portStream within the range from startPage to endPage, in portStream at the end of firstInputStream.
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="portStream">Pages from Pdf file Stream.</param>
    /// <param name="startPage">Page starts in portFile Stream.</param>
    /// <param name="endPage">Page ends in portFile Stream.</param>
    /// <param name="outputStream">Output Pdf file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> instream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream1 = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outstream = System::MakeObject<System::IO::FileStream>(L"outfile.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// fileEditor->Append(instream, stream1, 3, 5, outstream);
    /// </code>
    /// </example>
    bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> portStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Inserts pages from an other file into the Pdf file at a position. 
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="insertLocation">Position in input file.</param>
    /// <param name="portFile">The porting Pdf file.</param>
    /// <param name="startPage">Start position in portFile.</param>
    /// <param name="endPage">End position in portFile.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->Insert(L"file1.pdf", 1, L"file2.pdf", 2, 6, L"out.pdf");
    /// </code>
    /// </example>
    bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputStream">Input Stream of  Pdf file. </param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portStream">Stream of Pdf file for pages.</param>
    /// <param name="startPage">From which page to start.</param>
    /// <param name="endPage">To which page to end.</param>
    /// <param name="outputStream">Output Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> sourceStream = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> insertedStream = System::MakeObject<System::IO::FileStream>(L"file2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outStream = System::MakeObject<System::IO::FileStream>(L"out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->Insert(sourceStream, 1, insertedStream, 2, 6, outStream);
    /// </code>
    /// </example>
    bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputFile">Input Pdf file.</param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portFile">Pages from the Pdf file.</param>
    /// <param name="pageNumber">The page number of the ported in portFile.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> sourceStream = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> insertedStream = System::MakeObject<System::IO::FileStream>(L"file2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outStream = System::MakeObject<System::IO::FileStream>(L"out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->Insert(sourceStream, 1, insertedStream, 2, 6, outStream);
    /// </code>
    /// </example>
    bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Inserts pages from an other file into the input Pdf file.
    /// </summary>
    /// <param name="inputStream">Input Stream of  Pdf file. </param>
    /// <param name="insertLocation">Insert position in input file.</param>
    /// <param name="portStream">Stream of Pdf file for pages.</param>
    /// <param name="pageNumber">The page number of the ported in portFile.</param>
    /// <param name="outputStream">Output Stream.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> sourceStream = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> insertedStream = System::MakeObject<System::IO::FileStream>(L"file2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outStream = System::MakeObject<System::IO::FileStream>(L"out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->Insert(sourceStream, 1, insertedStream, System::MakeArray<int32_t>({ 3, 4, 5}), outStream);
    /// </code>
    /// </example>
    bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    ///Deletes pages specified by number array from input file, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputFile">Input file path.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputFile">Output file path.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->Delete(L"input.pdf", System::MakeArray<int32_t>({ 2, 3}), L"out.pdf");
    /// </code>
    /// </example>
    bool Delete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Deletes pages specified by number array from input file, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputStream">Output file stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> inputStream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outputStream = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->Delete(inputStream, System::MakeArray<int32_t>({ 2, 3}), outputStream);
    /// </code>
    /// </example>
    bool Delete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Extracts pages from input file,saves as a new Pdf file.
    /// </summary>
    /// <param name="inputFile">Input Pdf file path.</param>
    /// <param name="startPage">Start page number.</param>
    /// <param name="endPage">End page number.</param>
    /// <param name="outputFile">Output Pdf file path.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->Extract(L"input.pdf", 3, 7, L"output.pdf");
    /// </code>
    /// </example>
    bool Extract(System::String inputFile, int32_t startPage, int32_t endPage, System::String outputFile);
    /// <summary>
    ///Extracts pages specified by number array, saves as a new PDF file. 
    /// </summary>
    /// <param name="inputFile">Input file path.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputFile">Output file path.</param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->Extract(L"input.pdf", System::MakeArray<int32_t>({ 3, 5, 7}), L"output.pdf");
    /// </code>
    /// </example>
    bool Extract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::String outputFile);
    /// <summary>
    /// Extracts pages from input file,saves as a new Pdf file.
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="startPage">Start page number.</param>
    /// <param name="endPage">End page number.</param>
    /// <param name="outputStream">Output Pdf file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> sourceStream = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outStream = System::MakeObject<System::IO::FileStream>(L"out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->Extract(sourceStream, 1, 3, outStream);
    /// </code>
    /// </example>
    bool Extract(System::SharedPtr<System::IO::Stream> inputStream, int32_t startPage, int32_t endPage, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Extracts pages specified by number array, saves as a new Pdf file. 
    /// </summary>
    /// <param name="inputStream">Input file Stream.</param>
    /// <param name="pageNumber">Index of page out of the input file.</param>
    /// <param name="outputStream">Output file stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> sourceStream = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outStream = System::MakeObject<System::IO::FileStream>(L"out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->Extract(sourceStream, System::MakeArray<int32_t>({ 3, 5, 8}), outStream);
    /// </code>
    /// </example>
    bool Extract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Splits Pdf file from first page to specified location,and saves the front part as a new file.
    /// </summary>
    /// <param name="inputFile">Source Pdf file.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="outputFile">Output Pdf file.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->SplitFromFirst(L"input.pdf", 5, L"out.pdf");
    /// </code>
    /// </example>
    bool SplitFromFirst(System::String inputFile, int32_t location, System::String outputFile);
    /// <summary>
    /// Splits from start to specified location,and saves the front part in output Stream.
    /// </summary>
    /// <param name="inputStream">Source Pdf file Stream.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="outputStream">Output file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>The streams are NOT closed after this operation.</remarks>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> sourceStream = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outStream = System::MakeObject<System::IO::FileStream>(L"out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->SplitFromFirst(sourceStream, 5, outStream);
    /// </code>
    /// </example>
    bool SplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Splits from location, and saves the rear part as a new file.
    /// </summary>
    /// <param name="inputFile">Source Pdf file.</param>
    /// <param name="location">The splitting position.</param>
    /// <param name="outputFile">Output Pdf file path.</param>
    /// <returns>True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->SplitToEnd(L"input.pdf", 5, L"out.pdf");
    /// </code>
    /// </example>
    bool SplitToEnd(System::String inputFile, int32_t location, System::String outputFile);
    /// <summary>
    /// Splits from specified location, and saves the rear part as a new file Stream.
    /// </summary>
    /// <param name="inputStream">Source Pdf file Stream.</param>
    /// <param name="location">The splitting position.</param>
    /// <param name="outputStream">Output Pdf file Stream.</param>
    /// <returns>True for success, or false.</returns>
    /// <remarks>The streams are NOT closed after this operation unless CloseConcatedStreams is specified.</remarks>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> sourceStream = System::MakeObject<System::IO::FileStream>(L"file1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outStream = System::MakeObject<System::IO::FileStream>(L"out.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->SplitToEnd(sourceStream, 5, outStream);
    /// </code>
    /// </example>
    bool SplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes booklet from the input file to output file.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeBooklet(L"input.pdf", L"output.pdf");
    /// </code>
    /// </example>
    bool MakeBooklet(System::String inputFile, System::String outputFile);
    /// <summary> Makes booklet from the InputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">output pdf stream.
    /// </param>
    /// <returns> True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> inputStream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outputStream = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeBooklet(inputStream, outputStream);
    /// </code>
    /// </example>
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes booklet from the inputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>True if operation is succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeBooklet(L"input.pdf", L"output.pdf", PageSize::get_A4());
    /// </code>
    /// </example>
    bool MakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize);
    /// <summary> Makes booklet from the input stream and save result into output stream.
    /// </summary>
    /// <param name="inputStream">Input PDF stream.
    /// </param>
    /// <param name="outputStream">output pdf stream.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> inputStream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outputStream = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeBooklet(inputStream, outputStream, PageSize::get_A4());
    /// </code>
    /// </example>
    /// <returns>True if operation was succeeded.</returns> 
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Makes customized booklet from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">The input file.</param>
    /// <param name="outputFile">Output pdf file path and name.</param>
    /// <param name="leftPages">The left pages of the booklet.</param>
    /// <param name="rightPages">The right pages of the booklet.</param>
    /// <returns>boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeBooklet(L"input.pdf", L"output.pdf", System::MakeArray<int32_t>({ 2, 4, 6}), System::MakeArray<int32_t>({1, 3, 5, 7}));
    /// </code>
    /// </example>
    bool MakeBooklet(System::String inputFile, System::String outputFile, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes customized booklet from the firstInputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">The input stream.</param>
    /// <param name="outputStream">output pdf stream.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> inputStream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outputStream = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeBooklet(inputStream, outputStream, System::MakeArray<int32_t>({ 2, 4, 6}), System::MakeArray<int32_t>({1, 3, 5, 7}));
    /// </code>
    /// </example>
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes customized booklet from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">The input file.</param>
    /// <param name="outputFile">Output pdf file path and name.</param>
    /// <param name="pageSize">The page size of the output pdf file.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>boolean - True for success, or false. </returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeBooklet(L"input.pdf", L"output.pdf", PageSize::get_A4(), System::MakeArray<int32_t>({2, 4, 6}), System::MakeArray<int32_t>({1, 3, 5, 7}));
    /// </code>
    /// </example>
    bool MakeBooklet(System::String inputFile, System::String outputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary>
    /// Makes booklet from the firstInputStream to outputStream.
    /// </summary>
    /// <param name="inputStream">The input stream.</param>
    /// <param name="outputStream">output pdf stream.</param>
    /// <param name="pageSize">The page size of the output pdf file.</param>
    /// <param name="leftPages">The left pages.</param>
    /// <param name="rightPages">The right pages.</param>
    /// <returns>boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> inputStream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outputStream = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeBooklet(inputStream, outputStream, PageSize::get_A4(), System::MakeArray<int32_t>({2, 4, 6}), System::MakeArray<int32_t>({1, 3, 5, 7}));
    /// </code>
    /// </example>
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages);
    /// <summary> Makes N-Up document from the firstInputFile to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <returns> boolean - True for success, or false. </returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeNUp(L"input.pdf", L"output.pdf", 3, 3);
    /// </code>
    /// </example>
    bool MakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y);
    /// <summary> Makes N-Up document from the input stream and saves result into output stream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> inputStream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outputStream = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeNUp(inputStream, outputStream, 3, 3);
    /// </code>
    /// </example>
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y);
    /// <summary> Makes N-Up document from the first input stream to output stream.
    /// </summary>
    /// <param name="inputStream">Input pdf stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns>True if operation was succeeded.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> inputStream = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> outputStream = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeNUp(inputStream, outputStream, 3, 3, PageSize::get_A4());
    /// </code>
    /// </example>
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::IO::Stream> outputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    /// <summary> Makes N-Up document from the two input PDF files to outputFile. 
    /// Each page of outputFile will contain two pages, one page is from the first input file 
    /// and another is from the second input file. The two pages are piled up horizontally. 
    /// </summary>
    /// <param name="firstInputFile">first input file.
    /// </param>
    /// <param name="secondInputFile">second input file.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeNUp(L"input1.pdf", L"input2.pdf", L"output.pdf");
    /// </code>
    /// </example>
    bool MakeNUp(System::String firstInputFile, System::String secondInputFile, System::String outputFile);
    /// <summary> Makes N-Up document from the two input PDF streams to outputStream.
    /// </summary>
    /// <param name="firstInputStream">first input stream.
    /// </param>
    /// <param name="secondInputStream">second input stream.
    /// </param>
    /// <param name="outputStream">Output pdf stream.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> input1 = System::MakeObject<System::IO::FileStream>(L"input1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> input2 = System::MakeObject<System::IO::FileStream>(L"input2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> output = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeNUp(input1, input2, output);
    /// </code>
    /// </example>
    bool MakeNUp(System::SharedPtr<System::IO::Stream> firstInputStream, System::SharedPtr<System::IO::Stream> secondInputStream, System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary> Makes N-Up document from the multi input PDF files to outputFile. 
    /// Each page of outputFile will contain multi pages, which are combination with pages 
    /// in the input files of the same page number. The multi pages piled up horizontally 
    /// if isSidewise is true and piled up vertically if isSidewise is false. 
    /// </summary>
    /// <param name="inputFiles">Input Pdf files.</param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="isSidewise">Piled up way, true for horizontally and flase for vertically.</param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeNUp(System::MakeArray<System::String>({ L"input1.pdf", L"input2.pdf", L"input3.pdf"}), L"output.pdf", false);
    /// </code>
    /// </example>
    bool MakeNUp(System::ArrayPtr<System::String> inputFiles, System::String outputFile, bool isSidewise);
    /// <summary> Makes N-Up document from the multi input PDF streams to outputStream.
    /// Each page of outputStream will contain multi pages, which are combination with pages 
    /// in the input streams of the same page number. The multi-pages piled up horizontally 
    /// if isSidewise is true and piled up vertically if isSidewise is false.
    /// </summary>
    /// <param name="inputStreams">Input Pdf streams.</param>
    /// <param name="outputStream">Output pdf stream.
    /// <param name="isSidewise">Piled up way, true for horizontally and flase for vertically</param>
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> stream1 = System::MakeObject<System::IO::FileStream>(L"input1.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream2 = System::MakeObject<System::IO::FileStream>(L"input2.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> stream3 = System::MakeObject<System::IO::FileStream>(L"input3.pdf", System::IO::FileMode::Open, System::IO::FileAccess::Read);
    /// System::SharedPtr<System::IO::Stream> output = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create, System::IO::FileAccess::Write);
    /// pfe->MakeNUp(System::MakeArray<System::SharedPtr<System::IO::Stream>>({ stream1, stream2, stream3}), output, false);
    /// </code>
    /// </example>
    bool MakeNUp(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStreams, System::SharedPtr<System::IO::Stream> outputStream, bool isSidewise);
    /// <summary> Makes N-Up document from the input file to outputFile.
    /// </summary>
    /// <param name="inputFile">Input pdf file path and name.
    /// </param>
    /// <param name="outputFile">Output pdf file path and name.
    /// </param>
    /// <param name="x">Number of columns.
    /// </param>
    /// <param name="y">Number of rows.
    /// </param>
    /// <param name="pageSize">The page size of the output pdf file.
    /// </param>
    /// <returns> boolean - True for success, or false.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> pfe = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// pfe->MakeNUp(L"input.pdf", L"output.pdf", 3, 3, PageSize::get_A4());
    /// </code>
    /// </example>
    bool MakeNUp(System::String inputFile, System::String outputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize);
    /// <summary>
    /// Splits the PDF file into single-page documents.
    /// </summary>
    /// <param name="inputFile">Input PDF file name.</param>
    /// <returns>Output PDF streams, each stream buffers a single-page PDF document.</returns>
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToPages(System::String inputFile);
    /// <summary>
    /// Splits the Pdf file into single-page documents.
    /// </summary>
    /// <param name="inputStream">Input Pdf stream.</param>
    /// <returns>Array of memory streams which contain pages of the document.</returns>
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToPages(System::SharedPtr<System::IO::Stream> inputStream);
    /// <summary>
    /// Split the Pdf file into single-page documents and saves it into specified path. Path is specifield by field name temaplate.
    /// </summary>
    /// <param name="inputFile">Input file name.</param>
    /// <param name="fileNameTemplate">Template of resultant file name. Must contain %NUM% which is replaced with page number. For example, if c:/dir/page%NUM%.pdf is specified, resultant files will have the following names: c:/dir/page1.pdf, c:/dir/page2.pdf etc.</param>
    void SplitToPages(System::String inputFile, System::String fileNameTemplate);
    /// <summary>
    /// Split the Pdf file into single-page documents and saves it into specified path. Path is specifield by field name temaplate.
    /// </summary>
    /// <param name="inputStream">Stream of the soruce document.</param>
    /// <param name="fileNameTemplate">Template of resultant file name. Must contain %NUM% which is replaced with page number. For example, if c:/dir/page%NUM%.pdf is specified, resultant files will have the following names: c:/dir/page1.pdf, c:/dir/page2.pdf etc.</param>
    void SplitToPages(System::SharedPtr<System::IO::Stream> inputStream, System::String fileNameTemplate);
    /// <summary>
    /// Splits the Pdf file into several documents.The documents can be single-page or multi-pages.
    /// </summary>
    /// <param name="inputFile">Input PDF file.</param>
    /// <param name="numberOfPage">Array which contains array of double elements, which is start and end pages of document.</param>
    /// <returns>Output PDF streams, each stream buffers a PDF document.</returns>
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToBulks(System::String inputFile, System::ArrayPtr<System::ArrayPtr<int32_t>> numberOfPage);
    /// <summary>
    /// Splits the Pdf file into several documents.The documents can be single-page or multi-pages.
    /// </summary>
    /// <param name="inputStream">Input PDF stream.</param>
    /// <param name="numberOfPage">The start page and the end page of each document.</param>
    /// <returns>Output PDF streams, each stream buffers a PDF document.</returns>
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> SplitToBulks(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::ArrayPtr<int32_t>> numberOfPage);
    /// <summary>
    /// Resizes contents of pages of the document.
    /// </summary>
    /// <param name="source">Stream with source document.</param>
    /// <param name="destination">Stream with the destination document.</param>
    /// <param name="pages">Array of page indexes.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <returns>Returns true if success.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> src = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open);
    /// System::SharedPtr<System::IO::Stream> dest = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create);
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters> parameters = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters>(
    ///     //left margin = 10% of page width
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents width calculated automatically as width - left margin - right margin (100% - 10% - 10% = 80%)
    ///     nullptr, 
    ///     //right margin is 10% of page 
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //top margin = 10% of height
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents height is calculated automatically (similar to width)
    ///     nullptr, 
    ///     //bottom margin is 10%
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10)
    /// );
    /// fileEditor->ResizeContents(src, dest, System::MakeArray<int32_t>({ 1, 2, 3}), parameters);
    /// dest->Close();
    /// </code>
    /// </example>
    bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Resizes contents of document pages. 
    /// Shrinks contents of page and adds margins.
    /// New size of contents is specified in default space units.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in default space units.</param>
    /// <param name="newHeight">New height of page contents in default space units.</param>
    /// <returns>True if resize was successful.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> src = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open);
    /// System::SharedPtr<System::IO::Stream> dest = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create);
    /// fileEditor->ResizeContents(src, dest, 
    ///     //resize all pages of document
    ///     nullptr, 
    ///     //new contents width = 200
    ///     200, 
    ///     //new contents height = 300
    ///     300);
    // rest area of page will be empty
    /// </code>
    /// </example>
    bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes contents of document pages.
    /// Shrinks contents of page and adds margins.
    /// New contents size is specified in percents.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in percents.</param>
    /// <param name="newHeight">New height of page contents in percetns.</param>
    /// <returns>true if resized sucessfully.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> src = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open);
    /// System::SharedPtr<System::IO::Stream> dest = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create);
    /// fileEditor->ResizeContentsPct(src, dest, 
    ///     //resize all pages of document
    ///     nullptr, 
    ///     //new contents width = 60% of initial size
    ///     60, 
    ///     //new contents height = 60% of initial size
    ///     60);
    /// // Rest area of page will be empty (page margins).  Size of left and right margins is (100% - 60%) / 2 = 20%
    /// // The same for top and bottom margins.
    /// </code>
    /// </example>
    bool ResizeContentsPct(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes page contents and add specifed margins. 
    /// Margins are specified in default space units.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin.</param>
    /// <param name="rightMargin">Right margin.</param>
    /// <param name="topMargin">Top margin.</param>
    /// <param name="bottomMargin">Bottom margin.</param>
    /// <returns>true if operation was successful.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> src = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open);
    /// System::SharedPtr<System::IO::Stream> dest = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create);
    /// fileEditor->AddMargins(src, dest, 
    ///     //process pages 1, 2, 3
    ///     System::MakeArray<int32_t>({ 1, 2, 3}), 
    ///     //left margin is 10 units
    ///     10, 
    ///     //right margin is 5 units
    ///     5, 
    ///     //top margin is 5 units
    ///     5, 
    ///     //bottom margin is 5 units
    ///     5);
    /// dest->Close();
    /// </code>
    /// </example>
    bool AddMargins(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes page contents and add specified margins.
    /// Margins are specified in percents of intitial page size.
    /// </summary>
    /// <param name="source">Stream which contains source document.</param>
    /// <param name="destination">Stream where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin in percents of initial page size.</param>
    /// <param name="rightMargin">Right margin in percents of initial page size.</param>
    /// <param name="topMargin">Top margin in percents of initial page size.</param>
    /// <param name="bottomMargin">Bottom margin in percents of initial page size. </param>
    /// <returns>true if action was performed successfully.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<System::IO::Stream> src = System::MakeObject<System::IO::FileStream>(L"input.pdf", System::IO::FileMode::Open);
    /// System::SharedPtr<System::IO::Stream> dest = System::MakeObject<System::IO::FileStream>(L"output.pdf", System::IO::FileMode::Create);
    /// fileEditor->AddMarginsPct(src, dest, 
    ///     //process pages 1, 2, 3
    ///     System::MakeArray<int32_t>({ 1, 2, 3}), 
    ///     //left margin is 15% of page width 
    ///     15, 
    ///     //right margin is 10% of page width
    ///     10, 
    ///     //top margin is 20% of page width
    ///     20, 
    ///     //bottom margin is 5% of page width
    ///     5);
    /// dest->Close();
    /// </code>
    /// </example>
    bool AddMarginsPct(System::SharedPtr<System::IO::Stream> source, System::SharedPtr<System::IO::Stream> destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes contents of document pages. 
    /// Shrinks contents of page and adds margins.
    /// New size of contents is specified in default space units.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in default space units.</param>
    /// <param name="newHeight">New height of page contents in default space units.</param>
    /// <returns>true if resize was successful.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// fileEditor->ResizeContents(L"input.pdf", L"output.pdf", 
    ///     //resize all pages of document
    ///     nullptr,
    ///     //new contents width = 200
    ///     200, 
    ///     //new contents height = 300
    ///     300);
    /// // rest area of page will be empty
    /// </code>
    /// </example>
    bool ResizeContents(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes contents of document pages.
    /// Shrinks contents of page and adds margins.
    /// New contents size is specified in percents.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="newWidth">New width of page contents in percents.</param>
    /// <param name="newHeight">New height of page contents in percetns.</param>
    /// <returns>true if resize was successful.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// fileEditor->ResizeContentsPct(L"input.pdf", L"output.pdf", 
    ///     //resize all pages of document
    ///     nullptr, 
    ///     //new contents width = 60% of initial size
    ///     60, 
    ///     //new contents height = 60% of initial size
    ///     60);
    /// // Rest area of page will be empty (page margins).  Size of left and right margins is (100% - 60%) / 2 = 20%
    /// // The same for top and bottom margins.
    /// </code>
    /// </example>
    bool ResizeContentsPct(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double newWidth, double newHeight);
    /// <summary>
    /// Resizes page contents and add specifed margins. 
    /// Margins are specified in default space units.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin.</param>
    /// <param name="rightMargin">Right margin.</param>
    /// <param name="topMargin">Top margin.</param>
    /// <param name="bottomMargin">Bottom margin.</param>
    /// <returns>true if resize was successful.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// fileEditor->AddMargins(L"input.pdf", L"output.pdf", 
    ///     //process pages 1, 2, 3
    ///     System::MakeArray<int32_t>({ 1, 2, 3}), 
    ///     //left margin is 10 units
    ///     10, 
    ///     //right margin is 5 units
    ///     5, 
    ///     //top margin is 5 units
    ///     5, 
    ///     //bottom margin is 5 units
    ///     5);
    /// </code>
    /// </example>
    bool AddMargins(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes page contents and add specified margins.
    /// Margins are specified in percents of intitial page size.
    /// </summary>
    /// <param name="source">Path to source document.</param>
    /// <param name="destination">Path where resultant document will be saved.</param>
    /// <param name="pages">Array of page indexes. If null then all document pages will be processed.</param>
    /// <param name="leftMargin">Left margin in percents of initial page size.</param>
    /// <param name="rightMargin">Right margin in percents of initial page size.</param>
    /// <param name="topMargin">Top margin in percents of initial page size.</param>
    /// <param name="bottomMargin">Bottom margin in percents of initial page size. </param>
    /// <returns>true if resize was successful</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// fileEditor->AddMarginsPct(L"input.pdf", L"output.pdf", 
    ///     //process pages 1, 2, 3
    ///     System::MakeArray<int32_t>({ 1, 2, 3}), 
    ///     //left margin is 15% of page width 
    ///     15, 
    ///     //right margin is 10% of page width
    ///     10, 
    ///     //top margin is 20% of page width
    ///     20, 
    ///     //bottom margin is 5% of page width
    ///     5);
    /// </code>
    /// </example>
    bool AddMarginsPct(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, double leftMargin, double rightMargin, double topMargin, double bottomMargin);
    /// <summary>
    /// Resizes contents of pages in document. If page is shrinked blank margins are added around the page.
    /// </summary>
    /// <param name="source">Source document path.</param>
    /// <param name="destination">Destination document path.</param>
    /// <param name="pages">Array of page indexes (page index starts from 1).</param>
    /// <param name="parameters">Parameters of page resize.</param>
    /// <returns>trure if resize was successful.</returns>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters> parameters = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters>(
    ///     //left margin = 10% of page width
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents width calculated automatically as width - left margin - right margin (100% - 10% - 10% = 80%)
    ///     nullptr, 
    ///     //right margin is 10% of page 
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //top margin = 10% of height
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents height is calculated automatically (similar to width)
    ///     nullptr, 
    ///     //bottom margin is 10%
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10));
    /// fileEditor->ResizeContents(L"input.pdf", L"output.pdf", System::MakeArray<int32_t>({ 1, 2, 3}), parameters);
    /// </code>
    /// </example>
    bool ResizeContents(System::String source, System::String destination, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Resizes pages of document. Blank margins are added around of shrinked page.
    /// </summary>
    /// <param name="source">Source document.</param>
    /// <param name="pages">List of page indexes.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters> parameters = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters>(
    ///     //left margin = 10% of page width
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents width calculated automatically as width - left margin - right margin (100% - 10% - 10% = 80%)
    ///     nullptr, 
    ///     //right margin is 10% of page 
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //top margin = 10% of height
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents height is calculated automatically (similar to width)
    ///     nullptr, 
    ///     //bottom margin is 10%
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10));
    /// fileEditor->ResizeContents(doc, System::MakeArray<int32_t>({ 1, 2, 3}), parameters);
    /// </code>
    /// </example>      
    void ResizeContents(System::SharedPtr<Document> source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Resizes pages of document. Blank margins are added around of shrinked page.
    /// </summary>
    /// <param name="source">Source document.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<Aspose::Pdf::Document> doc = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters> parameters = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters>(
    ///     //left margin = 10% of page width
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents width calculated automatically as width - left margin - right margin (100% - 10% - 10% = 80%)
    ///     nullptr, 
    ///     //right margin is 10% of page 
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //top margin = 10% of height
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents height is calculated automatically (similar to width)
    ///     nullptr, 
    ///     //bottom margin is 10%
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10));
    /// fileEditor->ResizeContents(doc, parameters);
    /// doc->Save(L"output.pdf");
    /// </code>
    /// </example>      
    void ResizeContents(System::SharedPtr<Document> source, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    /// <summary>
    /// Concatenates files and saves reslt into HttpResposnse object.
    /// </summary>
    /// <param name="inputFiles">Array of files to concatenate.</param>
    /// <param name="response">Response object.</param>
    /// <returns>true if concatenation was successful.</returns>
    bool Concatenate(System::ArrayPtr<System::String> inputFiles, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Concatenates files and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Streams array which contain files to concatenate.</param>
    /// <param name="response">Response object/</param>
    /// <returns>true if operation was succeeded.</returns>
    bool Concatenate(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Appends documents to source document and saves result into response object.
    /// </summary>
    /// <param name="inputStream">Stream which contains source document.</param>
    /// <param name="portStreams">Array of streams with documents to be appended.</param>
    /// <param name="startPage">Start page of appended page.</param>
    /// <param name="endPage">End page of appended pages.</param>
    /// <param name="response">Response object where document will be saved.</param>
    /// <returns>true if operation was successful.</returns>
    bool Append(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<System::SharedPtr<System::IO::Stream>> portStreams, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Appends documents to source document and saves result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Name of file containing source document.</param>
    /// <param name="portFiles">Array of file names containing appended documents</param>
    /// <param name="startPage">Start page of appended pages.</param>
    /// <param name="endPage">End page of appended pages.</param>
    /// <param name="response">Response object where document will be saved.</param>
    /// <returns>true if operation was succeeded.</returns>
    bool Append(System::String inputFile, System::ArrayPtr<System::String> portFiles, int32_t startPage, int32_t endPage, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Inserts contents of file into source file and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="insertLocation">Page number where second file will be inserted.</param>
    /// <param name="portFile">Path to file which will be inserted.</param>
    /// <param name="pageNumber">Array of page numbers in source file wihich will be inserted.</param>
    /// <param name="response">Response object where result will be stored.</param>
    /// <returns>true of inserting was successful.</returns>
    bool Insert(System::String inputFile, int32_t insertLocation, System::String portFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Inserts document into other document and stores result into response object.
    /// </summary>
    /// <param name="inputStream">Stream with source document</param>
    /// <param name="insertLocation">Location where other document will be inserted.</param>
    /// <param name="portStream">Document to be inserted.</param>
    /// <param name="pageNumber">Array of page numbers in second document  which will be inserted.</param>
    /// <param name="response">Response object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool Insert(System::SharedPtr<System::IO::Stream> inputStream, int32_t insertLocation, System::SharedPtr<System::IO::Stream> portStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Deletes specified pages from document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Path of source file.</param>
    /// <param name="pageNumber">Array of page numbers which must be deleted.</param>
    /// <param name="response">Response object where result document will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool Delete(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Deletes specified pages from document and saves result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source document stream.</param>
    /// <param name="pageNumber">Array of page numbers which will be deleted. </param>
    /// <param name="response">HttpResponse object</param>
    /// <returns>True if operation succeded.</returns>
    bool Delete(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Extracts specified pages form source file and stores result into  HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="pageNumber">Array of page numbers which will be extracted.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool Extract(System::SharedPtr<System::IO::Stream> inputStream, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Extracts specified pages from source file and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageNumber">Array of page numbers which will be extracted.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>true if pages were extracted successfully.</returns>
    bool Extract(System::String inputFile, System::ArrayPtr<int32_t> pageNumber, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits document from first page to location and saves result into HttpResponse objects.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse objects.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool SplitFromFirst(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits document from start to specified location and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="location">The splitting point.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool SplitFromFirst(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits from specified location, and saves the rear part into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source document stream.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse object.</param>
    /// <returns>true if splitting was successful.</returns>
    bool SplitToEnd(System::SharedPtr<System::IO::Stream> inputStream, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Splits from specified location, and saves the rear part into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">source file name.</param>
    /// <param name="location">Split point.</param>
    /// <param name="response">HttpResponse objects.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool SplitToEnd(System::String inputFile, int32_t location, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse objects.
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageSize">Desired page size.</param>
    /// <param name="leftPages">Aray of page numbers to be placed in left.</param>
    /// <param name="rightPages">Array of page numbers to be placed in right.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool MakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Make booklet from PDF file and stores it into HttpResponse.
    /// </summary>
    /// <param name="inputStream">Input document stream.</param>
    /// <param name="pageSize">Desired page size.</param>
    /// <param name="leftPages">Array of page numbers which will be placed in left.</param>
    /// <param name="rightPages">Array of page numbers which will b eplaced in right.</param>
    /// <param name="response">HttpResponse object.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::ArrayPtr<int32_t> leftPages, System::ArrayPtr<int32_t> rightPages, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse objects. 
    /// </summary>
    /// <param name="inputFile">Source file path.</param>
    /// <param name="pageSize">Desired page size in output file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation is succeeded.</returns>
    bool MakeBooklet(System::String inputFile, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes booklet from source file and stores result into HttpResponse.
    /// </summary>
    /// <param name="inputStream">Input document stream.</param>
    /// <param name="pageSize">Desired page size in output file.</param>
    /// <param name="response">Respose object where resut will be saved.</param>
    /// <returns>true if booklet was built successfully.</returns>
    bool MakeBooklet(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream of source document.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="pageSize">Page size in result file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Path to source file.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="pageSize">Page size in result file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool MakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<PageSize> pageSize, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool MakeNUp(System::String inputFile, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Makes N-up document and stores result into HttpResponse. 
    /// </summary>
    /// <param name="inputStream">Stream of input document.</param>
    /// <param name="x">Number of columns.</param>
    /// <param name="y">Number of rows.</param>
    /// <param name="response">HttpResponse where result will be stored.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool MakeNUp(System::SharedPtr<System::IO::Stream> inputStream, int32_t x, int32_t y, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    ///  Resizes contents of pages in document. If page is shrinked blank margins are added around the page.Result is stored into HttpResponse object.
    /// </summary>
    /// <param name="source">Path to source file.</param>
    /// <param name="pages">Array of pages to be resized.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <param name="response">HttpResponse object where result is saved.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool ResizeContents(System::String source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    ///  Resizes contents of pages in document. If page is shrinked blank margins are added around the page.Result is stored into HttpResponse object.
    /// </summary>
    /// <param name="source">Stream of source file.</param>
    /// <param name="pages">Array of pages to be resized.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <param name="response">HttpResponse object where result is saved.</param>
    /// <returns>True if operation was succeeded.</returns>
    bool ResizeContents(System::SharedPtr<System::IO::Stream> source, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters, System::SharedPtr<System::Web::HttpResponse> response);
    /// <summary>
    /// Adds page breaks into document pages. 
    /// </summary>
    /// <param name="src">Source document.</param>
    /// <param name="dest">Destination document.</param>
    /// <param name="pageBreaks">Array of PageBreak objects which describe places of page breaks.</param>
    void AddPageBreak(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    /// <summary>
    /// Adds page breaks into document pages. 
    /// </summary>
    /// <param name="src">Path to source document.</param>
    /// <param name="dest">Path to destination document.</param>
    /// <param name="pageBreaks">Array of PageBreak object describing pages and places where page break will be added.</param>
    void AddPageBreak(System::String src, System::String dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    /// <summary>
    /// Adds page breaks into document pages. 
    /// </summary>
    /// <param name="src">Source which contains source document.</param>
    /// <param name="dest">Source where destination document will be saved.</param>
    /// <param name="pageBreaks">Array of PageBreak object describing pages and places where page break will be added.</param>
    void AddPageBreak(System::SharedPtr<System::IO::Stream> src, System::SharedPtr<System::IO::Stream> dest, System::ArrayPtr<System::SharedPtr<PdfFileEditor::PageBreak>> pageBreaks);
    
protected:

    static const System::String E_EMPTY_PAGE_RANGE;
    static const System::String E_SMALL_PAGE_RANGE;
    static const System::String E_WRONG_PAGE_RANGE;
    
    /// <summary>
    /// Resizes pages of document. Blank margins are added around of shrinked page.
    /// </summary>
    /// <param name="source">Source document.</param>
    /// <param name="dest">Destinalion document.</param>
    /// <param name="pages">List of page indexes.</param>
    /// <param name="parameters">Resize parameters.</param>
    /// <example>
    /// 
    /// <code>
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor> fileEditor = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor>();
    /// System::SharedPtr<Aspose::Pdf::Document> src = System::MakeObject<Aspose::Pdf::Document>(L"input.pdf");
    /// System::SharedPtr<Aspose::Pdf::Document> dest = System::MakeObject<Aspose::Pdf::Document>();
    /// System::SharedPtr<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters> parameters = System::MakeObject<Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeParameters>(
    ///     //left margin = 10% of page width
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents width calculated automatically as width - left margin - right margin (100% - 10% - 10% = 80%)
    ///     nullptr, 
    ///     //right margin is 10% of page 
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //top margin = 10% of height
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10), 
    ///     //new contents height is calculated automatically (similar to width)
    ///     nullptr, 
    ///     //bottom margin is 10%
    ///     Aspose::Pdf::Facades::PdfFileEditor::ContentsResizeValue::Percents(10));
    /// fileEditor->ResizeContents(src, dest, System::MakeArray<int32_t>({ 1, 2, 3}), parameters);
    /// dest->Save(L"output.pdf");
    /// </code>
    /// </example>      
    void ResizeContents(System::SharedPtr<Document> source, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> pages, System::SharedPtr<PdfFileEditor::ContentsResizeParameters> parameters);
    System::Object::shared_members_type GetSharedMembers() override;
    
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
    System::String ExtractName(System::String FieldName, System::String& IndexSuffix);
    /// <summary>
    /// Internal function to append documents to source document
    /// </summary>
    /// <param name="dest"></param>
    /// <param name="documents"></param>
    /// <param name="startPage"></param>
    /// <param name="endPage"></param>
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
    /// <summary>
    /// Create XForm from page.
    /// </summary>
    /// <param name="source"></param>
    /// <param name="document"></param>
    /// <param name="copier"></param>
    /// <returns>XForm of the page.</returns>
    System::SharedPtr<XForm> convertPageToXForm(System::SharedPtr<Page> source, System::SharedPtr<Document> document, System::SharedPtr<Copier> copier);
    void CopyAnnotations(System::SharedPtr<Page> src, System::SharedPtr<Page> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::DOM::Matrix> matrix);
    /// <summary>
    /// Place source page on the specified page of the document, on the specified position and with zoom.
    /// </summary>
    /// <param name="source"></param>
    /// <param name="document"></param>
    /// <param name="dest"></param>
    /// <param name="x">abscissa where page will be placed</param>
    /// <param name="y">ordinate where page will be placed</param>
    /// <param name="zoom"></param>
    /// <param name="copier"></param>
    /// <returns>XForm of the page placed on desitnation page.</returns>
    System::SharedPtr<XForm> placePage(System::SharedPtr<Page> source, System::SharedPtr<Document> document, System::SharedPtr<Page> dest, double x, double y, double zoom, System::SharedPtr<Copier> copier);
    /// <summary>
    /// Place page from the source document into destination docunment on specified page into specified rectangle. 
    /// </summary>
    /// <param name="src">Source document</param>
    /// <param name="dest">Destionation document</param>
    /// <param name="srcIndex">Index of source page</param>
    /// <param name="destIndex">Index of page where page will be placed.</param>
    /// <param name="rect">Rectangle where page must be placed.</param>
    /// <param name="copier">Copier object used to copy resources</param>
    void placePageInRect(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, int32_t srcIndex, int32_t destIndex, System::SharedPtr<Rectangle> rect, System::SharedPtr<Copier> copier);
    /// <summary>
    /// Create booklet from source document.
    /// </summary>
    /// <param name="src">Source document</param>
    /// <param name="dest">Destiantion document</param>
    /// <param name="left">Page layout: left pages</param>
    /// <param name="right">Page layout: right pages</param>
    /// <param name="width">width of the page in result document</param>
    /// <param name="height">heighr of the page in result document</param>
    void makeBooklet(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::ArrayPtr<int32_t> left, System::ArrayPtr<int32_t> right, double width, double height);
    /// <summary>
    /// Generate layout (arrays of left and right pages) by total number of pages in the document. 
    /// </summary>
    /// <param name="pageCount"></param>
    /// <returns>Array of arrays of int which describes layout of the page.</returns>
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
    /// <summary>
    /// Rethrow exception is flag AllowConcatenateExceptions is set.
    /// </summary>
    /// <param name="e"></param>
    void handleException(System::Exception e);
    /// <summary>
    /// Close streams if flag CloseConcatenatedStreams is set.
    /// </summary>
    /// <param name="streams"></param>
    void CloseStreams(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> streams);
    /// <summary>
    /// close stream is CloseConcatenateStreams is set.
    /// </summary>
    /// <param name="stream"></param>
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
    /// <summary>
    /// Merge acro forms
    /// </summary>
    /// <param name="src">soruce acro form dictionary</param>
    /// <param name="dest">destination acroform dictionary</param>
    /// <param name="copier">copier object</param>
    /// <param name="renameMap">map of field renamings</param>
    void CopyAcroForm(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> src, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> renameMap);
    System::ArrayPtr<System::SharedPtr<Document>> _GetDocuments(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> streams);
    System::ArrayPtr<System::SharedPtr<Document>> GetDocuments(System::ArrayPtr<System::String> files);
    System::ArrayPtr<System::SharedPtr<Document>> GetDocuments(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> files);
    void MergeOptionalContents(System::SharedPtr<Document> src, System::SharedPtr<Document> dest, System::SharedPtr<Copier> copier, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex);
    void LinkOptionalContents(System::SharedPtr<Document> dest, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<PdfFileEditor::OptionalContentsItemDescriptor>>> ocgsIndex);
    int32_t pagesCount(System::SharedPtr<Document> doc);
    /// <summary>
    /// Returns key on the specified position in the Names Tree
    /// </summary>
    /// <param name="array">Array of the names tree</param>
    /// <param name="index">Index of the key</param>
    /// <returns>String key</returns>
    System::String getKey(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array, int32_t index);
    /// <summary>
    /// Returns index  in the names tree array where specified key may be inserted 
    /// </summary>
    /// <param name="array">Name tree array</param>
    /// <param name="key">Key to insert</param>
    /// <param name="startIndex">Starting index</param>
    /// <returns>index of key found in Number Tree</returns>
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
    /// <summary>
    /// Concatenates pages of the documents into destination document. 
    /// Pages of every document are added to Pages/Kids of destination document.
    /// </summary>
    /// <param name="sources">Array of streams of pathes to document file.</param>
    /// <param name="dest">Destination document.</param>
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

