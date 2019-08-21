#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Text/TextOptions/TextOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragmentAbsorber; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Language transformation modes
/// </summary>
class ASPOSE_PDF_SHARED_API TextEditOptions FINAL : public Aspose::Pdf::Text::TextOptions
{
    typedef TextEditOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    
public:

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
    
    enum class FontReplace
    {
        /// <summary>
        /// No additional changes performed during font replacement.
        /// </summary>
        Default,
        /// <summary>
        /// Fonts that become unused during font replacement will be removed from resulting document.
        /// </summary>
        RemoveUnusedFonts
    };
    
    enum class LanguageTransformation
    {
        /// <summary>
        /// Default language transformation is performed.
        /// </summary>
        Default,
        /// <summary>
        /// Language transformation is performed the same way as in a text editor. It usually means text will looks in the document exactly as You see it in code. But no warranties.
        /// </summary>
        ExactlyAsISee,
        /// <summary>
        /// Language transformation is not performed.
        /// </summary>
        None
    };
    
    
protected:

    enum class TextRearrangement
    {
        /// <summary>
        /// Text rearrangement is not performed.
        /// </summary>
        None,
        /// <summary>
        /// Text rearrangement is performed automatically.
        /// </summary>
        Auto
    };
    
    
public:

    /// <summary>
    /// Gets or sets mode that defines behavior in case fonts don't contain requested characters.
    /// </summary>
    TextEditOptions::NoCharacterAction get_NoCharacterBehavior();
    /// <summary>
    /// Gets or sets mode that defines behavior in case fonts don't contain requested characters.
    /// </summary>
    void set_NoCharacterBehavior(TextEditOptions::NoCharacterAction value);
    /// <summary>
    /// Gets mode that defines behavior for fonts replacement scenarios.
    /// </summary>
    TextEditOptions::FontReplace get_FontReplaceBehavior();
    /// <summary>
    /// Gets mode that defines behavior for fonts replacement scenarios.
    /// </summary>
    void set_FontReplaceBehavior(TextEditOptions::FontReplace value);
    /// <summary>
    /// Gets or sets value that permits usage of language transformation during adding or editing of text.
    /// true - language transformation will be applied if necessary (default value).
    /// false - language transformation will NOT be applied.
    /// </summary>
    bool get_AllowLanguageTransformation();
    /// <summary>
    /// Gets or sets value that permits usage of language transformation during adding or editing of text.
    /// true - language transformation will be applied if necessary (default value).
    /// false - language transformation will NOT be applied.
    /// </summary>
    void set_AllowLanguageTransformation(bool value);
    /// <summary>
    /// Gets mode that defines behavior for language transformation scenarios.
    /// </summary>
    TextEditOptions::LanguageTransformation get_LanguageTransformationBehavior();
    /// <summary>
    /// Gets mode that defines behavior for language transformation scenarios.
    /// </summary>
    void set_LanguageTransformationBehavior(TextEditOptions::LanguageTransformation value);
    /// <summary>
    /// Gets or sets value that permits searching for text underlining on the page of source document.
    /// (Obsolete) Please use TextSearchOptions.SearchForTextRelatedGraphics instead this.
    /// </summary>
    bool get_ToAttemptGetUnderlineFromSource();
    /// <summary>
    /// Gets or sets value that permits searching for text underlining on the page of source document.
    /// (Obsolete) Please use TextSearchOptions.SearchForTextRelatedGraphics instead this.
    /// </summary>
    void set_ToAttemptGetUnderlineFromSource(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"/> object for the specified no-character behavior mode.
    /// </summary>
    /// <param name="noCharacterBehavior">No-character behavior mode object.</param>
    TextEditOptions(TextEditOptions::NoCharacterAction noCharacterBehavior);
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"/> object for the specified font replacement behavior mode.
    /// </summary>
    /// <param name="fontReplaceBehavior">Font replace behavior object.</param>
    TextEditOptions(TextEditOptions::FontReplace fontReplaceBehavior);
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"/> object for the specified language transformation permission.
    /// </summary>
    /// <param name="allowLanguageTransformation">Allows language transformation if set to true.</param>
    TextEditOptions(bool allowLanguageTransformation);
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"/> object for the specified language transformation behavior mode.
    /// </summary>
    /// <param name="languageTransformationBehavior">language transformation behavior object.</param>
    TextEditOptions(TextEditOptions::LanguageTransformation languageTransformationBehavior);
    
protected:

    /// <summary>
    /// Gets mode that defines text rearrangement behavior.
    /// </summary>
    TextEditOptions::TextRearrangement get_RearrangementMode();
    /// <summary>
    /// Gets mode that defines text rearrangement behavior.
    /// </summary>
    void set_RearrangementMode(TextEditOptions::TextRearrangement value);
    /// <summary>
    /// Indicates that mass operation will performed. It instructs TextFragmentAbsorber (and underlying logic) to omit some checkings. It is for performance. That checkings are necessary if not all text segments are affected by operation.
    /// Don't set this to 'true' if you aren't sure that _all_ text operators must be affected.
    /// </summary>
    bool get_IsMassOperation();
    /// <summary>
    /// Indicates that mass operation will performed. It instructs TextFragmentAbsorber (and underlying logic) to omit some checkings. It is for performance. That checkings are necessary if not all text segments are affected by operation.
    /// Don't set this to 'true' if you aren't sure that _all_ text operators must be affected.
    /// </summary>
    void set_IsMassOperation(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"/> object for the specified text rearrangement mode.
    /// </summary>
    /// <param name="rearrangementMode">Rearrangement mode object.</param>
    TextEditOptions(TextEditOptions::TextRearrangement rearrangementMode);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    TextEditOptions::NoCharacterAction noCharacterBehavior;
    TextEditOptions::TextRearrangement rearrangementMode;
    TextEditOptions::FontReplace fontReplace;
    TextEditOptions::LanguageTransformation languageTransformation;
    bool allowLanguageTransformation;
    bool isUnderlineFromSource;
    bool pr_IsMassOperation;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


