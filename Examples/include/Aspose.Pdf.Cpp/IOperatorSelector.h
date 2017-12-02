#ifndef _Aspose_Pdf_IOperatorSelector_h_
#define _Aspose_Pdf_IOperatorSelector_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Operators { class Fill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ObsoleteFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGrayStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGray; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GS; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePath; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetFlat; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ID; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorRenderingIntent; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineCap; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetMiterLimit; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MP; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EndPath; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GSave; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GRestore; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Re; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class LineTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetWordSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPositionSetLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SelectFont; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGlyphsPositionShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextMatrix; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRenderingMode; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRise; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Stroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveToNextLine; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharacterSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPosition; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo2; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOClip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetHorizontalTextScaling; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo1; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Clip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineWidth; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineJoin; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EX; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ET; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EMC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EI; } } }
namespace Aspose { namespace Pdf { namespace Operators { class DP; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Do; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetDash; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharWidth; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharWidthBoundingBox; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorSpaceStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorSpace; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ConcatenateMatrix; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BX; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BT; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BMC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BI; } } }
namespace Aspose { namespace Pdf { namespace Operators { class BDC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class FillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathEOFillStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveToNextLineShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetSpacingMoveToNextLineShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextOperator; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines Visitor for visiting different pdf operators.
/// </summary>
class ASPOSE_PDF_SHARED_API IOperatorSelector : public virtual System::Object
{
    typedef IOperatorSelector ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Visit/select f operator.
    /// </summary>
    /// <param name="f">
    /// Fill path operator (nonzero winding number rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::Fill> f) = 0;
    /// <summary>
    /// Visit/select F operator.
    /// </summary>
    /// <param name="F">
    /// Fill path operator (nonzero winding number rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ObsoleteFill> F) = 0;
    /// <summary>
    /// Visit/select operator f*.
    /// </summary>
    /// <param name="f_">
    /// Fill path operator (even-odd rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::EOFill> f_) = 0;
    /// <summary>
    /// Visit/select G operator.
    /// </summary>
    /// <param name="G">
    /// Set gray level operator (for stroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetGrayStroke> G) = 0;
    /// <summary>
    /// Visit/select g operator.
    /// </summary>
    /// <param name="g">
    /// Set gray level operator (for nonstroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetGray> g) = 0;
    /// <summary>
    /// Visit/select gs operator.
    /// </summary>
    /// <param name="gs">
    /// Set graphics state operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::GS> gs) = 0;
    /// <summary>
    /// Visit/select h operator.
    /// </summary>
    /// <param name="h">
    /// Close subpath operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ClosePath> h) = 0;
    /// <summary>
    /// Visit/select i operator.
    /// </summary>
    /// <param name="i">
    /// Set flatness tolerance operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetFlat> i) = 0;
    /// <summary>
    /// Visit/select ID operator.
    /// </summary>
    /// <param name="ID">
    /// Begin inline image data operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ID> ID) = 0;
    /// <summary>
    /// Visit/select ri operator.
    /// </summary>
    /// <param name="ri">
    /// Set color rendering intent operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetColorRenderingIntent> ri) = 0;
    /// <summary>
    /// Visit/select J operator.
    /// </summary>
    /// <param name="J">
    /// Set line cap style operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetLineCap> J) = 0;
    /// <summary>
    /// Visit/select M operator.
    /// </summary>
    /// <param name="M">
    /// Set miter limit operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetMiterLimit> M) = 0;
    /// <summary>
    /// Visit/select MP operator.
    /// </summary>
    /// <param name="MP">
    /// Define marked-content point operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::MP> MP) = 0;
    /// <summary>
    /// Visit/select n operator.
    /// </summary>
    /// <param name="n">
    /// End path operator (without filling or stroking).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::EndPath> n) = 0;
    /// <summary>
    /// Visit/select q operator.
    /// </summary>
    /// <param name="q">
    /// Save graphics state operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::GSave> q) = 0;
    /// <summary>
    /// Visit/select Q operator.
    /// </summary>
    /// <param name="Q">
    /// Restore graphics state operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::GRestore> Q) = 0;
    /// <summary>
    /// Visit/select re operator.
    /// </summary>
    /// <param name="re">
    /// Append rectangle to path operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::Re> re) = 0;
    /// <summary>
    /// Visit/select RG operator.
    /// </summary>
    /// <param name="RG">
    /// Set RGB color operator (for stroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetRGBColorStroke> RG) = 0;
    /// <summary>
    /// Visit/select rg operator.
    /// </summary>
    /// <param name="rg">
    /// Set RGB color operator (for nonstroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetRGBColor> rg) = 0;
    /// <summary>
    /// Visit/select K operator.
    /// </summary>
    /// <param name="K">
    /// Set CMYK color operator (for stroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetCMYKColorStroke> K) = 0;
    /// <summary>
    /// Visit/select k operator.
    /// </summary>
    /// <param name="k">
    /// Set CMYK color operator (for nonstroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetCMYKColor> k) = 0;
    /// <summary>
    /// Visit/select l operator.
    /// </summary>
    /// <param name="l">
    /// Append straight line segment to path operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::LineTo> l) = 0;
    /// <summary>
    /// Visit/select m operator.
    /// </summary>
    /// <param name="m">
    /// Begin new subpath operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::MoveTo> m) = 0;
    /// <summary>
    /// Visit/select Tw operator.
    /// </summary>
    /// <param name="Tw">
    /// Set word spacing operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetWordSpacing> Tw) = 0;
    /// <summary>
    /// Visit/select s operator.
    /// </summary>
    /// <param name="s">
    /// Close and stroke path operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ClosePathStroke> s) = 0;
    /// <summary>
    /// Visit/select TD operator.
    /// </summary>
    /// <param name="TD">
    /// Move text position and set leading operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::MoveTextPositionSetLeading> TD) = 0;
    /// <summary>
    /// Visit/select Tf operator.
    /// </summary>
    /// <param name="Tf">
    /// Set text font and size operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SelectFont> Tf) = 0;
    /// <summary>
    /// Visit/select Tj operator.
    /// </summary>
    /// <param name="Tj">
    /// Show text operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ShowText> Tj) = 0;
    /// <summary>
    /// Visit/select TJ operator.
    /// </summary>
    /// <param name="TJ">
    /// Show text operator (allowing individual glyph positioning).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetGlyphsPositionShowText> TJ) = 0;
    /// <summary>
    /// Visit/select TL operator.
    /// </summary>
    /// <param name="TL">
    /// Set text leading operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetTextLeading> TL) = 0;
    /// <summary>
    /// Visit/select Tm operator.
    /// </summary>
    /// <param name="Tm">
    /// Set text matrix and text line matrix operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetTextMatrix> Tm) = 0;
    /// <summary>
    /// Visit/select Tr operator.
    /// </summary>
    /// <param name="Tr">
    /// Set text rendering mode operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetTextRenderingMode> Tr) = 0;
    /// <summary>
    /// Visit/select Ts operator.
    /// </summary>
    /// <param name="Ts">
    /// Set text rise operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetTextRise> Ts) = 0;
    /// <summary>
    /// Visit/select S operator.
    /// </summary>
    /// <param name="S">
    /// Stroke path operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::Stroke> S) = 0;
    /// <summary>
    /// Visit/select SC operator.
    /// </summary>
    /// <param name="SC">
    /// Set color operator (for stroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetColorStroke> SC) = 0;
    /// <summary>
    /// Visit/select sc operator.
    /// </summary>
    /// <param name="sc">
    /// Set color operator (for nonstroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetColor> sc) = 0;
    /// <summary>
    /// Visit/select SCN operator.
    /// </summary>
    /// <param name="SCN">
    /// Set color operator (for stroking operations, ICCBasedand special colour spaces).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetAdvancedColorStroke> SCN) = 0;
    /// <summary>
    /// Visit/select scn operator.
    /// </summary>
    /// <param name="scn">
    /// Set color operator (for nonstroking operations, ICCBased and special colour spaces).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetAdvancedColor> scn) = 0;
    /// <summary>
    /// Visit/select sh operator.
    /// </summary>
    /// <param name="sh">
    /// Paint area defined by shading pattern operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ShFill> sh) = 0;
    /// <summary>
    /// Visit/select T* operator.
    /// </summary>
    /// <param name="T_">
    /// Move to start of next text line operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::MoveToNextLine> T_) = 0;
    /// <summary>
    /// Visit/select Tc operator.
    /// </summary>
    /// <param name="Tc">
    /// Set character spacing operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetCharacterSpacing> Tc) = 0;
    /// <summary>
    /// Visit/select Td operator.
    /// </summary>
    /// <param name="Td">
    /// Move text position operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::MoveTextPosition> Td) = 0;
    /// <summary>
    /// Visit/select y operator.
    /// </summary>
    /// <param name="y">
    /// Append curved segment to path operator (final point replicated).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::CurveTo2> y) = 0;
    /// <summary>
    /// Visit/select W* operator.
    /// </summary>
    /// <param name="W_">
    /// Set clipping path operator (even-odd rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::EOClip> W_) = 0;
    /// <summary>
    /// Visit/select Tz operator.
    /// </summary>
    /// <param name="Tz">
    /// Set horizontal text scaling operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetHorizontalTextScaling> Tz) = 0;
    /// <summary>
    /// Visit/select v operator.
    /// </summary>
    /// <param name="v">
    /// Append curved segment to path operator (initial point replicated).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::CurveTo1> v) = 0;
    /// <summary>
    /// Visit/select W operator.
    /// </summary>
    /// <param name="W">
    /// Set clipping path operator (nonzero winding number rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::Clip> W) = 0;
    /// <summary>
    /// Visit/select w operator.
    /// </summary>
    /// <param name="w">
    /// Set line width operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetLineWidth> w) = 0;
    /// <summary>
    /// Visit/select j operator.
    /// </summary>
    /// <param name="j">
    /// Set line join style operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetLineJoin> j) = 0;
    /// <summary>
    /// Visit/select EX operator.
    /// </summary>
    /// <param name="EX">
    /// End compatibility section operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::EX> EX) = 0;
    /// <summary>
    /// Visit/select ET operator.
    /// </summary>
    /// <param name="ET">
    /// End text object operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ET> ET) = 0;
    /// <summary>
    /// Visit/select EMC operator.
    /// </summary>
    /// <param name="EMC">
    /// End marked-content sequence operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::EMC> EMC) = 0;
    /// <summary>
    /// Visit/select EI operator.
    /// </summary>
    /// <param name="EI">
    /// End inline image object operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::EI> EI) = 0;
    /// <summary>
    /// Visit/select DP operator.
    /// </summary>
    /// <param name="DP">
    /// Define marked-content point operator (with property list).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::DP> DP) = 0;
    /// <summary>
    /// Visit/select Do operator.
    /// </summary>
    /// <param name="Do">
    /// Invoke named XObject operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::Do> Do) = 0;
    /// <summary>
    /// Visit/select d operator.
    /// </summary>
    /// <param name="d">
    /// Set line dash pattern operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetDash> d) = 0;
    /// <summary>
    /// Visit/select d0 operator.
    /// </summary>
    /// <param name="d0">
    /// Set glyph width in Type 3 font operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetCharWidth> d0) = 0;
    /// <summary>
    /// Visit/select d1 operator.
    /// </summary>
    /// <param name="d1">
    /// Set glyph width and bounding box in Type 3 font operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetCharWidthBoundingBox> d1) = 0;
    /// <summary>
    /// Visit/select CS operator.
    /// </summary>
    /// <param name="CS">
    /// Set color space operator (for stroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetColorSpaceStroke> CS) = 0;
    /// <summary>
    /// Visit/select cs operator.
    /// </summary>
    /// <param name="cs">
    /// Set color space operator (for nonstroking operations).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetColorSpace> cs) = 0;
    /// <summary>
    /// Visit/select cm operator.
    /// </summary>
    /// <param name="cm">
    /// Concatenate matrix to current transformation matrix operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ConcatenateMatrix> cm) = 0;
    /// <summary>
    /// Visit/select c operator.
    /// </summary>
    /// <param name="c">
    /// Append curved segment to path operator (three control points).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::CurveTo> c) = 0;
    /// <summary>
    /// Visit/select BX operator.
    /// </summary>
    /// <param name="BX">
    /// Begin compatibility section operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::BX> BX) = 0;
    /// <summary>
    /// Visit/select BT operator.
    /// </summary>
    /// <param name="BT">
    /// Begin text object operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::BT> BT) = 0;
    /// <summary>
    /// Visit/select BMC operator.
    /// </summary>
    /// <param name="BMC">
    /// Begin marked-content sequence operator.
    /// </param>
    //<<--REFACTORING: Move outside of Operator. Old Code: Operators.BMC
    virtual void Visit(System::SharedPtr<Operators::BMC> BMC) = 0;
    /// <summary>
    /// Visit/select BI operator.
    /// </summary>
    /// <param name="BI">
    /// Begin inline image object operator.
    /// </param>
    //<<--REFACTORING: Move outside of Operator. Old Code: Operators.BI
    virtual void Visit(System::SharedPtr<Operators::BI> BI) = 0;
    /// <summary>
    /// Visit/select BDC operator.
    /// </summary>
    /// <param name="BDC">
    /// Begin marked-content sequence operator (with property list).
    /// </param>
    //<<--REFACTORING: Move outside of Operator. Old Code: Operators.BDC
    virtual void Visit(System::SharedPtr<Operators::BDC> BDC) = 0;
    /// <summary>
    /// Visit/select B operator.
    /// </summary>
    /// <param name="B">
    /// Fill and stroke path operator (nonzero winding number rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::FillStroke> B) = 0;
    /// <summary>
    /// Visit/select b operator.
    /// </summary>
    /// <param name="b">
    /// Close, fill, and stroke path operator (nonzero winding number rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ClosePathFillStroke> b) = 0;
    /// <summary>
    /// Visit/select B* operator.
    /// </summary>
    /// <param name="B_">
    /// Fill and stroke path operator (even-odd rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::EOFillStroke> B_) = 0;
    /// <summary>
    /// Visit/select b* operator.
    /// </summary>
    /// <param name="b_">
    /// Close, fill, and stroke path operator (even-odd rule).
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::ClosePathEOFillStroke> b_) = 0;
    /// <summary>
    /// Visit/select ' operator.
    /// </summary>
    /// <param name="_">
    /// Move to next line and show text operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::MoveToNextLineShowText> _) = 0;
    /// <summary>
    /// Visit/select '' operator.
    /// </summary>
    /// <param name="__">
    /// Set word and character spacing, move to next line, and show text operator.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::SetSpacingMoveToNextLineShowText> __) = 0;
    /// <summary>
    /// Visit/select any text operator operator.
    /// </summary>
    /// <param name="textOperator">
    /// General text operator which is used to select the set of corresponding pdf operators.
    /// </param>
    virtual void Visit(System::SharedPtr<Operators::TextOperator> textOperator) = 0;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_IOperatorSelector_h_

