#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "UnifiedSaveOptions.h"

namespace Aspose { namespace Pdf { class DocConverter; } }
namespace Aspose { namespace Pdf { namespace Tests { class DocConverterTextBoxTests; } } }
namespace Aspose { namespace Pdf { namespace Tests { class DocConverterFlowTests; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Allows to specify .doc or .docx file format.
/// </summary>
class ASPOSE_PDF_SHARED_API DocSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef DocSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::DocConverter;
    friend class Aspose::Pdf::Tests::DocConverterTextBoxTests;
    friend class Aspose::Pdf::Tests::DocConverterFlowTests;
    
public:

    enum class RecognitionMode
    {
        /// <summary>
        /// <para>This mode is fast and good for maximally preserving original look of the PDF file, 
        /// but editability of the resulting document could be limited.</para>
        /// 
        /// <para>Every visually grouped block of text int the original PDF file is converted into a textbox 
        /// in the resulting document. This achieves maximal resemblance of the output document to the original 
        /// PDF file. The output document will look good, but it will consist entirely of textboxes and it 
        /// could makes further editing of the document in Microsoft Word quite hard.</para>
        /// 
        /// <para>This is the default mode.</para>
        /// </summary>
        Textbox,
        /// <summary>
        /// Full recognition mode, the engine performs grouping and multi-level analysis to restore
        /// the original document author's intent and produce a maximally editable document.
        /// The downside is that the output document might look different from the original PDF file.
        /// </summary>
        Flow
    };
    
    enum class DocFormat
    {
        /// <summary>
        /// [MS-DOC]: Word (.doc) Binary File Format
        /// </summary>
        Doc,
        /// <summary>
        /// Office Open XML (.docx) File Format
        /// </summary>
        DocX
    };
    
    
public:

    /// <summary>
    /// Recognition mode.
    /// </summary>
    DocSaveOptions::RecognitionMode get_Mode();
    /// <summary>
    /// Recognition mode.
    /// </summary>
    void set_Mode(DocSaveOptions::RecognitionMode value);
    /// <summary>
    ///     In Pdf words may be innerly represented with operators that prints words
    ///   by independently printing their letters or syllables. So, to detect words sometimes we need detect groups
    ///   of independent chars that are in fact words.
    ///     This setting defines width of space between text elements(letters, syllables) 
    ///   that must be treated as distance between words during recognition of words in source PDF.
    ///   (presence of empty space at least with this width between letters means that 
    ///    textual elements pertain to different words).
    ///   It's normed to font size -  1.0 means 100% of supposed word's font size.
    ///  ATTENTION!It's used only in cases when source PDF contains specific rarely used fonts
    ///  for which optimal value cannot be calculated from font. 
    ///    So, in vast majority of cases this parameter changes nothing in result document.
    /// </summary>
    float get_RelativeHorizontalProximity();
    /// <summary>
    ///     In Pdf words may be innerly represented with operators that prints words
    ///   by independently printing their letters or syllables. So, to detect words sometimes we need detect groups
    ///   of independent chars that are in fact words.
    ///     This setting defines width of space between text elements(letters, syllables) 
    ///   that must be treated as distance between words during recognition of words in source PDF.
    ///   (presence of empty space at least with this width between letters means that 
    ///    textual elements pertain to different words).
    ///   It's normed to font size -  1.0 means 100% of supposed word's font size.
    ///  ATTENTION!It's used only in cases when source PDF contains specific rarely used fonts
    ///  for which optimal value cannot be calculated from font. 
    ///    So, in vast majority of cases this parameter changes nothing in result document.
    /// </summary>
    void set_RelativeHorizontalProximity(float value);
    /// This parameter is used for grouping text lines into paragraphs.
    /// Determines how far apart can be two relative text lines. Specified in hundreds of percent of the text lines height.
    /// </summary>
    float get_MaxDistanceBetweenTextLines();
    /// This parameter is used for grouping text lines into paragraphs.
    /// Determines how far apart can be two relative text lines. Specified in hundreds of percent of the text lines height.
    /// </summary>
    void set_MaxDistanceBetweenTextLines(float value);
    /// <summary>
    /// Switch on the recognition of bullets
    /// </summary>
    bool get_RecognizeBullets();
    /// <summary>
    /// Switch on the recognition of bullets
    /// </summary>
    void set_RecognizeBullets(bool value);
    /// <summary>
    /// Use paragraph or line breaks
    /// </summary>
    bool get_AddReturnToLineEnd();
    /// <summary>
    /// Use paragraph or line breaks
    /// </summary>
    void set_AddReturnToLineEnd(bool value);
    /// <summary>
    /// Converted images X resolution.
    /// </summary>
    int32_t get_ImageResolutionX();
    /// <summary>
    /// Converted images X resolution.
    /// </summary>
    void set_ImageResolutionX(int32_t value);
    /// <summary>
    /// Converted images Y resolution.
    /// </summary>
    int32_t get_ImageResolutionY();
    /// <summary>
    /// Converted images Y resolution.
    /// </summary>
    void set_ImageResolutionY(int32_t value);
    /// <summary>
    /// Output format
    /// </summary>
    DocSaveOptions::DocFormat get_Format();
    /// <summary>
    /// Output format
    /// </summary>
    void set_Format(DocSaveOptions::DocFormat value);
    
    UnifiedSaveOptions::ConversionProgressEventHandler CustomProgressHandler;
    
    /// <summary>
    /// Constructor
    /// </summary>
    DocSaveOptions();
    
protected:

    bool UseNewTextBoxRecognitionAlgorithm;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    DocSaveOptions::RecognitionMode mode;
    float relativeHorizontalProximity;
    float pr_MaxDistanceBetweenTextLines;
    bool recognizeBullets;
    bool addReturnToLineEnd;
    int32_t imageResolutionX;
    int32_t imageResolutionY;
    DocSaveOptions::DocFormat format;
    
};

} // namespace Pdf
} // namespace Aspose


