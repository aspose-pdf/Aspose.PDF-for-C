#ifndef _Aspose_Pdf_OperatorSelector_h_
#define _Aspose_Pdf_OperatorSelector_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "Selector.h"
#include "Operator.h"
#include "IOperatorSelector.h"

namespace Aspose { namespace Pdf { namespace Operators { class SetLineJoin; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EX; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ET; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EMC; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EI; } } }
namespace Aspose { namespace Pdf { namespace Operators { class DP; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Do; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharWidthBoundingBox; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharWidth; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetDash; } } }
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
namespace Aspose { namespace Pdf { namespace Operators { class EOFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Fill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ObsoleteFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGray; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGrayStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GS; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePath; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetFlat; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ID; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineCap; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCMYKColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class LineTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTo; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetMiterLimit; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MP; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EndPath; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GSave; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GRestore; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Re; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorRenderingIntent; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ClosePathStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Stroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColorStroke; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShFill; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveToNextLine; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetCharacterSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPosition; } } }
namespace Aspose { namespace Pdf { namespace Operators { class MoveTextPositionSetLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SelectFont; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetGlyphsPositionShowText; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextLeading; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextMatrix; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRenderingMode; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetTextRise; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetWordSpacing; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetHorizontalTextScaling; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo1; } } }
namespace Aspose { namespace Pdf { namespace Operators { class EOClip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetLineWidth; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Clip; } } }
namespace Aspose { namespace Pdf { namespace Operators { class CurveTo2; } } }
namespace Aspose { namespace Pdf { namespace Operators { class TextOperator; } } }

namespace Aspose {

namespace Pdf {

///<summary>
/// This class is used for selecting operators using Visitor template idea.
/// </summary>
class ASPOSE_PDF_SHARED_API OperatorSelector FINAL : public Aspose::Pdf::Selector<System::SharedPtr<Aspose::Pdf::Operator>>, public Aspose::Pdf::IOperatorSelector
{
    typedef OperatorSelector ThisType;
    typedef Aspose::Pdf::Selector<System::SharedPtr<Aspose::Pdf::Operator>> BaseType;
    typedef Aspose::Pdf::IOperatorSelector BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    OperatorSelector(System::SharedPtr<Operator> op);
    
