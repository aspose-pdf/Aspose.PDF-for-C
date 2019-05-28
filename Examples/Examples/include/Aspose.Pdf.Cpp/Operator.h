#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Exceptions;

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class ConversionFontData; } } } } }
namespace Aspose { namespace src { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandsList; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentFontsSubsetter; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { namespace ConvertHelpers { class LowLevelFontSubstitutor; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class FontUtilities; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { namespace Utilities { class DocumentCIDType2FontContentUpdater; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class ArrayTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class StringTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Text { class EvaluationTextExportInspector; } } }
namespace Aspose { namespace Pdf { namespace Text { class TableAbsorber; } } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class DefaultAppearance; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class FillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathEOFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BDC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BI; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BMC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BT; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BX; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ConcatenateMatrix; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorSpaceStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorSpace; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetDash; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharWidth; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharWidthBoundingBox; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Do; } } }
namespace Aspose { namespace Pdf { namespace Operators { class DP; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EI; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EMC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ET; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EX; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Fill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ObsoleteFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GS; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePath; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetFlat; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ID; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineJoin; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineCap; } } }
namespace Aspose { namespace Pdf { namespace Operators { class LineTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetMiterLimit; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MP; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EndPath; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GSave; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GRestore; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Re; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorRenderingIntent; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Stroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveToNextLine; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPosition; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPositionSetLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGlyphsPositionShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRenderingMode; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo1; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineWidth; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Clip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOClip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo2; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveToNextLineShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetSpacingMoveToNextLineShowText; } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { namespace Text { class TextBuilder; } } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class ContentsAppender; } }
namespace Aspose { namespace Pdf { namespace Structure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace Structure { class TextElement; } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { class Subpath; } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class OperatorCollectionTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class Helper; } } }
namespace Aspose { namespace Pdf { namespace Tests { class TestBase; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_2; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v7_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v9_4; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v16_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v18_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Text { class TextSegmentTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_7; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v6_9; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v10_8; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_10; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Facades { class PdfFileStampTests; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class ICommandProcessor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandParameter; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class ICommand; } } } } } } }
namespace Aspose { namespace Pdf { class IOperatorSelector; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class MCRElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceMarkedGroup; } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }
namespace Aspose { namespace Pdf { namespace Operators { class BlockTextOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextShowOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextStateOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextPlaceOperator; } } }
namespace Aspose { namespace Pdf { namespace Facades { class TextProperties; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharacterSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SelectFont; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRise; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetWordSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetHorizontalTextScaling; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextMatrix; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Matrix; } }
namespace Aspose { namespace Pdf { namespace Annotations { class InkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Primitives { enum class LineJoin; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class TextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Primitives { enum class LineCap; } } } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGrayStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGray; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BasicSetColorOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BasicSetColorAndPatternOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColor; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class WatermarkAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class FreeTextAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Forms { class ComboBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class TextModel; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfString; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Abstract class representing operator.
/// </summary>
class ASPOSE_PDF_SHARED_API Operator : public System::Object
{
    typedef Operator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConversionFontData;
    friend class Aspose::src::CommonData::PageContent::Operators::Commands::CommandsList;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsSubsetter;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentCIDType2FontContentUpdater;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::ArrayTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::StringTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Text::EvaluationTextExportInspector;
    friend class Aspose::Pdf::Text::TableAbsorber;
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Annotations::DefaultAppearance;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Operators::ClosePathFillStroke;
    friend class Aspose::Pdf::Operators::FillStroke;
    friend class Aspose::Pdf::Operators::ClosePathEOFillStroke;
    friend class Aspose::Pdf::Operators::EOFillStroke;
    friend class Aspose::Pdf::Operators::BDC;
    friend class Aspose::Pdf::Operators::BI;
    friend class Aspose::Pdf::Operators::BMC;
    friend class Aspose::Pdf::Operators::TextOperator;
    friend class Aspose::Pdf::Operators::BT;
    friend class Aspose::Pdf::Operators::BX;
    friend class Aspose::Pdf::Operators::CurveTo;
    friend class Aspose::Pdf::Operators::ConcatenateMatrix;
    friend class Aspose::Pdf::Operators::SetColorSpaceStroke;
    friend class Aspose::Pdf::Operators::SetColorSpace;
    friend class Aspose::Pdf::Operators::SetDash;
    friend class Aspose::Pdf::Operators::SetCharWidth;
    friend class Aspose::Pdf::Operators::SetCharWidthBoundingBox;
    friend class Aspose::Pdf::Operators::Do;
    friend class Aspose::Pdf::Operators::DP;
    friend class Aspose::Pdf::Operators::EI;
    friend class Aspose::Pdf::Operators::EMC;
    friend class Aspose::Pdf::Operators::ET;
    friend class Aspose::Pdf::Operators::EX;
    friend class Aspose::Pdf::Operators::Fill;
    friend class Aspose::Pdf::Operators::ObsoleteFill;
    friend class Aspose::Pdf::Operators::EOFill;
    friend class Aspose::Pdf::Operators::GS;
    friend class Aspose::Pdf::Operators::ClosePath;
    friend class Aspose::Pdf::Operators::SetFlat;
    friend class Aspose::Pdf::Operators::ID;
    friend class Aspose::Pdf::Operators::SetLineJoin;
    friend class Aspose::Pdf::Operators::SetLineCap;
    friend class Aspose::Pdf::Operators::LineTo;
    friend class Aspose::Pdf::Operators::MoveTo;
    friend class Aspose::Pdf::Operators::SetMiterLimit;
    friend class Aspose::Pdf::Operators::MP;
    friend class Aspose::Pdf::Operators::EndPath;
    friend class Aspose::Pdf::Operators::GSave;
    friend class Aspose::Pdf::Operators::GRestore;
    friend class Aspose::Pdf::Operators::Re;
    friend class Aspose::Pdf::Operators::SetColorOperator;
    friend class Aspose::Pdf::Operators::SetColorRenderingIntent;
    friend class Aspose::Pdf::Operators::ClosePathStroke;
    friend class Aspose::Pdf::Operators::Stroke;
    friend class Aspose::Pdf::Operators::ShFill;
    friend class Aspose::Pdf::Operators::MoveToNextLine;
    friend class Aspose::Pdf::Operators::MoveTextPosition;
    friend class Aspose::Pdf::Operators::MoveTextPositionSetLeading;
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::Operators::SetGlyphsPositionShowText;
    friend class Aspose::Pdf::Operators::SetTextRenderingMode;
    friend class Aspose::Pdf::Operators::CurveTo1;
    friend class Aspose::Pdf::Operators::SetLineWidth;
    friend class Aspose::Pdf::Operators::Clip;
    friend class Aspose::Pdf::Operators::EOClip;
    friend class Aspose::Pdf::Operators::CurveTo2;
    friend class Aspose::Pdf::Operators::MoveToNextLineShowText;
    friend class Aspose::Pdf::Operators::SetSpacingMoveToNextLineShowText;
    friend class Aspose::Pdf::OperatorCollection;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::Text::TextBuilder;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Engine::CommonData::Text::Subpath;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Helper;
    friend class Aspose::Pdf::Tests::TestBase;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_6;
    friend class Aspose::Pdf::Tests::Text::TextSegmentTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_10;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::Facades::PdfFileStampTests;
    
public:

    /// <summary>
    /// Operator index in page operators list.
    /// </summary>
    int32_t get_Index();
    /// <summary>
    /// Operator index in page operators list.
    /// </summary>
    void set_Index(int32_t value);
    
