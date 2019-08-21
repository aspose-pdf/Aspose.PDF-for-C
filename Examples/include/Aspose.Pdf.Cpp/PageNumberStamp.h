#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <cstdint>

#include "TextStamp.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { enum class NumberingStyle; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents page number stamp and used to number pages. 
/// </summary>
class ASPOSE_PDF_SHARED_API PageNumberStamp FINAL : public Aspose::Pdf::TextStamp
{
    typedef PageNumberStamp ThisType;
    typedef Aspose::Pdf::TextStamp BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// String value for stamping page numbers. 
    /// Value must include char '#' which is replaced with the page number in the process of stamping.
    /// </summary>
    System::String get_Format();
    /// <summary>
    /// String value for stamping page numbers. 
    /// Value must include char '#' which is replaced with the page number in the process of stamping.
    /// </summary>
    void set_Format(System::String value);
    /// <summary>
    /// Gets or sets value of the number of starting page. Other pages will be numbered starting from this value.
    /// </summary>
    int32_t get_StartingNumber();
    /// <summary>
    /// Gets or sets value of the number of starting page. Other pages will be numbered starting from this value.
    /// </summary>
    void set_StartingNumber(int32_t value);
    /// <summary>
    /// Numbering style which used by this stamp. 
    /// </summary>
    Aspose::Pdf::NumberingStyle get_NumberingStyle();
    /// <summary>
    /// Numbering style which used by this stamp. 
    /// </summary>
    void set_NumberingStyle(Aspose::Pdf::NumberingStyle value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PageNumberStamp"/> class.
    /// </summary>
    /// <param name="format">
    /// String value used for stamping. See <see cref="Format"/> property for details.
    /// </param>
    PageNumberStamp(System::String format);
    
    /// <summary>
    /// Adds page number.
    /// </summary>
    /// <param name="page">
    /// Page for stamping.
    /// </param>
    virtual void Put(System::SharedPtr<Page> page);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PageNumberStamp"/> class. Format is set to "#".
    /// </summary>
    PageNumberStamp();
    /// <summary>
    /// Creates PageNumberStamp by formatted text.
    /// </summary>
    /// <param name="formattedText">Formatted text which used to create Page Number Stamp.</param>
    PageNumberStamp(System::SharedPtr<Facades::FormattedText> formattedText);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _format;
    int32_t _startingNumber;
    Aspose::Pdf::NumberingStyle _numberingStyle;
    
    System::String IntToRoman(int32_t number);
    System::String IntToLetter(int32_t number);
    System::String TranslatePageNumber(int32_t number);
    
};

} // namespace Pdf
} // namespace Aspose


