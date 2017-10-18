#ifndef _Aspose_Pdf_Operator_h_
#define _Aspose_Pdf_Operator_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfXConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class ArrayTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class StringTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class SearchablePdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Text { class EvaluationTextExportInspector; } } }
namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class DefaultAppearance; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextBoxField; } } } }
namespace Aspose { namespace Pdf { namespace Operators { class FillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathEOFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BDC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BI; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BMC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextOperator; } } }
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
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo1; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineWidth; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Clip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOClip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo2; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BT; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ET; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveToNextLine; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPosition; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPositionSetLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGlyphsPositionShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRenderingMode; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveToNextLineShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetSpacingMoveToNextLineShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColor; } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class ImagePlacementAbsorber; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class ContentsAppender; } }
namespace Aspose { namespace Pdf { namespace Structure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace Structure { class TextElement; } } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Collections { class OperatorCollectionTests; } } } }
namespace Aspose { namespace Pdf { namespace Tests { class Helper; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class ICommandProcessor; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandParameter; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class ICommand; } } } } } } }
namespace Aspose { namespace Pdf { class IOperatorSelector; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }
namespace Aspose { namespace Pdf { class Artifact; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfName; } } } }
namespace Aspose { namespace Pdf { namespace Operators { class BlockTextOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextShowOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextStateOperator; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextPlaceOperator; } } }
namespace Aspose { namespace Pdf { namespace Facades { class TextProperties; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { namespace PageModel { class GraphicElement; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class InkAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Primitives { enum class LineJoin; } } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class TextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Primitives { enum class LineCap; } } } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGrayStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGray; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharacterSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SelectFont; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRise; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetWordSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetHorizontalTextScaling; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextMatrix; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FreeTextAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class Form; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class TextModel; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfString; } } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Abstract class representing operator.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT Operator : public System::Object
{
    typedef Operator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfXConvertStrategy;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::ArrayTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::StringTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::SearchablePdfConvertStrategy;
    friend class Aspose::Pdf::Text::EvaluationTextExportInspector;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::InteractiveFeatures::DefaultAppearance;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::Operators::FillStroke;
    friend class Aspose::Pdf::Operators::ClosePathFillStroke;
    friend class Aspose::Pdf::Operators::ClosePathEOFillStroke;
    friend class Aspose::Pdf::Operators::EOFillStroke;
    friend class Aspose::Pdf::Operators::BDC;
    friend class Aspose::Pdf::Operators::BI;
    friend class Aspose::Pdf::Operators::BMC;
    friend class Aspose::Pdf::Operators::TextOperator;
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
    friend class Aspose::Pdf::Operators::CurveTo1;
    friend class Aspose::Pdf::Operators::SetLineWidth;
    friend class Aspose::Pdf::Operators::Clip;
    friend class Aspose::Pdf::Operators::EOClip;
    friend class Aspose::Pdf::Operators::CurveTo2;
    friend class Aspose::Pdf::Operators::BT;
    friend class Aspose::Pdf::Operators::ET;
    friend class Aspose::Pdf::Operators::MoveToNextLine;
    friend class Aspose::Pdf::Operators::MoveTextPosition;
    friend class Aspose::Pdf::Operators::MoveTextPositionSetLeading;
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::Operators::SetGlyphsPositionShowText;
    friend class Aspose::Pdf::Operators::SetTextRenderingMode;
    friend class Aspose::Pdf::Operators::MoveToNextLineShowText;
    friend class Aspose::Pdf::Operators::SetSpacingMoveToNextLineShowText;
    friend class Aspose::Pdf::Operators::SetColorStroke;
    friend class Aspose::Pdf::Operators::SetColor;
    friend class Aspose::Pdf::Operators::SetAdvancedColorStroke;
    friend class Aspose::Pdf::Operators::SetAdvancedColor;
    friend class Aspose::Pdf::OperatorCollection;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::ImagePlacementAbsorber;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::ContentsAppender;
    friend class Aspose::Pdf::Structure::FigureElement;
    friend class Aspose::Pdf::Structure::TextElement;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    friend class Aspose::Pdf::Tests::Helper;
    
public:

    int32_t get_Index();
    void set_Index(int32_t value);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor) = 0;
    virtual System::String ToString();
    static bool IsTextShowOperator(System::SharedPtr<Operator> op);
    
