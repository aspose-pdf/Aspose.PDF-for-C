#ifndef _Aspose_Pdf_Generator_LevelFormat_h_
#define _Aspose_Pdf_Generator_LevelFormat_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents format of the table of contents.
/// </summary>
class ASPOSE_PDF_SHARED_API LevelFormat : public System::Object
{
    typedef LevelFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets or sets a list level text state 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    /// <summary>
    /// Gets or sets a list level text state 
    /// </summary>
    void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets or sets a list level margin 
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Gets or sets a list level margin 
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets or sets a subsequent lines indent 
    /// </summary>
    float get_SubsequentLinesIndent();
    /// <summary>
    /// Gets or sets a subsequent lines indent 
    /// </summary>
    void set_SubsequentLinesIndent(float value);
    
    LevelFormat();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    System::SharedPtr<MarginInfo> marginInfo;
    float subsequentLinesIndent;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_LevelFormat_h_

