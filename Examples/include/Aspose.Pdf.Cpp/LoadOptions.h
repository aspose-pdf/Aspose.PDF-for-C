#ifndef _Aspose_Pdf_LoadOptions_h_
#define _Aspose_Pdf_LoadOptions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/text/encoding.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <system/exceptions.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { enum class LoadFormat; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enum represented warning type.
/// </summary>
enum class WarningType
{
    SourceFileCorruption = 0,
    DataLoss = 1,
    MajorFormattingLoss = 2,
    MinorFormattingLoss = 3,
    CompatibilityIssue = 4,
    UnexpectedContent = 99
};

/// <summary>
/// Enum represented a program workflow action in case of invoking the
/// <see cref="IWarningCallback.Warning(Aspose.Pdf.WarningInfo)"/> method.
/// </summary>
enum class ReturnAction
{
    Continue,
    Abort
};

/// <summary>
/// Immutable object for encapsulating warning information.
/// </summary>
class ASPOSE_PDF_SHARED_API WarningInfo FINAL : public System::Object
{
    typedef WarningInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    System::String get_WarningMessage();
    WarningType get_WarningTypeProperty();
    
    WarningInfo(WarningType type, System::String message);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "WarningInfo"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String warningMessage;
    WarningType warningType;
    
};

/// <summary>
/// Interface for user's callback mechanism support.
/// </summary>
class ASPOSE_PDF_SHARED_API IWarningCallback : public System::Object
{
    typedef IWarningCallback ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual ReturnAction Warning(System::SharedPtr<WarningInfo> warning) = 0;
    
};

///<summary>
/// LoadOptions type holds level of abstraction on individual load options
///</summary>
class ASPOSE_PDF_SHARED_API ABSTRACT LoadOptions : public System::Object
{
    typedef LoadOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsUsingConverter;
    
public:

    class ResourceLoadingResult;
    using ResourceLoadingStrategy = System::MulticastDelegate<System::SharedPtr<LoadOptions::ResourceLoadingResult>(System::String)>;
    
public:

    class ASPOSE_PDF_SHARED_API ResourceLoadingResult : public System::Object
    {
        typedef ResourceLoadingResult ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::ApsUsingConverter;
        
    public:
    
        System::ArrayPtr<uint8_t> get_Data();
        
        System::SharedPtr<System::Text::Encoding> EncodingIfKnown;
        System::Exception ExceptionOfLoadingIfAny;
        System::String MIMETypeIfKnown;
        bool LoadingCancelled;
        
        ResourceLoadingResult(System::ArrayPtr<uint8_t> data);
        
    protected:
    
        ResourceLoadingResult(System::ArrayPtr<uint8_t> data, System::SharedPtr<System::Text::Encoding> enc);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ResourceLoadingResult"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::ArrayPtr<uint8_t> _fetchedData;
        
    };
    
    
public:

    System::SharedPtr<IWarningCallback> get_WarningHandler();
    void set_WarningHandler(System::SharedPtr<IWarningCallback> value);
    Aspose::Pdf::LoadFormat get_LoadFormat();
    
    LoadOptions();
    
protected:

    Aspose::Pdf::LoadFormat _loadFormat;
    System::String ApsIntermediateFileIfAny;
    System::String XpsIntermediateFileIfAny;
    System::String PlainApsIntermediateTempFileIfAny;
    bool UseAreaClipping;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LoadOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<IWarningCallback> _warningHandler;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_LoadOptions_h_

