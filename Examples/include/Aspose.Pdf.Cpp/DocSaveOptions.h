#ifndef _Aspose_Pdf_DocSaveOptions_h_
#define _Aspose_Pdf_DocSaveOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "UnifiedSaveOptions.h"

namespace Aspose { namespace Pdf { class Document; } }

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
    
    friend class Aspose::Pdf::Document;
    
public:

    enum class RecognitionMode
    {
        /// <summary>
        /// <para>This mode is fast and good for maximally preserving original look of the PDF file, 
        /// but editability of the resulting document could be limited.</para>
        /// <para>Every visually grouped block of text int the original PDF file is converted into a textbox 
        /// in the resulting document. This achieves maximal resemblance of the output document to the original 
        /// PDF file. The output document will look good, but it will consist entirely of textboxes and it 
        /// could makes further editing of the document in Microsoft Word quite hard.</para>
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
    /// Relative proximity between textual elements means that distance is normed by the font size.
    /// Bigger fonts may have bigger distances between syllables and still may be looked at as single
    /// whole. Specified in hundreds of percent of the font size. E.g. 1 = 100% meaning that
    /// two chars of 12pt are placed 12 pt apart are proximal.
    /// </summary>
    float get_RelativeHorizontalProximity();
    /// <summary>
    /// Relative proximity between textual elements means that distance is normed by the font size.
    /// Bigger fonts may have bigger distances between syllables and still may be looked at as single
    /// whole. Specified in hundreds of percent of the font size. E.g. 1 = 100% meaning that
    /// two chars of 12pt are placed 12 pt apart are proximal.
    /// </summary>
    void set_RelativeHorizontalProximity(float value);
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
    bool recognizeBullets;
    bool addReturnToLineEnd;
    int32_t imageResolutionX;
    int32_t imageResolutionY;
    DocSaveOptions::DocFormat format;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DocSaveOptions_h_

