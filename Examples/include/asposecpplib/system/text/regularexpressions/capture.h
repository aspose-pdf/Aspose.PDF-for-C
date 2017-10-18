#ifndef _aspose_system_text_capture_h_
#define _aspose_system_text_capture_h_

#include "fwd.h"
#include "system/string.h"
#include "system/object.h"
#include <memory>
#include <vector>

#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/regex.hpp>
#endif


namespace System { namespace Text { namespace RegularExpressions {
    namespace Detail {
#ifdef ASPOSECPP_SHARED_EXPORTS
        struct MatchResultsHolder : public boost::wcmatch { //Properly declaring all templates to create a typedef is too expensive
            template <typename ...T> inline MatchResultsHolder(const T& ...copy) : boost::wcmatch(copy...) {}
        };
#else
        struct MatchResultsHolder;
#endif
    }

    class CaptureCollection;

    class Capture: public Object
    {
        friend class CaptureCollection;

    public:
        virtual ~Capture();

        int get_Index() const { return index; }
        int get_Length() const { return length; }
        String get_Value() const { return input.get_Length() >= (index+length) ? input.Substring(index,length) : String::Empty; }
        String ToString() ASPOSE_CONST override { return get_Value(); }

        bool operator==(const Capture& item) const { return this == &item; }

    protected:

        int index;
        int length;
        String input;
        std::unique_ptr<Detail::MatchResultsHolder> what;

        Capture();
        Capture(const Capture &copy);
        Capture& operator = (const Capture &copy);

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

    typedef SharedPtr<Capture> CapturePtr;

}}} // namespace System::Text::RegularExpressions

#endif // _aspose_system_text_capture_h_


