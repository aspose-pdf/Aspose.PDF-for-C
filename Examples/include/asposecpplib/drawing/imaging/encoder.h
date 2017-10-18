#ifndef __image_encoder_h__
#define __image_encoder_h__

#include "fwd.h"
#include "system/guid.h"

namespace System { namespace Drawing { namespace Imaging {

    class Encoder;
    typedef SharedPtr<Encoder> EncoderPtr;

    class Encoder : public Object
    {
    public:
        Encoder(const Guid & guid) :m_guid(guid)
        {}

        static const ASPOSECPP_SHARED_API EncoderPtr Compression;
        static const ASPOSECPP_SHARED_API EncoderPtr ColorDepth;
        static const ASPOSECPP_SHARED_API EncoderPtr ScanMethod;
        static const ASPOSECPP_SHARED_API EncoderPtr Version;
        static const ASPOSECPP_SHARED_API EncoderPtr RenderMethod;
        static const ASPOSECPP_SHARED_API EncoderPtr Quality;
        static const ASPOSECPP_SHARED_API EncoderPtr Transformation;
        static const ASPOSECPP_SHARED_API EncoderPtr LuminanceTable;
        static const ASPOSECPP_SHARED_API EncoderPtr ChrominanceTable;
        static const ASPOSECPP_SHARED_API EncoderPtr SaveFlag;

        Guid get_Guid() const
        {
            return m_guid;
        }

    private:

        Guid m_guid;

    };

}}}


#endif