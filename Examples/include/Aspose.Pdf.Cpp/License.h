#ifndef _Aspose_Pdf_License_h_
#define _Aspose_Pdf_License_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.
// RK: When EMBEDDED is defined, the licensing code is not included in the component.
// This results in a built that can be embedded in another Aspose component.
// When a component is embedded in another Aspose component, they must be 
// obfuscated into a single assembly so the embedded component is not publicly accessible.

// C# preprocessor directive: #if !EMBEDDED 

//27/10/2004 by Roman Korchagin
//This file contains all client side licensing for the new Aspose licensing system released in 2004.
//Just include this file in your component and follow instructions and examples how to use it.
//NOTE The code in this file was manually tuned so some crucial functions fail 
//to decompile in Reflector as of 5/11/05. 
// To compile licensing for your product, make sure your product is mentioned here and add a conditional 
// compilation constant to your project properties (both to Debug and Release configurations).

// C# preprocessor directive: #if ASPOSE_WORDS 

/* C# INACTIVE CODE:
namespace Aspose.Words
*/

// C# preprocessor directive: #elif ASPOSE_WORDS_REPORTING_SERVICES 

/* C# INACTIVE CODE:
#namespace Aspose.Words.ReportingServices
*/

// C# preprocessor directive: #elif ASPOSE_CELLS 

/* C# INACTIVE CODE:
#namespace Aspose.Cells
*/

// C# preprocessor directive: #elif ASPOSE_SLIDES 

/* C# INACTIVE CODE:
#namespace Aspose.Slides
*/

// C# preprocessor directive: #elif ASPOSE_TASKS 

/* C# INACTIVE CODE:
#namespace Aspose.Tasks
*/

// C# preprocessor directive: #elif ASPOSE_PDF || ASPOSE_PDF_DOM 


#include <xml/xml_node.h>
#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/reflection/assembly.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/date_time.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Specifies the edition type of the license.
/// </summary>
enum class EditionType
{
    Professional,
    Enterprise
};

/// <summary>
/// Represents possible license states.
/// </summary>
enum class LicenseState
{
    Evaluation,
    Licensed
};


// C# preprocessor directive: #elif ASPOSE_CHART 

/* C# INACTIVE CODE:
namespace Aspose.Chart
*/

// C# preprocessor directive: #elif ASPOSE_SPELL 

/* C# INACTIVE CODE:
#namespace Aspose.Spell
*/

// C# preprocessor directive: #elif ASPOSE_EMAIL 

/* C# INACTIVE CODE:
#namespace Aspose.Email
*/

// C# preprocessor directive: #elif ASPOSE_MIME 

/* C# INACTIVE CODE:
#namespace Aspose.Mime
*/

// C# preprocessor directive: #elif ASPOSE_ADHOC 

/* C# INACTIVE CODE:
#namespace Aspose.AdHoc
*/

// C# preprocessor directive: #elif ASPOSE_ASPXPAND 

/* C# INACTIVE CODE:
#namespace Aspose.ASPXPand
*/

// C# preprocessor directive: #elif ASPOSE_GRID 

/* C# INACTIVE CODE:
#namespace Aspose.Grid
*/

// C# preprocessor directive: #elif ASPOSE_BARCODE 

/* C# INACTIVE CODE:
#namespace Aspose.BarCode
*/

// C# preprocessor directive: #elif ASPOSE_RECURRENCE 

/* C# INACTIVE CODE:
#namespace Aspose.Recurrence
*/

// C# preprocessor directive: #elif ASPOSE_ICALENDAR 

/* C# INACTIVE CODE:
#namespace Aspose.iCalendar
*/

// C# preprocessor directive: #elif ASPOSE_RECOGNITION 

/* C# INACTIVE CODE:
#namespace Aspose.Recognition
*/

// C# preprocessor directive: #endif 


// C# preprocessor directive: #if EMBED_PDF 


// C# preprocessor directive: #else 


// C# preprocessor directive: #endif 

