#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "NamedDestinations/INamedDestinationCollection.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace CommonData { namespace Tree { class NamesTree; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class IAppointment; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents the collection of all destinations (a name tree mapping name strings to destinations (see 12.3.2.3, "Named Destinations") and (see 7.7.4, "Name Dictionary")) in the pdf document. 
/// </summary>
class ASPOSE_PDF_SHARED_API NamedDestinationCollection : public Aspose::Pdf::INamedDestinationCollection
{
    typedef NamedDestinationCollection ThisType;
    typedef Aspose::Pdf::INamedDestinationCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Count of named destinations.
    /// </summary>
    int32_t get_Count();
    /// <summary>
    /// List of names of the destinations.
    /// </summary>
    System::ArrayPtr<System::String> get_Names();
    
    /// <summary>
    /// Gets or sets appointment by its name. 
    /// </summary>
    /// <param name="name">Name of the appointment.</param>
    /// <returns>Appoitnemt</returns>
    System::SharedPtr<Annotations::IAppointment> idx_get(System::String name);
    /// <summary>
    /// Gets or sets appointment by its name. 
    /// </summary>
    /// <param name="name">Name of the appointment.</param>
    /// <returns>Appoitnemt</returns>
    void idx_set(System::String name, System::SharedPtr<Annotations::IAppointment> value);
    
    /// <summary>
    /// Delete named destination.
    /// </summary>
    /// <param name="name">Name of the destination to delete.</param>
    void Remove(System::String name);
    /// <summary>
    /// Add new named destination.
    /// </summary>
    /// <param name="name">Destination name.</param>
    /// <param name="appointment">Appointment to add.</param>
    void Add(System::String name, System::SharedPtr<Annotations::IAppointment> appointment);
    
protected:

    NamedDestinationCollection(System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<Document> document;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<CommonData::Tree::NamesTree> _namesTree;
    System::SharedPtr<INamedDestinationCollection> destinations;
    
};

} // namespace Pdf
} // namespace Aspose


