#ifndef _Aspose_Pdf_License_h_
#define _Aspose_Pdf_License_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.
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
    /// <summary>
    /// The license is Evaluation
    /// </summary>
    Evaluation,
    /// <summary>
    /// The license is a proper valid license.
    /// </summary>
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
/// <code></code>
/// </java>
/// </example>
class ASPOSE_PDF_SHARED_API License : public System::Object
{
    typedef License ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    bool get_Embedded();
    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    void set_Embedded(bool value);
    
    /// <summary>
    /// Initializes a new instance of this class.
    /// </summary>
    /// <example>
    /// In this example, an attempt will be made to find a license file named MyLicense.lic
    /// in the folder that contains 
    /// <ms>
    /// the component, in the folder that contains the calling assembly,
    /// in the folder of the entry assembly and then in the embedded resources of the calling assembly.
    /// <code></code>
    /// </java>
    /// </example>
    License();
    
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <remarks>
    /// <p>Tries to find the license in the following locations:</p>
    /// <p>1. Explicit path.</p>
    /// <ms>
    /// <p>2. The folder of the component assembly.</p>
    /// <p>3. The folder of the client's calling assembly.</p>
    /// <p>4. The folder of the entry assembly.</p>
    /// <p>5. An embedded resource in the client's calling assembly.</p>
    /// <p><b>Note:</b>On the .NET Compact Framework, tries to find the license only in these locations:</p>
    /// <p>1. Explicit path.</p>
    /// <p>2. An embedded resource in the client's calling assembly.</p>
    /// </ms>
    /// <java>
    /// <p>2. The folder of the component jar file.</p>
    /// </java>
    /// </remarks>
    /// <example>
    /// In this example, an attempt will be made to find a license file named MyLicense.lic
    /// in the folder that contains 
    /// <ms>
    /// the component, in the folder that contains the calling assembly,
    /// in the folder of the entry assembly and then in the embedded resources of the calling assembly.
    /// <code></code>
    /// </java>
    /// <param name="licenseName">Can be a full or short file name<ms> or name of an embedded resource</ms>.
    /// Use an empty string to switch to evaluation mode.</param>
    /// </example>
    void SetLicense(System::String licenseName);
    /// <summary>
    /// Licenses the component.
    /// </summary>
    /// <param name="stream">A stream that contains the license.</param>
    /// <remarks>
    /// <p>Use this method to load a license from a stream.</p>
    /// </remarks>
    /// <example>
    /// <code>
    /// <ms>
    /// [C#]
    /// License license = new License();
    /// license.SetLicense(myStream);
    /// [Visual Basic]
    /// Dim license as License = new License
    /// license.SetLicense(myStream)
    /// </ms>
    /// <java>
    /// License license = new License();
    /// license.setLicense(myStream);
    /// </java>
    /// </code>
    /// </example>
    /// <javaName>void setLicense(java.io.InputStream stream)</javaName>
    void SetLicense(System::SharedPtr<System::IO::Stream> stream);
    
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
        
    };
    
    
