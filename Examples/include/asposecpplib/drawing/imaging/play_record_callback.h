/// @file drawing/imaging/play_record_callback.h
#ifndef _aspose_drawing_play_record_callback_h_
#define _aspose_drawing_play_record_callback_h_

#include "fwd.h"
#include "defines.h"
#include "system/multicast_delegate.h"
#include "drawing/imaging/emf_plus_record_type.h"


namespace System { namespace Drawing { namespace Imaging {
/// A delegate used as a parameter in EnumerateMetafileProc function object.
using PlayRecordCallback = MulticastDelegate<void(EmfPlusRecordType, int32_t, int32_t, IntPtr)>;

}}}

#endif
