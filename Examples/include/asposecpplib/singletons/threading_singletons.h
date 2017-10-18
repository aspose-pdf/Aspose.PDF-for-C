#ifndef _aspose_singletons_threading_singletons_h_
#define _aspose_singletons_threading_singletons_h_


#include "aspose_singletons_api_defs.h"
#include <memory>


namespace Aspose { namespace Singletons {

class ASPOSE_SINGLETONS_SHARED_API TimerQueueBase
{
public:
    virtual ~TimerQueueBase() {}

    typedef TimerQueueBase* (*Creator)();
    static TimerQueueBase* GetInstance(Creator creator);
};

class ASPOSE_SINGLETONS_SHARED_API ThreadPoolImplBase
{
public:
    virtual ~ThreadPoolImplBase() {}

    typedef ThreadPoolImplBase* (*Creator)();
    static ThreadPoolImplBase* GetInstance(Creator creator);
};


} } //namespace Aspose::Singletons


#endif //_aspose_singletons_threading_singletons_h_
