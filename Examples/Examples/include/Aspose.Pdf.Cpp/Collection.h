#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "EmbeddedFileCollection.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

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
    /// Default embedded file name.
    /// </summary>
    System::String get_DefaultEntry();
    
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
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    
};

} // namespace Pdf
} // namespace Aspose


