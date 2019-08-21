/// @file drawing/imaging/frame_dimension.h
#ifndef _frame_dimension_h_
#define _frame_dimension_h_

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

    class FrameDimension;
    /// An alias for a shared pointer to an instance of FrameDimension class.
    typedef SharedPtr<FrameDimension> FrameDimensionPtr;

    /// Provides properties that get the frame dimensions of an image.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS FrameDimension : public Object
    {
    public:
        /// Constructs a new FrameDimension object and initializes it with the specified GUID.
        /// @param guid A GUID to be associated with the object being created
        FrameDimension(const System::Guid & guid) : m_guid(Guid::Empty){}

        /// Returns GUID associated with the current object.
        System::Guid get_Guid() const
        {
            return m_guid;
        }

        /// Returns the time dimension.
        static FrameDimensionPtr get_Time()
        {
            return s_time;
        }

        /// Returns the resolution dimension.
        static FrameDimensionPtr get_Resolution()
        {
            return s_resolution;
        }

        /// Returns the page dimension.
        static FrameDimensionPtr get_Page()
        {
            return  s_page;
        }

        /// Determines if the specified FrameDimension object is equivalent to the current object.
        /// @param format The object to compare the current object with
        /// @returns True if the current object is equivalent to @p format, otherwis - false
        bool Equals(FrameDimensionPtr format)
        {
            return (m_guid == format->m_guid);
        }

    private:
        /// The time dimension.
        static ASPOSECPP_SHARED_API FrameDimensionPtr s_time;
        /// The resolution dimension.
        static ASPOSECPP_SHARED_API FrameDimensionPtr s_resolution;
        /// The page dimension.
        static ASPOSECPP_SHARED_API FrameDimensionPtr s_page;

        /// The GUID associated with the current object.
        System::Guid m_guid;

    };

}}}


#endif
