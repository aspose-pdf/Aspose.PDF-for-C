#ifndef _aspose_system_text_capture_h_
#define _aspose_system_text_capture_h_

#include "fwd.h"
#include "system/string.h"
#include "system/object.h"
#include <memory>
#include <vector>


namespace System { namespace Text { namespace RegularExpressions {

    typedef std::shared_ptr<const std::wstring> WStringPtr;
    class CaptureCollection;
    
    class Capture;
    typedef SharedPtr<Capture> CapturePtr;

    class Capture: public Object
    {
        friend class CaptureCollection;

    public:
        Capture(WStringPtr source, int index, int length);

        int get_Index() const { return index; }
        int get_Length() const { return length; }
        String get_Value() const;
        String ToString() ASPOSE_CONST override { return get_Value(); }


    protected:

        int index;
        int length;
        WStringPtr source;

#ifdef __DBG_FOR_EACH_MEMEBR
    public:
        void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
        {
            Object::DBG_for_each_member(visitor);
            visitor.add_self(this);
        }

        const char* DBG_class_name() const override { return "Capture"; }
        bool DBG_unknown_type() const override { return false; }
#endif
    };


}}} // namespace System::Text::RegularExpressions

#endif // _aspose_system_text_capture_h_


