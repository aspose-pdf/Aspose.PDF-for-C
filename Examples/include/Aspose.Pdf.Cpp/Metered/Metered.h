#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.
// To compile metered for your product, make sure your product is mentioned here and add a conditional 
// compilation constant to your project properties (both to Debug and Release configurations).

// C# preprocessor directive: #if ASPOSE_WORDS

// C# INACTIVE CODE:
// namespace Aspose.Words

// C# preprocessor directive: #elif ASPOSE_WORDS_REPORTING_SERVICES

// C# INACTIVE CODE:
// namespace Aspose.Words.ReportingServices

// C# preprocessor directive: #elif ASPOSE_WORDS_SHAREPOINT

// C# INACTIVE CODE:
// namespace Aspose.Words.SharePoint

// C# preprocessor directive: #elif ASPOSE_CELLS

// C# INACTIVE CODE:
// namespace Aspose.Cells

// C# preprocessor directive: #elif ASPOSE_SLIDES

// C# INACTIVE CODE:
// namespace Aspose.Slides

// C# preprocessor directive: #elif ASPOSE_TASKS

// C# INACTIVE CODE:
// namespace Aspose.Tasks

// C# preprocessor directive: #elif ASPOSE_PDF


#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/decimal.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Dynabic { namespace Metered { class BillingEnvironment; } }
namespace Dynabic { namespace Metered { class SubscriptionsList; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents possible metered states.
/// </summary>
enum class MeteredState
{
    /// <summary>
    /// The metered is evaluation
    /// </summary>
    Evaluation,
    /// <summary>
    /// The metered is a paid customer.
    /// </summary>
    Paid
};


// C# preprocessor directive: #elif ASPOSE_PDF_FORM

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Form

// C# preprocessor directive: #elif ASPOSE_PDF_KIT

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Kit

// C# preprocessor directive: #elif ASPOSE_PDF_FO

// C# INACTIVE CODE:
// namespace Aspose.Pdf.Fo

// C# preprocessor directive: #elif ASPOSE_CHART

// C# INACTIVE CODE:
// namespace Aspose.Chart

// C# preprocessor directive: #elif ASPOSE_SPELL

// C# INACTIVE CODE:
// namespace Aspose.Spell

// C# preprocessor directive: #elif ASPOSE_EMAIL

// C# INACTIVE CODE:
// namespace Aspose.Email

// C# preprocessor directive: #elif ASPOSE_MIME

// C# INACTIVE CODE:
// namespace Aspose.Mime

// C# preprocessor directive: #elif ASPOSE_ADHOC

// C# INACTIVE CODE:
// namespace Aspose.AdHoc

// C# preprocessor directive: #elif ASPOSE_ASPXPAND

// C# INACTIVE CODE:
// namespace Aspose.ASPXPand

// C# preprocessor directive: #elif ASPOSE_GRID

// C# INACTIVE CODE:
// namespace Aspose.Grid

// C# preprocessor directive: #elif ASPOSE_RECURRENCE

// C# INACTIVE CODE:
// namespace Aspose.Recurrence

// C# preprocessor directive: #elif ASPOSE_ICALENDAR

// C# INACTIVE CODE:
// namespace Aspose.iCalendar

// C# preprocessor directive: #elif ASPOSE_RECOGNITION

// C# INACTIVE CODE:
// namespace Aspose.Recognition

// C# preprocessor directive: #elif ASPOSE_OCR

// C# INACTIVE CODE:
// namespace Aspose.OCR

// C# preprocessor directive: #elif ASPOSE_IMAGING

// C# INACTIVE CODE:
// namespace Aspose.Imaging

// C# preprocessor directive: #elif ASPOSE_BARCODE && REPORT

// C# INACTIVE CODE:
// namespace Aspose.BarCode.ReportingServices

// C# preprocessor directive: #elif ASPOSE_BARCODE && WPF

// C# INACTIVE CODE:
// namespace Aspose.BarCode.WPF

// C# preprocessor directive: #elif ASPOSE_BARCODE && RECOGNITION

// C# INACTIVE CODE:
// namespace Aspose.BarCodeRecognition

// C# preprocessor directive: #elif ASPOSE_BARCODE

// C# INACTIVE CODE:
// namespace Aspose.BarCode

// C# preprocessor directive: #elif ASPOSE_3D

// C# INACTIVE CODE:
// namespace Aspose.ThreeD

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// namespace Dynabic.Metered

// C# preprocessor directive: #endif

/// <summary>
/// Provides methods to set metered key.
/// </summary>
/// <example>
/// In this example, an attempt will be made to set metered public and private key
/// 
/// <ms>
/// <code>
/// [C#]
/// 
///	Metered matered = new Metered();
///	matered.SetMeteredKey("PublicKey", "PrivateKey");
///	
///	
///	[Visual Basic]
///	
///	Dim matered As Metered = New Metered
///	matered.SetMeteredKey("PublicKey", "PrivateKey")
/// </code>
/// </ms>
/// 
/// <java>
/// the component jar file:
/// <code>
///	Metered matered = new Metered();
///	matered.setMeteredKey("PublicKey", "PrivateKey");
/// </code>
/// </java>
/// 
/// </example>
class ASPOSE_PDF_SHARED_API Metered : public System::Object
{
    typedef Metered ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of this class.
    /// </summary>
    Metered();
    
