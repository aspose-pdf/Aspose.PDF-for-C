/// @file system/text/regularexpressions/capture.h
#ifndef _aspose_system_text_capture_h_
#define _aspose_system_text_capture_h_

#include "fwd.h"
#include "system/string.h"
#include "system/object.h"
#include <memory>
#include <vector>


namespace System { namespace Text { namespace RegularExpressions {

/// Shared UnicodeString to avoid copying.
typedef std::shared_ptr<const UnicodeString> UStringPtr;
class CaptureCollection;
    
class Capture;
/// Pointer to single capture object.
typedef SharedPtr<Capture> CapturePtr;

/// Result of single subexpression matching.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Capture: public Object
{
    friend class CaptureCollection;

public:
    /// Constructor.
    /// @param source Source string.
    /// @param index Captured substring beginning.
    /// @param length Captured substring length.
    ASPOSECPP_SHARED_API Capture(UStringPtr source, int index, int length);

    /// Gets index of captured substring.
    /// @return Index of beginning of captured substring.
    int get_Index() const { return index; }
    /// Gets length of captured substring.
    /// @return Captured substring length.
    int get_Length() const { return length; }
    /// Gets captured substring.
    /// @return Captured substring.
    ASPOSECPP_SHARED_API String get_Value() const;
    /// Gets captured substring.
    /// @return Captured substring.
    String ToString() ASPOSE_CONST override { return get_Value(); }


protected:
    /// Captured substring index.
    int index;
    /// Captured substring length.
    int length;
    /// Original string.
    UStringPtr source;

#ifdef __DBG_FOR_EACH_MEMEBR
public:
    /// Provides debug iteration throuhg container.
    /// @param visitor Visitor to apply to each element.
    void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
    {
        Object::DBG_for_each_member(visitor);
        visitor.add_self(this);
    }

    /// Provides debug class name.
    /// @return Pointer to string literal specifying class name.
    const char* DBG_class_name() const override { return "Capture"; }
    /// Overrides default implementation to specify that class contains debug information.
    bool DBG_unknown_type() const override { return false; }
#endif
};


}}} // namespace System::Text::RegularExpressions

#endif // _aspose_system_text_capture_h_


