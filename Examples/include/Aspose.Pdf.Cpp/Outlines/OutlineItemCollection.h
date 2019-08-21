#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.
//using System.Diagnostics.PerformanceData;

#include <system/string.h>
#include <system/object.h>
#include <drawing/color.h>

#include "Outlines/Outlines.h"

namespace Aspose { namespace Pdf { namespace Facades { class Bookmark; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class OutlineCollection; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_0; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_12; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class IAppointment; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PdfAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents outline entry in outline hierarchy of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_API OutlineItemCollection FINAL : public Aspose::Pdf::Outlines
{
    typedef OutlineItemCollection ThisType;
    typedef Aspose::Pdf::Outlines BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::Bookmark;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::OutlineCollection;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_0;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    
public:

    /// <summary>
    /// Gets the title for this outline item.
    /// </summary>
    System::String get_Title();
    /// <summary>
    /// Sets the title for this outline item.
    /// </summary>
    void set_Title(System::String value);
    /// <summary>
    /// Gets the destination for this outline item.
    /// </summary>
    System::SharedPtr<Annotations::IAppointment> get_Destination();
    /// <summary>
    /// Sets the destination for this outline item.
    /// </summary>
    void set_Destination(System::SharedPtr<Annotations::IAppointment> value);
    /// <summary>
    /// Gets the action for this outline item.
    /// </summary>
    System::SharedPtr<Annotations::PdfAction> get_Action();
    /// <summary>
    /// Sets the action for this outline item.
    /// </summary>
    void set_Action(System::SharedPtr<Annotations::PdfAction> value);
    /// <summary>
    /// Gets the color for the title text of this outline item.
    /// </summary>
    System::Drawing::Color get_Color();
    /// <summary>
    /// Sets the color for the title text of this outline item.
    /// </summary>
    void set_Color(System::Drawing::Color value);
    /// <summary>
    /// Gets italic flag for the title text of this outline item
    /// </summary>
    bool get_Italic();
    /// <summary>
    /// Sets italic flag for the title text of this outline item
    /// </summary>
    void set_Italic(bool value);
    /// <summary>
    /// Gets bold flag for the title text of this outline item
    /// </summary>
    bool get_Bold();
    /// <summary>
    /// Sets bold flag for the title text of this outline item
    /// </summary>
    void set_Bold(bool value);
    /// <summary>
    /// Gets the outline item representing the first top-level item in the outline hierarchy.
    /// </summary>
    System::SharedPtr<OutlineItemCollection> get_First() const;
    /// <summary>
    /// Gets the outline item representing the last top-level item in the outline hierarchy.
    /// </summary>
    System::SharedPtr<OutlineItemCollection> get_Last();
    /// <summary>
    /// Gets the outline item representing previous item relatively this item in the outline hierarchy.
    /// </summary>
    System::SharedPtr<OutlineItemCollection> get_Prev();
    /// <summary>
    /// Gets the outline item representing next item relatively this item in the outline hierarchy.
    /// </summary>
    System::SharedPtr<OutlineItemCollection> get_Next();
    /// <summary>
    /// Check if outline item representing next item relatively this item in the outline hierarchy.
    /// </summary>
    bool get_HasNext();
    /// <summary>
    /// Gets the parent object of this outline item in the outline hierarchy.
    /// </summary>
    System::SharedPtr<Outlines> get_Parent();
    /// <summary>
    /// Gets the total number of outline items at all levels in the document outline hierarchy.
    /// </summary>
    virtual int32_t get_VisibleCount();
    /// <summary>
    /// Gets the value indicating whether access to this collection is synchronized (thread safe).
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Gets the object that can be used to synchronize access to this collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    virtual bool get_IsReadOnly();
    /// <summary>
    /// Get or sets open status (true/false) for outline item.
    /// </summary>
    bool get_Open();
    /// <summary>
    /// Get or sets open status (true/false) for outline item.
    /// </summary>
    void set_Open(bool value);
    /// <summary>
    /// Count of collection items. Please dont confuse with VisibleCount: VisibleCount gets number of visible outline item on all levels.
    /// </summary>
    virtual int32_t get_Count() const;
    /// <summary>
    /// Gets hierarchy level of outline item.
    /// </summary>
    int32_t get_Level();
    
    /// <summary>
    /// Deletes this outline item from the document outline hierarchy.
    /// </summary>
    void Delete();
    
    /// <summary>
    /// Initializes outline item instance using root hierarchy object.
    /// </summary>
    /// <param name="outlines">Outlune collection.</param>
    OutlineItemCollection(System::SharedPtr<OutlineCollection> outlines);
    