    /// <summary>
    /// Accepts visitor IOperatorSelector which provides operators processing.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor) = 0;
    /// <summary>
    /// Returns text of operator and its parameters.
    /// </summary>
    /// <returns>Operator text</returns>
    virtual System::String ToString();
    /// <summary>
    /// Determines if the operator is operator which responsible for text output (Tj, TJ, etc)
    /// </summary>
    /// <param name="op">Operator object</param>
    /// <returns>True if this is text output operator</returns>
    static bool IsTextShowOperator(System::SharedPtr<Operator> op);
    
protected:

    int32_t index;
    System::WeakPtr<OperatorCollection> container;
    static System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommandProcessor> commandProcessor;
    
    static System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommandProcessor> get_CommandProcessor();
    System::SharedPtr<Engine::Data::ITrailerable> get_Trailerable();
    void set_Trailerable(System::SharedPtr<Engine::Data::ITrailerable> value);
    
    System::ArrayPtr<uint8_t> _bytes;
    
    /// <summary>
    /// Gets operator name.
    /// </summary>
    virtual System::String get_CommandName();
    /// <summary>
    /// Gets array of operator parameters.
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::CommandParameter>>> get_Parameters();
    virtual System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> get_Command();
    /// <summary>
    /// Returns true if operator has binary parameter.
    /// </summary>
    virtual bool get_HasBinaryData();
    
