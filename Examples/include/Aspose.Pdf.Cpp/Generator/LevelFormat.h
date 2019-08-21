#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { enum class TabLeaderType; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }

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
    /// Gets TOC line dash.
    /// </summary>
    Text::TabLeaderType get_LineDash();
    /// <summary>
    /// Sets TOC line dash.
    /// </summary>
    void set_LineDash(Text::TabLeaderType value);
    /// <summary>
    /// Gets a list level margin 
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Sets a list level margin 
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets a subsequent lines indent 
    /// </summary>
    float get_SubsequentLinesIndent();
    /// <summary>
    /// Sets a subsequent lines indent 
    /// </summary>
    void set_SubsequentLinesIndent(float value);
    /// <summary>
    /// Gets a list level text state 
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_TextState();
    /// <summary>
    /// Sets a list level text state 
    /// </summary>
    void set_TextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    
    LevelFormat();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    Text::TabLeaderType lineDash;
    System::SharedPtr<MarginInfo> marginInfo;
    float subsequentLinesIndent;
    System::SharedPtr<Aspose::Pdf::Text::TextState> textState;
    
};

} // namespace Pdf
} // namespace Aspose


