#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/dictionary.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class AttributeKey; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents class for Attribute Name Values.
/// </summary>
class ASPOSE_PDF_SHARED_API AttributeName FINAL : public System::Object
{
    typedef AttributeName ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class AttributeKeyName;
    
    FRIEND_FUNCTION_System_MakeObject;
    friend bool operator ==(AttributeName::AttributeKeyName const &left, AttributeName::AttributeKeyName const &right);
    friend bool operator !=(AttributeName::AttributeKeyName const &left, AttributeName::AttributeKeyName const &right);
    
private:

    class AttributeKeyName : public System::Object
    {
        typedef AttributeKeyName ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        friend bool operator ==(AttributeName::AttributeKeyName const &left, AttributeName::AttributeKeyName const &right);
        friend bool operator !=(AttributeName::AttributeKeyName const &left, AttributeName::AttributeKeyName const &right);
        
    public:
    
        System::String Name;
        System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> AttributeKey;
        
        AttributeKeyName(System::String name, System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> attributeKey);
        
        virtual int32_t GetHashCode() const;
        
        AttributeKeyName();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    /// <summary>
    ///     Gets name value of attribute.
    /// </summary>
    System::String get_Name();
    /// <summary>
    ///     Gets attribute key.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> get_AttributeKey();
    
    static System::SharedPtr<AttributeName> Placement_Block;
    static System::SharedPtr<AttributeName> Placement_Inline;
    static System::SharedPtr<AttributeName> Placement_Before;
    static System::SharedPtr<AttributeName> Placement_Start;
    static System::SharedPtr<AttributeName> Placement_End;
    static System::SharedPtr<AttributeName> WritingMode_LrTb;
    static System::SharedPtr<AttributeName> WritingMode_RlTb;
    static System::SharedPtr<AttributeName> WritingMode_TbRl;
    static System::SharedPtr<AttributeName> BorderStyle_None;
    static System::SharedPtr<AttributeName> BorderStyle_Hidden;
    static System::SharedPtr<AttributeName> BorderStyle_Dotted;
    static System::SharedPtr<AttributeName> BorderStyle_Dashed;
    static System::SharedPtr<AttributeName> BorderStyle_Solid;
    static System::SharedPtr<AttributeName> BorderStyle_Double;
    static System::SharedPtr<AttributeName> BorderStyle_Groove;
    static System::SharedPtr<AttributeName> BorderStyle_Ridge;
    static System::SharedPtr<AttributeName> BorderStyle_Inset;
    static System::SharedPtr<AttributeName> BorderStyle_Outset;
    static System::SharedPtr<AttributeName> TextAlign_Start;
    static System::SharedPtr<AttributeName> TextAlign_Center;
    static System::SharedPtr<AttributeName> TextAlign_End;
    static System::SharedPtr<AttributeName> TextAlign_Justify;
    static System::SharedPtr<AttributeName> Width_Auto;
    static System::SharedPtr<AttributeName> Height_Auto;
    static System::SharedPtr<AttributeName> BlockAlign_Before;
    static System::SharedPtr<AttributeName> BlockAlign_Middle;
    static System::SharedPtr<AttributeName> BlockAlign_After;
    static System::SharedPtr<AttributeName> BlockAlign_Justify;
    static System::SharedPtr<AttributeName> InlineAlign_Start;
    static System::SharedPtr<AttributeName> InlineAlign_Center;
    static System::SharedPtr<AttributeName> InlineAlign_End;
    static System::SharedPtr<AttributeName> LineHeight_Normal;
    static System::SharedPtr<AttributeName> LineHeight_Auto;
    static System::SharedPtr<AttributeName> TextDecorationType_None;
    static System::SharedPtr<AttributeName> TextDecorationType_Underline;
    static System::SharedPtr<AttributeName> TextDecorationType_Overline;
    static System::SharedPtr<AttributeName> TextDecorationType_LineThrough;
    static System::SharedPtr<AttributeName> RubyAlign_Start;
    static System::SharedPtr<AttributeName> RubyAlign_Center;
    static System::SharedPtr<AttributeName> RubyAlign_End;
    static System::SharedPtr<AttributeName> RubyAlign_Justify;
    static System::SharedPtr<AttributeName> RubyAlign_Distribute;
    static System::SharedPtr<AttributeName> RubyPosition_Before;
    static System::SharedPtr<AttributeName> RubyPosition_After;
    static System::SharedPtr<AttributeName> RubyPosition_Warichu;
    static System::SharedPtr<AttributeName> RubyPosition_Inline;
    static System::SharedPtr<AttributeName> GlyphOrientationVertical_Auto;
    static System::SharedPtr<AttributeName> ListNumbering_None;
    static System::SharedPtr<AttributeName> ListNumbering_Disc;
    static System::SharedPtr<AttributeName> ListNumbering_Circle;
    static System::SharedPtr<AttributeName> ListNumbering_Square;
    static System::SharedPtr<AttributeName> ListNumbering_Decimal;
    static System::SharedPtr<AttributeName> ListNumbering_UpperRoman;
    static System::SharedPtr<AttributeName> ListNumbering_LowerRoman;
    static System::SharedPtr<AttributeName> ListNumbering_UpperAlpha;
    static System::SharedPtr<AttributeName> ListNumbering_LowerAlpha;
    static System::SharedPtr<AttributeName> Role_rb;
    static System::SharedPtr<AttributeName> Role_cb;
    static System::SharedPtr<AttributeName> Role_pb;
    static System::SharedPtr<AttributeName> Role_tv;
    static System::SharedPtr<AttributeName> Checked_on;
    static System::SharedPtr<AttributeName> Checked_off;
    static System::SharedPtr<AttributeName> Checked_neutral;
    static System::SharedPtr<AttributeName> Scope_Row;
    static System::SharedPtr<AttributeName> Scope_Column;
    static System::SharedPtr<AttributeName> Scope_Both;
    
    /// <summary>
    ///     Gets attribute name for attribute key.
    /// </summary>
    /// <param name="name">Attribute name</param>
    /// <param name="attributeKey">Attribute key</param>
    /// <returns>Attribute name</returns>
    static System::SharedPtr<AttributeName> FromNameAttributeKey(System::String name, System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> attributeKey);
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _name;
    System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> _attributeKey;
    static System::SharedPtr<System::Collections::Generic::Dictionary<AttributeName::AttributeKeyName, System::SharedPtr<AttributeName>>> _instance;
    
    /// <summary>
    ///     Creation attribute name with acceptable value for attribute key.
    /// </summary>
    /// <param name="attributeKey">Attribute key</param>
    /// <param name="name">Acceptable value for attribute</param>
    AttributeName(System::SharedPtr<Aspose::Pdf::LogicalStructure::AttributeKey> attributeKey, System::String name);
    
};

bool operator ==(AttributeName::AttributeKeyName const &left, AttributeName::AttributeKeyName const &right);
bool operator !=(AttributeName::AttributeKeyName const &left, AttributeName::AttributeKeyName const &right);

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


