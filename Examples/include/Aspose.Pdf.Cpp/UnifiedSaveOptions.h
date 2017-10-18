#ifndef _Aspose_Pdf_UnifiedSaveOptions_h_
#define _Aspose_Pdf_UnifiedSaveOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <system/event.h>
#include <cstdint>
#include <Aspose.Foundation.Cpp/include/Rendering/Aps/IApsConversionProgress.h>

#include "SaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { class UnifiedSaveOptions; } }
namespace Aspose { namespace Pdf { enum class SaveFormat; } }
namespace Aspose { namespace Foundation { class ApsProgressInfo; } }

namespace Aspose {

namespace Pdf {

// UnifiedSaveOptions represents save options for conversions that internaly use APS
// as intermediate conversion format.
// Since we cannot name it directly, term "Unified" used in public API 
/// <summary>
/// This enum describes possible progress event types
/// that can occure during conversion
/// </summary>
class ASPOSE_PDF_SHARED_API UnifiedSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef UnifiedSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsUsingConverter;
    
public:

    enum class ProgressEventType
    {
        TotalProgress,
        SourcePageAnalized,
        ResultPageCreated,
        ResultPageSaved
    };
    
    
public:

    class ProgressEventHandlerInfo;
    using ConversionProgressEventHandler = System::MulticastDelegate<void(System::SharedPtr<UnifiedSaveOptions::ProgressEventHandlerInfo>)>;
    
    
public:

    class ASPOSE_PDF_SHARED_API ProgressEventHandlerInfo : public System::Object
    {
        typedef ProgressEventHandlerInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::UnifiedSaveOptions;
        
    public:
    
        UnifiedSaveOptions::ProgressEventType EventType;
        int32_t Value;
        int32_t MaxValue;
        
    protected:
    
        ProgressEventHandlerInfo();
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ProgressEventHandlerInfo"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
protected:

    class ConversionProgressEventsTranslator;
    class ASPOSE_PDF_SHARED_API ConversionProgressEventsTranslator : public Aspose::Foundation::IApsConversionProgress
    {
        typedef ConversionProgressEventsTranslator ThisType;
        typedef Aspose::Foundation::IApsConversionProgress BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        System::Event<void(System::SharedPtr<UnifiedSaveOptions::ProgressEventHandlerInfo>)> OnProgessEventOccured;
        
        ConversionProgressEventsTranslator(int32_t amountOfExportedPdfPages, int32_t percentsForPdfToAps, int32_t percentsForApsLayouting, int32_t percentsForApsExport, UnifiedSaveOptions::ConversionProgressEventHandler onTotalProgessChangedEventHandlerIfAny, SaveFormat targetFortmat);
        
        void ProcessPdfToApsPageReadyEvent(int32_t numberOfReadyPage);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ConversionProgressEventsTranslator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        int32_t _totalAmountOfExportedPages;
        int32_t _pdfToApsTimeSharePercent;
        int32_t _apsLayoutingTimeSharePercent;
        int32_t _apsExportTimeSharePercent;
        int32_t _recentlyRaisedPercentageValue;
        SaveFormat _converterType;
        int32_t _htmlPageNum;
        
        ConversionProgressEventsTranslator();
        
        void RaiseOnProgressEventIfNecessary(Aspose::Pdf::UnifiedSaveOptions::ProgressEventType type, int32_t value, int32_t maxPossibelValue);
        void OnPageProgress(System::SharedPtr<Aspose::Foundation::ApsProgressInfo> innerProgressInfo);
        void RaiseExportEvent_DOC(System::SharedPtr<Aspose::Foundation::ApsProgressInfo> info);
        void RaiseExportEvant_HTML(System::SharedPtr<Aspose::Foundation::ApsProgressInfo> info);
        
    };
    
    
public:

    UnifiedSaveOptions();
    
protected:

    System::SharedPtr<UnifiedSaveOptions::ConversionProgressEventsTranslator> ProgressEventsRetranslator;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "UnifiedSaveOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_UnifiedSaveOptions_h_

