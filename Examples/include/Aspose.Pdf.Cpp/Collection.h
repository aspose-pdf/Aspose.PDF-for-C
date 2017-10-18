#ifndef _Aspose_Pdf_Collection_h_
#define _Aspose_Pdf_Collection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    Collection();
    
protected:

    Collection(System::SharedPtr<Document> document);
    
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Collection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Collection_h_