/// <summary>
/// Provides methods to license the component.
/// </summary>
/// <example>
/// In this example, an attempt will be made to find a license file named MyLicense.lic
/// in the folder that contains 
/// <ms>
/// the component, in the folder that contains the calling assembly,
/// in the folder of the entry assembly and then in the embedded resources of the calling assembly.
/// <code>
/// [C#]
/// License license = new License();
/// license.SetLicense("MyLicense.lic");
/// [Visual Basic]
/// Dim license As license = New license
/// License.SetLicense("MyLicense.lic")
/// </code>
/// </ms>
/// <java>
/// the component jar file:
/// <code>
/// License license = new License();
/// license.setLicense("MyLicense.lic");
/// </code>
/// </java>
/// </example>
class ASPOSE_PDF_SHARED_API License : public System::Object
{
    typedef License ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    bool get_Embedded();
    void set_Embedded(bool value);
    
    License();
    
    void SetLicense(System::String licenseName);
    void SetLicense(System::SharedPtr<System::IO::Stream> stream);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "License"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool mEmbedded;
    
};

/// <summary>
/// The actual code of the license class is put into an internal class and made into long functions to 
/// make it harder for the crackers to find anything meaningful after the dlls were cracked in November 2005.
/// </summary>
class ASPOSE_PDF_SHARED_API LicenseCore : public System::Object
{
    typedef LicenseCore ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class ASPOSE_PDF_SHARED_API ProductNameMapping : public System::Object
    {
        typedef ProductNameMapping ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String OldName;
        System::String NewName;
        
        ProductNameMapping(System::String oldName, System::String newName);
        ProductNameMapping();
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ProductNameMapping"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
public:

    bool get_EmbeddedCore();
    void set_EmbeddedCore(bool value);
    System::ArrayPtr<System::String> get_Products();
    Aspose::Pdf::EditionType get_EditionType();
    System::String get_SerialNumber();
    System::DateTime get_SubscriptionExpiry();
    System::DateTime get_LicenseExpiry();
    
    static bool UseInUnitTestsOneGlobalLicenseLikeOnProduction;
    
    void SetLicenseCore(System::String licenseName, System::SharedPtr<System::Reflection::Assembly> clientAssembly, bool isEmbedded);
    void SetLicenseCore(System::String licenseName, System::SharedPtr<System::Reflection::Assembly> clientAssembly);
    void SetLicenseCore(System::SharedPtr<System::IO::Stream> stream);
    bool IsLicensed();
    static void ClearLicense();
    static LicenseState GetLicenseState();
    static void CheckEdition(Aspose::Pdf::EditionType wantEditionType, System::String message);
    void LoadLicense(System::SharedPtr<System::Xml::XmlDocument> doc);
    void LoadLicense(System::String fileName);
    
    LicenseCore();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "LicenseCore"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool mEmbeddedCore;
    static int32_t expiryCheckCount;
    static int32_t maxExpiryCheckCount;
    static bool expiryState;
    System::ArrayPtr<System::String> mProducts;
    Aspose::Pdf::EditionType mEditionType;
    System::String mSerialNumber;
    System::DateTime mSubscriptionExpiry;
    System::DateTime mLicenseExpiry;
    LicenseState mLicenseState;
    static System::SharedPtr<LicenseCore> __threadBoundLicense;
    static System::SharedPtr<LicenseCore> __globalLicense;
    
    static System::SharedPtr<LicenseCore> get__staticLicense();
    static void set__staticLicense(System::SharedPtr<LicenseCore> value);
    
    static System::SharedPtr<System::Collections::Generic::List<System::String>> gBlackList;
    static const System::String AsposeDot;
    static System::ArrayPtr<LicenseCore::ProductNameMapping> gProductNameMap;
    
    static bool CheckLicenseExpiry();
    static System::String MapOldProductName(System::String productName);
    static void VerifySignature(System::SharedPtr<System::Xml::XmlNode> dataElem, System::SharedPtr<System::Xml::XmlNode> signatureElem);
    static System::SharedPtr<System::IO::Stream> ProbeLicense(System::String licenseName, System::SharedPtr<System::Reflection::Assembly> callingAssembly, bool isEmbedded);
    static void LoadBlackList();
    static System::String GetStringValue(System::SharedPtr<System::Xml::XmlElement> parentElem, System::String childElemName);
    static System::DateTime GetDateValue(System::SharedPtr<System::Xml::XmlElement> parentElem, System::String childElemName);
    static System::SharedPtr<System::Xml::XmlElement> GetElementByName(System::SharedPtr<System::Xml::XmlElement> parentElem, System::String childElemName);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


#endif // _Aspose_Pdf_License_h_