    /// <summary>
    /// Sets metered public and private key
    /// </summary>
    /// <param name="publicKey">public key</param>
    /// <param name="privateKey">private key</param>
    void SetMeteredKey(System::String publicKey, System::String privateKey);
    /// <summary>
    /// Gets consumption file size
    /// </summary>
    /// <returns>consumption quantity</returns>
    static System::Decimal GetConsumptionQuantity();
    /// <summary>
    /// Gets consumption credit
    /// </summary>
    /// <returns>consumption quantity</returns>
    static System::Decimal GetConsumptionCredit();
    
private:

    void _SetMeteredKey(System::String publicKey, System::String privateKey);
    
};

/// <summary>
/// This internal class is used to handle customer's consumption data, the unit is MB.
/// </summary>
/// <example>
/// In this example, an attempt will be made to increase of 9MB on customer consumption data.
/// 
/// <ms>
/// <code>
/// [C#]
/// 
///	MeteredCountService.Instance.IncreaseCount(9);
///	
/// </code>
/// </ms>
/// </example>
class MeteredCountService : public System::Object
{
    typedef MeteredCountService ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    static System::SharedPtr<MeteredCountService> get_Instance();
    
    System::ArrayPtr<int64_t> LastUploadFailTime;
    System::ArrayPtr<int32_t> UploadFailNumber;
    System::SharedPtr<System::Object> UploadFailLock;
    static const int64_t MAX_UPLOAD_FAIL_RESET_TIME_INTERVAL;
    static const int32_t MAX_UPLOAD_FAIL_RESET_NUMBER;
    System::ArrayPtr<int64_t> LastServerInternalErrorTime;
    System::SharedPtr<System::Object> ServerInternalErrorLock;
    static const int64_t MAX_SERVER_INTERNAL_ERROR_TIME_INTERVAL;
    
    /// <summary>
    /// Increase customer consumption file size, and try to upload data
    /// </summary>
    /// <param name="count">increased quantities, in unit of MB</param>
    void IncreaseCount(double count);
    /// <summary>
    /// Increase customer consumption credit, and try to upload
    /// </summary>
    /// <param name="credit">increased credit</param>
    void IncreaseCredit(int64_t credit);
    /// <summary>
    /// Increase customer consumption credit
    /// </summary>
    /// <param name="credit">increased credit</param>
    /// <param name="isSend">whether upload data</param>
    void IncreaseCredit(int64_t credit, bool isSend);
    void _IncreaseCredit(int64_t credit, bool isSend);
    void Flush();
    /// <summary>
    /// Increase customer consumption file size
    /// </summary>
    /// <param name="count">increased file quantities, in unit of MB</param>
    /// <param name="isSend">whether upload data</param>
    void IncreaseCount(System::Decimal count, bool isSend);
    void _IncreaseCount(System::Decimal count, bool isSend);
    /// <summary>
    /// Gets and Resets customer consumption file size
    /// </summary>
    /// <returns>quantities of customer consumption data</returns>
    System::Decimal GetAndResetCount();
    /// <summary>
    /// Get and Reset customer consumption credit
    /// </summary>
    /// <returns></returns>
    int64_t GetAndResetCredit();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static System::SharedPtr<MeteredCountService> instance;
    System::ArrayPtr<System::Decimal> ProcessCount;
    System::ArrayPtr<int64_t> ProcessCredit;
    System::SharedPtr<System::Object> CreditLock;
    System::SharedPtr<System::Object> CountLock;
    System::ArrayPtr<int64_t> LastUploadTime;
    System::SharedPtr<System::Object> TimeLock;
    static const System::Decimal THRESHHOLD_COUNT;
    static const int64_t MIN_UPLOAD_TIME_INTERVAL;
    static const int64_t MAX_UPLOAD_TIME_INTERNAL;
    static const int32_t THRESHHOLD_CREDIT;
    
    MeteredCountService();
    
    int64_t GetLastUploadTime();
    void SetLastUploadTime(int64_t time);
    
};

/// <summary>
/// This internal class is used to handle customer's matered state
/// </summary>
/// <example>
/// In this example, an attempt will be check customer's matered state.
/// 
/// <ms>
/// <code>
/// [C#]
/// 
///	MeteredState materedState = MeteredBillingService.GetMeteredState();
///	
/// </code>
/// </ms>
/// </example>
class MeteredBillingService : public System::Object
{
    typedef MeteredBillingService ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::SharedPtr<MeteredBillingService> instance;
    
    static System::SharedPtr<MeteredBillingService> get_Instance();
    
    MeteredBillingService();
    
    /// <summary>
    /// Sets the subscription public and private key
    /// </summary>
    /// <param name="subscriptionPublicKey">subscription public key</param>
    /// <param name="subscriptionPrivateKey">subscription private key</param>
    /// <returns></returns>
    bool Setkey(System::String subscriptionPublicKey, System::String subscriptionPrivateKey);
    /// <summary>
    /// Gets metered state
    /// </summary>
    /// <returns>matered state</returns>
    static MeteredState GetMeteredState();
    static void ResetMeteredKey();
    System::Decimal GetCustomerData();
    System::Decimal GetCustomerCredit();
    /// <summary>
    /// Uploads customer consumption data
    /// </summary>
    void UploadCustomerData();
    void _UploadCustomerData(System::Decimal count, int64_t credit);
    static void Clear();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String SubscriptionPublicKey;
    System::String SubscriptionPrivateKey;
    int32_t VerifiedFlag;
    System::SharedPtr<Dynabic::Metered::BillingEnvironment> API_SERVER;
    System::String PUBLIC_KEY;
    System::String PRIVATE_KEY;
    static const System::String SiteSubdomain;
    
    void Init();
    bool VerifyKey(System::SharedPtr<Dynabic::Metered::SubscriptionsList> subscriptions);
    
};

} // namespace Pdf
} // namespace Aspose


