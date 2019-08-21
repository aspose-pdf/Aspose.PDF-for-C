#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/icloneable.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class BaseParagraph; } }
namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { class PageInfo; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { class Table; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents a margin for different objects.
/// </summary>
class ASPOSE_PDF_SHARED_API MarginInfo FINAL : public System::ICloneable
{
    typedef MarginInfo ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::BaseParagraph;
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::PageInfo;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets a float value that indicates the left margin.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Sets a float value that indicates the left margin.
    /// </summary>
    void set_Left(double value);
    /// <summary>
    /// Gets a float value that indicates the right margin.
    /// </summary>
    double get_Right();
    /// <summary>
    /// Sets a float value that indicates the right margin.
    /// </summary>
    void set_Right(double value);
    /// <summary>
    /// Gets a float value that indicates the top margin.
    /// </summary>
    double get_Top();
    /// <summary>
    /// Sets a float value that indicates the top margin.
    /// </summary>
    void set_Top(double value);
    /// <summary>
    /// Gets a float value that indicates the bottom margin.
    /// </summary>
    double get_Bottom();
    /// <summary>
    /// Sets a float value that indicates the bottom margin.
    /// </summary>
    void set_Bottom(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="MarginInfo"/> class.
    /// </summary>
    MarginInfo();
    /// <summary>
    /// Constructor of Rectangle.
    /// </summary>
    /// <param name="left">Left margin.</param>
    /// <param name="bottom">Bottom margin</param>        
    /// <param name="right">Right margin.</param>
    /// <param name="top">Top margin.</param>
    MarginInfo(double left, double bottom, double right, double top);
    
    /// <summary>
    /// Clones a new <see cref="MarginInfo"/> object.
    /// </summary>
    /// <returns>The new object.</returns>
    System::SharedPtr<System::Object> Clone();
    
protected:

    bool get_IsDefault();
    bool get_HasNonZeroElements();
    
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void SerializePageDefault(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    double leftMargin, rightMargin, topMargin, bottomMargin;
    
};

} // namespace Pdf
} // namespace Aspose


