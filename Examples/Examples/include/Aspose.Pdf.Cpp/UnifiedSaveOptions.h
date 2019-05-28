#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <cstdint>

#include "SaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { class DocConverter; } }
namespace Aspose { namespace Pdf { class ConversionProgressEventsTranslator; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enum describes possible progress event types
/// that can occure during conversion
/// </summary>
enum class ProgressEventType
{
    /// <summary>
    /// means that occured event informs about total progress of conversion
    /// </summary>
    TotalProgress,
    /// <summary>
    /// means that occured event informs about end of analysys of one of pages before conversion
    /// </summary>
    SourcePageAnalized,
    /// <summary>
    /// means that occured event informs about creation of one result page before phisical export
    /// </summary>
    ResultPageCreated,
    /// <summary>
    /// means that occured event informs about finished saving of one result page 
    /// </summary>
    ResultPageSaved
};

// UnifiedSaveOptions represents save options for conversions that internaly use APS
// as intermediate conversion format.
// Since we cannot name it directly, term "Unified" used in public API 
/// <summary>
/// This class represents saving options for saving that 
/// uses unified conversion way (with unified internal document model)
/// </summary>    
class ASPOSE_PDF_SHARED_API UnifiedSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef UnifiedSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::DocConverter;
    
public:

    class ProgressEventHandlerInfo;
    using ConversionProgressEventHandler = System::MulticastDelegate<void(System::SharedPtr<UnifiedSaveOptions::ProgressEventHandlerInfo>)>;
    
protected:

    using OnePageProcessedEventHandler = System::MulticastDelegate<void(int32_t)>;
    
    
public:

    class ASPOSE_PDF_SHARED_API ProgressEventHandlerInfo : public System::Object
    {
        typedef ProgressEventHandlerInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::ConversionProgressEventsTranslator;
        
    public:
    
        ProgressEventType EventType;
        int32_t Value;
        int32_t MaxValue;
        
    protected:
    
        ProgressEventHandlerInfo();
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    
public:

    bool TryMergeAdjacentSameBackgroundImages;
    
    /// <summary>
    /// This atrribute turned on functionality for extracting image or text 
    /// for PDF documents with OCR sublayer.
    /// </summary>
    /// <value><c>true</c> text will be extracted in result document; otherwise, <c>false</c>.</value>
    bool get_ExtractOcrSublayerOnly();
    /// <summary>
    /// This atrribute turned on functionality for extracting image or text 
    /// for PDF documents with OCR sublayer.
    /// </summary>
    /// <value><c>true</c> text will be extracted in result document; otherwise, <c>false</c>.</value>
    void set_ExtractOcrSublayerOnly(bool value);
    
    UnifiedSaveOptions();
    
protected:

    System::SharedPtr<ConversionProgressEventsTranslator> ProgressEventsRetranslator;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool extractOcrSublayerOnly;
    
};

} // namespace Pdf
} // namespace Aspose