protected:

    int32_t index;
    System::WeakPtr<OperatorCollection> container;
    static System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommandProcessor> commandProcessor;
    
    static System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommandProcessor> get_CommandProcessor();
    System::SharedPtr<Engine::Data::ITrailerable> get_Trailerable();
    void set_Trailerable(System::SharedPtr<Engine::Data::ITrailerable> value);
    
    System::ArrayPtr<uint8_t> _bytes;
    
    virtual System::String get_CommandName();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::CommandParameter>>> get_Parameters();
    virtual int32_t get_ParametersCount();
    virtual System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> get_Command();
    virtual bool get_HasBinaryData();
    
    bool is_command_null();
    void Reset();
    static System::SharedPtr<Operator> Create(System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    static System::SharedPtr<Operator> Create(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual void FromCommand(System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    Operator(int32_t index, System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    static System::String ToString(System::SharedPtr<Engine::Data::IPdfPrimitive> primitive);
    static System::String escape(System::String s);
    static System::String FloatToStr(double v);
    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Operator"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::WeakPtr<Engine::Data::ITrailerable> trailerable;
    System::SharedPtr<Engine::CommonData::PageContent::Operators::Commands::ICommand> command;
    bool isCommandInitialized;
    
    static System::String toOct(int32_t code);
    
};

namespace Operators {

/// <summary>
/// Class representing B operator (fill and stroke path using nonzero winding rule)
/// </summary>
//<<--REFACTORING: Move outside of Operator
class ASPOSE_PDF_SHARED_API FillStroke : public Aspose::Pdf::Operator
{
    typedef FillStroke ThisType;
    typedef Aspose::Pdf::Operator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    FillStroke();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    FillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FillStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    ClosePathFillStroke();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    virtual System::String get_CommandName();
    
    ClosePathFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ClosePathFillStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    ClosePathEOFillStroke();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    virtual System::String get_CommandName();
    
    ClosePathEOFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ClosePathEOFillStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    EOFillStroke();
    EOFillStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EOFillStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    System::String get_Tag();
    void set_Tag(System::String value);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_PropertiesDictionary();
    void set_PropertiesDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> get_PropertiesName();
    void set_PropertiesName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> value);
    
    BDC(System::String tag);
    BDC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    BDC(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties);
    BDC(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> property);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BDC"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    BI();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    BI(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BI"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_Tag();
    void set_Tag(System::String value);
    
    BMC(System::String tag);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    BMC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BMC"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _tag;
    
};

/// <summary>
/// Abstract base class for text-related operators (TJ, Tj, Tm, BT, ET, etc).
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT TextOperator : public Aspose::Pdf::Operator
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

    TextOperator();
    TextOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    TextOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextOperator"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties;
    
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

    BX();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    virtual System::String get_CommandName();
    
    BX(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BX"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    CurveTo(double x1, double y1, double x2, double y2, double x3, double y3);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    CurveTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CurveTo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
    System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    
    void init();
    
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

    System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_Matrix();
    void set_Matrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    
    ConcatenateMatrix(double a, double b, double c, double d, double e, double f);
    ConcatenateMatrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> m);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    ConcatenateMatrix(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ConcatenateMatrix"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::DOM::Matrix> matrix;
    
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
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    System::String get_Name();
    void set_Name(System::String value);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetColorSpaceStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    SetColorSpaceStroke(System::String name);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetColorSpaceStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    friend class Aspose::Pdf::PageModel::GraphicElement;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    System::String get_Name();
    void set_Name(System::String value);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual System::String get_CommandName();
    
    SetColorSpace(System::String name);
    SetColorSpace(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetColorSpace"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::ArrayPtr<int32_t> get_Pattern();
    void set_Pattern(System::ArrayPtr<int32_t> value);
    int32_t get_Phase();
    void set_Phase(int32_t value);
    
    SetDash(System::ArrayPtr<int32_t> pattern, int32_t phase);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetDash(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetDash"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetCharWidth();
    SetCharWidth(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetCharWidth"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetCharWidthBoundingBox();
    SetCharWidthBoundingBox(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetCharWidthBoundingBox"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_Name();
    void set_Name(System::String value);
    
    Do(System::String name);
    Do();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    Do(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Do"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_Tag();
    void set_Tag(System::String value);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_PropertiesDictionary();
    void set_PropertiesDictionary(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> get_PropertiesName();
    void set_PropertiesName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> value);
    
    DP(System::String tag);
    DP(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    DP(System::String tag, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> properties);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DP"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual bool get_HasBinaryData();
    
    EI();
    EI(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EI"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    EMC();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    EMC(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EMC"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    EX();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    EX(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EX"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    Fill();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    Fill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Fill"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    ObsoleteFill();
    ObsoleteFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ObsoleteFill"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    EOFill();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    EOFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EOFill"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_Name();
    void set_Name(System::String value);
    
    GS(System::String name);
    
    virtual System::String ToString();
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    GS(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GS"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    ClosePath();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual System::String get_CommandName();
    
    ClosePath(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ClosePath"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_Flatness();
    void set_Flatness(double value);
    
    SetFlat(double flatness);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetFlat(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetFlat"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    virtual System::String get_CommandName();
    
    ID();
    ID(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ID"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Operator;
    
public:

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    Aspose::Pdf::Engine::Presentation::Primitives::LineJoin get_Join();
    void set_Join(Aspose::Pdf::Engine::Presentation::Primitives::LineJoin value);
    
    SetLineJoin();
    SetLineJoin(Aspose::Pdf::Engine::Presentation::Primitives::LineJoin join);
    SetLineJoin(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetLineJoin"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::InkAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::TextAnnotation;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::Tests::Collections::OperatorCollectionTests;
    
public:

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    Aspose::Pdf::Engine::Presentation::Primitives::LineCap get_Cap();
    void set_Cap(Aspose::Pdf::Engine::Presentation::Primitives::LineCap value);
    
    SetLineCap(Aspose::Pdf::Engine::Presentation::Primitives::LineCap cap);
    SetLineCap(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetLineCap"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_X();
    void set_X(double value);
    double get_Y();
    void set_Y(double value);
    
    LineTo(double x, double y);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    LineTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LineTo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_X();
    void set_X(double value);
    double get_Y();
    void set_Y(double value);
    
    MoveTo(double x, double y);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    MoveTo(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MoveTo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_MiterLimit();
    void set_MiterLimit(double value);
    
    SetMiterLimit(double miterLimit);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetMiterLimit(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetMiterLimit"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_Tag();
    void set_Tag(System::String value);
    
    MP(System::String tag);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    MP(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MP"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    EndPath();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    EndPath(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EndPath"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    GSave();
    
    virtual System::String ToString();
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    GSave(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GSave"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    GRestore();
    
    virtual System::String ToString();
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    GRestore(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "GRestore"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_X();
    void set_X(double value);
    double get_Y();
    void set_Y(double value);
    double get_Width();
    void set_Width(double value);
    double get_Height();
    void set_Height(double value);
    
    Re();
    Re(double x, double y, double width, double height);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    Re(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Re"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double _x;
    double _y;
    double width;
    double height;
    
};

/// <summary>
/// Class representing set color operation. 
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT SetColorOperator : public Aspose::Pdf::Operator
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
    friend class Aspose::Pdf::Operators::SetColorStroke;
    friend class Aspose::Pdf::Operators::SetColor;
    friend class Aspose::Pdf::Operators::SetAdvancedColorStroke;
    friend class Aspose::Pdf::Operators::SetAdvancedColor;
    
public:

    virtual System::Drawing::Color getColor() = 0;
    
protected:

    SetColorOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetColorOperator"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetColorRenderingIntent();
    SetColorRenderingIntent(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetColorRenderingIntent"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    ClosePathStroke();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    ClosePathStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ClosePathStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    Stroke();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    Stroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Stroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_Name();
    void set_Name(System::String value);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    ShFill();
    ShFill(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ShFill"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String _name;
    
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

    CurveTo1(double x2, double y2, double x3, double y3);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    CurveTo1(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CurveTo1"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
    System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    
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

    double get_Width();
    void set_Width(double value);
    
    SetLineWidth(double width);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetLineWidth(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetLineWidth"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    Clip();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    Clip(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Clip"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    EOClip();
    EOClip(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EOClip"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    CurveTo2(double x1, double y1, double x3, double y3);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    CurveTo2(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CurveTo2"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> points;
    
    System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    
    void init();
    
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

    BlockTextOperator();
    BlockTextOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    BlockTextOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BlockTextOperator"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    friend class Aspose::Pdf::Operators::ShowText;
    friend class Aspose::Pdf::Operators::SetGlyphsPositionShowText;
    friend class Aspose::Pdf::Operators::MoveToNextLineShowText;
    friend class Aspose::Pdf::Operators::SetSpacingMoveToNextLineShowText;
    
public:

    virtual System::String get_Text();
    virtual void set_Text(System::String value);
    
    TextShowOperator();
    TextShowOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    TextShowOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextShowOperator"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    TextStateOperator();
    TextStateOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    TextStateOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextStateOperator"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Abstract base class for operators which changes text position (Tm, Td, etc).
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

    TextPlaceOperator();
    TextPlaceOperator(System::SharedPtr<Aspose::Pdf::Facades::TextProperties> textProperties);
    
protected:

    TextPlaceOperator(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "TextPlaceOperator"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    BT();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    BT(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "BT"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    ET();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    ET(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ET"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    MoveToNextLine();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    MoveToNextLine(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MoveToNextLine"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_CharSpacing();
    void set_CharSpacing(double value);
    
    SetCharacterSpacing(double charSpacing);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetCharacterSpacing(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetCharacterSpacing"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_X();
    void set_X(double value);
    double get_Y();
    void set_Y(double value);
    
    MoveTextPosition(double x, double y);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    MoveTextPosition(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MoveTextPosition"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_X();
    void set_X(double value);
    double get_Y();
    void set_Y(double value);
    
    MoveTextPositionSetLeading(double x, double y);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    MoveTextPositionSetLeading(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MoveTextPositionSetLeading"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::String get_Name();
    double get_Size();
    
    SelectFont(System::String resName, double size);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SelectFont(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SelectFont"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::Form;
    friend class Aspose::Pdf::Operator;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::TextModel;
    friend class Aspose::Pdf::Artifact;
    
public:

    virtual System::String get_Text();
    virtual void set_Text(System::String value);
    
    ShowText(int32_t index, System::String text);
    ShowText(System::String text);
    ShowText(System::String text, System::SharedPtr<Text::Font> font);
    ShowText();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> get_PdfString();
    void set_PdfString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> value);
    
    ShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ShowText"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String text;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> pdfString;
    
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

    virtual System::String get_Text();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetGlyphsPositionShowText();
    SetGlyphsPositionShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetGlyphsPositionShowText"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>>> args;
    System::String text;
    
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

    double get_Leading();
    void set_Leading(double value);
    
    SetTextLeading(double leading);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetTextLeading(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetTextLeading"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_Matrix();
    void set_Matrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> value);
    
    SetTextMatrix(double a, double b, double c, double d, double e, double f);
    SetTextMatrix(System::SharedPtr<Aspose::Pdf::DOM::Matrix> m);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetTextMatrix(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetTextMatrix"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::DOM::Matrix> matrix;
    
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

    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetTextRenderingMode();
    SetTextRenderingMode(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetTextRenderingMode"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_TextRise();
    void set_TextRise(double value);
    
    SetTextRise(double textRise);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetTextRise(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetTextRise"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_WordSpacing();
    void set_WordSpacing(double value);
    
    SetWordSpacing(double wordSpacing);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetWordSpacing(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetWordSpacing"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_HorizontalScaling();
    void set_HorizontalScaling(double value);
    
    SetHorizontalTextScaling(double horizintalScaling);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetHorizontalTextScaling(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetHorizontalTextScaling"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double _horizontalScaling;
    
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

    virtual System::String get_Text();
    
    MoveToNextLineShowText();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    MoveToNextLineShowText(System::String text);
    MoveToNextLineShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MoveToNextLineShowText"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    double get_Aw();
    double get_Ac();
    virtual System::String get_Text();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetSpacingMoveToNextLineShowText(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    SetSpacingMoveToNextLineShowText();
    
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetSpacingMoveToNextLineShowText"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double aw;
    double ac;
    System::String text;
    
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

    virtual System::Drawing::Color getColor();
    
    SetGrayStroke(double gray);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetGrayStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetGrayStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual System::Drawing::Color getColor();
    
    SetGray(double gray);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetGray(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetGray"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual System::Drawing::Color getColor();
    
    SetCMYKColorStroke(double c, double m, double y, double k);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetCMYKColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetCMYKColorStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual System::Drawing::Color getColor();
    
    SetCMYKColor(double c, double m, double y, double k);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetCMYKColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetCMYKColor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual System::Drawing::Color getColor();
    
    SetRGBColorStroke(double r, double g, double b);
    SetRGBColorStroke(System::Drawing::Color color);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetRGBColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetRGBColorStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

    virtual System::Drawing::Color getColor();
    
    SetRGBColor(double r, double g, double b);
    SetRGBColor(System::Drawing::Color color);
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    virtual System::String ToString();
    
protected:

    SetRGBColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetRGBColor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double _r;
    double _g;
    double _b;
    
};

/// <summary>
/// Class representing SC operator set color for stroking color operators.
/// </summary>
class ASPOSE_PDF_SHARED_API SetColorStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetColorStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    virtual System::Drawing::Color getColor();
    
    SetColorStroke();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetColorStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Represents class for sc operator (set color for non-stroknig operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetColor : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetColor ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    virtual System::Drawing::Color getColor();
    
    SetColor();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetColor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Class representing SCN operator (set color for stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetAdvancedColorStroke : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetAdvancedColorStroke ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    virtual System::Drawing::Color getColor();
    
    SetAdvancedColorStroke();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetAdvancedColorStroke(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetAdvancedColorStroke"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

/// <summary>
/// Class representing scn operator (set color for non-stroking operations).
/// </summary>
class ASPOSE_PDF_SHARED_API SetAdvancedColor : public Aspose::Pdf::Operators::SetColorOperator
{
    typedef SetAdvancedColor ThisType;
    typedef Aspose::Pdf::Operators::SetColorOperator BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Operator;
    
public:

    virtual System::Drawing::Color getColor();
    
    SetAdvancedColor();
    
    virtual void Accept(System::SharedPtr<IOperatorSelector> visitor);
    
protected:

    SetAdvancedColor(int32_t index, System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    
    virtual void FromCommand(System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> command);
    virtual System::SharedPtr<Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommand> ToCommand();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SetAdvancedColor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Operators
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Operator_h_