    /// <summary>
    /// Deletes outline entry with specified name from the document outline hierarchy.
    /// </summary>
    /// <param name="name">Title of outline entry will be deleted.</param>
    void Delete(System::String name);
    /// <summary>
    /// Copies the outline entries to an System.Array, starting at a particular System.Array index.
    /// </summary>
    /// <param name="array">The one-dimensional System.Array that is the destination. Must have zero-based indexing.</param>
    /// <param name="index">The zero-based index in array at which copying begins.</param>
    virtual void CopyTo(System::ArrayPtr<System::SharedPtr<OutlineItemCollection>> array, int32_t index);
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    //!System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    //!{
    //!    return new OutlineCollection.OutlinesEnumerator(EngineDict, document);
    //!}
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>An System.Collections.IEnumerator object that can be used to iterate through the collection.</returns>
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumerator();
    /// <summary>
    /// Adds outline item to collection.
    /// </summary>
    /// <param name="outline">The outline item to be added.</param>
    virtual void Add(System::SharedPtr<OutlineItemCollection> const &outline);
    /// <summary>
    /// Inserts the outline item into collection at the specified place.
    /// </summary>
    /// <param name="index">The index specifying place for inserting.</param>
    /// <param name="outline">The outline item should be inserted.</param>
    void Insert(int32_t index, System::SharedPtr<OutlineItemCollection> outline);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    virtual void Clear();
    /// <summary>
    /// Checks if collection contains given item.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    virtual bool Contains(System::SharedPtr<OutlineItemCollection> const &item) const;
    /// <summary>
    /// Remove outline collection item.
    /// </summary>
    /// <param name="item">Item to delete.</param>
    virtual bool Remove(System::SharedPtr<OutlineItemCollection> const &item);
    /// <summary>
    /// Remove item by index.
    /// </summary>
    /// <param name="index">Index of item to be deleted.</param>
    void Remove(int32_t index);
    
    /// <summary>
    /// Gets outline item from the collection using index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>OutlineItemCollection object.</returns>
    System::SharedPtr<OutlineItemCollection> idx_get(int32_t index);
    
protected:

    System::SharedPtr<Engine::IPdfDocument> document;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict() const;
    
    System::SharedPtr<Engine::Data::IPdfObject> _engineObj;
    
    virtual void UpdateVisibleCount();
    
    /// <summary>
    /// Initializes new instance of this class using internal engine outline entry object.
    /// </summary>
    /// <param name="outline">Internal engine object of outline entry.</param>
    OutlineItemCollection(System::SharedPtr<Engine::Data::IPdfObject> outline);
    
    /// <summary>
    /// Creates new outline entry object in document outline hierarchy.
    /// </summary>
    /// <param name="trailer">Internal engine trailer object.</param>
    /// <returns>New created outline entry object.</returns>
    System::SharedPtr<Engine::Data::IPdfObject> createOutline(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    /// <summary>
    /// Sets parent to this outline entry.
    /// </summary>
    /// <param name="parent">New parent object of this outline entry.</param>
    void setParent(System::SharedPtr<System::Object> parent);
    /// <summary>
    /// Sets parent to this outline entry.
    /// </summary>
    /// <param name="prev">New parent object of this outline entry.</param>
    void setPrev(System::SharedPtr<OutlineItemCollection> prev);
    /// <summary>
    /// Inserts the specified outline entry before this entry in the document outline hierarchy.
    /// </summary>
    /// <param name="next">Outline entry will be inserted.</param>
    void setNext(System::SharedPtr<Engine::Data::IPdfObject> next);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    static const int32_t _Italic;
    static const int32_t _Bold;
    System::SharedPtr<Annotations::IAppointment> destination;
    System::SharedPtr<Annotations::PdfAction> action;
    System::Drawing::Color color;
    bool italic;
    bool bold;
    int32_t _increment;
    System::SharedPtr<System::Object> syncRoot;
    
    int32_t get_InnerCount() const;
    
    void close(System::SharedPtr<OutlineItemCollection> outline);
    int32_t CalculateVisibleCount();
    /// <summary>
    /// Needed for C++. Used in Count property
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<OutlineItemCollection>>> GetEnumeratorInternal() const;
    int32_t Increment();
    int32_t FindItem(System::SharedPtr<OutlineItemCollection> item) const;
    void Remove(System::SharedPtr<Engine::Data::IPdfObject> parent, System::SharedPtr<Engine::Data::IPdfObject> prev, System::SharedPtr<Engine::Data::IPdfObject> item, System::SharedPtr<Engine::Data::IPdfObject> next);
    
};

} // namespace Pdf
} // namespace Aspose


