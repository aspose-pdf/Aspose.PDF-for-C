#ifndef _Aspose_Pdf_InteractiveFeatures_SubmitFormAction_h_
#define _Aspose_Pdf_InteractiveFeatures_SubmitFormAction_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "InteractiveFeatures/PdfAction.h"

namespace Aspose { namespace Pdf { class FileSpecification; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Class which describes submit-form action.
/// </summary>
class ASPOSE_PDF_SHARED_API SubmitFormAction FINAL : public Aspose::Pdf::InteractiveFeatures::PdfAction
{
    typedef SubmitFormAction ThisType;
    typedef Aspose::Pdf::InteractiveFeatures::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::PdfAction;
    
public:

    constexpr static const int32_t Exclude = 1;
    constexpr static const int32_t IncludeNoValueFields = 1 << 1;
    constexpr static const int32_t ExportFormat = 1 << 2;
    constexpr static const int32_t GetMethod = 1 << 3;
    constexpr static const int32_t SubmitCoordinates = 1 << 4;
    constexpr static const int32_t Xfdf = 1 << 5;
    constexpr static const int32_t IncludeAppendSaves = 1 << 6;
    constexpr static const int32_t IncludeAnnotations = 1 << 7;
    constexpr static const int32_t SubmitPdf = 1 << 8;
    constexpr static const int32_t CanonicalFormat = 1 << 9;
    constexpr static const int32_t ExclNonUserAnnots = 1 << 10;
    constexpr static const int32_t ExclFKey = 1 << 11;
    constexpr static const int32_t EmbedForm = 1 << 13;
    
    int32_t get_Flags();
    void set_Flags(int32_t value);
    System::SharedPtr<FileSpecification> get_Url();
    void set_Url(System::SharedPtr<FileSpecification> value);
    
    SubmitFormAction();
    
protected:

    SubmitFormAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SubmitFormAction"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    int32_t flags;
    System::SharedPtr<FileSpecification> url;
    
};

/*
        /// <summary>
        /// If clear, the Fields array specifies which fields to include in the submission. 
        /// </summary>
        public const int Exclude = 1;
        /// <summary>
        /// If set, all fields designated by the Fields array and the Include/Exclude flag shall be submitted.
        /// </summary>
        public const int IncludeNoValueFields = 1 << 1;
        /// <summary>
        /// If set, field names and values shall be submitted in HTML Form format.
        /// </summary>
        public const int ExportFormat = 1 << 2;
        /// <summary>
        /// If set, field names and values shall be submitted using an HTTP GET request.
        /// </summary>
        public const int GetMethod = 1 << 3;
        /// <summary>
        /// If set, the coordinates of the mouse click that caused the submit-form action shall be transmitted as part of the form data.
        /// </summary>
        public const int SubmitCoordinates = 1 << 4;
        /// <summary>
        /// If set, field names and values shall be submitted as XFDF.
        /// </summary>
        public const int Xfdf = 1 << 5;
        /// <summary>
        /// If set, the submitted FDF file shall include the contents of all incremental updates.
        /// </summary>
        public const int IncludeAppendSaves = 1 << 6;
        /// <summary>
        /// If set, the submitted FDF file shall include includes all markup annotations in the underlying PDF document.
        /// </summary>
        public const int IncludeAnnotations = 1 << 7;
        /// <summary>
        /// If set, the document shall be submitted as PDF, using the MIME content type application/pdf.
        /// </summary>
        public const int SubmitPdf = 1 << 8;
        /// <summary>
        /// If set, any submitted field values representing dates shall be converted to the standard format.
        /// </summary>
        public const int CanonicalFormat = 1 << 9;
        /// <summary>
        /// If set, it shall include only those markup annotations whose T entry matches the name of the current user.
        /// </summary>
        public const int ExclNonUserAnnots = 1 << 10;
        /// <summary>
        /// If set, the submitted FDF shall exclude the F entry.
        /// </summary>
        public const int ExclFKey = 1 << 11;
        /// <summary>
        /// If set, the F entry of the submitted FDF shall be a file specification containing an 
        /// embedded file stream representing the PDF file from which the FDF is being submitted.
        /// </summary>
        public const int EmbedForm = 1 << 13;
    */
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_SubmitFormAction_h_