public:

    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    bool get_EmbeddedCore();
    /// <summary>
    /// License number was added as embedded resource.
    /// </summary>
    void set_EmbeddedCore(bool value);
    /// <summary>
    /// Gets Aspose product names this license is for. 
    /// You need to specify value that matches the value specified in AssemblyProduct attribute.
    /// This is used to check that the license is suitable for this product.
    /// </summary>
    System::ArrayPtr<System::String> get_Products();
    /// <summary>
    /// Gets edition type.
    /// You can use this to enable/disable some features depending on the edition type.
    /// </summary>
    Aspose::Pdf::EditionType get_EditionType();
    /// <summary>
    /// Unique license number. Used to black list stolen licenses.
    /// </summary>
    System::String get_SerialNumber();
    /// <summary>
    /// Gets the last date of the subscription.
    /// This is to be checked against custom attribute on the assembly that contains the relase date.
    /// </summary>
    System::DateTime get_SubscriptionExpiry();
    /// <summary>
    /// This is for temporary licenses.
    /// </summary>
    System::DateTime get_LicenseExpiry();
    
    void SetLicenseCore(System::String licenseName, System::SharedPtr<System::Reflection::Assembly> clientAssembly, bool isEmbedded);
    void SetLicenseCore(System::String licenseName, System::SharedPtr<System::Reflection::Assembly> clientAssembly);
    /// <summary>
    /// Note, this function was manually tuned (made complex) so it does not decompile in Reflector.
    /// </summary>
    void SetLicenseCore(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Retruns True in case license is set and valid
    /// </summary>
    /// <returns></returns>
    bool IsLicensed();
    /// <summary>
    /// Clears license
    /// </summary>
    static void ClearLicense();
    /// <summary>
    /// Call this from your component code to check if running evaluation version or not.
    /// </summary>
    /// <example>
    /// <code></code>
    /// </example>
    static LicenseState GetLicenseState();
    /// <summary>
    /// Note, this function was manually tuned (made complex) so it does not decompile in Reflector.
    /// Call this when the user attempts to use a feature that is limited by edition type.
    /// Throws a message explaining the license limitation to the user.
    /// </summary>
    /// <remarks>
    /// Most of Aspose products are supposed to have just one edition type.
    /// Only complex products might have two edition types.
    /// When using two edition types, make sure it is easy for the client to select edition type they need.
    /// </remarks>
    /// <param name="wantEditionType">Specify edition type that is required to access your feature.</param>
    /// <param name="message">Message that explains what feature the user is trying to access.</param>
    /// <example>
    /// For example, adding an image to the document requires Enterprise edition.
    /// <code></code>
    /// </example>
    static void CheckEdition(Aspose::Pdf::EditionType wantEditionType, System::String message);
    /// <summary>
    /// Verifies the signature on the XML file and loads it into the license files, but does not check them.
    /// Made internal only for unit testing, do not call directly otherwise.
    /// Note, this function was manually tuned (made complex) so it does not decompile in Reflector.
    /// </summary>
    void LoadLicense(System::SharedPtr<System::Xml::XmlDocument> doc);
    /// <summary>
    /// See above. Use for unit testing only.
    /// </summary>
    /// <param name="fileName"></param>
    void LoadLicense(System::String fileName);
    
    LicenseCore();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
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
    
    /// <summary>
    /// Note: license check is performed millions times.
    /// DateTime.Now is very expensive operation.
    /// So, it is ok to refresh the expiry state and call DateTime.Now not so often.
    /// </summary>
    /// <returns></returns>
    static bool CheckLicenseExpiry();
    /// <summary>
    /// In January 2006 product names such as Aspose Word, Aspose Excel etc had to be changed. 
    /// This function maps these product names so old licenses can be used in new products.
    /// </summary>
    static System::String MapOldProductName(System::String productName);
    /// <summary>
    /// Verifies that content of the data element has not been tampered with. Safe to pass nulls.
    /// Note there is no direct action taken inside this method if the signature is invalid.
    /// If the signature is invalid, the VerificationSupervisor.SignatureInvalidFlag is set to greater 
    /// than zero and you need to examine it somewhere later in your code. This is to confuse hackers.
    /// </summary>
    static void VerifySignature(System::SharedPtr<System::Xml::XmlNode> dataElem, System::SharedPtr<System::Xml::XmlNode> signatureElem);
    /// <summary>
    /// Tries to find the license in several locations:
    /// 1. Explicit path.
    /// 2. The folder of this assembly.
    /// 3. The folder of the client's calling assembly.
    /// 4. The folder of the entry assembly (does not apply for the .NET Compact Framework).
    /// 5. An embedded resource in the client's calling assembly.
    /// </summary>
    /// <param name="licenseName">This can be full or short file name or name of an embedded resource.</param>
    /// <param name="callingAssembly">Client's calling assembly. Used to find license in embedded resource.</param>
    /// <returns>Returns a stream that contains the license or throws.</returns>
    static System::SharedPtr<System::IO::Stream> ProbeLicense(System::String licenseName, System::SharedPtr<System::Reflection::Assembly> callingAssembly, bool isEmbedded);
    static void LoadBlackList();
    /// <summary>
    /// Returns text from the child element of a specified parent element or empty string if the element was not found.
    /// </summary>
    static System::String GetStringValue(System::SharedPtr<System::Xml::XmlElement> parentElem, System::String childElemName);
    /// <summary>
    /// Gets date value from the specified XML element. Returns DateTime.MaxValue if the element is missing.
    /// </summary>
    static System::DateTime GetDateValue(System::SharedPtr<System::Xml::XmlElement> parentElem, System::String childElemName);
    /// <summary>
    /// Xml helper function. Gets the first child element with the given name or null.
    /// I'm using this instead of XPath because XPath is not available on the .NET Compact Framework.
    /// </summary>
    static System::SharedPtr<System::Xml::XmlElement> GetElementByName(System::SharedPtr<System::Xml::XmlElement> parentElem, System::String childElemName);
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


#endif // _Aspose_Pdf_License_h_

