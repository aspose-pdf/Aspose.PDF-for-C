#ifndef _Aspose_Pdf_Generator_MarginInfo_h_
#define _Aspose_Pdf_Generator_MarginInfo_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class BaseParagraph; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { class Table; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents a margin for different objects.
/// </summary>
class ASPOSE_PDF_SHARED_API MarginInfo FINAL : public System::Object
{
    typedef MarginInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::BaseParagraph;
    friend class Aspose::Pdf::PageInfo;
    friend class Aspose::Pdf::Table;
    
public:

    double get_Left();
    void set_Left(double value);
    double get_Right();
    void set_Right(double value);
    double get_Top();
    void set_Top(double value);
    double get_Bottom();
    void set_Bottom(double value);
    
    MarginInfo();
    MarginInfo(double left, double bottom, double right, double top);
    
    System::SharedPtr<MarginInfo> Clone();
    
protected:

    bool get_IsDefault();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "MarginInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    double leftMargin, rightMargin, topMargin, bottomMargin;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_MarginInfo_h_

