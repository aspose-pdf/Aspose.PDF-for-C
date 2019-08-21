#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Text { class Position; } } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a character info object.
/// Provides character positioning information.
/// </summary>
class ASPOSE_PDF_SHARED_API CharInfo FINAL : public System::Object
{
    typedef CharInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextSegment;
    
public:

    /// <summary>
    /// Gets position of the character.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::Position> get_Position();
    /// <summary>
    /// Gets rectangle of the character.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    
protected:

    /// <summary>
    /// Initializes new CharInfo object
    /// </summary>
    CharInfo(System::SharedPtr<Aspose::Pdf::Text::Position> position, System::SharedPtr<Aspose::Pdf::Rectangle> rectangle);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::Position> position;
    System::SharedPtr<Aspose::Pdf::Rectangle> rectangle;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


