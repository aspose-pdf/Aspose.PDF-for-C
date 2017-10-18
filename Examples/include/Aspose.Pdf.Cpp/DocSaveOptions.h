#ifndef _Aspose_Pdf_DocSaveOptions_h_
#define _Aspose_Pdf_DocSaveOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
        Textbox,
        Flow
    };
    
    enum class DocFormat
    {
        Doc,
        DocX
    };
    
    
public:

    DocSaveOptions::RecognitionMode get_Mode();
    void set_Mode(DocSaveOptions::RecognitionMode value);
    float get_RelativeHorizontalProximity();
    void set_RelativeHorizontalProximity(float value);
    bool get_RecognizeBullets();
    void set_RecognizeBullets(bool value);
    bool get_AddReturnToLineEnd();
    void set_AddReturnToLineEnd(bool value);
    int32_t get_ImageResolutionX();
    void set_ImageResolutionX(int32_t value);
    int32_t get_ImageResolutionY();
    void set_ImageResolutionY(int32_t value);
    DocSaveOptions::DocFormat get_Format();
    void set_Format(DocSaveOptions::DocFormat value);
    
    UnifiedSaveOptions::ConversionProgressEventHandler CustomProgressHandler;
    
    DocSaveOptions();
    
protected:

    bool UseNewTextBoxRecognitionAlgorithm;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DocSaveOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

