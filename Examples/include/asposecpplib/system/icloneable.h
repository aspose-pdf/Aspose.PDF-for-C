#ifndef _ICLONEABLE_H_
#define _ICLONEABLE_H_

#include <system/object.h>
#include <system/shared_ptr.h>

namespace System
{
    class ICloneable : public virtual System::Object
    {
    public:
        virtual System::SharedPtr<System::Object> Clone() = 0;
    };
}

#endif
