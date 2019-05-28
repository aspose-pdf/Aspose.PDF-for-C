/// @file system/text/regularexpressions/capture_collection.h
#ifndef _aspsoe_system_text_regularexpressions_capture_collection_h_
#define _aspsoe_system_text_regularexpressions_capture_collection_h_

#include <system/text/regularexpressions/capture.h>
#include <system/exceptions.h>
#include <vector>
#include "system/cycles_detection.h"
#include <system/collections/list.h>


namespace System {
namespace Text {
namespace RegularExpressions {

/// List of captures done by single capturing group.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS CaptureCollection: public System::Collections::Generic::List<CapturePtr>
{
    friend class Match;

public:
    /// Gets number of captures.
    /// @return Contained captures number.
    int get_Count() const override { return static_cast<int>(m_data.size()); }

    /// Base type.
    typedef System::Collections::Generic::List<CapturePtr> Base;
    /// Capture accessor.
    using Base::idx_get;
    /// Capture accessor.
    using Base::operator[];

    /// Disables collection ammendment.
    /// @param item Item to add; ignored.
    /// @return Always returns false.
    bool Add(const CapturePtr item) { return false; }
    /// Disables cleaning collection.
    void Clear() override {}
    /// Disables collection ammendment.
    /// @param item Item to remove; ignored.
    /// @return Always returns false.
    bool Remove(const CapturePtr item) { return false; }
    /// Marks collection as read-only.
    /// @return Always returns true.
    bool get_IsReadOnly() const override{ return true; }
    /// Marks collection as unsynchronized.
    /// @return Always returns false.
    bool get_IsSynchronized() const { return false; }

    /// Service method to add capture into collection.
    /// @param item Item to add.
    void AddCapture(const CapturePtr item) { Base::Add(item); }

protected:

    friend class Match;

    /// Provides GetSharedMember() function for container for loop references lookup.
    virtual Object::shared_members_type GetSharedMembers() override
    {
        Object::shared_members_type result = Object::GetSharedMembers();
        result.PopulateSharedMembers("System::Text::RegularExpressions::CaptureCollection::m_data[]", m_data);
        return result;
    }

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        Object::DBG_for_each_member(visitor);
        visitor.add_self(this);
        for_each_of_Object(this, m_data, visitor);
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "CaptureCollection"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif

};

/// Pointer to capture collection.
typedef SharedPtr<CaptureCollection> CaptureCollectionPtr;

}}}

#endif // _aspsoe_system_text_regularexpressions_capture_collection_h_
