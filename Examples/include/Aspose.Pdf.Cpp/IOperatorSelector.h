#ifndef _Aspose_Pdf_IOperatorSelector_h_
#define _Aspose_Pdf_IOperatorSelector_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    virtual void Visit(System::SharedPtr<Operators::Fill> f) = 0;
    virtual void Visit(System::SharedPtr<Operators::ObsoleteFill> F) = 0;
    virtual void Visit(System::SharedPtr<Operators::EOFill> f_) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetGrayStroke> G) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetGray> g) = 0;
    virtual void Visit(System::SharedPtr<Operators::GS> gs) = 0;
    virtual void Visit(System::SharedPtr<Operators::ClosePath> h) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetFlat> i) = 0;
    virtual void Visit(System::SharedPtr<Operators::ID> ID) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetColorRenderingIntent> ri) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetLineCap> J) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetMiterLimit> M) = 0;
    virtual void Visit(System::SharedPtr<Operators::MP> MP) = 0;
    virtual void Visit(System::SharedPtr<Operators::EndPath> n) = 0;
    virtual void Visit(System::SharedPtr<Operators::GSave> q) = 0;
    virtual void Visit(System::SharedPtr<Operators::GRestore> Q) = 0;
    virtual void Visit(System::SharedPtr<Operators::Re> re) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetRGBColorStroke> RG) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetRGBColor> rg) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetCMYKColorStroke> K) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetCMYKColor> k) = 0;
    virtual void Visit(System::SharedPtr<Operators::LineTo> l) = 0;
    virtual void Visit(System::SharedPtr<Operators::MoveTo> m) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetWordSpacing> Tw) = 0;
    virtual void Visit(System::SharedPtr<Operators::ClosePathStroke> s) = 0;
    virtual void Visit(System::SharedPtr<Operators::MoveTextPositionSetLeading> TD) = 0;
    virtual void Visit(System::SharedPtr<Operators::SelectFont> Tf) = 0;
    virtual void Visit(System::SharedPtr<Operators::ShowText> Tj) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetGlyphsPositionShowText> TJ) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetTextLeading> TL) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetTextMatrix> Tm) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetTextRenderingMode> Tr) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetTextRise> Ts) = 0;
    virtual void Visit(System::SharedPtr<Operators::Stroke> S) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetColorStroke> SC) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetColor> sc) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetAdvancedColorStroke> SCN) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetAdvancedColor> scn) = 0;
    virtual void Visit(System::SharedPtr<Operators::ShFill> sh) = 0;
    virtual void Visit(System::SharedPtr<Operators::MoveToNextLine> T_) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetCharacterSpacing> Tc) = 0;
    virtual void Visit(System::SharedPtr<Operators::MoveTextPosition> Td) = 0;
    virtual void Visit(System::SharedPtr<Operators::CurveTo2> y) = 0;
    virtual void Visit(System::SharedPtr<Operators::EOClip> W_) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetHorizontalTextScaling> Tz) = 0;
    virtual void Visit(System::SharedPtr<Operators::CurveTo1> v) = 0;
    virtual void Visit(System::SharedPtr<Operators::Clip> W) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetLineWidth> w) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetLineJoin> j) = 0;
    virtual void Visit(System::SharedPtr<Operators::EX> EX) = 0;
    virtual void Visit(System::SharedPtr<Operators::ET> ET) = 0;
    virtual void Visit(System::SharedPtr<Operators::EMC> EMC) = 0;
    virtual void Visit(System::SharedPtr<Operators::EI> EI) = 0;
    virtual void Visit(System::SharedPtr<Operators::DP> DP) = 0;
    virtual void Visit(System::SharedPtr<Operators::Do> Do) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetDash> d) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetCharWidth> d0) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetCharWidthBoundingBox> d1) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetColorSpaceStroke> CS) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetColorSpace> cs) = 0;
    virtual void Visit(System::SharedPtr<Operators::ConcatenateMatrix> cm) = 0;
    virtual void Visit(System::SharedPtr<Operators::CurveTo> c) = 0;
    virtual void Visit(System::SharedPtr<Operators::BX> BX) = 0;
    virtual void Visit(System::SharedPtr<Operators::BT> BT) = 0;
    virtual void Visit(System::SharedPtr<Operators::BMC> BMC) = 0;
    virtual void Visit(System::SharedPtr<Operators::BI> BI) = 0;
    virtual void Visit(System::SharedPtr<Operators::BDC> BDC) = 0;
    virtual void Visit(System::SharedPtr<Operators::FillStroke> B) = 0;
    virtual void Visit(System::SharedPtr<Operators::ClosePathFillStroke> b) = 0;
    virtual void Visit(System::SharedPtr<Operators::EOFillStroke> B_) = 0;
    virtual void Visit(System::SharedPtr<Operators::ClosePathEOFillStroke> b_) = 0;
    virtual void Visit(System::SharedPtr<Operators::MoveToNextLineShowText> _) = 0;
    virtual void Visit(System::SharedPtr<Operators::SetSpacingMoveToNextLineShowText> __) = 0;
    virtual void Visit(System::SharedPtr<Operators::TextOperator> textOperator) = 0;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_IOperatorSelector_h_

