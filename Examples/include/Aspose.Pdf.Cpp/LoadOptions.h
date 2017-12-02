#ifndef _Aspose_Pdf_LoadOptions_h_
#define _Aspose_Pdf_LoadOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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
    /// <summary>
    /// The file is corrupted.
    /// </summary>
    SourceFileCorruption = 0,
    /// <summary>
    /// Text/chart/image or other data is completely missing from either the documet tree following load, or the created document following save. 
    /// </summary>
    DataLoss = 1,
    /// <summary>
    /// Major formatting losses compared to the original document. This is for occasions when the formatting loss is substantial but the data is still there.
    /// </summary>
    MajorFormattingLoss = 2,
    /// <summary>
    /// Minor formatting losses compared to the original document. This is for minor losses of fidelity.
    /// </summary>
    MinorFormattingLoss = 3,
    /// <summary>
    /// Known issue that will prevent the document being opened by certain user agents, or previous versions of user agents.
    /// </summary>
    CompatibilityIssue = 4,
    /// <summary>
    /// The file has unexpected content.
    /// </summary>
    UnexpectedContent = 99
};

/// <summary>
/// Enum represented a program workflow action in case of invoking the
/// <see cref="IWarningCallback.Warning(Aspose.Pdf.WarningInfo)"/> method.
/// </summary>
enum class ReturnAction
{
    /// <summary>
    /// Used for continue flow.
    /// </summary>
    Continue,
    /// <summary>
    /// Used for abort flow.
    /// </summary>
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

    /// <summary>
    ///   Returns string representation of warning message.
    /// </summary>
    /// <returns> 
    /// the warning message
    /// </returns>
    System::String get_WarningMessage();
    /// <summary>
    ///   Returns warning type.
    /// </summary>
    /// <returns> 
    /// the warning type
    /// </returns>
    WarningType get_WarningTypeProperty();
    
    /// <summary>
    /// Constructs instance for gathering information.
    /// </summary>
    /// <param name="type">
    /// the warning type to set
    /// </param>
    /// <param name="message">
    /// the warning message to set
    /// </param>
    WarningInfo(WarningType type, System::String message);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
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

    /// <summary>
    /// The callback method for some program notifications. 
    /// </summary>
    /// <param name="warning">
    /// the warning information for some happened warning
    /// </param>
    /// <returns>
    /// the result of further program workflow
    /// </returns>
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
    
        /// <summary>
        ///   Bynary data that loaded with custom loader - it must be set after loading
        /// </summary>
        System::ArrayPtr<uint8_t> get_Data();
        
        System::SharedPtr<System::Text::Encoding> EncodingIfKnown;
        System::Exception ExceptionOfLoadingIfAny;
        System::String MIMETypeIfKnown;
        bool LoadingCancelled;
        
        /// <summary>
        ///   Creates instance of loading result
        /// </summary>
        /// <param name="data"> reult of custom loading must be allways provided, it can be zero-length array if it's impossible to get any result </param>
        ResourceLoadingResult(System::ArrayPtr<uint8_t> data);
        
    protected:
    
        ResourceLoadingResult(System::ArrayPtr<uint8_t> data, System::SharedPtr<System::Text::Encoding> enc);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::ArrayPtr<uint8_t> _fetchedData;
        
    };
    
    
public:

    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Load operation continues, however the user may also return Abort in which case the Load operation should cease.
    /// </summary>
    System::SharedPtr<IWarningCallback> get_WarningHandler();
    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Load operation continues, however the user may also return Abort in which case the Load operation should cease.
    /// </summary>
    void set_WarningHandler(System::SharedPtr<IWarningCallback> value);
    /// <summary>
    /// Represents file format which <see cref="LoadOptions"/> describes.
    /// </summary>
    Aspose::Pdf::LoadFormat get_LoadFormat();
    
    LoadOptions();
    
protected:

    Aspose::Pdf::LoadFormat _loadFormat;
    System::String ApsIntermediateFileIfAny;
    System::String XpsIntermediateFileIfAny;
    System::String PlainApsIntermediateTempFileIfAny;
    bool UseAreaClipping;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<IWarningCallback> _warningHandler;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_LoadOptions_h_

