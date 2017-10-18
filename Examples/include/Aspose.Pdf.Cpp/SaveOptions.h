#ifndef _Aspose_Pdf_SaveOptions_h_
#define _Aspose_Pdf_SaveOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { enum class SaveFormat; } }
namespace Aspose { namespace Pdf { class IWarningCallback; } }
namespace Aspose { namespace Pdf { enum class ApsToXpsSavingType; } }
namespace Aspose { class DocumentInfo; }
namespace Aspose { namespace Pdf { class SaveOptions; } }

namespace Aspose {

namespace Pdf {

/// <summary>
///  enumerates possible types of saved external resources
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT SaveOptions : public System::Object
{
    typedef SaveOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsUsingConverter;
    
public:

    enum class HtmlBorderLineType
    {
        None = 0,
        Dotted = 1,
        Dashed = 2,
        Solid = 3,
        Double = 4,
        Groove = 5,
        Ridge = 6,
        Inset = 7,
        Outset = 8
    };
    
    enum class NodeLevelResourceType
    {
        Image = 0,
        Font = 1
    };
    
    
public:

    class BorderInfo;
    class ASPOSE_PDF_SHARED_API BorderPartStyle : public System::Object
    {
        typedef BorderPartStyle ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::SaveOptions;
        
    public:
    
        System::Drawing::Color Color;
        SaveOptions::HtmlBorderLineType LineType;
        
        int32_t get_WidthInPoints();
        void set_WidthInPoints(int32_t value);
        
        BorderPartStyle();
        
    protected:
    
        System::SharedPtr<SaveOptions::BorderPartStyle> Clone();
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "BorderPartStyle"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        int32_t _width;
        
    };
    
    class ASPOSE_PDF_SHARED_API BorderInfo : public System::Object
    {
        typedef BorderInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<SaveOptions::BorderPartStyle> TopStyleIfAny;
        System::SharedPtr<SaveOptions::BorderPartStyle> LeftStyleIfAny;
        System::SharedPtr<SaveOptions::BorderPartStyle> RightStyleIfAny;
        System::SharedPtr<SaveOptions::BorderPartStyle> BottomStyleIfAny;
        
        BorderInfo();
        BorderInfo(System::SharedPtr<SaveOptions::BorderPartStyle> commonStyle);
        
    protected:
    
        bool get_AtLeastOneBorderSideNeeded();
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "BorderInfo"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    class ASPOSE_PDF_SHARED_API ResourceSavingInfo : public System::Object
    {
        typedef ResourceSavingInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        SaveOptions::NodeLevelResourceType get_ResourceType();
        
        System::String SupposedFileName;
        System::SharedPtr<System::IO::Stream> ContentStream;
        bool CustomProcessingCancelled;
        
    protected:
    
        ResourceSavingInfo(SaveOptions::NodeLevelResourceType resourceType);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ResourceSavingInfo"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        SaveOptions::NodeLevelResourceType _resourceType;
        
        ResourceSavingInfo();
        
    };
    
    
public:

    System::SharedPtr<IWarningCallback> get_WarningHandler();
    void set_WarningHandler(System::SharedPtr<IWarningCallback> value);
    Aspose::Pdf::SaveFormat get_SaveFormat();
    bool get_CloseResponse();
    void set_CloseResponse(bool value);
    
    SaveOptions();
    
protected:

    Aspose::Pdf::SaveFormat _saveFormat;
    System::String ApsIntermediateFileIfAny;
    System::String XpsIntermediateFileIfAny;
    ApsToXpsSavingType ApsAsXpsSavingType;
    System::SharedPtr<Aspose::DocumentInfo> DocumentInfoForSaveAsXps;
    System::String PlainApsIntermediateTempFileIfAny;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "SaveOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<IWarningCallback> _warningHandler;
    bool _closeResponse;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_SaveOptions_h_

