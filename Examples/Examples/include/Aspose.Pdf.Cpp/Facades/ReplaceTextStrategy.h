#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/eventhandler.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class PdfContentEditor; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Action to perform if font does not contain required character 
/// </summary>
class ASPOSE_PDF_SHARED_API ReplaceTextStrategy FINAL : public System::Object
{
    typedef ReplaceTextStrategy ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfContentEditor;
    
public:

    enum class Scope
    {
        /// <summary>
        /// Replace only first occurence of the text on each of affected pages
        /// </summary>
        ReplaceFirst,
        /// <summary>
        /// Replace all text occurences on all affected pages
        /// </summary>
        ReplaceAll
    };
    
    enum class NoCharacterAction
    {
        /// <summary>
        /// Throw exception
        /// </summary>
        ThrowException,
        /// <summary>
        /// Repalce font to standard font which contains required character
        /// </summary>
        UseStandardFont,
        /// <summary>
        /// Replace text anyway without font substitution
        /// </summary>
        ReplaceAnyway
    };
    
    
public:

    /// <summary>
    /// If false, string to find is a simple text. If true, string to find is regular expression.
    /// </summary>
    bool get_IsRegularExpressionUsed();
    /// <summary>
    /// If false, string to find is a simple text. If true, string to find is regular expression.
    /// </summary>
    void set_IsRegularExpressionUsed(bool value);
    /// <summary>
    /// Action which is performed when no approppriate font found for changed text
    /// (Throw exception / Substitute other font / Replace anyway).
    /// </summary>
    ReplaceTextStrategy::NoCharacterAction get_NoCharacterBehavior();
    /// <summary>
    /// Action which is performed when no approppriate font found for changed text
    /// (Throw exception / Substitute other font / Replace anyway).
    /// </summary>
    void set_NoCharacterBehavior(ReplaceTextStrategy::NoCharacterAction value);
    /// <summary>
    /// Scope of the replacement operation (replace first occurence or replace all occurences).
    /// </summary>
    ReplaceTextStrategy::Scope get_ReplaceScope();
    /// <summary>
    /// Scope of the replacement operation (replace first occurence or replace all occurences).
    /// </summary>
    void set_ReplaceScope(ReplaceTextStrategy::Scope value);
    
    ReplaceTextStrategy();
    
protected:

    System::EventHandler<> OnPropertiesChanged;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool _isRegularExpression;
    ReplaceTextStrategy::NoCharacterAction _noCharacterAction;
    ReplaceTextStrategy::Scope _scope;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


