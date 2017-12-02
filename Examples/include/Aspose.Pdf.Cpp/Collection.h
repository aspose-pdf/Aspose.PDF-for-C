#ifndef _Aspose_Pdf_Collection_h_
#define _Aspose_Pdf_Collection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "EmbeddedFileCollection.h"

namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents class for Collection(12.3.5 Collections).
/// </summary>
class ASPOSE_PDF_SHARED_API Collection : public Aspose::Pdf::EmbeddedFileCollection
{
    typedef Collection ThisType;
    typedef Aspose::Pdf::EmbeddedFileCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Initializes new Collection object.
    /// </summary>
    Collection();
    
protected:

    /// <summary>
    /// Initializes new Collection object.
    /// </summary>
    /// <param name="document">Document object.</param>
    Collection(System::SharedPtr<Document> document);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Collection_h_