    void Visit(System::SharedPtr<Operators::SetLineJoin> j);
    void Visit(System::SharedPtr<Operators::EX> EX);
    void Visit(System::SharedPtr<Operators::ET> ET);
    void Visit(System::SharedPtr<Operators::EMC> EMC);
    void Visit(System::SharedPtr<Operators::EI> EI);
    void Visit(System::SharedPtr<Operators::DP> DP);
    void Visit(System::SharedPtr<Operators::Do> Do);
    void Visit(System::SharedPtr<Operators::SetCharWidthBoundingBox> d1);
    void Visit(System::SharedPtr<Operators::SetCharWidth> d0);
    void Visit(System::SharedPtr<Operators::SetDash> d);
    void Visit(System::SharedPtr<Operators::SetColorSpaceStroke> CS);
    void Visit(System::SharedPtr<Operators::SetColorSpace> cs);
    void Visit(System::SharedPtr<Operators::ConcatenateMatrix> cm);
    void Visit(System::SharedPtr<Operators::CurveTo> c);
    void Visit(System::SharedPtr<Operators::BX> BX);
    void Visit(System::SharedPtr<Operators::BT> BT);
    void Visit(System::SharedPtr<Operators::BMC> BMC);
    void Visit(System::SharedPtr<Operators::BI> BI);
    void Visit(System::SharedPtr<Operators::BDC> BDC);
    void Visit(System::SharedPtr<Operators::FillStroke> B);
    void Visit(System::SharedPtr<Operators::ClosePathFillStroke> b);
    void Visit(System::SharedPtr<Operators::EOFillStroke> B_);
    void Visit(System::SharedPtr<Operators::ClosePathEOFillStroke> b_);
    void Visit(System::SharedPtr<Operators::MoveToNextLineShowText> _);
    void Visit(System::SharedPtr<Operators::SetSpacingMoveToNextLineShowText> __);
    void Visit(System::SharedPtr<Operators::EOFill> f_);
    void Visit(System::SharedPtr<Operators::Fill> f);
    void Visit(System::SharedPtr<Operators::ObsoleteFill> F);
    void Visit(System::SharedPtr<Operators::SetGray> g);
    void Visit(System::SharedPtr<Operators::SetGrayStroke> G);
    void Visit(System::SharedPtr<Operators::GS> gs);
    void Visit(System::SharedPtr<Operators::ClosePath> h);
    void Visit(System::SharedPtr<Operators::SetFlat> i);
    void Visit(System::SharedPtr<Operators::ID> ID);
    void Visit(System::SharedPtr<Operators::SetLineCap> J);
    void Visit(System::SharedPtr<Operators::SetCMYKColor> k);
    void Visit(System::SharedPtr<Operators::SetCMYKColorStroke> K);
    void Visit(System::SharedPtr<Operators::LineTo> l);
    void Visit(System::SharedPtr<Operators::MoveTo> m);
    void Visit(System::SharedPtr<Operators::SetMiterLimit> M);
    void Visit(System::SharedPtr<Operators::MP> MP);
    void Visit(System::SharedPtr<Operators::EndPath> n);
    void Visit(System::SharedPtr<Operators::GSave> q);
    void Visit(System::SharedPtr<Operators::GRestore> Q);
    void Visit(System::SharedPtr<Operators::Re> re);
    void Visit(System::SharedPtr<Operators::SetRGBColor> rg);
    void Visit(System::SharedPtr<Operators::SetRGBColorStroke> RG);
    void Visit(System::SharedPtr<Operators::SetColorRenderingIntent> ri);
    void Visit(System::SharedPtr<Operators::ClosePathStroke> s);
    void Visit(System::SharedPtr<Operators::Stroke> S);
    void Visit(System::SharedPtr<Operators::SetColor> sc);
    void Visit(System::SharedPtr<Operators::SetColorStroke> SC);
    void Visit(System::SharedPtr<Operators::SetAdvancedColor> scn);
    void Visit(System::SharedPtr<Operators::SetAdvancedColorStroke> SCN);
    void Visit(System::SharedPtr<Operators::ShFill> sh);
    void Visit(System::SharedPtr<Operators::MoveToNextLine> T_);
    void Visit(System::SharedPtr<Operators::SetCharacterSpacing> Tc);
    void Visit(System::SharedPtr<Operators::MoveTextPosition> Td);
    void Visit(System::SharedPtr<Operators::MoveTextPositionSetLeading> TD);
    void Visit(System::SharedPtr<Operators::SelectFont> Tf);
    void Visit(System::SharedPtr<Operators::ShowText> Tj);
    void Visit(System::SharedPtr<Operators::SetGlyphsPositionShowText> TJ);
    void Visit(System::SharedPtr<Operators::SetTextLeading> TL);
    void Visit(System::SharedPtr<Operators::SetTextMatrix> Tm);
    void Visit(System::SharedPtr<Operators::SetTextRenderingMode> Tr);
    void Visit(System::SharedPtr<Operators::SetTextRise> Ts);
    void Visit(System::SharedPtr<Operators::SetWordSpacing> Tw);
    void Visit(System::SharedPtr<Operators::SetHorizontalTextScaling> Tz);
    void Visit(System::SharedPtr<Operators::CurveTo1> v);
    void Visit(System::SharedPtr<Operators::EOClip> W_);
    void Visit(System::SharedPtr<Operators::SetLineWidth> w);
    void Visit(System::SharedPtr<Operators::Clip> W);
    void Visit(System::SharedPtr<Operators::CurveTo2> y);
    void Visit(System::SharedPtr<Operators::TextOperator> textOperator);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "OperatorSelector"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Operator> op;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_OperatorSelector_h_

