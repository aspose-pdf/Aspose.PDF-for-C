#ifndef _frame_dimension_h_
#define _frame_dimension_h_

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

    class FrameDimension;
    typedef SharedPtr<FrameDimension> FrameDimensionPtr;

    class FrameDimension : public Object
    {
    public:

        FrameDimension(const System::Guid & guid) : m_guid(Guid::Empty){}

        System::Guid get_Guid() const
        {
            return m_guid;
        }

        static FrameDimensionPtr get_Time()
        {
            return s_time;
        }

        static FrameDimensionPtr get_Resolution()
        {
            return s_resolution;
        }

        static FrameDimensionPtr get_Page()
        {
            return  s_page;
        }

        bool Equals(FrameDimensionPtr format)
        {
            return (m_guid == format->m_guid);
        }

    private:
        static ASPOSECPP_SHARED_API FrameDimensionPtr s_time;
        static ASPOSECPP_SHARED_API FrameDimensionPtr s_resolution;
        static ASPOSECPP_SHARED_API FrameDimensionPtr s_page;

        System::Guid m_guid;

    };

}}}


#endif