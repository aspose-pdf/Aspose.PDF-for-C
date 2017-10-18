#ifndef _Aspose_Pdf_Generator_Image__h_
#define _Aspose_Pdf_Generator_Image__h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if SUPPORT_ASPOSE_SVG 

/* C# INACTIVE CODE:
using Aspose.Svg.Aps;
*/

// C# preprocessor directive: #endif 


#include <system/string.h>
#include <system/io/stream.h>
#include <system/collections/list.h>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { enum class ImageFileType; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents image.
/// </summary>
class ASPOSE_PDF_SHARED_API Image FINAL : public Aspose::Pdf::BaseParagraph
{
    typedef Image ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Cell;
    
public:

    System::String get_File();
    void set_File(System::String value);
    double get_FixWidth();
    void set_FixWidth(double value);
    double get_FixHeight();
    void set_FixHeight(double value);
    ImageFileType get_FileType();
    void set_FileType(ImageFileType value);
    double get_ImageScale();
    void set_ImageScale(double value);
    System::SharedPtr<System::IO::Stream> get_ImageStream();
    void set_ImageStream(System::SharedPtr<System::IO::Stream> value);
    bool get_IsBlackWhite();
    void set_IsBlackWhite(bool value);
    
    System::SharedPtr<Image> Clone();
    
    Image();
    
protected:

    static System::String GetFileName(System::String imageFile);
    bool Process(double &curX, double &curY, bool isScaleParagraph, System::SharedPtr<MarginInfo> marginInfo, double realWidth, double height, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, bool isCalculatedMode, bool isNextParagraphInline, System::SharedPtr<Paragraphs> &paragraphs);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Image"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String file;
    double fixWidth;
    double fixHeight;
    ImageFileType fileType;
    double imageScale;
    System::SharedPtr<System::IO::Stream> imageStream;
    bool isBlackWhite;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Image__h_

