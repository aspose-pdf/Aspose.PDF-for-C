#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class AttributeOwnerStandard; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Standard Attribute Keys.
/// </summary>
class ASPOSE_PDF_SHARED_API AttributeKey FINAL : public System::Object
{
    typedef AttributeKey ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    /// <summary>
    ///     Get Attribute Key.
    /// </summary>
    /// <value>Attribute Key.</value>
    System::String get_Key();
    /// <summary>
    ///     Get Attribute Owner.
    /// </summary>
    /// <value>Attribute Owner.</value>
    System::SharedPtr<AttributeOwnerStandard> get_Owner();
    
    static System::SharedPtr<AttributeKey> Placement;
    static System::SharedPtr<AttributeKey> WritingMode;
    static System::SharedPtr<AttributeKey> BackgroundColor;
    static System::SharedPtr<AttributeKey> BorderColor;
    static System::SharedPtr<AttributeKey> BorderStyle;
    static System::SharedPtr<AttributeKey> BorderThickness;
    static System::SharedPtr<AttributeKey> Padding;
    static System::SharedPtr<AttributeKey> Color;
    static System::SharedPtr<AttributeKey> SpaceBefore;
    static System::SharedPtr<AttributeKey> SpaceAfter;
    static System::SharedPtr<AttributeKey> StartIndent;
    static System::SharedPtr<AttributeKey> EndIndent;
    static System::SharedPtr<AttributeKey> TextIndent;
    static System::SharedPtr<AttributeKey> TextAlign;
    static System::SharedPtr<AttributeKey> BBox;
    static System::SharedPtr<AttributeKey> Width;
    static System::SharedPtr<AttributeKey> Height;
    static System::SharedPtr<AttributeKey> BlockAlign;
    static System::SharedPtr<AttributeKey> InlineAlign;
    static System::SharedPtr<AttributeKey> TBorderStyle;
    static System::SharedPtr<AttributeKey> TPadding;
    static System::SharedPtr<AttributeKey> BaselineShift;
    static System::SharedPtr<AttributeKey> LineHeight;
    static System::SharedPtr<AttributeKey> TextDecorationColor;
    static System::SharedPtr<AttributeKey> TextDecorationThickness;
    static System::SharedPtr<AttributeKey> TextDecorationType;
    static System::SharedPtr<AttributeKey> RubyAlign;
    static System::SharedPtr<AttributeKey> RubyPosition;
    static System::SharedPtr<AttributeKey> GlyphOrientationVertical;
    static System::SharedPtr<AttributeKey> ColumnCount;
    static System::SharedPtr<AttributeKey> ColumnGap;
    static System::SharedPtr<AttributeKey> ColumnWidths;
    static System::SharedPtr<AttributeKey> ListNumbering;
    static System::SharedPtr<AttributeKey> Role;
    static System::SharedPtr<AttributeKey> Checked;
    static System::SharedPtr<AttributeKey> Desc;
    static System::SharedPtr<AttributeKey> RowSpan;
    static System::SharedPtr<AttributeKey> ColSpan;
    static System::SharedPtr<AttributeKey> Headers;
    static System::SharedPtr<AttributeKey> Scope;
    static System::SharedPtr<AttributeKey> Summary;
    
    static System::SharedPtr<AttributeKey> to_AttributeKey(System::String key);
    
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _key;
    System::SharedPtr<AttributeOwnerStandard> _owner;
    
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<AttributeKey>>>& _instance();
    
    AttributeKey(System::String key, System::SharedPtr<AttributeOwnerStandard> owner);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


