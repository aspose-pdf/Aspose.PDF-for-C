#ifndef _aspose_singletons_culture_info_singletons_h_
#define _aspose_singletons_culture_info_singletons_h_


#include "aspose_singletons_api_defs.h"
#include <memory>


namespace Aspose { namespace Singletons {


class ASPOSE_SINGLETONS_SHARED_API ThreadLocalCultureData
{
public:
    virtual ~ThreadLocalCultureData() {}

    typedef std::unique_ptr<ThreadLocalCultureData> Ptr;

    static Ptr& GetInstance();
};


} } //namespace Aspose::Singletons


#endif //_aspose_singletons_culture_info_singletons_h_
