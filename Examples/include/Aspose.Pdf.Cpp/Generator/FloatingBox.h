#ifndef _Aspose_Pdf_Generator_FloatingBox_h_
#define _Aspose_Pdf_Generator_FloatingBox_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class ColumnInfo; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

/// Represents a FloatingBox in a Pdf document. FloatingBox is custom positioned.
class ASPOSE_PDF_SHARED_API FloatingBox : public Aspose::Pdf::BaseParagraph
{
    typedef FloatingBox ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    System::SharedPtr<Aspose::Pdf::ColumnInfo> get_ColumnInfo();
    void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    double get_Width();
    void set_Width(double value);
    double get_Height();
    void set_Height(double value);
    bool get_IsNeedRepeating();
    void set_IsNeedRepeating(bool value);
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    bool get_IsExtraContentClip();
    void set_IsExtraContentClip(bool value);
    System::SharedPtr<BorderInfo> get_Border();
    void set_Border(System::SharedPtr<BorderInfo> value);
    System::SharedPtr<Color> get_BackgroundColor();
    void set_BackgroundColor(System::SharedPtr<Color> value);
    System::SharedPtr<MarginInfo> get_Padding();
    void set_Padding(System::SharedPtr<MarginInfo> value);
    double get_Left();
    void set_Left(double value);
    double get_Top();
    void set_Top(double value);
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    
    FloatingBox(float width, float height);
    FloatingBox();
    
    System::SharedPtr<FloatingBox> Clone();
    
protected:

    bool Process(double &curX, double &curY, double pageHeight, double pageWidth, System::SharedPtr<MarginInfo> pageMargin, System::SharedPtr<Page> page, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FloatingBox"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<BorderInfo> border;
    System::SharedPtr<Aspose::Pdf::ColumnInfo> columnInfo;
    double height;
    double left;
    bool isHeightSet;
    bool isExtraContentClip;
    bool isNeedRepeating;
    bool isWidthSet;
    System::SharedPtr<MarginInfo> padding;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    double top;
    double width;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_FloatingBox_h_

