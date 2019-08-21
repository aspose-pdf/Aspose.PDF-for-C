/// @file drawing/imaging/encoder.h
#ifndef __image_encoder_h__
#define __image_encoder_h__

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

    class Encoder;
    /// An alias for a shared pointer to an instance of Encoder class.
    typedef SharedPtr<Encoder> EncoderPtr;
    /// Represents a GUID that is associated with a set of image encoder parameters.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS Encoder : public Object
    {
    public:
        /// Constructs a new instance of Encoder class.
        /// @param guid A GUID that specifies a set of image encoder parameters the object being corstructed
        /// should represent.
        Encoder(const Guid & guid) :m_guid(guid)
        {}

        /// An instance of Encoder class that represents the compression parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr Compression;
        /// An instance of Encoder class that represents the color depth parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr ColorDepth;
        /// An instance of Encoder class that represents the scan method parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr ScanMethod;
        /// An instance of Encoder class that represents the version parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr Version;
        /// An instance of Encoder class that represents the render method parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr RenderMethod;
        /// An instance of Encoder class that represents the quality parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr Quality;
        /// An instance of Encoder class that represents the transformation parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr Transformation;
        /// An instance of Encoder class that represents the luminance table parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr LuminanceTable;
        /// An instance of Encoder class that represents chrominance table parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr ChrominanceTable;
        /// An instance of Encoder class that represents the save flag parameter category.
        static const ASPOSECPP_SHARED_API EncoderPtr SaveFlag;

        /// Returns a GUID that specifies a set of image encoder parameters the current object represents.
        Guid get_Guid() const
        {
            return m_guid;
        }

    private:
        /// A GUID that specifies a set of image encoder parameters the current object represents.
        Guid m_guid;

    };

}}}


#endif
