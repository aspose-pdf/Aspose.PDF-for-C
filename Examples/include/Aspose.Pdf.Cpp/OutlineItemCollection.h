#ifndef _Aspose_Pdf_OutlineItemCollection_h_
#define _Aspose_Pdf_OutlineItemCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Bookmark; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class OutlineCollection; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class IAppointment; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents outline entry in outline hierarchy of PDF document.
/// </summary>
//<<--REFACTORING: Old code: public sealed class OutlineItemCollection : ICollection
class ASPOSE_PDF_SHARED_API OutlineItemCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>>
{
    typedef OutlineItemCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::OutlineItemCollection>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Bookmark;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineCollection;
    
public:

    System::String get_Title();
    void set_Title(System::String value);
    System::SharedPtr<InteractiveFeatures::IAppointment> get_Destination();
    void set_Destination(System::SharedPtr<InteractiveFeatures::IAppointment> value);
    System::SharedPtr<InteractiveFeatures::PdfAction> get_Action();
    void set_Action(System::SharedPtr<InteractiveFeatures::PdfAction> value);
    System::Drawing::Color get_Color();
    void set_Color(System::Drawing::Color value);
    bool get_Italic();
    void set_Italic(bool value);
    bool get_Bold();
    void set_Bold(bool value);
    System::SharedPtr<OutlineItemCollection> get_First();
    System::SharedPtr<OutlineItemCollection> get_Last();
    System::SharedPtr<OutlineItemCollection> get_Prev();
    System::SharedPtr<OutlineItemCollection> get_Next();
    System::SharedPtr<System::Object> get_Parent();
    int32_t get_Count() const;
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    bool get_Open();
    void set_Open(bool value);
    int32_t get_Level();
    
    void Delete();
    
    OutlineItemCollection(System::SharedPtr<OutlineCollection> outlines);
    
    void Delete(System::String name);
    void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t index);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator();
    void Add(System::SharedPtr<OutlineItemCollection> const &outline);
    void Insert(int32_t index, System::SharedPtr<OutlineItemCollection> outline);
    
    System::SharedPtr<OutlineItemCollection> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Engine::IPdfDocument> document;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict() const;
    
    System::SharedPtr<Engine::Data::IPdfObject> _engineObj;
    
    OutlineItemCollection(System::SharedPtr<Engine::Data::IPdfObject> outline);
    
    System::SharedPtr<Engine::Data::IPdfObject> createOutline(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    void setParent(System::SharedPtr<System::Object> parent);
    void setPrev(System::SharedPtr<OutlineItemCollection> prev);
    void setNext(System::SharedPtr<Engine::Data::IPdfObject> next);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "OutlineItemCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    static const int32_t _Italic;
    static const int32_t _Bold;
    System::SharedPtr<InteractiveFeatures::IAppointment> destination;
    System::SharedPtr<InteractiveFeatures::PdfAction> action;
    System::Drawing::Color color;
    bool italic;
    bool bold;
    int32_t _increment;
    System::SharedPtr<System::Object> syncRoot;
    
    int32_t get_InnerCount() const;
    bool get_IsReadOnly();
    
    void close(System::SharedPtr<OutlineItemCollection> outline);
    bool Remove(System::SharedPtr<OutlineItemCollection> const &item);
    bool Contains(System::SharedPtr<OutlineItemCollection> const &item) const;
    void Clear();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_OutlineItemCollection_h_

