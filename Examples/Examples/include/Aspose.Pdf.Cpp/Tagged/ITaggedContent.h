#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTextState; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructTreeRootElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class PartElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ArtElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class SectElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class DivElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class BlockQuoteElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class CaptionElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TOCElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TOCIElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class IndexElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class NonStructElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class PrivateElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ParagraphElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class HeaderElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ListElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTHeadElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTBodyElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTFootElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTRElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTHElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableTDElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class SpanElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class QuoteElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class NoteElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ReferenceElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class BibEntryElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class CodeElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class LinkElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class AnnotElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class RubyElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class WarichuElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class FormulaElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class FormElement; } } }

namespace Aspose {

namespace Pdf {

namespace Tagged {

/// <summary>
///     The <b>Aspose.Pdf.Tagged</b> is a namespace for classes for support of Tagged PDF documents.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
///     Represents interface for work with TaggedPdf content of document.
/// </summary>
class ASPOSE_PDF_SHARED_API ITaggedContent : public System::Object
{
    typedef ITaggedContent ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///     <para>Get <see cref="Aspose::Pdf::LogicalStructure::StructureTextState" /> settings for whole document.</para>
    /// </summary>
    /// <value><see cref="Aspose::Pdf::LogicalStructure::StructureTextState" /> settings for whole document.</value>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState() = 0;
    /// <summary>
    ///     <para>Gets <see cref="Aspose::Pdf::LogicalStructure::StructTreeRootElement" /> of PDF document.</para>
    /// </summary>
    /// <value><see cref="Aspose::Pdf::LogicalStructure::StructTreeRootElement" /> of PDF document.</value>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::StructTreeRootElement> get_StructTreeRootElement() = 0;
    /// <summary>
    ///     <para>Gets root <see cref="Aspose::Pdf::LogicalStructure::StructureElement" /> of logical structure of PDF document.</para>
    /// </summary>
    /// <value>Root <see cref="Aspose::Pdf::LogicalStructure::StructureElement" /> of logical structure of PDF document.</value>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureElement> get_RootElement() = 0;
    
    /// <summary>
    ///     <para>Sets natural language for pdf document.</para>
    ///     <para>A language identifier that shall specify the natural language for all text in the document except where overridden by language specifications for structure elements or marked content.</para>
    /// </summary>
    /// <param name="lang">A language identifier shall either be the empty text string, to indicate that the language is unknown, or a Language-Tag as defined in RFC 3066, Tags for the Identification of Languages.</param>
    virtual void SetLanguage(System::String lang) = 0;
    /// <summary>
    ///     <para>Sets title for PDF document.</para>
    /// </summary>
    /// <param name="title">The title of PDF document.</param>
    virtual void SetTitle(System::String title) = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::PartElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::PartElement> CreatePartElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ArtElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ArtElement> CreateArtElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::SectElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::SectElement> CreateSectElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::DivElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::DivElement> CreateDivElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::BlockQuoteElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::BlockQuoteElement> CreateBlockQuoteElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::CaptionElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::CaptionElement> CreateCaptionElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TOCElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TOCElement> CreateTOCElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TOCIElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TOCIElement> CreateTOCIElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::IndexElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::IndexElement> CreateIndexElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::NonStructElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::NonStructElement> CreateNonStructElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::PrivateElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::PrivateElement> CreatePrivateElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ParagraphElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ParagraphElement> CreateParagraphElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::HeaderElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::HeaderElement> CreateHeaderElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::HeaderElement" /> with level.</para>
    /// </summary>
    /// <param name="level">The level of Header. Must be 1, 2, 3, 4, 5 or 6.</param>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::HeaderElement> CreateHeaderElement(int32_t level) = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ListElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ListElement> CreateListElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableElement> CreateTableElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTHeadElement> CreateTableTHeadElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTBodyElement> CreateTableTBodyElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTFootElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTFootElement> CreateTableTFootElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTRElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTRElement> CreateTableTRElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTHElement> CreateTableTHElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTDElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTDElement> CreateTableTDElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::SpanElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::SpanElement> CreateSpanElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::QuoteElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::QuoteElement> CreateQuoteElement() = 0;
    /// <summary>
    ///     Creates <see cref="Aspose::Pdf::LogicalStructure::NoteElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::NoteElement> CreateNoteElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ReferenceElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ReferenceElement> CreateReferenceElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::BibEntryElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::BibEntryElement> CreateBibEntryElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::CodeElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::CodeElement> CreateCodeElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::LinkElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> CreateLinkElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::AnnotElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::AnnotElement> CreateAnnotElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::RubyElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::RubyElement> CreateRubyElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::WarichuElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::WarichuElement> CreateWarichuElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::FigureElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::FigureElement> CreateFigureElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::FormulaElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::FormulaElement> CreateFormulaElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::FormElement" />.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::FormElement> CreateFormElement() = 0;
    
};

} // namespace Tagged
} // namespace Pdf
} // namespace Aspose


