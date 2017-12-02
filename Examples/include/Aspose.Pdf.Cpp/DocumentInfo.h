#ifndef _Aspose_Pdf_DocumentInfo_h_
#define _Aspose_Pdf_DocumentInfo_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/timespan.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/date_time.h>
#include <system/collections/dictionary.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileInfo; } } }
namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocumentInfo; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents meta information of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API DocumentInfo FINAL : public System::Collections::Generic::Dictionary<System::String, System::String>
{
    typedef DocumentInfo ThisType;
    typedef System::Collections::Generic::Dictionary<System::String, System::String> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileInfo;
    friend class Aspose::Pdf::ApsUsingConverter;
    
public:

    /// <summary>
    /// Gets or sets document title.
    /// </summary>
    System::String get_Title();
    /// <summary>
    /// Gets or sets document title.
    /// </summary>
    void set_Title(System::String value);
    /// <summary>
    /// Gets or sets document creator.
    /// </summary>
    System::String get_Creator();
    /// <summary>
    /// Gets or sets document author.
    /// </summary>
    System::String get_Author();
    /// <summary>
    /// Gets or sets document author.
    /// </summary>
    void set_Author(System::String value);
    /// <summary>
    /// Gets or sets the subject of the document.
    /// </summary>
    System::String get_Subject();
    /// <summary>
    /// Gets or sets the subject of the document.
    /// </summary>
    void set_Subject(System::String value);
    /// <summary>
    /// Gets or set the keywords of the document.
    /// </summary>
    System::String get_Keywords();
    /// <summary>
    /// Gets or set the keywords of the document.
    /// </summary>
    void set_Keywords(System::String value);
    /// <summary>
    /// Gets or sets the document producer.
    /// </summary>
    System::String get_Producer();
    /// <summary>
    /// Gets or sets the date of document creation.
    /// </summary>
    System::DateTime get_CreationDate();
    /// <summary>
    /// Gets or sets the date of document creation.
    /// </summary>
    void set_CreationDate(System::DateTime value);
    /// <summary>
    /// Time zone of creation date. 
    /// </summary>
    System::TimeSpan get_CreationTimeZone();
    /// <summary>
    /// Time zone of creation date. 
    /// </summary>
    void set_CreationTimeZone(System::TimeSpan value);
    /// <summary>
    /// Time zone of modification date. 
    /// </summary>
    System::TimeSpan get_ModTimeZone();
    /// <summary>
    /// Time zone of modification date. 
    /// </summary>
    void set_ModTimeZone(System::TimeSpan value);
    /// <summary>
    /// Gets or sets the date of document modification.
    /// </summary>
    System::DateTime get_ModDate();
    /// <summary>
    /// Gets or sets the date of document modification.
    /// </summary>
    void set_ModDate(System::DateTime value);
    /// <summary>
    /// Gets or sets the trapped flag.
    /// </summary>
    System::String get_Trapped();
    /// <summary>
    /// Gets or sets the trapped flag.
    /// </summary>
    void set_Trapped(System::String value);
    
    /// <summary>
    /// Initialize DocumentInfo instance.
    /// </summary>
    /// <param name="document">The info of this document will be used for initialization.</param>
    DocumentInfo(System::SharedPtr<Document> document);
    
    /// <summary>
    /// Clears the document info.
    /// </summary>
    void Clear();
    /// <summary>
    /// Adds an element with the specified key and value into the collection.
    /// </summary>
    /// <param name="key">The key of the element to add.</param>
    /// <param name="value">The value of the element to add. The value can be null.</param>
    void Add(System::String const &key, System::String const &value);
    /// <summary>
    /// Removes the element with the specified key from the collection.
    /// </summary>
    /// <param name="key">The key of the element to remove.</param>
    bool Remove(System::String const &key);
    
    /// <summary>
    /// Gets or sets the value associated with the specified key.
    /// </summary>
    /// <param name="key">The key whose value to get or set.</param>
    /// <returns></returns>
    System::String idx_get(System::String key);
    /// <summary>
    /// Gets or sets the value associated with the specified key.
    /// </summary>
    /// <param name="key">The key whose value to get or set.</param>
    /// <returns></returns>
    void idx_set(System::String key, System::String value);
    
    /// <summary>
    /// Clears custom data only, leaves all other predefined values (Title, Author, etc.).
    /// </summary>
    void ClearCustomData();
    /// <summary>
    /// Determines if the key is predefined (Title, Author, etc.), not custom.
    /// </summary>
    /// <param name="key">Selected key</param>
    /// <returns>True in case the key is predefined.</returns>
    static bool IsPredefinedKey(System::String key);
    
protected:

    /// <summary>
    /// Gets or sets document creator.
    /// </summary>
    void set_Creator(System::String value);
    /// <summary>
    /// Gets or sets the document producer.
    /// </summary>
    void set_Producer(System::String value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::IPdfDocumentInfo> engineDocInfo;
    System::SharedPtr<Engine::Data::IPdfDictionary> dict;
    
    void UpdateHashtable();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DocumentInfo_h_