    System::SharedPtr<Operator> Clone();
    bool IsCommandNull();
    void Reset();
    /// <summary>
    /// Creates operator from Pdf.Kit.Engine.ICommand instance.
    /// </summary>
    /// <param name="command">Pdf.Kit.Engine.ICommand instance representing this operator </param>
    /// <returns>Created operator</returns>
    static System::SharedPtr<Operator> Create(System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    /// <summary>
    /// Creates operator from Pdf.Kit.Engine.ICommand instance.
    /// </summary>
    /// <param name="index">Index of operator in oeprators list</param>
    /// <param name="command">Pdf.Kit.Engine.ICommand instance representing this operator </param>
    /// <returns>Created operator</returns>
    static System::SharedPtr<Operator> Create(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    /// <summary>
    /// Loads operator from command
    /// </summary>
    /// <param name="command"></param>
    virtual void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    /// <summary>
    /// saves operator to command
    /// </summary>
    /// <returns></returns>
    virtual System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    /// <summary>
    /// Constructor of Operators. Creates operattor by command object and operator index.
    /// </summary>
    /// <param name="index">Index of operator in operators list</param>
    /// <param name="command">Command object of operator</param>
    Operator(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    /// <summary>
    /// Returns text representation of Pdf primitive (string, array, dictionary etc.) according to PDF specification.
    /// </summary>
    /// <param name="primitive">Primitive</param>
    /// <returns>Text represetation of the primitive</returns>
    static System::String ToString(System::SharedPtr<Engine::Data::IPdfPrimitive> primitive);
    /// <summary>
    /// Escapese special characters in string according to PDF specification
    /// </summary>
    /// <param name="s">Source string</param>
    /// <returns>Escaped string</returns>
    static System::String escape(System::String s);
    /// This function is created to avoid .NET-specific IFormatProvider usage
    /// </summary>
    /// <param name="v">Value to be converted</param>
    /// <returns></returns>
    static System::String FloatToStr(double v);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<Engine::Data::ITrailerable> trailerable;
    System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command;
    bool isCommandInitialized;
    
    static System::String toOct(int32_t code);
    
};

namespace Operators {

/// <summary>
/// The <b>Aspose.Pdf.Operators</b> is a namespace for Operator implementations. These classes describes operators used in PDF page contents.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class representing b operator (close, fill and stroke path with nonzer winding rule).
/// </summary>
class ASPOSE_PDF_SHARED_API ClosePathFillStroke : public Aspose::Pdf::Operator
{
    typedef ClosePathFillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ClosePathFillStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns string representation of operator.
    /// </summary>
    /// <returns>String representation</returns>
    virtual System::String ToString();
    
protected:

    virtual System::String get_CommandName();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePathFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing B operator (fill and stroke path using nonzero winding rule)
/// </summary>
class ASPOSE_PDF_SHARED_API FillStroke : public Aspose::Pdf::Operator
{
    typedef FillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    FillStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    FillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing b* operator (close, fill and stroke path using even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_API ClosePathEOFillStroke : public Aspose::Pdf::Operator
{
    typedef ClosePathEOFillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ClosePathEOFillStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    virtual System::String get_CommandName();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePathEOFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing B* operator (fill and stroke path usign even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_API EOFillStroke : public Aspose::Pdf::Operator
{
    typedef EOFillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    EOFillStroke();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EOFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// class representing BDC operator (Begin marked-content sequence)
/// </summary>
class ASPOSE_PDF_SHARED_API BDC : public Aspose::Pdf::Operator
{
    typedef BDC ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Interchange::ContentSequenceMarkedGroup;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    System::String get_Tag();
    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    BDC(System::String tag);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_PropertiesDictionary();
    void set_PropertiesDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> get_PropertiesName();
    void set_PropertiesName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BDC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    BDC(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties);
    BDC(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> property);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _tag;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _properties;
    
    void EnsurePropertiesInitialized();
    
};

/// <summary>
/// Class representing BI operator (Begin inline image obect).
/// </summary>
class ASPOSE_PDF_SHARED_API BI : public Aspose::Pdf::Operator
{
    typedef BI ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    BI();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BI(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing BMC operator (Begin marked-content sequence).
/// </summary>
class ASPOSE_PDF_SHARED_API BMC : public Aspose::Pdf::Operator
{
    typedef BMC ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    System::String get_Tag();
    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="tag">Marked content tag.</param>
    BMC(System::String tag);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BMC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
private:

    System::String _tag;
    
};

/// <summary>
/// Abstract base class for text-related operators (TJ, Tj, Tm, BT, ET, etc).
/// </summary>
class ASPOSE_PDF_SHARED_API TextOperator : public Aspose::Pdf::Operator
{
    typedef TextOperator ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operators::BlockTextOperator;
    friend class Aspose::Pdf::Operators::TextShowOperator;
    friend class Aspose::Pdf::Operators::TextStateOperator;
    friend class Aspose::Pdf::Operators::TextPlaceOperator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    TextOperator();
    /// <summary>
    /// Text operator which accepts text properties. 
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    TextOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes TextOperator 
    /// </summary>
    /// <param name="index">Index of operator in operators list.</param>
    /// <param name="command">Operator command.</param>
    TextOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties;
    
};

/// <summary>
/// Abstract base class for text block operators i.e.  Begin and End text operators (BT/ET)
/// </summary>
class ASPOSE_PDF_SHARED_API BlockTextOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef BlockTextOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operators::BT;
    friend class Aspose::Pdf::Operators::ET;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    BlockTextOperator();
    /// <summary>
    /// Initializes BlockTextOperator which accepts TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    BlockTextOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BlockTextOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
};

/// <summary>
/// Abvstract base class for all operators which used to out text (Tj, TJ, etc).
/// </summary>
class ASPOSE_PDF_SHARED_API TextShowOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef TextShowOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::Operators::SetGlyphsPositionShowText;
    friend class Aspose::Pdf::Operators::MoveToNextLineShowText;
    friend class Aspose::Pdf::Operators::SetSpacingMoveToNextLineShowText;
    
public:

    /// <summary>
    /// Gets text which operator out on the page.
    /// </summary>
    virtual System::String get_Text();
    /// <summary>
    /// Gets text which operator out on the page.
    /// </summary>
    virtual void set_Text(System::String value);
    
    /// <summary>
    /// Initializes TextShowOperator. 
    /// </summary>
    TextShowOperator();
    /// <summary>
    /// Initializes TextShowOperator which allows to pass TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    TextShowOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    TextShowOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
};

/// <summary>
/// Abstract base class for operators which changes current text state (Tc, Tf, TL, etc).
/// </summary>
class ASPOSE_PDF_SHARED_API TextStateOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef TextStateOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operators::SetCharacterSpacing;
    friend class Aspose::Pdf::Operators::SelectFont;
    friend class Aspose::Pdf::Operators::SetTextLeading;
    friend class Aspose::Pdf::Operators::SetTextRenderingMode;
    friend class Aspose::Pdf::Operators::SetTextRise;
    friend class Aspose::Pdf::Operators::SetWordSpacing;
    friend class Aspose::Pdf::Operators::SetHorizontalTextScaling;
    
public:

    /// <summary>
    /// Initializes TextStateOperator.
    /// </summary>
    TextStateOperator();
    /// <summary>
    /// Initializes TextStateoperator which allows to pass TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    TextStateOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    TextStateOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
};

/// <summary>
/// Abstract base class for operators which changes text position (Tm, Td, etc).
/// 
/// </summary>
class ASPOSE_PDF_SHARED_API TextPlaceOperator : public Aspose::Pdf::Operators::TextOperator
{
    typedef TextPlaceOperator ThisType;
    typedef Aspose::Pdf::Operators::TextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operators::MoveToNextLine;
    friend class Aspose::Pdf::Operators::MoveTextPosition;
    friend class Aspose::Pdf::Operators::MoveTextPositionSetLeading;
    friend class Aspose::Pdf::Operators::SetTextMatrix;
    
public:

    /// <summary>
    /// Initializes TextPlaceOperator.
    /// </summary>
    TextPlaceOperator();
    /// <summary>
    /// Initializes TextPlaceOperator which accepts TextProperties.
    /// </summary>
    /// <param name="textProperties">Text properties.</param>
    TextPlaceOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    TextPlaceOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
};

/// <summary>
/// Class representing BT operator (Begin of text block).
/// </summary>
class ASPOSE_PDF_SHARED_API BT : public Aspose::Pdf::Operators::BlockTextOperator
{
    typedef BT ThisType;
    typedef Aspose::Pdf::Operators::BlockTextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    BT();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BT(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing BX operator (begin compatibility section).
/// </summary>
class ASPOSE_PDF_SHARED_API BX : public Aspose::Pdf::Operator
{
    typedef BX ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    BX();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    virtual System::String get_CommandName();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    BX(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing c operator (append curve to path).
/// </summary>
class ASPOSE_PDF_SHARED_API CurveTo : public Aspose::Pdf::Operator
{
    typedef CurveTo ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Points of the curve.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    
    /// <summary>
    /// Initializes curve operator.
    /// </summary>
    /// <param name="x1">Abscissa of first point.</param>
    /// <param name="y1">Ordinate of first point.</param>
    /// <param name="x2">Abscissa of second point.</param>
    /// <param name="y2">Ordinate of second point.</param>
    /// <param name="x3">Abscissa of third point.</param>
    /// <param name="y3">Ordinate of third point.</param>
    CurveTo(double x1, double y1, double x2, double y2, double x3, double y3);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    CurveTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
};

/// <summary>
/// Class representing cm operator (concatenate matrix to current transformation matrix).
/// </summary>
class ASPOSE_PDF_SHARED_API ConcatenateMatrix : public Aspose::Pdf::Operator
{
    typedef ConcatenateMatrix ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    
    /// <summary>
    /// Initializes operator. 
    /// </summary>
    /// <param name="a">A coefficient</param>
    /// <param name="b">B coefficient</param>
    /// <param name="c">C coefficient</param>
    /// <param name="d">D coefficient</param>
    /// <param name="e">E coefficient</param>
    /// <param name="f">F coefficient</param>
    ConcatenateMatrix(double a, double b, double c, double d, double e, double f);
    /// <summary>
    /// Initializes operator by matrix.
    /// </summary>
    /// <param name="m">Transfomation matrix.</param>
    ConcatenateMatrix(System::SharedPtr<Aspose::Pdf::Matrix> m);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of representation</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ConcatenateMatrix(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    
};

/// <summary>
/// Class representing CS operator (set color for stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetColorSpaceStroke : public Aspose::Pdf::Operator
{
    typedef SetColorSpaceStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    /// <summary>
    /// Gets or sets color space name.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets color space name.
    /// </summary>
    void set_Name(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="name">Color space name.</param>
    SetColorSpaceStroke(System::String name);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorSpaceStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    System::String name;
    
};

/// <summary>
/// Class representing cs operator (set colorspace for non-stroking operations)
/// </summary>
class ASPOSE_PDF_SHARED_API SetColorSpace : public Aspose::Pdf::Operator
{
    typedef SetColorSpace ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    /// <summary>
    /// Gets or sets color space name.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets color space name.
    /// </summary>
    void set_Name(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="name">Color space name.</param>
    SetColorSpace(System::String name);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual System::String get_CommandName();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorSpace(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    System::String name;
    
};

/// <summary>
/// Class representing d operator (set line dash pattern).
/// </summary>
class ASPOSE_PDF_SHARED_API SetDash : public Aspose::Pdf::Operator
{
    typedef SetDash ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Dash pattern. Array�s elements shall be numbers that specify the lengths of alternating dashes and gaps.
    /// In case of one element array dash and gap lengths are equal.
    /// </summary>
    System::ArrayPtr<int32_t> get_Pattern();
    /// <summary>
    /// Dash pattern. Array�s elements shall be numbers that specify the lengths of alternating dashes and gaps.
    /// In case of one element array dash and gap lengths are equal.
    /// </summary>
    void set_Pattern(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Dash phase. Before beginning to stroke a path, the dash array shall be cycled through, adding up the lengths of dashes and gaps. 
    /// When the accumulated length equals the value specified by the dash phase, stroking of the path shall begin, 
    /// and the dash array shall be used cyclically from that point onward.
    /// </summary>
    int32_t get_Phase();
    /// <summary>
    /// Dash phase. Before beginning to stroke a path, the dash array shall be cycled through, adding up the lengths of dashes and gaps. 
    /// When the accumulated length equals the value specified by the dash phase, stroking of the path shall begin, 
    /// and the dash array shall be used cyclically from that point onward.
    /// </summary>
    void set_Phase(int32_t value);
    
    /// <summary>
    /// Creates set dash pattern operator.
    /// </summary>
    /// <param name="pattern">Array which defines dash pattern.</param>
    /// <param name="phase">Dash phase.</param>
    SetDash(System::ArrayPtr<int32_t> pattern, int32_t phase);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Gets operator string representation.
    /// </summary>
    /// <returns>
    /// [x1 x2] y d, where x1 - dash length, x2 - gap length, y - phase.
    /// </returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetDash(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<int32_t> pattern;
    int32_t phase;
    
};

/// <summary>
/// Class representing d0 operator (set glyph width).
/// </summary>
class ASPOSE_PDF_SHARED_API SetCharWidth : public Aspose::Pdf::Operator
{
    typedef SetCharWidth ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Horizontal displacement of glyph coordinate.
    /// </summary>
    double get_Wx();
    /// <summary>
    /// Vertical displacement of glyph coordinate.
    /// </summary>
    double get_Wy();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of representation</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="wx">Horizontal displacement of glyph.</param>
    /// <param name="wy">Vertical displacement of glyph.</param>
    SetCharWidth(double wx, double wy);
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCharWidth(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
private:

    double _wx;
    double _wy;
    
};

/// <summary>
/// Class representing d1 operator (set glyph and bounding box).
/// </summary>
class ASPOSE_PDF_SHARED_API SetCharWidthBoundingBox : public Aspose::Pdf::Operator
{
    typedef SetCharWidthBoundingBox ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Horizontal displacement of glyph.
    /// </summary>
    double get_Wx();
    /// <summary>
    /// Vertical displacement of glyph.
    /// </summary>
    double get_Wy();
    /// <summary>
    /// Lower-left horizontal coordinate of bounding rectangle.
    /// </summary>
    double get_Llx();
    /// <summary>
    /// Lower-left vertical coordinate of bounding rectangle.
    /// </summary>
    double get_Lly();
    /// <summary>
    /// Upper-right horizontal coordinate of bounding rectangle.
    /// </summary>
    double get_Urx();
    /// <summary>
    /// Upper-right vertical coordinate of bounding rectangle.
    /// </summary>
    double get_Ury();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of representation</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetCharWidthBoundingBox(double wx, double wy, double llx, double lly, double urx, double ury);
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCharWidthBoundingBox(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _wx;
    double _wy;
    double _llx;
    double _lly;
    double _urx;
    double _ury;
    
};

/// <summary>
/// Class representing Do operator (Invoke XObject).
/// </summary>
class ASPOSE_PDF_SHARED_API Do : public Aspose::Pdf::Operator
{
    typedef Do ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Name of XObject argument of the operator.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Name of XObject argument of the operator.
    /// </summary>
    void set_Name(System::String value);
    
    /// <summary>
    /// Constructs new Do operator. 
    /// </summary>
    /// <param name="name">Name of invoked XObject.</param>
    Do(System::String name);
    /// <summary>
    /// Constructs new Do operator. 
    /// Used for retrieving all Do operators, i.e. without checking their argument names.
    /// </summary>
    Do();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Do(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
private:

    System::String name;
    
};

/// <summary>
/// Class represeting DP operator (designamte marked content point).
/// </summary>
class ASPOSE_PDF_SHARED_API DP : public Aspose::Pdf::Operator
{
    typedef DP ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    System::String get_Tag();
    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    DP(System::String tag);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_PropertiesDictionary();
    void set_PropertiesDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> get_PropertiesName();
    void set_PropertiesName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    DP(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    DP(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _tag;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _properties;
    
    void EnsurePropertiesInitialized();
    
};

/// <summary>
/// Class representing EI operator (End inline image object).
/// </summary>
class ASPOSE_PDF_SHARED_API EI : public Aspose::Pdf::Operator
{
    typedef EI ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    EI();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual bool get_HasBinaryData();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EI(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Clsss representing EMC oeprator (End of marked-content sequence).
/// </summary>
class ASPOSE_PDF_SHARED_API EMC : public Aspose::Pdf::Operator
{
    typedef EMC ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    EMC();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EMC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing operator ET (End of text block).
/// </summary>
class ASPOSE_PDF_SHARED_API ET : public Aspose::Pdf::Operators::BlockTextOperator
{
    typedef ET ThisType;
    typedef Aspose::Pdf::Operators::BlockTextOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ET();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ET(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing EX operator (End of compatibility section).
/// </summary>
class ASPOSE_PDF_SHARED_API EX : public Aspose::Pdf::Operator
{
    typedef EX ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    EX();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EX(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing f operator (fill path with nonzero winding number rule).
/// </summary>
class ASPOSE_PDF_SHARED_API Fill : public Aspose::Pdf::Operator
{
    typedef Fill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initilizes new f operator.
    /// </summary>
    Fill();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Fill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing F oeprator (fill path using nonzero winding rule).
/// </summary>
class ASPOSE_PDF_SHARED_API ObsoleteFill : public Aspose::Pdf::Operator
{
    typedef ObsoleteFill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ObsoleteFill();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ObsoleteFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing f* operator (fill path using even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_API EOFill : public Aspose::Pdf::Operator
{
    typedef EOFill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    EOFill();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EOFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing gs operator (set parameters from graphic state parameter dictionary).
/// </summary>
class ASPOSE_PDF_SHARED_API GS : public Aspose::Pdf::Operator
{
    typedef GS ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets name of graphic state resource.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets name of graphic state resource.
    /// </summary>
    void set_Name(System::String value);
    
    /// <summary>
    /// Initializes gs operator.
    /// </summary>
    /// <param name="name">Name of graphic state.</param>
    GS(System::String name);
    
    /// <summary>
    /// Returns string represnetation of operator.
    /// </summary>
    /// <returns>String representation of operator.</returns>
    virtual System::String ToString();
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    GS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
private:

    System::String name;
    
};

/// <summary>
/// Class representing h operator (close path).
/// </summary>
class ASPOSE_PDF_SHARED_API ClosePath : public Aspose::Pdf::Operator
{
    typedef ClosePath ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ClosePath();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual System::String get_CommandName();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePath(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing i operator (set flatness tolerance).
/// </summary>
class ASPOSE_PDF_SHARED_API SetFlat : public Aspose::Pdf::Operator
{
    typedef SetFlat ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the flatness.
    /// </summary>
    double get_Flatness();
    /// <summary>
    /// Gets or sets the flatness.
    /// </summary>
    void set_Flatness(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="flatness">The value of flatness.</param>
    SetFlat(double flatness);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetFlat(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double flatness;
    
};

/// <summary>
/// Class representing ID operator (Begin inline image data).
/// </summary>
class ASPOSE_PDF_SHARED_API ID : public Aspose::Pdf::Operator
{
    typedef ID ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual System::String get_CommandName();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    ID();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ID(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing j operator (set line join style).
/// </summary>
class ASPOSE_PDF_SHARED_API SetLineJoin : public Aspose::Pdf::Operator
{
    typedef SetLineJoin ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    Aspose::Pdf::Engine::Presentation::Primitives::LineJoin get_Join();
    void set_Join(Aspose::Pdf::Engine::Presentation::Primitives::LineJoin value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetLineJoin();
    SetLineJoin(Aspose::Pdf::Engine::Presentation::Primitives::LineJoin join);
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetLineJoin(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    Aspose::Pdf::Engine::Presentation::Primitives::LineJoin join;
    
};

/// <summary>
/// Class representing J operator (set line cap style).
/// </summary>
class ASPOSE_PDF_SHARED_API SetLineCap : public Aspose::Pdf::Operator
{
    typedef SetLineCap ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Annotations::TextAnnotation;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_4;
    
public:

    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Gets or sets line caps style. 
    /// </summary>
    Aspose::Pdf::Engine::Presentation::Primitives::LineCap get_Cap();
    /// <summary>
    /// Gets or sets line caps style. 
    /// </summary>
    void set_Cap(Aspose::Pdf::Engine::Presentation::Primitives::LineCap value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetLineCap(Aspose::Pdf::Engine::Presentation::Primitives::LineCap cap);
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetLineCap(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    Aspose::Pdf::Engine::Presentation::Primitives::LineCap cap;
    
};

/// <summary>
/// Class representing l operator (add line to the path).
/// </summary>
class ASPOSE_PDF_SHARED_API LineTo : public Aspose::Pdf::Operator
{
    typedef LineTo ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// X coordinate of line point.
    /// </summary>
    double get_X();
    /// <summary>
    /// X coordinate of line point.
    /// </summary>
    void set_X(double value);
    /// <summary>
    /// Y coordinate of line point.
    /// </summary>
    double get_Y();
    /// <summary>
    /// Y coordinate of line point.
    /// </summary>
    void set_Y(double value);
    
    /// <summary>
    /// Initializes line operator.
    /// </summary>
    /// <param name="x">X coordinate.</param>
    /// <param name="y">Y coordinate.</param>
    LineTo(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    LineTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _x;
    double _y;
    
};

/// <summary>
/// Class representing m operator (move to and begin new subpath).
/// </summary>
class ASPOSE_PDF_SHARED_API MoveTo : public Aspose::Pdf::Operator
{
    typedef MoveTo ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// X coordinate 
    /// </summary>
    double get_X();
    /// <summary>
    /// X coordinate 
    /// </summary>
    void set_X(double value);
    /// <summary>
    /// Y coordinate
    /// </summary>
    double get_Y();
    /// <summary>
    /// Y coordinate
    /// </summary>
    void set_Y(double value);
    
    /// <summary>
    /// Inintalizes new <see cref="Operators::m"/> (move to) operator.
    /// </summary>
    /// <param name="x">The x-coordinate.</param>
    /// <param name="y">The y-coordinate.</param>
    MoveTo(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    
protected:

    MoveTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _x;
    double _y;
    
};

/// <summary>
/// Class representing M operator (set miter limit).
/// </summary>
class ASPOSE_PDF_SHARED_API SetMiterLimit : public Aspose::Pdf::Operator
{
    typedef SetMiterLimit ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the miter limit.
    /// </summary>
    double get_MiterLimit();
    /// <summary>
    /// Gets or sets the miter limit.
    /// </summary>
    void set_MiterLimit(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="miterLimit">Mitel limit.</param>
    SetMiterLimit(double miterLimit);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetMiterLimit(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _miterLimit;
    
};

/// <summary>
/// Class representing MP operator (define marked-content point).
/// </summary>
class ASPOSE_PDF_SHARED_API MP : public Aspose::Pdf::Operator
{
    typedef MP ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    System::String get_Tag();
    /// <summary>
    /// Gets or sets marked content tag
    /// </summary>
    void set_Tag(System::String value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="tag">Marked content tag.</param>
    MP(System::String tag);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MP(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
private:

    System::String _tag;
    
};

/// <summary>
/// Class representing n operator (end path without filling or stroking).
/// </summary>
class ASPOSE_PDF_SHARED_API EndPath : public Aspose::Pdf::Operator
{
    typedef EndPath ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    EndPath();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EndPath(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing q operator (save graphics state).
/// </summary>
class ASPOSE_PDF_SHARED_API GSave : public Aspose::Pdf::Operator
{
    typedef GSave ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes q operator.
    /// </summary>
    GSave();
    
    /// <summary>
    /// Returns text of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    GSave(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing Q operator (restore graphics state).
/// </summary>
class ASPOSE_PDF_SHARED_API GRestore : public Aspose::Pdf::Operator
{
    typedef GRestore ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes Q operator.
    /// </summary>
    GRestore();
    
    /// <summary>
    /// Returns text of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    GRestore(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing re operator (add rectangle to the path).
/// </summary>
class ASPOSE_PDF_SHARED_API Re : public Aspose::Pdf::Operator
{
    typedef Re ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// X coordinate of most left side of rectangle.
    /// </summary>
    double get_X();
    /// <summary>
    /// X coordinate of most left side of rectangle.
    /// </summary>
    void set_X(double value);
    /// <summary>
    /// Y corrdinate of bottom side of rectangle.
    /// </summary>
    double get_Y();
    /// <summary>
    /// Y corrdinate of bottom side of rectangle.
    /// </summary>
    void set_Y(double value);
    /// <summary>
    /// Width of the rectangle.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Width of the rectangle.
    /// </summary>
    void set_Width(double value);
    /// <summary>
    /// Height of the rectangle.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Height of the rectangle.
    /// </summary>
    void set_Height(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    Re();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="x">The x-coordinate of the bottom-left corner of the rectangle.</param>
    /// <param name="y">The y-coordinate of the bottom-left corner of the rectangle.</param>
    /// <param name="width">The width of the rectangle.</param>
    /// <param name="height">The height of the rectangle.</param>
    Re(double x, double y, double width, double height);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Re(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _x;
    double _y;
    double width;
    double height;
    
};

/// <summary>
/// Class representing set color operation. 
/// </summary>
class ASPOSE_PDF_SHARED_API SetColorOperator : public Aspose::Pdf::Operator
{
    typedef SetColorOperator ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operators::SetGrayStroke;
    friend class Aspose::Pdf::Operators::SetGray;
    friend class Aspose::Pdf::Operators::SetCMYKColorStroke;
    friend class Aspose::Pdf::Operators::SetCMYKColor;
    friend class Aspose::Pdf::Operators::SetRGBColorStroke;
    friend class Aspose::Pdf::Operators::SetRGBColor;
    friend class Aspose::Pdf::Operators::BasicSetColorOperator;
    
public:

    /// <summary>
    /// Retirns color specified by the operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor() = 0;
    
protected:

    /// <summary>
    /// Initializes SetColorOperator
    /// </summary>
    /// <param name="index"></param>
    /// <param name="command"></param>
    SetColorOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
};

/// <summary>
/// Class representing gray level for stroking operations.
/// </summary>
class ASPOSE_PDF_SHARED_API SetGrayStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetGrayStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator with the specified color.
    /// </summary>
    /// <param name="gray">The level of gray value.</param>
    SetGrayStroke(double gray);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetGrayStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double gray;
    
};

/// <summary>
/// Set gray level for non-stroking operations. 
/// </summary>
class ASPOSE_PDF_SHARED_API SetGray : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetGray ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="gray">The level of gray value.</param>
    SetGray(double gray);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns string represnetation of operator.
    /// </summary>
    /// <returns>String representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetGray(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double gray;
    
};

/// <summary>
/// Class representing K operator (set CMYK color for stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetCMYKColorStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetCMYKColorStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns the RGB color 
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="c">The level of cyan from 0.0 to 1.0</param>
    /// <param name="m">The level of magenta from 0.0 to 1.0</param>
    /// <param name="y">The level of yellow from 0.0 to 1.0</param>
    /// <param name="k">The level of black from 0.0 to 1.0</param>
    SetCMYKColorStroke(double c, double m, double y, double k);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCMYKColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _c;
    double _m;
    double _y;
    double _k;
    
};

/// <summary>
/// Class representing k operator (set CMYK color for non-stroknig operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetCMYKColor : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetCMYKColor ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="c">The level of cyan from 0.0 to 1.0</param>
    /// <param name="m">The level of magenta from 0.0 to 1.0</param>
    /// <param name="y">The level of yellow from 0.0 to 1.0</param>
    /// <param name="k">The level of black from 0.0 to 1.0</param>
    SetCMYKColor(double c, double m, double y, double k);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetCMYKColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _c;
    double _m;
    double _y;
    double _k;
    
    double bound(double x);
    
};

/// <summary>
/// Class representing RG operator (set RGB color for stroking operators).
/// </summary>
class ASPOSE_PDF_SHARED_API SetRGBColorStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetRGBColorStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="r">The level of red from 0.0 to 1.0</param>
    /// <param name="g">The level of green from 0.0 to 1.0</param>
    /// <param name="b">The level of blue from 0.0 to 1.0</param>
    SetRGBColorStroke(double r, double g, double b);
    /// <summary>
    /// Initializes operator with color.
    /// </summary>
    /// <param name="color">Operator color.</param>
    SetRGBColorStroke(System::Drawing::Color color);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetRGBColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _r;
    double _g;
    double _b;
    
};

/// <summary>
/// Class representing rg operator (set RGB color for non-stroknig operators).
/// </summary>
class ASPOSE_PDF_SHARED_API SetRGBColor : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetRGBColor ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="r">The level of red from 0.0 to 1.0</param>
    /// <param name="g">The level of green from 0.0 to 1.0</param>
    /// <param name="b">The level of blue from 0.0 to 1.0</param>
    SetRGBColor(double r, double g, double b);
    /// <summary>
    /// Initializes operator with color.
    /// </summary>
    /// <param name="color">Specfied color.</param>
    SetRGBColor(System::Drawing::Color color);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetRGBColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _r;
    double _g;
    double _b;
    
};

/// <summary>
/// Class representing ri operator (set color rendering intent).
/// </summary>
class ASPOSE_PDF_SHARED_API SetColorRenderingIntent : public Aspose::Pdf::Operator
{
    typedef SetColorRenderingIntent ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets color rendering intent name.
    /// </summary>
    System::String get_IntentName();
    /// <summary>
    /// Gets or sets color rendering intent name.
    /// </summary>
    void set_IntentName(System::String value);
    
    /// <summary>
    /// Set Color Rendering Intent operator constructor.
    /// </summary>
    /// <param name="intentName">Color Rendering Intent.</param>
    SetColorRenderingIntent(System::String intentName);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetColorRenderingIntent();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorRenderingIntent(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    System::String _intentName;
    
};

/// <summary>
/// Class representing s operator (Close and stroke path).
/// </summary>
class ASPOSE_PDF_SHARED_API ClosePathStroke : public Aspose::Pdf::Operator
{
    typedef ClosePathStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ClosePathStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ClosePathStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing S operator (stroke path).
/// </summary>
class ASPOSE_PDF_SHARED_API Stroke : public Aspose::Pdf::Operator
{
    typedef Stroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    Stroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of the operator.
    /// </summary>
    /// <returns>Text representation of the operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Stroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Base class for set color operators.
/// </summary>
class ASPOSE_PDF_SHARED_API BasicSetColorOperator : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef BasicSetColorOperator ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operators::SetColorStroke;
    friend class Aspose::Pdf::Operators::SetColor;
    friend class Aspose::Pdf::Operators::BasicSetColorAndPatternOperator;
    
public:

    /// <summary>
    /// Gets red component of color
    /// </summary>
    double get_R();
    /// <summary>
    /// Gets green component of color
    /// </summary>
    double get_G();
    /// <summary>
    /// Gets red component of color
    /// </summary>
    double get_B();
    /// <summary>
    /// Gets cyan compoent of CMYK color.
    /// </summary>
    double get_C();
    /// <summary>
    /// Gets magenta compoent of CMYK color.
    /// </summary>
    double get_M();
    /// <summary>
    /// Gets yellow compoent of CMYK color.
    /// </summary>
    double get_Y();
    /// <summary>
    /// Gets black compoent of CMYK color.
    /// </summary>
    double get_K();
    /// <summary>
    /// Gets black compoent of gray color.
    /// </summary>
    double get_Grey();
    /// <summary>
    /// Gets array of color components.
    /// </summary>
    virtual System::ArrayPtr<double> get_Color();
    
protected:

    System::ArrayPtr<double> _color;
    
    BasicSetColorOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
};

/// <summary>
/// Class representing SC operator set color for stroking color operators.
/// </summary>
class ASPOSE_PDF_SHARED_API SetColorStroke : public Aspose::Pdf::Operators::BasicSetColorOperator
{
    typedef SetColorStroke ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specified by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetColorStroke();
    /// <summary>
    /// Set color for stroking operators for DeviceGrey, CalGrey and Indexed color spaces. 
    /// </summary>
    /// <param name="g">Colro value.</param>
    SetColorStroke(double g);
    /// <summary>
    /// Set color for stroking operator for DeviceRGB, CalRGB, and Lab color spaces
    /// </summary>
    /// <param name="r">Red component.</param>
    /// <param name="g">Green component.</param>
    /// <param name="b">Blue component.</param>
    SetColorStroke(double r, double g, double b);
    /// <summary>
    /// Constructor which allows to set color components.
    /// </summary>
    /// <param name="color">Array of color components.</param>
    SetColorStroke(System::ArrayPtr<double> color);
    /// <summary>
    /// Set color for strokinbg operator for CMYK colro space
    /// </summary>
    /// <param name="c">cyan component.</param>
    /// <param name="m">Magenta component.</param>
    /// <param name="y">Yellow component.</param>
    /// <param name="k">Black component.</param>
    SetColorStroke(double c, double m, double y, double k);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Represents class for sc operator (set color for non-stroknig operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetColor : public Aspose::Pdf::Operators::BasicSetColorOperator
{
    typedef SetColor ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color specified by the operator.
    /// </summary>
    /// <returns>Operator color.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetColor();
    /// <summary>
    /// Set color for stroking operators for DeviceGrey, CalGrey and Indexed color spaces. 
    /// </summary>
    /// <param name="g">Color value.</param>
    SetColor(double g);
    /// <summary>
    /// Set color for stroking operator for DeviceRGB, CalRGB, and Lab color spaces
    /// </summary>
    /// <param name="r">Red component.</param>
    /// <param name="g">Green component.</param>
    /// <param name="b">Blue component.</param>
    SetColor(double r, double g, double b);
    /// <summary>
    /// Set color for non-stroking operator for CMYK colro space
    /// </summary>
    /// <param name="c">Cyan component.</param>
    /// <param name="m">Magenta component.</param>
    /// <param name="y">Yellow component.</param>
    /// <param name="k">Black component.</param>
    SetColor(double c, double m, double y, double k);
    /// <summary>
    /// Constructor which allows to specify color components.
    /// </summary>
    /// <param name="color">Array of color components.</param>
    SetColor(System::ArrayPtr<double> color);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// String represenation.
    /// </summary>
    /// <returns></returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Base operator for all Set Color operators.
/// </summary>
class ASPOSE_PDF_SHARED_API BasicSetColorAndPatternOperator : public Aspose::Pdf::Operators::BasicSetColorOperator
{
    typedef BasicSetColorAndPatternOperator ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operators::SetAdvancedColorStroke;
    friend class Aspose::Pdf::Operators::SetAdvancedColor;
    
public:

    /// <summary>
    /// Gets Pattern Name.
    /// </summary>
    System::String get_PatternName();
    
protected:

    System::String _patternName;
    
    BasicSetColorAndPatternOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
};

/// <summary>
/// Class representing SCN operator (set color for stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetAdvancedColorStroke : public Aspose::Pdf::Operators::BasicSetColorAndPatternOperator
{
    typedef SetAdvancedColorStroke ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorAndPatternOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns color specified by operator.
    /// </summary>
    /// <returns>Color specifid by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetAdvancedColorStroke();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
    /// <summary>
    /// Constructor for scn operator 
    /// </summary>
    /// <param name="g"></param>
    SetAdvancedColorStroke(double g);
    /// <summary>
    /// Constructor for scn operator.  
    /// </summary>
    /// <param name="g">Gray color value.</param>
    /// <param name="patternName"></param>
    SetAdvancedColorStroke(double g, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="r">Red component of the color/</param>
    /// <param name="g">Green component of the color.</param>
    /// <param name="b">Blue component of the color.</param>
    /// <param name="patternName"></param>
    SetAdvancedColorStroke(double r, double g, double b, System::String patternName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="c">Cyan component of the color.</param>
    /// <param name="m">Magenta component of the color.</param>
    /// <param name="y">Yellow component of the color. </param>
    /// <param name="k">Black component of the color</param>
    /// <param name="patternName">Name of the pattern.</param>
    SetAdvancedColorStroke(double c, double m, double y, double k, System::String patternName);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetAdvancedColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing scn operator (set color for non-stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetAdvancedColor : public Aspose::Pdf::Operators::BasicSetColorAndPatternOperator
{
    typedef SetAdvancedColor ThisType;
    typedef Aspose::Pdf::Operators::BasicSetColorAndPatternOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Retuns color specified by operator.
    /// </summary>
    /// <returns>Color set by operator.</returns>
    virtual System::Drawing::Color getColor();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetAdvancedColor();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
    /// <summary>
    /// Constructor for scn operartor.
    /// </summary>
    /// <param name="g">Color value.</param>
    /// <param name="patternName">Pattern name.</param>
    SetAdvancedColor(double g, System::String patternName);
    /// <summary>
    /// Constructor for scn operartor
    /// </summary>
    /// <param name="g">Color value.</param>
    SetAdvancedColor(double g);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="r">Red component of the color.</param>
    /// <param name="g">Green component of the color.</param>
    /// <param name="b">Blue component of the color.</param>
    /// <param name="patterName"></param>
    SetAdvancedColor(double r, double g, double b, System::String patterName);
    /// <summary>
    /// Constructor for scn operator.
    /// </summary>
    /// <param name="c">Cyan component of the color.</param>
    /// <param name="m">Magenta component of the color.</param>
    /// <param name="y">Yellow component of the color.</param>
    /// <param name="k">Black component of the color.</param>
    /// <param name="patternName"></param>
    SetAdvancedColor(double c, double m, double y, double k, System::String patternName);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetAdvancedColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing sh operator (paint area with shadeing pattern).
/// </summary>
class ASPOSE_PDF_SHARED_API ShFill : public Aspose::Pdf::Operator
{
    typedef ShFill ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the shading name.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets the shading name.
    /// </summary>
    void set_Name(System::String value);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
    /// <summary>
    /// 
    /// </summary>
    /// <param name="shadingName"></param>
    ShFill(System::String shadingName);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    ShFill();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ShFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    System::String _name;
    
};

/// <summary>
/// Class  representing T* operator (Move to start of the next line).
/// </summary>
class ASPOSE_PDF_SHARED_API MoveToNextLine : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef MoveToNextLine ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator. 
    /// </summary>
    MoveToNextLine();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text of the operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveToNextLine(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing Tc operator (set character spacing).
/// </summary>
class ASPOSE_PDF_SHARED_API SetCharacterSpacing : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetCharacterSpacing ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the character spacing.
    /// </summary>
    double get_CharSpacing();
    /// <summary>
    /// Gets or sets the character spacing.
    /// </summary>
    void set_CharSpacing(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="charSpacing">Character spacing.</param>
    SetCharacterSpacing(double charSpacing);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetCharacterSpacing(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _charSpacing;
    
};

/// <summary>
/// Class representing Td operator (move text position).
/// </summary>
class ASPOSE_PDF_SHARED_API MoveTextPosition : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef MoveTextPosition ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    double get_X();
    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    void set_X(double value);
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    double get_Y();
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    void set_Y(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="x">X coordinate of text position.</param>
    /// <param name="y">Y coordinate of text position.</param>
    MoveTextPosition(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveTextPosition(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _x;
    double _y;
    
};

/// <summary>
/// Class representing TD operator (move position and set leading).
/// </summary>
class ASPOSE_PDF_SHARED_API MoveTextPositionSetLeading : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef MoveTextPositionSetLeading ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    double get_X();
    /// <summary>
    /// X coordinate of text position.
    /// </summary>
    void set_X(double value);
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    double get_Y();
    /// <summary>
    /// Y coordinate of text position.
    /// </summary>
    void set_Y(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="x">X coordinate of text position.</param>
    /// <param name="y">Y coordinate of text position.</param>
    MoveTextPositionSetLeading(double x, double y);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveTextPositionSetLeading(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _x;
    double _y;
    
};

/// <summary>
/// Class representing Tf operator (set text font and size).
/// </summary>
class ASPOSE_PDF_SHARED_API SelectFont : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SelectFont ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Name of font.
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Size of text.
    /// </summary>
    double get_Size();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="resName">The name of font resource, e.g. F1, F2 etc.</param>
    /// <param name="size">Size of the font.</param>
    SelectFont(System::String resName, double size);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SelectFont(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    System::String name;
    double size;
    
};

/// <summary>
/// Class representing Tj operator (show text).
/// </summary>
class ASPOSE_PDF_SHARED_API ShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef ShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::WatermarkAnnotation;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    
public:

    /// <summary>
    /// Text of operator.
    /// </summary>
    virtual System::String get_Text();
    /// <summary>
    /// Text of operator.
    /// </summary>
    virtual void set_Text(System::String value);
    
    /// <summary>
    /// Initializes Tj opearor. 
    /// </summary>
    /// <param name="index">Index of operator in operators list.</param>
    /// <param name="text">argument of the operator.</param>
    ShowText(int32_t index, System::String text);
    /// <summary>
    /// Initializes Tj operator. 
    /// </summary>
    /// <param name="text">argument of the operator.</param>
    ShowText(System::String text);
    /// <summary>
    /// Initializes Tj opearor.
    /// </summary>
    /// <param name="text">text to add.</param>
    /// <param name="font">font that is used to draw the text.</param>
    ShowText(System::String text, System::SharedPtr<Text::Font> font);
    /// <summary>
    /// Initializes Tj operator.
    /// </summary>
    ShowText();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Text of operator.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> get_PdfString();
    /// <summary>
    /// Text of operator.
    /// </summary>
    void set_PdfString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    ShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String text;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> pdfString;
    
};

/// <summary>
/// Class describes text and position to use with operator TJ (set glyph with position)
/// </summary>
class ASPOSE_PDF_SHARED_API GlyphPosition : public System::Object
{
    typedef GlyphPosition ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::ConvertHelpers::LowLevelFontSubstitutor;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::FontUtilities;
    friend class Aspose::Pdf::Operators::SetGlyphsPositionShowText;
    
public:

    /// <summary>
    /// Text of operator.
    /// </summary>
    System::String get_Text();
    /// <summary>
    /// Position off the text in the operator.
    /// </summary>
    double get_Position();
    
    /// <summary>
    /// Constructs glyph position.
    /// </summary>
    /// <param name="text"></param>
    /// <param name="position"></param>
    GlyphPosition(System::String text, double position);
    /// <summary>
    /// Constructor for Glyph Position.
    /// </summary>
    /// <param name="text"></param>
    GlyphPosition(System::String text);
    
protected:

    bool get_UsePosition();
    
private:

    System::String _text;
    double _position;
    bool _usePosition;
    
};

/// <summary>
/// Class representing TJ operator (show text with glyph positioning).
/// </summary>
class ASPOSE_PDF_SHARED_API SetGlyphsPositionShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef SetGlyphsPositionShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Returns  positions of glyphs.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GlyphPosition>>> get_GlyphPositions();
    /// <summary>
    /// Gets text from operator argument (glyph positioning is ignored).
    /// </summary>
    virtual System::String get_Text();
    
    /// <summary>
    /// Constructor for TJ operator.
    /// </summary>
    /// <param name="glyphPositions">List of Glyph Positions.</param>
    SetGlyphsPositionShowText(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GlyphPosition>>> glyphPositions);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetGlyphsPositionShowText();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetGlyphsPositionShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> args;
    System::String text;
    System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<GlyphPosition>>> _glyphPositions;
    
};

/// <summary>
/// Class represenging TL operator (set text leading).
/// </summary>
class ASPOSE_PDF_SHARED_API SetTextLeading : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetTextLeading ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the text leading.
    /// </summary>
    double get_Leading();
    /// <summary>
    /// Gets or sets the text leading.
    /// </summary>
    void set_Leading(double value);
    
    /// <summary>
    /// Initializes text leading operator. 
    /// </summary>
    /// <param name="leading">Text leading.</param>
    SetTextLeading(double leading);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Produces text code of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    SetTextLeading(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _leading;
    
};

/// <summary>
/// Class representig Tm operator (set text matrix).
/// </summary>
class ASPOSE_PDF_SHARED_API SetTextMatrix : public Aspose::Pdf::Operators::TextPlaceOperator
{
    typedef SetTextMatrix ThisType;
    typedef Aspose::Pdf::Operators::TextPlaceOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Matrix> get_Matrix();
    /// <summary>
    /// Matrix argument of the operator. 
    /// </summary>
    void set_Matrix(System::SharedPtr<Aspose::Pdf::Matrix> value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="a">A coefficient</param>
    /// <param name="b">B coefficient</param>
    /// <param name="c">C coefficient</param>
    /// <param name="d">D coefficient</param>
    /// <param name="e">E coefficient</param>
    /// <param name="f">F coefficient</param>
    SetTextMatrix(double a, double b, double c, double d, double e, double f);
    /// <summary>
    /// Initializes operator by matrix.
    /// </summary>
    /// <param name="m">Transfomation matrix.</param>
    SetTextMatrix(System::SharedPtr<Aspose::Pdf::Matrix> m);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetTextMatrix(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Matrix> matrix;
    
};

/// <summary>
/// Class representing Tr operator (set text rendering mode).
/// </summary>
class ASPOSE_PDF_SHARED_API SetTextRenderingMode : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetTextRenderingMode ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetTextRenderingMode();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetTextRenderingMode(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
};

/// <summary>
/// Class representing Ts operator (set text rise).
/// </summary>
class ASPOSE_PDF_SHARED_API SetTextRise : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetTextRise ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the text rise.
    /// </summary>
    double get_TextRise();
    /// <summary>
    /// Gets or sets the text rise.
    /// </summary>
    void set_TextRise(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="textRise">Text rise.</param>
    SetTextRise(double textRise);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetTextRise(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _textRise;
    
};

/// <summary>
/// Class representing Tw operator (set word spacing).
/// </summary>
class ASPOSE_PDF_SHARED_API SetWordSpacing : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetWordSpacing ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the word spacing.
    /// </summary>
    double get_WordSpacing();
    /// <summary>
    /// Gets or sets the word spacing.
    /// </summary>
    void set_WordSpacing(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="wordSpacing">Word spacing.</param>
    SetWordSpacing(double wordSpacing);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetWordSpacing(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _wordSpacing;
    
};

/// <summary>
/// Class representing Tz operator (set horizontal text scaling).
/// </summary>
class ASPOSE_PDF_SHARED_API SetHorizontalTextScaling : public Aspose::Pdf::Operators::TextStateOperator
{
    typedef SetHorizontalTextScaling ThisType;
    typedef Aspose::Pdf::Operators::TextStateOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets the horizontal scaling.
    /// </summary>
    double get_HorizontalScaling();
    /// <summary>
    /// Gets or sets the horizontal scaling.
    /// </summary>
    void set_HorizontalScaling(double value);
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="horizintalScaling">Horizontal scaling.</param>
    SetHorizontalTextScaling(double horizintalScaling);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetHorizontalTextScaling(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double _horizontalScaling;
    
};

/// <summary>
/// Class representing v operator (append curve to path, initial point replicated).
/// </summary>
class ASPOSE_PDF_SHARED_API CurveTo1 : public Aspose::Pdf::Operator
{
    typedef CurveTo1 ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Points of the curve.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    
    /// <summary>
    /// Initializes curve operator.
    /// </summary>
    /// <param name="x2">Abscissa of second point.</param>
    /// <param name="y2">Ordinate of second point.</param>
    /// <param name="x3">Abscissa of third point.</param>
    /// <param name="y3">Ordinate of third point.</param>
    CurveTo1(double x2, double y2, double x3, double y3);
    
    /// <summary>
    /// Accepts operator selector.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    CurveTo1(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
    void init();
    
};

/// <summary>
/// Class representing w operator (set line width).
/// </summary>
class ASPOSE_PDF_SHARED_API SetLineWidth : public Aspose::Pdf::Operator
{
    typedef SetLineWidth ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets or sets width of the line. 
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets width of the line. 
    /// </summary>
    void set_Width(double value);
    
    /// <summary>
    /// Initializes operator with width value.
    /// </summary>
    /// <param name="width">Line width.</param>
    SetLineWidth(double width);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operator.
    /// </summary>
    /// <returns>Text representation.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetLineWidth(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
private:

    double width;
    
};

/// <summary>
/// Class representing W operator (set clipping path using non-zero winding rule).
/// </summary>
class ASPOSE_PDF_SHARED_API Clip : public Aspose::Pdf::Operator
{
    typedef Clip ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    Clip();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    /// <summary>
    /// Returns text representation of operators.
    /// </summary>
    /// <returns>Text representation of operator.</returns>
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    Clip(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing W* operator (set clipping path using even-odd rule).
/// </summary>
class ASPOSE_PDF_SHARED_API EOClip : public Aspose::Pdf::Operator
{
    typedef EOClip ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    EOClip();
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    EOClip(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
};

/// <summary>
/// Class representing y operator (append curve to path, final point replicated).
/// </summary>
class ASPOSE_PDF_SHARED_API CurveTo2 : public Aspose::Pdf::Operator
{
    typedef CurveTo2 ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Points of the curve.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    
    /// <summary>
    /// Initializes curve operator.
    /// </summary>
    /// <param name="x1">Abscissa of second point.</param>
    /// <param name="y1">Ordinate of second point.</param>
    /// <param name="x3">Abscissa of third point.</param>
    /// <param name="y3">Ordinate of third point.</param>
    CurveTo2(double x1, double y1, double x3, double y3);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    CurveTo2(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
    void init();
    
};

/// <summary>
/// Class representing ' operator (move to next line and show text).
/// </summary>
class ASPOSE_PDF_SHARED_API MoveToNextLineShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef MoveToNextLineShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets operator text.
    /// </summary>
    virtual System::String get_Text();
    
    /// <summary>
    /// Initializesoperator.
    /// </summary>
    MoveToNextLineShowText();
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="text">The text.</param>
    MoveToNextLineShowText(System::String text);
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    MoveToNextLineShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
private:

    System::String text;
    
};

/// <summary>
/// Class representing " operator (set word and character spacing, move to the next line and show text).
/// </summary>
class ASPOSE_PDF_SHARED_API SetSpacingMoveToNextLineShowText : public Aspose::Pdf::Operators::TextShowOperator
{
    typedef SetSpacingMoveToNextLineShowText ThisType;
    typedef Aspose::Pdf::Operators::TextShowOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    /// <summary>
    /// Gets word spacing.
    /// </summary>
    double get_Aw();
    /// <summary>
    /// Get character spacing. 
    /// </summary>
    double get_Ac();
    /// <summary>
    /// Gets text of operator.
    /// </summary>
    virtual System::String get_Text();
    
    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="aw"></param>
    /// <param name="ac"></param>
    /// <param name="text"></param>
    SetSpacingMoveToNextLineShowText(double aw, double ac, System::String text);
    
    /// <summary>
    /// Accepts visitor object to process operator.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    /// <summary>
    /// Initializes operator.
    /// </summary>
    /// <param name="index">Index of operator.</param>
    /// <param name="command">Operator command.</param>
    SetSpacingMoveToNextLineShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    /// <summary>
    /// Initializes operator.
    /// </summary>
    SetSpacingMoveToNextLineShowText();
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
private:

    double aw;
    double ac;
    System::String text;
    
};

} // namespace Operators
} // namespace Pdf
} // namespace Aspose


