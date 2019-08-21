#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_reader.h>
#include <system/shared_ptr.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TabStops; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Enumerates the tab alignment types.
/// </summary>
enum class TabAlignmentType
{
    /// <summary>
    /// Text aligned left from tab stop
    /// </summary>
    Left = 0,
    /// <summary>
    /// Text aligned center from tab stop
    /// </summary>
    Center = 1,
    /// <summary>
    /// Text aligned right from tab stop
    /// </summary>
    Right = 2
};

/// <summary>
/// Enumerates the tab leader types.
/// </summary>
enum class TabLeaderType
{
    /// <summary>
    /// Solid tab leader.
    /// </summary>
    Solid = 0,
    /// <summary>
    /// Dash tab leader.
    /// </summary>
    Dash = 1,
    /// <summary>
    /// Dot tab leader.
    /// </summary>
    Dot = 2,
    /// <summary>
    /// No tab leader.
    /// </summary>
    None = 3
};

/// <summary>
/// Represents a custom Tab stop position in a paragraph.
/// </summary>
class ASPOSE_PDF_SHARED_API TabStop : public System::Object
{
    typedef TabStop ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::TabStops;
    
public:

    /// <summary>
    /// Gets or sets a float value that indicates the tab stop position.
    /// </summary>
    float get_Position();
    /// <summary>
    /// Gets or sets a float value that indicates the tab stop position.
    /// </summary>
    void set_Position(float value);
    /// <summary>
    /// Gets or sets a <see cref="TabLeaderType"/> enum that indicates the tab leader type.
    /// </summary>
    TabLeaderType get_LeaderType();
    /// <summary>
    /// Gets or sets a <see cref="TabLeaderType"/> enum that indicates the tab leader type.
    /// </summary>
    void set_LeaderType(TabLeaderType value);
    /// <summary>
    /// Gets or sets a <see cref="AlignmentType"/> enum that indicates the tab tab alignment type.
    /// </summary>
    TabAlignmentType get_AlignmentType();
    /// <summary>
    /// Gets or sets a <see cref="AlignmentType"/> enum that indicates the tab tab alignment type.
    /// </summary>
    void set_AlignmentType(TabAlignmentType value);
    /// <summary>
    /// Gets value indicating that this <see cref="TabStop"/> instance is already attached to <see cref="TextFragment"/> and became readonly
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"/> class.
    /// </summary>
    TabStop();
    /// <summary>
    /// Initializes a new instance of the <see cref="TabStop"/> class with specified position.
    /// </summary>
    /// <param name="position">The position of the tab stop.</param>
    TabStop(float position);
    
protected:

    /// <summary>
    /// Gets value indicating that this <see cref="TabStop"/> instance is already attached to <see cref="TextFragment"/> and became readonly
    /// </summary>
    void set_IsReadOnly(bool value);
    
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    float _position;
    TabLeaderType _leaderType;
    bool _attached;
    TabAlignmentType _alignmentType;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


